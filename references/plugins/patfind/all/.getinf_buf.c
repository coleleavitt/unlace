// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2320
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2320 jmp     cs:off_13178
//
// Resolved target: getinf_buf
// Target address:  0x13420
// GOT/IAT slot:    0x13178
// Slot symbol:     off_13178
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

