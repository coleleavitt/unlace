// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117570
// Name:            ._ZN2QT13QElapsedTimer10invalidateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117570 jmp     cs:_ZN2QT13QElapsedTimer10invalidateEv_ptr
//
// Resolved target: _ZN2QT13QElapsedTimer10invalidateEv
// Target address:  0x8D7170
// GOT/IAT slot:    0x8A2758
// Slot symbol:     _ZN2QT13QElapsedTimer10invalidateEv_ptr
// Target type:     _QWORD(QT::QElapsedTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QElapsedTimer10invalidateEv(/* see target signature */)
{
    // Tail-call to _ZN2QT13QElapsedTimer10invalidateEv via GOT/IAT indirection
    return _ZN2QT13QElapsedTimer10invalidateEv(/* forwarded args */);
}

