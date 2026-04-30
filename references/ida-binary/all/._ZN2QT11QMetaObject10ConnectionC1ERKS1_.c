// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114860
// Name:            ._ZN2QT11QMetaObject10ConnectionC1ERKS1_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114860 jmp     cs:_ZN2QT11QMetaObject10ConnectionC1ERKS1__ptr
//
// Resolved target: _ZN2QT11QMetaObject10ConnectionC1ERKS1_
// Target address:  0x8D54D0
// GOT/IAT slot:    0x8A10D0
// Slot symbol:     _ZN2QT11QMetaObject10ConnectionC1ERKS1__ptr
// Target type:     _QWORD(QT::QMetaObject::Connection *__hidden this, const Connection *)
// ============================================================

/* see target sig */ ._ZN2QT11QMetaObject10ConnectionC1ERKS1_(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMetaObject10ConnectionC1ERKS1_ via GOT/IAT indirection
    return _ZN2QT11QMetaObject10ConnectionC1ERKS1_(/* forwarded args */);
}

