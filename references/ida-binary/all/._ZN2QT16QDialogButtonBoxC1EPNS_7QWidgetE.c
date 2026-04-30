// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112770
// Name:            ._ZN2QT16QDialogButtonBoxC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112770 jmp     cs:_ZN2QT16QDialogButtonBoxC1EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT16QDialogButtonBoxC1EPNS_7QWidgetE
// Target address:  0x8D3FB8
// GOT/IAT slot:    0x8A0058
// Slot symbol:     _ZN2QT16QDialogButtonBoxC1EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QDialogButtonBox *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT16QDialogButtonBoxC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT16QDialogButtonBoxC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT16QDialogButtonBoxC1EPNS_7QWidgetE(/* forwarded args */);
}

