// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC80
// Name:            ._ZnwmRKSt9nothrow_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC80 jmp     cs:off_B3628
//
// Resolved target: _ZnwmRKSt9nothrow_t
// Target address:  0xB3E08
// GOT/IAT slot:    0xB3628
// Slot symbol:     off_B3628
// Target type:     _QWORD(unsigned __int64, const std::nothrow_t *)
// ============================================================

/* see target sig */ ._ZnwmRKSt9nothrow_t(/* see target signature */)
{
    // Tail-call to _ZnwmRKSt9nothrow_t via GOT/IAT indirection
    return _ZnwmRKSt9nothrow_t(/* forwarded args */);
}

