// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D40
// Name:            ._ZN2QT7QObject11deleteLaterEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D40 jmp     cs:_ZN2QT7QObject11deleteLaterEv_ptr
//
// Resolved target: _ZN2QT7QObject11deleteLaterEv
// Target address:  0x8D7648
// GOT/IAT slot:    0x8A2B40
// Slot symbol:     _ZN2QT7QObject11deleteLaterEv_ptr
// Target type:     _QWORD(QT::QObject *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QObject11deleteLaterEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject11deleteLaterEv via GOT/IAT indirection
    return _ZN2QT7QObject11deleteLaterEv(/* forwarded args */);
}

