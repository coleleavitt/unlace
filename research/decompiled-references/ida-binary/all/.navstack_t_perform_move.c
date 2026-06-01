// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1132F0
// Name:            .navstack_t_perform_move
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1132F0 jmp     cs:navstack_t_perform_move_ptr
//
// Resolved target: navstack_t_perform_move
// Target address:  0x8D4710
// GOT/IAT slot:    0x8A0618
// Slot symbol:     navstack_t_perform_move_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_perform_move(/* see target signature */)
{
    // Tail-call to navstack_t_perform_move via GOT/IAT indirection
    return navstack_t_perform_move(/* forwarded args */);
}

