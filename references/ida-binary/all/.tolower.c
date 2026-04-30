// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A1F0
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A1F0 jmp     cs:tolower_ptr
//
// Resolved target: tolower
// Target address:  0x8D8D40
// GOT/IAT slot:    0x8A3D98
// Slot symbol:     tolower_ptr
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

