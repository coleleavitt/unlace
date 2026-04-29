// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC60
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC60 jmp     cs:off_4B9E18
//
// Resolved target: getinf_buf
// Target address:  0x4BC840
// GOT/IAT slot:    0x4B9E18
// Slot symbol:     off_4B9E18
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

