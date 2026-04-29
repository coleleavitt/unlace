// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA100
// Name:            ._ZNSt12length_errorC2EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA100 jmp     cs:off_48080
//
// Resolved target: _ZNSt12length_errorC2EPKc
// Target address:  0x332A0
// GOT/IAT slot:    0x48080
// Slot symbol:     off_48080
// Target type:     __int64 __fastcall(std::length_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt12length_errorC2EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt12length_errorC2EPKc via GOT/IAT indirection
    return _ZNSt12length_errorC2EPKc(/* forwarded args */);
}

