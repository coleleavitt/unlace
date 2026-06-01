// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A82B0
// Name:            .http_request
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A82B0 jmp     cs:off_2C79940
//
// Resolved target: http_request
// Target address:  0x7C66E0
// GOT/IAT slot:    0x2C79940
// Slot symbol:     off_2C79940
// Target type:     __int64 __fastcall(int, int, int, int, int, int, int, void *, __int64, int, int, void *ptr, __int64, int, int, __int64, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int64)
// ============================================================

/* see target sig */ .http_request(/* see target signature */)
{
    // Tail-call to http_request via GOT/IAT indirection
    return http_request(/* forwarded args */);
}

