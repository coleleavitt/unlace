// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D5C0
// Name:            .setinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D5C0 jmp     cs:off_4E92C8
//
// Resolved target: setinf_buf
// Target address:  0x4EBCB8
// GOT/IAT slot:    0x4E92C8
// Slot symbol:     off_4E92C8
// Target type:     <no type info>
// ============================================================

void .setinf_buf(/* see target signature */)
{
    // Tail-call to setinf_buf via GOT/IAT indirection
    return setinf_buf(/* forwarded args */);
}

