// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112DB0
// Name:            ._ZN2QT7QTabBar9insertTabEiRKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112DB0 jmp     cs:_ZN2QT7QTabBar9insertTabEiRKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT7QTabBar9insertTabEiRKNS_7QStringE
// Target address:  0x8D4390
// GOT/IAT slot:    0x8A0378
// Slot symbol:     _ZN2QT7QTabBar9insertTabEiRKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar9insertTabEiRKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar9insertTabEiRKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QTabBar9insertTabEiRKNS_7QStringE(/* forwarded args */);
}

