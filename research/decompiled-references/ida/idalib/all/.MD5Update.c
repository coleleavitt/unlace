// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC50
// Name:            .MD5Update
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC50 jmp     cs:off_2C7BE10
//
// Resolved target: MD5Update
// Target address:  0x8389C0
// GOT/IAT slot:    0x2C7BE10
// Slot symbol:     off_2C7BE10
// Target type:     <no type info>
// ============================================================

void .MD5Update(/* see target signature */)
{
    // Tail-call to MD5Update via GOT/IAT indirection
    return MD5Update(/* forwarded args */);
}

