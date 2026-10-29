// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111C50
// Name:            .navstack_t_stack_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111C50 jmp     cs:navstack_t_stack_jump_ptr
//
// Resolved target: navstack_t_stack_jump
// Target address:  0x8D3880
// GOT/IAT slot:    0x89FAC8
// Slot symbol:     navstack_t_stack_jump_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_stack_jump(/* see target signature */)
{
    // Tail-call to navstack_t_stack_jump via GOT/IAT indirection
    return navstack_t_stack_jump(/* forwarded args */);
}

