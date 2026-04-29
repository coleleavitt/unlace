// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2F0
// Name:            ._ZNSt15underflow_errorC1EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2F0 jmp     cs:off_48178
//
// Resolved target: _ZNSt15underflow_errorC1EPKc
// Target address:  0x33420
// GOT/IAT slot:    0x48178
// Slot symbol:     off_48178
// Target type:     __int64 __fastcall(std::underflow_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt15underflow_errorC1EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt15underflow_errorC1EPKc via GOT/IAT indirection
    return _ZNSt15underflow_errorC1EPKc(/* forwarded args */);
}

