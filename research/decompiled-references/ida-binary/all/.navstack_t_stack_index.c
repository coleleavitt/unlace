// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD60
// Name:            .navstack_t_stack_index
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD60 jmp     cs:navstack_t_stack_index_ptr
//
// Resolved target: navstack_t_stack_index
// Target address:  0x8D9E90
// GOT/IAT slot:    0x8A4B50
// Slot symbol:     navstack_t_stack_index_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_stack_index(/* see target signature */)
{
    // Tail-call to navstack_t_stack_index via GOT/IAT indirection
    return navstack_t_stack_index(/* forwarded args */);
}

