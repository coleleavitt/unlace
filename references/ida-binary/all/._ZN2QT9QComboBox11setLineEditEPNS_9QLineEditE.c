// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BB60
// Name:            ._ZN2QT9QComboBox11setLineEditEPNS_9QLineEditE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BB60 jmp     cs:_ZN2QT9QComboBox11setLineEditEPNS_9QLineEditE_ptr
//
// Resolved target: _ZN2QT9QComboBox11setLineEditEPNS_9QLineEditE
// Target address:  0x8D9D38
// GOT/IAT slot:    0x8A4A50
// Slot symbol:     _ZN2QT9QComboBox11setLineEditEPNS_9QLineEditE_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, QT::QLineEdit *)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox11setLineEditEPNS_9QLineEditE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox11setLineEditEPNS_9QLineEditE via GOT/IAT indirection
    return _ZN2QT9QComboBox11setLineEditEPNS_9QLineEditE(/* forwarded args */);
}

