// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA540
// Name:            .getgid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA540 jmp     cs:off_2C7AA88
//
// Resolved target: getgid
// Target address:  0x2D11970
// GOT/IAT slot:    0x2C7AA88
// Slot symbol:     off_2C7AA88
// Target type:     __gid_t(void)
// ============================================================

/* see target sig */ .getgid(/* see target signature */)
{
    // Tail-call to getgid via GOT/IAT indirection
    return getgid(/* forwarded args */);
}

