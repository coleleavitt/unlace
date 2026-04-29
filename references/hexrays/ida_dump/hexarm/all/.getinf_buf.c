// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ECC0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ECC0 jmp     cs:off_4E9E48
//
// Resolved target: getinf_buf
// Target address:  0x4EC890
// GOT/IAT slot:    0x4E9E48
// Slot symbol:     off_4E9E48
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

