// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CDA0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CDA0 jmp     cs:off_4EDEB8
//
// Resolved target: getinf_buf
// Target address:  0x4F2200
// GOT/IAT slot:    0x4EDEB8
// Slot symbol:     off_4EDEB8
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

