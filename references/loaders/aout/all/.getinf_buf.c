// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1230
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1230 jmp     cs:off_6100
//
// Resolved target: getinf_buf
// Target address:  0x6298
// GOT/IAT slot:    0x6100
// Slot symbol:     off_6100
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

