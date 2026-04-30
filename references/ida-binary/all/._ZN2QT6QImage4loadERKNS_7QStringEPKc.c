// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1124E0
// Name:            ._ZN2QT6QImage4loadERKNS_7QStringEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1124E0 jmp     cs:_ZN2QT6QImage4loadERKNS_7QStringEPKc_ptr
//
// Resolved target: _ZN2QT6QImage4loadERKNS_7QStringEPKc
// Target address:  0x8D3DF8
// GOT/IAT slot:    0x89FF10
// Slot symbol:     _ZN2QT6QImage4loadERKNS_7QStringEPKc_ptr
// Target type:     _QWORD(QT::QImage *__hidden this, const QT::QString *, const char *)
// ============================================================

/* see target sig */ ._ZN2QT6QImage4loadERKNS_7QStringEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT6QImage4loadERKNS_7QStringEPKc via GOT/IAT indirection
    return _ZN2QT6QImage4loadERKNS_7QStringEPKc(/* forwarded args */);
}

