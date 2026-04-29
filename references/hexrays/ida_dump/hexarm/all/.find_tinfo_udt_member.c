// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D550
// Name:            .find_tinfo_udt_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D550 jmp     cs:off_4E9290
//
// Resolved target: find_tinfo_udt_member
// Target address:  0x4EBC80
// GOT/IAT slot:    0x4E9290
// Slot symbol:     off_4E9290
// Target type:     <no type info>
// ============================================================

void .find_tinfo_udt_member(/* see target signature */)
{
    // Tail-call to find_tinfo_udt_member via GOT/IAT indirection
    return find_tinfo_udt_member(/* forwarded args */);
}

