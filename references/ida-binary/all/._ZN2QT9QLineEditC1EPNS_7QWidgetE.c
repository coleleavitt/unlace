// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119470
// Name:            ._ZN2QT9QLineEditC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119470 jmp     cs:_ZN2QT9QLineEditC1EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT9QLineEditC1EPNS_7QWidgetE
// Target address:  0x8D84A8
// GOT/IAT slot:    0x8A36D8
// Slot symbol:     _ZN2QT9QLineEditC1EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEditC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEditC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT9QLineEditC1EPNS_7QWidgetE(/* forwarded args */);
}

