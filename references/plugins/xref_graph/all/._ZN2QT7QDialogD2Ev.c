// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16E60
// Name:            ._ZN2QT7QDialogD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16E60 jmp     cs:off_4F718
//
// Resolved target: _ZN2QT7QDialogD2Ev
// Target address:  0x50AA0
// GOT/IAT slot:    0x4F718
// Slot symbol:     off_4F718
// Target type:     void(QT::QDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QDialogD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialogD2Ev via GOT/IAT indirection
    return _ZN2QT7QDialogD2Ev(/* forwarded args */);
}

