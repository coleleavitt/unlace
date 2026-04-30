// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D10
// Name:            ._ZN2QT7QDialogD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D10 jmp     cs:_ZN2QT7QDialogD2Ev_ptr
//
// Resolved target: _ZN2QT7QDialogD2Ev
// Target address:  0x8D7628
// GOT/IAT slot:    0x8A2B28
// Slot symbol:     _ZN2QT7QDialogD2Ev_ptr
// Target type:     void(QT::QDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QDialogD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialogD2Ev via GOT/IAT indirection
    return _ZN2QT7QDialogD2Ev(/* forwarded args */);
}

