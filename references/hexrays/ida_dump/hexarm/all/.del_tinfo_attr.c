// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DDE0
// Name:            .del_tinfo_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DDE0 jmp     cs:off_4E96D8
//
// Resolved target: del_tinfo_attr
// Target address:  0x4EC0F0
// GOT/IAT slot:    0x4E96D8
// Slot symbol:     off_4E96D8
// Target type:     <no type info>
// ============================================================

void .del_tinfo_attr(/* see target signature */)
{
    // Tail-call to del_tinfo_attr via GOT/IAT indirection
    return del_tinfo_attr(/* forwarded args */);
}

