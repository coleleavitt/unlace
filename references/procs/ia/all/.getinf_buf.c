// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7360
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7360 jmp     cs:off_26198
//
// Resolved target: getinf_buf
// Target address:  0x26468
// GOT/IAT slot:    0x26198
// Slot symbol:     off_26198
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

