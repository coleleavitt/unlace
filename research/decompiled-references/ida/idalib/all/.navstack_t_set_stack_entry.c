// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8AE0
// Name:            .navstack_t_set_stack_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8AE0 jmp     cs:off_2C79D58
//
// Resolved target: navstack_t_set_stack_entry
// Target address:  0x4B74D0
// GOT/IAT slot:    0x2C79D58
// Slot symbol:     off_2C79D58
// Target type:     <no type info>
// ============================================================

void .navstack_t_set_stack_entry(/* see target signature */)
{
    // Tail-call to navstack_t_set_stack_entry via GOT/IAT indirection
    return navstack_t_set_stack_entry(/* forwarded args */);
}

