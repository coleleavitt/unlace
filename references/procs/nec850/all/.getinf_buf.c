// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9870
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9870 jmp     cs:off_2E420
//
// Resolved target: getinf_buf
// Target address:  0x2EAA8
// GOT/IAT slot:    0x2E420
// Slot symbol:     off_2E420
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

