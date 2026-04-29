// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA320
// Name:            ._ZNSt12domain_errorC2EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA320 jmp     cs:off_48190
//
// Resolved target: _ZNSt12domain_errorC2EPKc
// Target address:  0x33260
// GOT/IAT slot:    0x48190
// Slot symbol:     off_48190
// Target type:     __int64 __fastcall(std::domain_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt12domain_errorC2EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt12domain_errorC2EPKc via GOT/IAT indirection
    return _ZNSt12domain_errorC2EPKc(/* forwarded args */);
}

