// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B580
// Name:            .get_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B580 jmp     cs:off_4ED2A8
//
// Resolved target: get_extra_cmt
// Target address:  0x4F15A0
// GOT/IAT slot:    0x4ED2A8
// Slot symbol:     off_4ED2A8
// Target type:     <no type info>
// ============================================================

void .get_extra_cmt(/* see target signature */)
{
    // Tail-call to get_extra_cmt via GOT/IAT indirection
    return get_extra_cmt(/* forwarded args */);
}

