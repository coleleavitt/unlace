// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3100
// Name:            .find_tinfo_udt_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3100 jmp     cs:off_13068
//
// Resolved target: find_tinfo_udt_member
// Target address:  0x133E0
// GOT/IAT slot:    0x13068
// Slot symbol:     off_13068
// Target type:     <no type info>
// ============================================================

void .find_tinfo_udt_member(/* see target signature */)
{
    // Tail-call to find_tinfo_udt_member via GOT/IAT indirection
    return find_tinfo_udt_member(/* forwarded args */);
}

