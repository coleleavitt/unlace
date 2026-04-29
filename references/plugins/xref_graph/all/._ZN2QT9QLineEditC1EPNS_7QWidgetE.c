// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x170E0
// Name:            ._ZN2QT9QLineEditC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x170E0 jmp     cs:off_4F858
//
// Resolved target: _ZN2QT9QLineEditC1EPNS_7QWidgetE
// Target address:  0x50CE0
// GOT/IAT slot:    0x4F858
// Slot symbol:     off_4F858
// Target type:     _QWORD(QT::QLineEdit *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEditC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEditC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT9QLineEditC1EPNS_7QWidgetE(/* forwarded args */);
}

