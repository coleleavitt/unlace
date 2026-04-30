// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B9E0
// Name:            ._ZNSt15__exception_ptr13exception_ptrC1EPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B9E0 jmp     cs:_ZNSt15__exception_ptr13exception_ptrC1EPv_ptr
//
// Resolved target: _ZNSt15__exception_ptr13exception_ptrC1EPv
// Target address:  0x8D9C60
// GOT/IAT slot:    0x8A4990
// Slot symbol:     _ZNSt15__exception_ptr13exception_ptrC1EPv_ptr
// Target type:     _QWORD(std::__exception_ptr::exception_ptr *__hidden this, void *)
// ============================================================

/* see target sig */ ._ZNSt15__exception_ptr13exception_ptrC1EPv(/* see target signature */)
{
    // Tail-call to _ZNSt15__exception_ptr13exception_ptrC1EPv via GOT/IAT indirection
    return _ZNSt15__exception_ptr13exception_ptrC1EPv(/* forwarded args */);
}

