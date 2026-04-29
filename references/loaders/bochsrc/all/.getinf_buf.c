// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_40A8
//
// Resolved target: getinf_buf
// Target address:  0x51F8
// GOT/IAT slot:    0x40A8
// Slot symbol:     off_40A8
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

