// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116270
// Name:            .navstack_t_stack_nav
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116270 jmp     cs:navstack_t_stack_nav_ptr
//
// Resolved target: navstack_t_stack_nav
// Target address:  0x8D6550
// GOT/IAT slot:    0x8A1DD8
// Slot symbol:     navstack_t_stack_nav_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_stack_nav(/* see target signature */)
{
    // Tail-call to navstack_t_stack_nav via GOT/IAT indirection
    return navstack_t_stack_nav(/* forwarded args */);
}

