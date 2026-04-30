// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B80
// Name:            ._ZnwmRKSt9nothrow_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B80 jmp     cs:_ZnwmRKSt9nothrow_t_ptr
//
// Resolved target: _ZnwmRKSt9nothrow_t
// Target address:  0x8D6108
// GOT/IAT slot:    0x8A1A60
// Slot symbol:     _ZnwmRKSt9nothrow_t_ptr
// Target type:     _QWORD(unsigned __int64, const std::nothrow_t *)
// ============================================================

/* see target sig */ ._ZnwmRKSt9nothrow_t(/* see target signature */)
{
    // Tail-call to _ZnwmRKSt9nothrow_t via GOT/IAT indirection
    return _ZnwmRKSt9nothrow_t(/* forwarded args */);
}

