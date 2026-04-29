// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B980
// Name:            .tinfo_errstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B980 jmp     cs:off_4ED4A8
//
// Resolved target: tinfo_errstr
// Target address:  0x4F17A8
// GOT/IAT slot:    0x4ED4A8
// Slot symbol:     off_4ED4A8
// Target type:     <no type info>
// ============================================================

void .tinfo_errstr(/* see target signature */)
{
    // Tail-call to tinfo_errstr via GOT/IAT indirection
    return tinfo_errstr(/* forwarded args */);
}

