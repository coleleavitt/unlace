// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116850
// Name:            .perform_undo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116850 jmp     cs:perform_undo_ptr
//
// Resolved target: perform_undo
// Target address:  0x8D6928
// GOT/IAT slot:    0x8A20C8
// Slot symbol:     perform_undo_ptr
// Target type:     <no type info>
// ============================================================

void .perform_undo(/* see target signature */)
{
    // Tail-call to perform_undo via GOT/IAT indirection
    return perform_undo(/* forwarded args */);
}

