use unlace_middle::passhooks::{UnlaceHookSlots, UnlaceHooks};

#[unsafe(no_mangle)]
fn __unlace_default_pass_hooks() -> &'static UnlaceHooks {
    static HOOKS: std::sync::OnceLock<UnlaceHooks> = std::sync::OnceLock::new();
    HOOKS.get_or_init(|| {
        let mut slots = UnlaceHookSlots::default();
        unlace_middle::provide_all(&mut slots);
        unlace_lift::provide_all(&mut slots);
        unlace_structure::provide_all(&mut slots);
        unlace_bandb_base::provide_all(&mut slots);
        super::provide_all(&mut slots);
        slots.finish_with_stubs()
    })
}
