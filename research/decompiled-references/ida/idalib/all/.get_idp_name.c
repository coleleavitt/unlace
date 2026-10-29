// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C00
// Name:            .get_idp_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C00 jmp     cs:off_2C795E8
//
// Resolved target: get_idp_name
// Target address:  0x39C740
// GOT/IAT slot:    0x2C795E8
// Slot symbol:     off_2C795E8
// Target type:     __int64 __fastcall(char *s)
// ============================================================

/* see target sig */ .get_idp_name(/* see target signature */)
{
    // Tail-call to get_idp_name via GOT/IAT indirection
    return get_idp_name(/* forwarded args */);
}

