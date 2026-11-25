#[unsafe(no_mangle)]
fn __unlace_default_pass_hooks() -> &'static super::UnlaceHooks {
    static HOOKS: std::sync::OnceLock<super::UnlaceHooks> = std::sync::OnceLock::new();
    HOOKS.get_or_init(|| {
        let mut slots = super::UnlaceHookSlots::default();
        crate::provide_all(&mut slots);
        slots.callmechanisms_failed = Some(never_failed);
        slots.finish_with_stubs()
    })
}

/// The action loop asks `callmechanisms_failed` before every step, and the call mechanisms
/// that record a failure are provided by the band tier. Below it no mechanism exists, so
/// none fails.
fn never_failed(_: &crate::funcdata::Funcdata) -> bool {
    false
}
