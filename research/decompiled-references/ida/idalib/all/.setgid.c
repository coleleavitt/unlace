// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADAD0
// Name:            .setgid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADAD0 jmp     cs:off_2C7C550
//
// Resolved target: setgid
// Target address:  0x2D120A8
// GOT/IAT slot:    0x2C7C550
// Slot symbol:     off_2C7C550
// Target type:     int(__gid_t gid)
// ============================================================

/* see target sig */ .setgid(/* see target signature */)
{
    // Tail-call to setgid via GOT/IAT indirection
    return setgid(/* forwarded args */);
}

