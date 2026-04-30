// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140A0
// Name:            ._ZNK2QT7QObject8propertyEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140A0 jmp     cs:_ZNK2QT7QObject8propertyEPKc_ptr
//
// Resolved target: _ZNK2QT7QObject8propertyEPKc
// Target address:  0x8D4FD0
// GOT/IAT slot:    0x8A0CF0
// Slot symbol:     _ZNK2QT7QObject8propertyEPKc_ptr
// Target type:     _QWORD(QT::QObject *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNK2QT7QObject8propertyEPKc(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QObject8propertyEPKc via GOT/IAT indirection
    return _ZNK2QT7QObject8propertyEPKc(/* forwarded args */);
}

