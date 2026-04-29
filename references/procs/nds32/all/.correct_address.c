// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8260
// Name:            .correct_address
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8260 jmp     cs:off_2A118
//
// Resolved target: correct_address
// Target address:  0x2A688
// GOT/IAT slot:    0x2A118
// Slot symbol:     off_2A118
// Target type:     <no type info>
// ============================================================

void .correct_address(/* see target signature */)
{
    // Tail-call to correct_address via GOT/IAT indirection
    return correct_address(/* forwarded args */);
}

