// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD010
// Name:            .MD5Transform
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD010 jmp     cs:off_2C7BFF0
//
// Resolved target: MD5Transform
// Target address:  0x8382D0
// GOT/IAT slot:    0x2C7BFF0
// Slot symbol:     off_2C7BFF0
// Target type:     <no type info>
// ============================================================

void .MD5Transform(/* see target signature */)
{
    // Tail-call to MD5Transform via GOT/IAT indirection
    return MD5Transform(/* forwarded args */);
}

