// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116560
// Name:            .navstack_t_stack_clear
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116560 jmp     cs:navstack_t_stack_clear_ptr
//
// Resolved target: navstack_t_stack_clear
// Target address:  0x8D6738
// GOT/IAT slot:    0x8A1F50
// Slot symbol:     navstack_t_stack_clear_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_stack_clear(/* see target signature */)
{
    // Tail-call to navstack_t_stack_clear via GOT/IAT indirection
    return navstack_t_stack_clear(/* forwarded args */);
}

