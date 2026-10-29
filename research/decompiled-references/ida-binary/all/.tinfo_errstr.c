// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1156D0
// Name:            .tinfo_errstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1156D0 jmp     cs:tinfo_errstr_ptr
//
// Resolved target: tinfo_errstr
// Target address:  0x8D5DF0
// GOT/IAT slot:    0x8A1808
// Slot symbol:     tinfo_errstr_ptr
// Target type:     <no type info>
// ============================================================

void .tinfo_errstr(/* see target signature */)
{
    // Tail-call to tinfo_errstr via GOT/IAT indirection
    return tinfo_errstr(/* forwarded args */);
}

