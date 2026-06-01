// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA780
// Name:            .perform_undo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA780 jmp     cs:off_2C7ABA8
//
// Resolved target: perform_undo
// Target address:  0x580100
// GOT/IAT slot:    0x2C7ABA8
// Slot symbol:     off_2C7ABA8
// Target type:     <no type info>
// ============================================================

void .perform_undo(/* see target signature */)
{
    // Tail-call to perform_undo via GOT/IAT indirection
    return perform_undo(/* forwarded args */);
}

