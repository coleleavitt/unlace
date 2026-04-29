// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x295B0
// Name:            .setinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x295B0 jmp     cs:off_4B92C0
//
// Resolved target: setinf_buf
// Target address:  0x4BBC90
// GOT/IAT slot:    0x4B92C0
// Slot symbol:     off_4B92C0
// Target type:     <no type info>
// ============================================================

void .setinf_buf(/* see target signature */)
{
    // Tail-call to setinf_buf via GOT/IAT indirection
    return setinf_buf(/* forwarded args */);
}

