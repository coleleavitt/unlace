// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C70
// Name:            .find_tinfo_udt_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C70 jmp     cs:off_2C79620
//
// Resolved target: find_tinfo_udt_member
// Target address:  0x554020
// GOT/IAT slot:    0x2C79620
// Slot symbol:     off_2C79620
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .find_tinfo_udt_member(/* see target signature */)
{
    // Tail-call to find_tinfo_udt_member via GOT/IAT indirection
    return find_tinfo_udt_member(/* forwarded args */);
}

