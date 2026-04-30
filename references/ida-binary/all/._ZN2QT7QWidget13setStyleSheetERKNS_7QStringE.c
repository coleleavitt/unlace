// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116FB0
// Name:            ._ZN2QT7QWidget13setStyleSheetERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116FB0 jmp     cs:_ZN2QT7QWidget13setStyleSheetERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT7QWidget13setStyleSheetERKNS_7QStringE
// Target address:  0x8D6D98
// GOT/IAT slot:    0x8A2478
// Slot symbol:     _ZN2QT7QWidget13setStyleSheetERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget13setStyleSheetERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget13setStyleSheetERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QWidget13setStyleSheetERKNS_7QStringE(/* forwarded args */);
}

