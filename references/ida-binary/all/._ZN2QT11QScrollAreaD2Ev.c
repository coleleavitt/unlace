// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1167A0
// Name:            ._ZN2QT11QScrollAreaD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1167A0 jmp     cs:_ZN2QT11QScrollAreaD2Ev_ptr
//
// Resolved target: _ZN2QT11QScrollAreaD2Ev
// Target address:  0x8D68A0
// GOT/IAT slot:    0x8A2070
// Slot symbol:     _ZN2QT11QScrollAreaD2Ev_ptr
// Target type:     void(QT::QScrollArea *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QScrollAreaD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QScrollAreaD2Ev via GOT/IAT indirection
    return _ZN2QT11QScrollAreaD2Ev(/* forwarded args */);
}

