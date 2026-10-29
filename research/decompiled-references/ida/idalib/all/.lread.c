// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB080
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB080 jmp     cs:off_2C7B028
//
// Resolved target: lread
// Target address:  0x644140
// GOT/IAT slot:    0x2C7B028
// Slot symbol:     off_2C7B028
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

