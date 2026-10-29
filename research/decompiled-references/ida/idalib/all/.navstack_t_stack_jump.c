// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7820
// Name:            .navstack_t_stack_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7820 jmp     cs:off_2C793F8
//
// Resolved target: navstack_t_stack_jump
// Target address:  0x4BA940
// GOT/IAT slot:    0x2C793F8
// Slot symbol:     off_2C793F8
// Target type:     <no type info>
// ============================================================

void .navstack_t_stack_jump(/* see target signature */)
{
    // Tail-call to navstack_t_stack_jump via GOT/IAT indirection
    return navstack_t_stack_jump(/* forwarded args */);
}

