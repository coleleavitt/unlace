// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_5088
//
// Resolved target: lread
// Target address:  0x51A0
// GOT/IAT slot:    0x5088
// Slot symbol:     off_5088
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

