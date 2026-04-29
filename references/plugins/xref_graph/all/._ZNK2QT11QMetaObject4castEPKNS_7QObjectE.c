// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x164C0
// Name:            ._ZNK2QT11QMetaObject4castEPKNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x164C0 jmp     cs:off_4F248
//
// Resolved target: _ZNK2QT11QMetaObject4castEPKNS_7QObjectE
// Target address:  0x50200
// GOT/IAT slot:    0x4F248
// Slot symbol:     off_4F248
// Target type:     _QWORD(QT::QMetaObject *__hidden this, const QT::QObject *)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject4castEPKNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject4castEPKNS_7QObjectE via GOT/IAT indirection
    return _ZNK2QT11QMetaObject4castEPKNS_7QObjectE(/* forwarded args */);
}

