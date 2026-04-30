// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118640
// Name:            ._ZN2QT12QKeySequence8mnemonicERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118640 jmp     cs:_ZN2QT12QKeySequence8mnemonicERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT12QKeySequence8mnemonicERKNS_7QStringE
// Target address:  0x8D7BE8
// GOT/IAT slot:    0x8A2FC0
// Slot symbol:     _ZN2QT12QKeySequence8mnemonicERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QKeySequence *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT12QKeySequence8mnemonicERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QKeySequence8mnemonicERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT12QKeySequence8mnemonicERKNS_7QStringE(/* forwarded args */);
}

