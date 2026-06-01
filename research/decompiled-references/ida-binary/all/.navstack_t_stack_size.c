// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A730
// Name:            .navstack_t_stack_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A730 jmp     cs:navstack_t_stack_size_ptr
//
// Resolved target: navstack_t_stack_size
// Target address:  0x8D90C0
// GOT/IAT slot:    0x8A4038
// Slot symbol:     navstack_t_stack_size_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_stack_size(/* see target signature */)
{
    // Tail-call to navstack_t_stack_size via GOT/IAT indirection
    return navstack_t_stack_size(/* forwarded args */);
}

