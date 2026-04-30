// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1132A0
// Name:            ._ZNK2QT11QMetaObject4castEPKNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1132A0 jmp     cs:_ZNK2QT11QMetaObject4castEPKNS_7QObjectE_ptr
//
// Resolved target: _ZNK2QT11QMetaObject4castEPKNS_7QObjectE
// Target address:  0x8D46E0
// GOT/IAT slot:    0x8A05F0
// Slot symbol:     _ZNK2QT11QMetaObject4castEPKNS_7QObjectE_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this, const QT::QObject *)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject4castEPKNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject4castEPKNS_7QObjectE via GOT/IAT indirection
    return _ZNK2QT11QMetaObject4castEPKNS_7QObjectE(/* forwarded args */);
}

