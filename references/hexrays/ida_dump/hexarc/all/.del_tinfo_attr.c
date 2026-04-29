// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29DC0
// Name:            .del_tinfo_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29DC0 jmp     cs:off_4B96C8
//
// Resolved target: del_tinfo_attr
// Target address:  0x4BC0C0
// GOT/IAT slot:    0x4B96C8
// Slot symbol:     off_4B96C8
// Target type:     <no type info>
// ============================================================

void .del_tinfo_attr(/* see target signature */)
{
    // Tail-call to del_tinfo_attr via GOT/IAT indirection
    return del_tinfo_attr(/* forwarded args */);
}

