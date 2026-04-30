// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A430
// Name:            ._ZN2QT11QMetaObject10ConnectionD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A430 jmp     cs:_ZN2QT11QMetaObject10ConnectionD1Ev_ptr
//
// Resolved target: _ZN2QT11QMetaObject10ConnectionD1Ev
// Target address:  0x8D8EB8
// GOT/IAT slot:    0x8A3EB8
// Slot symbol:     _ZN2QT11QMetaObject10ConnectionD1Ev_ptr
// Target type:     void(QT::QMetaObject::Connection *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QMetaObject10ConnectionD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMetaObject10ConnectionD1Ev via GOT/IAT indirection
    return _ZN2QT11QMetaObject10ConnectionD1Ev(/* forwarded args */);
}

