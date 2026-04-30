// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1117A0
// Name:            ._ZN2QT7QAction10setToolTipERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1117A0 jmp     cs:_ZN2QT7QAction10setToolTipERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT7QAction10setToolTipERKNS_7QStringE
// Target address:  0x8D3580
// GOT/IAT slot:    0x89F870
// Slot symbol:     _ZN2QT7QAction10setToolTipERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QAction10setToolTipERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction10setToolTipERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QAction10setToolTipERKNS_7QStringE(/* forwarded args */);
}

