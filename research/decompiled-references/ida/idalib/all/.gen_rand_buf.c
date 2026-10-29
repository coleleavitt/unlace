// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC50
// Name:            .gen_rand_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC50 jmp     cs:off_2C7B610
//
// Resolved target: gen_rand_buf
// Target address:  0x840FD0
// GOT/IAT slot:    0x2C7B610
// Slot symbol:     off_2C7B610
// Target type:     __int64 __fastcall(void *buf, size_t nbytes)
// ============================================================

/* see target sig */ .gen_rand_buf(/* see target signature */)
{
    // Tail-call to gen_rand_buf via GOT/IAT indirection
    return gen_rand_buf(/* forwarded args */);
}

