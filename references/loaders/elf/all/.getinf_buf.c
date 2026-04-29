// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98D0
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98D0 jmp     cs:off_89450
//
// Resolved target: getinf_buf
// Target address:  0x8C778
// GOT/IAT slot:    0x89450
// Slot symbol:     off_89450
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

