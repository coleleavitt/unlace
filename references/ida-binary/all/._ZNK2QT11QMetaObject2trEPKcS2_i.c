// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1141D0
// Name:            ._ZNK2QT11QMetaObject2trEPKcS2_i
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1141D0 jmp     cs:_ZNK2QT11QMetaObject2trEPKcS2_i_ptr
//
// Resolved target: _ZNK2QT11QMetaObject2trEPKcS2_i
// Target address:  0x8D5078
// GOT/IAT slot:    0x8A0D88
// Slot symbol:     _ZNK2QT11QMetaObject2trEPKcS2_i_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this, const char *, const char *, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject2trEPKcS2_i(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject2trEPKcS2_i via GOT/IAT indirection
    return _ZNK2QT11QMetaObject2trEPKcS2_i(/* forwarded args */);
}

