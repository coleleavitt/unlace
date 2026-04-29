// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19200
// Name:            .find_tinfo_udt_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19200 jmp     cs:off_750E8
//
// Resolved target: find_tinfo_udt_member
// Target address:  0x75938
// GOT/IAT slot:    0x750E8
// Slot symbol:     off_750E8
// Target type:     <no type info>
// ============================================================

void .find_tinfo_udt_member(/* see target signature */)
{
    // Tail-call to find_tinfo_udt_member via GOT/IAT indirection
    return find_tinfo_udt_member(/* forwarded args */);
}

