// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xADB0
// Name:            ._ZnwmRKSt9nothrow_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xADB0 jmp     cs:off_CA6C0
//
// Resolved target: _ZnwmRKSt9nothrow_t
// Target address:  0xD1028
// GOT/IAT slot:    0xCA6C0
// Slot symbol:     off_CA6C0
// Target type:     _QWORD(unsigned __int64, const std::nothrow_t *)
// ============================================================

/* see target sig */ ._ZnwmRKSt9nothrow_t(/* see target signature */)
{
    // Tail-call to _ZnwmRKSt9nothrow_t via GOT/IAT indirection
    return _ZnwmRKSt9nothrow_t(/* forwarded args */);
}

