// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F290
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F290 jmp     cs:off_4EA130
//
// Resolved target: dstr_tinfo
// Target address:  0x4ECB90
// GOT/IAT slot:    0x4EA130
// Slot symbol:     off_4EA130
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

