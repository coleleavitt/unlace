// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E80
// Name:            .MD5Init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E80 jmp     cs:off_2C79F28
//
// Resolved target: MD5Init
// Target address:  0x8382B0
// GOT/IAT slot:    0x2C79F28
// Slot symbol:     off_2C79F28
// Target type:     <no type info>
// ============================================================

void .MD5Init(/* see target signature */)
{
    // Tail-call to MD5Init via GOT/IAT indirection
    return MD5Init(/* forwarded args */);
}

