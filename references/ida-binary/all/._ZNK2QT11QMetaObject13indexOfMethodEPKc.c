// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D00
// Name:            ._ZNK2QT11QMetaObject13indexOfMethodEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D00 jmp     cs:_ZNK2QT11QMetaObject13indexOfMethodEPKc_ptr
//
// Resolved target: _ZNK2QT11QMetaObject13indexOfMethodEPKc
// Target address:  0x8D38E8
// GOT/IAT slot:    0x89FB20
// Slot symbol:     _ZNK2QT11QMetaObject13indexOfMethodEPKc_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject13indexOfMethodEPKc(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject13indexOfMethodEPKc via GOT/IAT indirection
    return _ZNK2QT11QMetaObject13indexOfMethodEPKc(/* forwarded args */);
}

