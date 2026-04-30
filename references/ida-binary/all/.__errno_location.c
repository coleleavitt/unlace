// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B100
// Name:            .__errno_location
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B100 jmp     cs:__errno_location_ptr
//
// Resolved target: __errno_location
// Target address:  0x8D96C0
// GOT/IAT slot:    0x8A4520
// Slot symbol:     __errno_location_ptr
// Target type:     int *(void)
// ============================================================

/* see target sig */ .__errno_location(/* see target signature */)
{
    // Tail-call to __errno_location via GOT/IAT indirection
    return __errno_location(/* forwarded args */);
}

