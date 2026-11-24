/* unlace — Ghidra extension that swaps the native decompiler core for unlace.
 * Apache-2.0. unlace is derived from Ghidra (https://github.com/NationalSecurityAgency/ghidra).
 */
package unlace;

import docking.action.ToggleDockingAction;
import docking.action.builder.ToggleActionBuilder;
import docking.tool.ToolConstants;
import ghidra.MiscellaneousPluginPackage;
import ghidra.framework.plugintool.Plugin;
import ghidra.framework.plugintool.PluginInfo;
import ghidra.framework.plugintool.PluginTool;
import ghidra.framework.plugintool.util.PluginStatus;

/**
 * Swaps Ghidra's native decompiler core for unlace, the Rust port of the Ghidra decompiler.
 *
 * <p>On plugin load (File → Configure → Miscellaneous → UnlaceDecompilerPlugin) the plugin
 * resolves the {@code unlace_ghidra} binary shipped in this extension's
 * {@code os/<platform>/} directory (or the {@code -Dunlace.decompiler.exe} dev override)
 * and installs it as the executable behind
 * {@code ghidra.app.decompiler.DecompileProcessFactory}, the single choke point through
 * which every decompiler consumer in Ghidra spawns its native process. The native
 * process is spawned lazily — only on the first decompile — so when this plugin is part
 * of the tool at startup, the swap performed at plugin init precedes the first spawn.
 * When the plugin is instead enabled mid-session (a program is already open and its
 * decompiler process already spawned), that program keeps the stock core until its
 * process respawns; new spawns pick up unlace immediately.
 *
 * <p>The Tools → Unlace Decompiler → "Use Unlace Core" checkbox toggles between the unlace
 * core and the stock {@code decompile} binary at any time. Either direction only
 * affects <em>future</em> process spawns: a program whose decompiler process is already
 * running keeps it until that process restarts (reopen the program, or the process is
 * reset after an error/timeout). There is no public API to force-restart the per-program
 * processes from a plugin (the controllers holding them are private to the Decompiler
 * plugin's providers), so a program reopen is the reliable way to make a swap take
 * effect on an already-decompiled program.
 */
//@formatter:off
@PluginInfo(
	status = PluginStatus.RELEASED,
	packageName = MiscellaneousPluginPackage.NAME,
	category = "Decompiler",
	shortDescription = "Use unlace as the native decompiler core",
	description = "Swaps the native decompiler core for unlace, the Rust port of the " +
		"Ghidra decompiler: points ghidra.app.decompiler.DecompileProcessFactory at the " +
		"unlace_ghidra binary shipped with this extension, so every decompiler consumer in " +
		"this Ghidra session (the Decompiler window, analyzers, scripts) spawns unlace " +
		"instead of the stock 'decompile' process. Tools -> Unlace Decompiler -> " +
		"'Use Unlace Core' toggles between the unlace core and the stock core; " +
		"already-running decompiler processes keep their current core until they " +
		"respawn (program reopen, or process error/timeout). Removing the plugin " +
		"restores the stock core for future spawns."
)
//@formatter:on
public class UnlaceDecompilerPlugin extends Plugin {

	private ToggleDockingAction useUnlaceAction;

	public UnlaceDecompilerPlugin(PluginTool tool) {
		super(tool);
	}

	@Override
	protected void init() {
		super.init();

		// Perform the swap now, before the user's first decompile can spawn a process.
		boolean unlaceActive = UnlaceCoreSwap.swapToUnlace(this);
		if (unlaceActive) {
			UnlaceCoreSwap.register(this);
		}

		useUnlaceAction = new ToggleActionBuilder("Use Unlace Core", getName())
				.menuPath(ToolConstants.MENU_TOOLS, "Unlace Decompiler", "Use Unlace Core")
				.description("Checked: future decompiler processes spawn the unlace core " +
					"(unlace_ghidra). Unchecked: the stock 'decompile' binary. Programs " +
					"with an already-running decompiler process keep it until that " +
					"process restarts (reopen the program, or the process is reset " +
					"after an error/timeout).")
				.selected(unlaceActive)
				.onAction(context -> onToggle())
				.buildAndInstall(tool);
	}

	private void onToggle() {
		// The docking framework flips the toggle state before invoking the callback,
		// so isSelected() is the state the user just requested.
		if (useUnlaceAction.isSelected()) {
			if (UnlaceCoreSwap.swapToUnlace(this)) {
				UnlaceCoreSwap.register(this);
			}
			else {
				useUnlaceAction.setSelected(false); // swap failed: reflect reality
			}
		}
		else {
			// This tool no longer wants unlace; restore only once the last tool leaves.
			if (UnlaceCoreSwap.unregister(this) == 0) {
				if (!UnlaceCoreSwap.restoreStock(this)) {
					UnlaceCoreSwap.register(this); // restore failed: unlace still active
					useUnlaceAction.setSelected(true);
				}
			}
		}
	}

	@Override
	protected void dispose() {
		// Leaving the tool (or being un-configured) should not silently leave unlace as
		// the JVM-wide core. The factory field is static, so restore only when this was
		// the LAST tool holding the unlace core — otherwise closing one tool would revert
		// unlace for the others still using it.
		if (UnlaceCoreSwap.unregister(this) == 0 && UnlaceCoreSwap.isUnlaceActive()) {
			UnlaceCoreSwap.restoreStock(this);
		}
		super.dispose();
	}
}
