// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE20
// Name:            .del_tinfo_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE20 jmp     cs:off_4ED6F8
//
// Resolved target: del_tinfo_attr
// Target address:  0x4F1A08
// GOT/IAT slot:    0x4ED6F8
// Slot symbol:     off_4ED6F8
// Target type:     <no type info>
// ============================================================

void .del_tinfo_attr(/* see target signature */)
{
    // Tail-call to del_tinfo_attr via GOT/IAT indirection
    return del_tinfo_attr(/* forwarded args */);
}

