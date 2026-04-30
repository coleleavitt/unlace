// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117120
// Name:            ._ZN2QT9qBadAllocEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117120 jmp     cs:_ZN2QT9qBadAllocEv_ptr
//
// Resolved target: _ZN2QT9qBadAllocEv
// Target address:  0x8D6E90
// GOT/IAT slot:    0x8A2530
// Slot symbol:     _ZN2QT9qBadAllocEv_ptr
// Target type:     _QWORD()
// ============================================================

/* see target sig */ ._ZN2QT9qBadAllocEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9qBadAllocEv via GOT/IAT indirection
    return _ZN2QT9qBadAllocEv(/* forwarded args */);
}

