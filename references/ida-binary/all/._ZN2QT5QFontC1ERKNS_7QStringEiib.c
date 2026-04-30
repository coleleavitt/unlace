// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119D10
// Name:            ._ZN2QT5QFontC1ERKNS_7QStringEiib
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119D10 jmp     cs:_ZN2QT5QFontC1ERKNS_7QStringEiib_ptr
//
// Resolved target: _ZN2QT5QFontC1ERKNS_7QStringEiib
// Target address:  0x8D8A20
// GOT/IAT slot:    0x8A3B28
// Slot symbol:     _ZN2QT5QFontC1ERKNS_7QStringEiib_ptr
// Target type:     _QWORD(QT::QFont *__hidden this, const QT::QString *, int, int, bool)
// ============================================================

/* see target sig */ ._ZN2QT5QFontC1ERKNS_7QStringEiib(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFontC1ERKNS_7QStringEiib via GOT/IAT indirection
    return _ZN2QT5QFontC1ERKNS_7QStringEiib(/* forwarded args */);
}

