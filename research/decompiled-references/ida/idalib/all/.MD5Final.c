// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9540
// Name:            .MD5Final
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9540 jmp     cs:off_2C7A288
//
// Resolved target: MD5Final
// Target address:  0x838C00
// GOT/IAT slot:    0x2C7A288
// Slot symbol:     off_2C7A288
// Target type:     <no type info>
// ============================================================

void .MD5Final(/* see target signature */)
{
    // Tail-call to MD5Final via GOT/IAT indirection
    return MD5Final(/* forwarded args */);
}

