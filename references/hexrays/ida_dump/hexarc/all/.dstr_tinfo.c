// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B230
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B230 jmp     cs:off_4BA100
//
// Resolved target: dstr_tinfo
// Target address:  0x4BCB40
// GOT/IAT slot:    0x4BA100
// Slot symbol:     off_4BA100
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

