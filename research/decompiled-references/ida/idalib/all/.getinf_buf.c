// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF10
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF10 jmp     cs:off_2C7AF70
//
// Resolved target: getinf_buf
// Target address:  0x630D30
// GOT/IAT slot:    0x2C7AF70
// Slot symbol:     off_2C7AF70
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

