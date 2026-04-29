// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17310
// Name:            ._ZN2QT11QMetaObject10ConnectionD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17310 jmp     cs:off_4F970
//
// Resolved target: _ZN2QT11QMetaObject10ConnectionD1Ev
// Target address:  0x50EB0
// GOT/IAT slot:    0x4F970
// Slot symbol:     off_4F970
// Target type:     void(QT::QMetaObject::Connection *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QMetaObject10ConnectionD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMetaObject10ConnectionD1Ev via GOT/IAT indirection
    return _ZN2QT11QMetaObject10ConnectionD1Ev(/* forwarded args */);
}

