// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D70
// Name:            ._ZN2QT9QMimeDataC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D70 jmp     cs:_ZN2QT9QMimeDataC1Ev_ptr
//
// Resolved target: _ZN2QT9QMimeDataC1Ev
// Target address:  0x8D3948
// GOT/IAT slot:    0x89FB58
// Slot symbol:     _ZN2QT9QMimeDataC1Ev_ptr
// Target type:     _QWORD(QT::QMimeData *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QMimeDataC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QMimeDataC1Ev via GOT/IAT indirection
    return _ZN2QT9QMimeDataC1Ev(/* forwarded args */);
}

