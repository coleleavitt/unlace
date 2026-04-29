// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB50
// Name:            .correct_address
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB50 jmp     cs:off_4ED590
//
// Resolved target: correct_address
// Target address:  0x4F1898
// GOT/IAT slot:    0x4ED590
// Slot symbol:     off_4ED590
// Target type:     <no type info>
// ============================================================

void .correct_address(/* see target signature */)
{
    // Tail-call to correct_address via GOT/IAT indirection
    return correct_address(/* forwarded args */);
}

