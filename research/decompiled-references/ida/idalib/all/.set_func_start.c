// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8480
// Name:            .set_func_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8480 jmp     cs:off_2C79A28
//
// Resolved target: set_func_start
// Target address:  0x5CF0A0
// GOT/IAT slot:    0x2C79A28
// Slot symbol:     off_2C79A28
// Target type:     __int64 __fastcall(int, int)
// ============================================================

/* see target sig */ .set_func_start(/* see target signature */)
{
    // Tail-call to set_func_start via GOT/IAT indirection
    return set_func_start(/* forwarded args */);
}

