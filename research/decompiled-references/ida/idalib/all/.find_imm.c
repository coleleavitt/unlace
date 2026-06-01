// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7930
// Name:            .find_imm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7930 jmp     cs:off_2C79480
//
// Resolved target: find_imm
// Target address:  0x678EA0
// GOT/IAT slot:    0x2C79480
// Slot symbol:     off_2C79480
// Target type:     <no type info>
// ============================================================

void .find_imm(/* see target signature */)
{
    // Tail-call to find_imm via GOT/IAT indirection
    return find_imm(/* forwarded args */);
}

