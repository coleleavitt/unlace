// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D50
// Name:            .tinfo_errstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D50 jmp     cs:off_2C7A690
//
// Resolved target: tinfo_errstr
// Target address:  0x6AC640
// GOT/IAT slot:    0x2C7A690
// Slot symbol:     off_2C7A690
// Target type:     <no type info>
// ============================================================

void .tinfo_errstr(/* see target signature */)
{
    // Tail-call to tinfo_errstr via GOT/IAT indirection
    return tinfo_errstr(/* forwarded args */);
}

