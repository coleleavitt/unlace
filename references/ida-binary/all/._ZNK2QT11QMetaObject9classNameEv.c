// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB40
// Name:            ._ZNK2QT11QMetaObject9classNameEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB40 jmp     cs:_ZNK2QT11QMetaObject9classNameEv_ptr
//
// Resolved target: _ZNK2QT11QMetaObject9classNameEv
// Target address:  0x8D9348
// GOT/IAT slot:    0x8A4240
// Slot symbol:     _ZNK2QT11QMetaObject9classNameEv_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject9classNameEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject9classNameEv via GOT/IAT indirection
    return _ZNK2QT11QMetaObject9classNameEv(/* forwarded args */);
}

