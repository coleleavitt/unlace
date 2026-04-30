// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117560
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117560 jmp     cs:getinf_buf_ptr
//
// Resolved target: getinf_buf
// Target address:  0x8D7168
// GOT/IAT slot:    0x8A2750
// Slot symbol:     getinf_buf_ptr
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

