// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B730
// Name:            ._ZN2QT11QMetaObject18connectSlotsByNameEPNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B730 jmp     cs:_ZN2QT11QMetaObject18connectSlotsByNameEPNS_7QObjectE_ptr
//
// Resolved target: _ZN2QT11QMetaObject18connectSlotsByNameEPNS_7QObjectE
// Target address:  0x8D9AB8
// GOT/IAT slot:    0x8A4838
// Slot symbol:     _ZN2QT11QMetaObject18connectSlotsByNameEPNS_7QObjectE_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT11QMetaObject18connectSlotsByNameEPNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMetaObject18connectSlotsByNameEPNS_7QObjectE via GOT/IAT indirection
    return _ZN2QT11QMetaObject18connectSlotsByNameEPNS_7QObjectE(/* forwarded args */);
}

