// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1112F0
// Name:            ._ZN2QT6QTimer5startEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1112F0 jmp     cs:_ZN2QT6QTimer5startEv_ptr
//
// Resolved target: _ZN2QT6QTimer5startEv
// Target address:  0x8D3240
// GOT/IAT slot:    0x89F618
// Slot symbol:     _ZN2QT6QTimer5startEv_ptr
// Target type:     _QWORD(QT::QTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QTimer5startEv(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimer5startEv via GOT/IAT indirection
    return _ZN2QT6QTimer5startEv(/* forwarded args */);
}

