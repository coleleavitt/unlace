// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .__errno_location
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_13010
//
// Resolved target: __errno_location
// Target address:  0x132A0
// GOT/IAT slot:    0x13010
// Slot symbol:     off_13010
// Target type:     int *(void)
// ============================================================

/* see target sig */ .__errno_location(/* see target signature */)
{
    // Tail-call to __errno_location via GOT/IAT indirection
    return __errno_location(/* forwarded args */);
}

