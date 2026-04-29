// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9450
// Name:            .patch_fixup_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9450 jmp     cs:off_89210
//
// Resolved target: patch_fixup_value
// Target address:  0x8C518
// GOT/IAT slot:    0x89210
// Slot symbol:     off_89210
// Target type:     <no type info>
// ============================================================

void .patch_fixup_value(/* see target signature */)
{
    // Tail-call to patch_fixup_value via GOT/IAT indirection
    return patch_fixup_value(/* forwarded args */);
}

