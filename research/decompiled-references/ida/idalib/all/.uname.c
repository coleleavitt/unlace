// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7350
// Name:            .uname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7350 jmp     cs:off_2C79190
//
// Resolved target: uname
// Target address:  0x2D11388
// GOT/IAT slot:    0x2C79190
// Slot symbol:     off_2C79190
// Target type:     int(struct utsname *name)
// ============================================================

/* see target sig */ .uname(/* see target signature */)
{
    // Tail-call to uname via GOT/IAT indirection
    return uname(/* forwarded args */);
}

