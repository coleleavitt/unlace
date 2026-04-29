// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6680
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6680 jmp     cs:off_2F328
//
// Resolved target: lread
// Target address:  0x2F998
// GOT/IAT slot:    0x2F328
// Slot symbol:     off_2F328
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

