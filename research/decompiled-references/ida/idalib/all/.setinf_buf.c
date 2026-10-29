// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD0B0
// Name:            .setinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD0B0 jmp     cs:off_2C7C040
//
// Resolved target: setinf_buf
// Target address:  0x632CD0
// GOT/IAT slot:    0x2C7C040
// Slot symbol:     off_2C7C040
// Target type:     <no type info>
// ============================================================

void .setinf_buf(/* see target signature */)
{
    // Tail-call to setinf_buf via GOT/IAT indirection
    return setinf_buf(/* forwarded args */);
}

