// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8240
// Name:            .rmdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8240 jmp     cs:off_2C79908
//
// Resolved target: rmdir
// Target address:  0x2D11548
// GOT/IAT slot:    0x2C79908
// Slot symbol:     off_2C79908
// Target type:     int(const char *path)
// ============================================================

/* see target sig */ .rmdir(/* see target signature */)
{
    // Tail-call to rmdir via GOT/IAT indirection
    return rmdir(/* forwarded args */);
}

