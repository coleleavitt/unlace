// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB840
// Name:            .xrefchar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB840 jmp     cs:off_2C7B408
//
// Resolved target: xrefchar
// Target address:  0x3E4720
// GOT/IAT slot:    0x2C7B408
// Slot symbol:     off_2C7B408
// Target type:     <no type info>
// ============================================================

void .xrefchar(/* see target signature */)
{
    // Tail-call to xrefchar via GOT/IAT indirection
    return xrefchar(/* forwarded args */);
}

