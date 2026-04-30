// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115180
// Name:            ._ZN2QT6QImageC1ERKNS_7QStringEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115180 jmp     cs:_ZN2QT6QImageC1ERKNS_7QStringEPKc_ptr
//
// Resolved target: _ZN2QT6QImageC1ERKNS_7QStringEPKc
// Target address:  0x8D5AA8
// GOT/IAT slot:    0x8A1560
// Slot symbol:     _ZN2QT6QImageC1ERKNS_7QStringEPKc_ptr
// Target type:     _QWORD(QT::QImage *__hidden this, const QT::QString *, const char *)
// ============================================================

/* see target sig */ ._ZN2QT6QImageC1ERKNS_7QStringEPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT6QImageC1ERKNS_7QStringEPKc via GOT/IAT indirection
    return _ZN2QT6QImageC1ERKNS_7QStringEPKc(/* forwarded args */);
}

