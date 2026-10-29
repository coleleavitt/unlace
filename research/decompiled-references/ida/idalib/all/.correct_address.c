// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C10
// Name:            .correct_address
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C10 jmp     cs:off_2C795F0
//
// Resolved target: correct_address
// Target address:  0x684CB0
// GOT/IAT slot:    0x2C795F0
// Slot symbol:     off_2C795F0
// Target type:     <no type info>
// ============================================================

void .correct_address(/* see target signature */)
{
    // Tail-call to correct_address via GOT/IAT indirection
    return correct_address(/* forwarded args */);
}

