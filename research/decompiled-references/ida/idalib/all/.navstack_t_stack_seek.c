// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A75E0
// Name:            .navstack_t_stack_seek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A75E0 jmp     cs:off_2C792D8
//
// Resolved target: navstack_t_stack_seek
// Target address:  0x4BAA90
// GOT/IAT slot:    0x2C792D8
// Slot symbol:     off_2C792D8
// Target type:     <no type info>
// ============================================================

void .navstack_t_stack_seek(/* see target signature */)
{
    // Tail-call to navstack_t_stack_seek via GOT/IAT indirection
    return navstack_t_stack_seek(/* forwarded args */);
}

