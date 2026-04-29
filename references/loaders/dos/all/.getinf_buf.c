// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2570
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2570 jmp     cs:off_B2A0
//
// Resolved target: getinf_buf
// Target address:  0xB750
// GOT/IAT slot:    0xB2A0
// Slot symbol:     off_B2A0
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

