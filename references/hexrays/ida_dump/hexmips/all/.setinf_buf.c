// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5B0
// Name:            .setinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5B0 jmp     cs:off_4CD2C0
//
// Resolved target: setinf_buf
// Target address:  0x4CFCB0
// GOT/IAT slot:    0x4CD2C0
// Slot symbol:     off_4CD2C0
// Target type:     <no type info>
// ============================================================

void .setinf_buf(/* see target signature */)
{
    // Tail-call to setinf_buf via GOT/IAT indirection
    return setinf_buf(/* forwarded args */);
}

