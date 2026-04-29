// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87E0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87E0 jmp     cs:off_2A3D8
//
// Resolved target: getinf_buf
// Target address:  0x2BE00
// GOT/IAT slot:    0x2A3D8
// Slot symbol:     off_2A3D8
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

