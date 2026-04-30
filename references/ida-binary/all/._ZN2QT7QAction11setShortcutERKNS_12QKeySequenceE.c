// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0D0
// Name:            ._ZN2QT7QAction11setShortcutERKNS_12QKeySequenceE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0D0 jmp     cs:_ZN2QT7QAction11setShortcutERKNS_12QKeySequenceE_ptr
//
// Resolved target: _ZN2QT7QAction11setShortcutERKNS_12QKeySequenceE
// Target address:  0x8D96A0
// GOT/IAT slot:    0x8A4508
// Slot symbol:     _ZN2QT7QAction11setShortcutERKNS_12QKeySequenceE_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, const QT::QKeySequence *)
// ============================================================

/* see target sig */ ._ZN2QT7QAction11setShortcutERKNS_12QKeySequenceE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction11setShortcutERKNS_12QKeySequenceE via GOT/IAT indirection
    return _ZN2QT7QAction11setShortcutERKNS_12QKeySequenceE(/* forwarded args */);
}

