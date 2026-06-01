// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112340
// Name:            .find_tinfo_udt_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112340 jmp     cs:find_tinfo_udt_member_ptr
//
// Resolved target: find_tinfo_udt_member
// Target address:  0x8D3CD8
// GOT/IAT slot:    0x89FE40
// Slot symbol:     find_tinfo_udt_member_ptr
// Target type:     <no type info>
// ============================================================

void .find_tinfo_udt_member(/* see target signature */)
{
    // Tail-call to find_tinfo_udt_member via GOT/IAT indirection
    return find_tinfo_udt_member(/* forwarded args */);
}

