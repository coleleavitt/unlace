// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8940
// Name:            .del_tinfo_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8940 jmp     cs:off_2C79C88
//
// Resolved target: del_tinfo_attr
// Target address:  0x54B5C0
// GOT/IAT slot:    0x2C79C88
// Slot symbol:     off_2C79C88
// Target type:     <no type info>
// ============================================================

void .del_tinfo_attr(/* see target signature */)
{
    // Tail-call to del_tinfo_attr via GOT/IAT indirection
    return del_tinfo_attr(/* forwarded args */);
}

