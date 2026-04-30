// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B980
// Name:            ._ZNK2QT11QMetaObject11indexOfSlotEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B980 jmp     cs:_ZNK2QT11QMetaObject11indexOfSlotEPKc_ptr
//
// Resolved target: _ZNK2QT11QMetaObject11indexOfSlotEPKc
// Target address:  0x8D9C20
// GOT/IAT slot:    0x8A4960
// Slot symbol:     _ZNK2QT11QMetaObject11indexOfSlotEPKc_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject11indexOfSlotEPKc(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject11indexOfSlotEPKc via GOT/IAT indirection
    return _ZNK2QT11QMetaObject11indexOfSlotEPKc(/* forwarded args */);
}

