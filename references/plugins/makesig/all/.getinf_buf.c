// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3580
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3580 jmp     cs:off_202A8
//
// Resolved target: getinf_buf
// Target address:  0x21BE0
// GOT/IAT slot:    0x202A8
// Slot symbol:     off_202A8
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

