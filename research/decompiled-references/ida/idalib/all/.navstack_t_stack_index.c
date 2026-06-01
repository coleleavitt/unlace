// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADBF0
// Name:            .navstack_t_stack_index
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADBF0 jmp     cs:off_2C7C5E0
//
// Resolved target: navstack_t_stack_index
// Target address:  0x4B7470
// GOT/IAT slot:    0x2C7C5E0
// Slot symbol:     off_2C7C5E0
// Target type:     <no type info>
// ============================================================

void .navstack_t_stack_index(/* see target signature */)
{
    // Tail-call to navstack_t_stack_index via GOT/IAT indirection
    return navstack_t_stack_index(/* forwarded args */);
}

