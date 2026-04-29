// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_8160
//
// Resolved target: getinf_buf
// Target address:  0x8350
// GOT/IAT slot:    0x8160
// Slot symbol:     off_8160
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

