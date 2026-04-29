// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2B0
// Name:            ._ZNSt14overflow_errorC2EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2B0 jmp     cs:off_48158
//
// Resolved target: _ZNSt14overflow_errorC2EPKc
// Target address:  0x33400
// GOT/IAT slot:    0x48158
// Slot symbol:     off_48158
// Target type:     __int64 __fastcall(std::overflow_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt14overflow_errorC2EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt14overflow_errorC2EPKc via GOT/IAT indirection
    return _ZNSt14overflow_errorC2EPKc(/* forwarded args */);
}

