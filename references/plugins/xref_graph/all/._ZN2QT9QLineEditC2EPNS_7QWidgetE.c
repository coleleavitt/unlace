// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17120
// Name:            ._ZN2QT9QLineEditC2EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17120 jmp     cs:off_4F878
//
// Resolved target: _ZN2QT9QLineEditC2EPNS_7QWidgetE
// Target address:  0x50D28
// GOT/IAT slot:    0x4F878
// Slot symbol:     off_4F878
// Target type:     _QWORD(QT::QLineEdit *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEditC2EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEditC2EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT9QLineEditC2EPNS_7QWidgetE(/* forwarded args */);
}

