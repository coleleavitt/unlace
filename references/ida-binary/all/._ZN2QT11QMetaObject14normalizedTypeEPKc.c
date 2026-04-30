// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C30
// Name:            ._ZN2QT11QMetaObject14normalizedTypeEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C30 jmp     cs:_ZN2QT11QMetaObject14normalizedTypeEPKc_ptr
//
// Resolved target: _ZN2QT11QMetaObject14normalizedTypeEPKc
// Target address:  0x8D6B80
// GOT/IAT slot:    0x8A22B8
// Slot symbol:     _ZN2QT11QMetaObject14normalizedTypeEPKc_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZN2QT11QMetaObject14normalizedTypeEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMetaObject14normalizedTypeEPKc via GOT/IAT indirection
    return _ZN2QT11QMetaObject14normalizedTypeEPKc(/* forwarded args */);
}

