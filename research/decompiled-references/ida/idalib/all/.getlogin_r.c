// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABBE0
// Name:            .getlogin_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABBE0 jmp     cs:off_2C7B5D8
//
// Resolved target: getlogin_r
// Target address:  0x2D11C78
// GOT/IAT slot:    0x2C7B5D8
// Slot symbol:     off_2C7B5D8
// Target type:     int(char *name, size_t name_len)
// ============================================================

/* see target sig */ .getlogin_r(/* see target signature */)
{
    // Tail-call to getlogin_r via GOT/IAT indirection
    return getlogin_r(/* forwarded args */);
}

