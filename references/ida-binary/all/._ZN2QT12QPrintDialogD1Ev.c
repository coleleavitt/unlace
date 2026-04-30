// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112030
// Name:            ._ZN2QT12QPrintDialogD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112030 jmp     cs:_ZN2QT12QPrintDialogD1Ev_ptr
//
// Resolved target: _ZN2QT12QPrintDialogD1Ev
// Target address:  0x8D3AE8
// GOT/IAT slot:    0x89FCB8
// Slot symbol:     _ZN2QT12QPrintDialogD1Ev_ptr
// Target type:     void(QT::QPrintDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QPrintDialogD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPrintDialogD1Ev via GOT/IAT indirection
    return _ZN2QT12QPrintDialogD1Ev(/* forwarded args */);
}

