// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA300
// Name:            ._ZNSt11range_errorC2EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA300 jmp     cs:off_48180
//
// Resolved target: _ZNSt11range_errorC2EPKc
// Target address:  0x333E0
// GOT/IAT slot:    0x48180
// Slot symbol:     off_48180
// Target type:     __int64 __fastcall(std::range_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt11range_errorC2EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt11range_errorC2EPKc via GOT/IAT indirection
    return _ZNSt11range_errorC2EPKc(/* forwarded args */);
}

