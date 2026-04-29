// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC80
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC80 jmp     cs:off_4DAE28
//
// Resolved target: getinf_buf
// Target address:  0x4DD850
// GOT/IAT slot:    0x4DAE28
// Slot symbol:     off_4DAE28
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

