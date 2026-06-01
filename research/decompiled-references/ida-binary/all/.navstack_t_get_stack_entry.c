// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D30
// Name:            .navstack_t_get_stack_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D30 jmp     cs:navstack_t_get_stack_entry_ptr
//
// Resolved target: navstack_t_get_stack_entry
// Target address:  0x8D4DA0
// GOT/IAT slot:    0x8A0B38
// Slot symbol:     navstack_t_get_stack_entry_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_get_stack_entry(/* see target signature */)
{
    // Tail-call to navstack_t_get_stack_entry via GOT/IAT indirection
    return navstack_t_get_stack_entry(/* forwarded args */);
}

