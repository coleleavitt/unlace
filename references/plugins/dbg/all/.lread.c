// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3430
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3430 jmp     cs:off_13200
//
// Resolved target: lread
// Target address:  0x13580
// GOT/IAT slot:    0x13200
// Slot symbol:     off_13200
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

