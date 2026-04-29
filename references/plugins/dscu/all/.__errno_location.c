// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4040
// Name:            .__errno_location
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4040 jmp     cs:off_1F008
//
// Resolved target: __errno_location
// Target address:  0x1F2B8
// GOT/IAT slot:    0x1F008
// Slot symbol:     off_1F008
// Target type:     int *(void)
// ============================================================

/* see target sig */ .__errno_location(/* see target signature */)
{
    // Tail-call to __errno_location via GOT/IAT indirection
    return __errno_location(/* forwarded args */);
}

