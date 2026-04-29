// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_80E8
//
// Resolved target: lread
// Target address:  0x82C8
// GOT/IAT slot:    0x80E8
// Slot symbol:     off_80E8
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

