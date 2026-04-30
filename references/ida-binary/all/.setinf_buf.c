// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AA30
// Name:            .setinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AA30 jmp     cs:setinf_buf_ptr
//
// Resolved target: setinf_buf
// Target address:  0x8D92B8
// GOT/IAT slot:    0x8A41B8
// Slot symbol:     setinf_buf_ptr
// Target type:     <no type info>
// ============================================================

void .setinf_buf(/* see target signature */)
{
    // Tail-call to setinf_buf via GOT/IAT indirection
    return setinf_buf(/* forwarded args */);
}

