// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_A108
//
// Resolved target: lread
// Target address:  0xA3B8
// GOT/IAT slot:    0xA108
// Slot symbol:     off_A108
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

