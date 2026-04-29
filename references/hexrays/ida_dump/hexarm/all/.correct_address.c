// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DB20
// Name:            .correct_address
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DB20 jmp     cs:off_4E9578
//
// Resolved target: correct_address
// Target address:  0x4EBF88
// GOT/IAT slot:    0x4E9578
// Slot symbol:     off_4E9578
// Target type:     <no type info>
// ============================================================

void .correct_address(/* see target signature */)
{
    // Tail-call to correct_address via GOT/IAT indirection
    return correct_address(/* forwarded args */);
}

