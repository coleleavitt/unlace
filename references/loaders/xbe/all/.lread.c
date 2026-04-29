// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_5098
//
// Resolved target: lread
// Target address:  0x51F8
// GOT/IAT slot:    0x5098
// Slot symbol:     off_5098
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

