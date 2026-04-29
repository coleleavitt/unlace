// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x173D0
// Name:            ._ZNK2QT11QMetaObject9classNameEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x173D0 jmp     cs:off_4F9D0
//
// Resolved target: _ZNK2QT11QMetaObject9classNameEv
// Target address:  0x50F88
// GOT/IAT slot:    0x4F9D0
// Slot symbol:     off_4F9D0
// Target type:     _QWORD(QT::QMetaObject *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject9classNameEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject9classNameEv via GOT/IAT indirection
    return _ZNK2QT11QMetaObject9classNameEv(/* forwarded args */);
}

