// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA70
// Name:            ._ZN2QT16QKeySequenceEditC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA70 jmp     cs:_ZN2QT16QKeySequenceEditC1EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT16QKeySequenceEditC1EPNS_7QWidgetE
// Target address:  0x8D9CC0
// GOT/IAT slot:    0x8A49D8
// Slot symbol:     _ZN2QT16QKeySequenceEditC1EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QKeySequenceEdit *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT16QKeySequenceEditC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT16QKeySequenceEditC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT16QKeySequenceEditC1EPNS_7QWidgetE(/* forwarded args */);
}

