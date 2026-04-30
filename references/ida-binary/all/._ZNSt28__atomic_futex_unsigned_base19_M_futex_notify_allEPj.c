// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111710
// Name:            ._ZNSt28__atomic_futex_unsigned_base19_M_futex_notify_allEPj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111710 jmp     cs:_ZNSt28__atomic_futex_unsigned_base19_M_futex_notify_allEPj_ptr
//
// Resolved target: _ZNSt28__atomic_futex_unsigned_base19_M_futex_notify_allEPj
// Target address:  0x8D3520
// GOT/IAT slot:    0x89F828
// Slot symbol:     _ZNSt28__atomic_futex_unsigned_base19_M_futex_notify_allEPj_ptr
// Target type:     _QWORD(std::__atomic_futex_unsigned_base *__hidden this, unsigned int *)
// ============================================================

/* see target sig */ ._ZNSt28__atomic_futex_unsigned_base19_M_futex_notify_allEPj(/* see target signature */)
{
    // Tail-call to _ZNSt28__atomic_futex_unsigned_base19_M_futex_notify_allEPj via GOT/IAT indirection
    return _ZNSt28__atomic_futex_unsigned_base19_M_futex_notify_allEPj(/* forwarded args */);
}

