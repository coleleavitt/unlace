// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B90
// Name:            ._ZN2QT13QElapsedTimer5startEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B90 jmp     cs:_ZN2QT13QElapsedTimer5startEv_ptr
//
// Resolved target: _ZN2QT13QElapsedTimer5startEv
// Target address:  0x8D6110
// GOT/IAT slot:    0x8A1A68
// Slot symbol:     _ZN2QT13QElapsedTimer5startEv_ptr
// Target type:     _QWORD(QT::QElapsedTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QElapsedTimer5startEv(/* see target signature */)
{
    // Tail-call to _ZN2QT13QElapsedTimer5startEv via GOT/IAT indirection
    return _ZN2QT13QElapsedTimer5startEv(/* forwarded args */);
}

