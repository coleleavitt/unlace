// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA30
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA30 jmp     cs:off_B3500
//
// Resolved target: getinf_buf
// Target address:  0xB3CC0
// GOT/IAT slot:    0xB3500
// Slot symbol:     off_B3500
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

