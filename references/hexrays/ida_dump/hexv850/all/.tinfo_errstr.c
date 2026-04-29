// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A940
// Name:            .tinfo_errstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A940 jmp     cs:off_4C0488
//
// Resolved target: tinfo_errstr
// Target address:  0x4C3468
// GOT/IAT slot:    0x4C0488
// Slot symbol:     off_4C0488
// Target type:     <no type info>
// ============================================================

void .tinfo_errstr(/* see target signature */)
{
    // Tail-call to tinfo_errstr via GOT/IAT indirection
    return tinfo_errstr(/* forwarded args */);
}

