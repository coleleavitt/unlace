// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A20
// Name:            ._ZN2QT7QWidget10setToolTipERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A20 jmp     cs:_ZN2QT7QWidget10setToolTipERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT7QWidget10setToolTipERKNS_7QStringE
// Target address:  0x8D4BA8
// GOT/IAT slot:    0x8A09B0
// Slot symbol:     _ZN2QT7QWidget10setToolTipERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget10setToolTipERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget10setToolTipERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QWidget10setToolTipERKNS_7QStringE(/* forwarded args */);
}

