// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D960
// Name:            .tinfo_errstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D960 jmp     cs:off_4E9498
//
// Resolved target: tinfo_errstr
// Target address:  0x4EBEA0
// GOT/IAT slot:    0x4E9498
// Slot symbol:     off_4E9498
// Target type:     <no type info>
// ============================================================

void .tinfo_errstr(/* see target signature */)
{
    // Tail-call to tinfo_errstr via GOT/IAT indirection
    return tinfo_errstr(/* forwarded args */);
}

