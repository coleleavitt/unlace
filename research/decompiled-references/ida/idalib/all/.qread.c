// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8FC0
// Name:            .qread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8FC0 jmp     cs:off_2C79FC8
//
// Resolved target: qread
// Target address:  0x83E7D0
// GOT/IAT slot:    0x2C79FC8
// Slot symbol:     off_2C79FC8
// Target type:     <no type info>
// ============================================================

void .qread(/* see target signature */)
{
    // Tail-call to qread via GOT/IAT indirection
    return qread(/* forwarded args */);
}

