// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC90
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC90 jmp     cs:off_4C0E30
//
// Resolved target: getinf_buf
// Target address:  0x4C3E50
// GOT/IAT slot:    0x4C0E30
// Slot symbol:     off_4C0E30
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

