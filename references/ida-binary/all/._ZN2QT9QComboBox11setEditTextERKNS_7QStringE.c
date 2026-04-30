// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1166C0
// Name:            ._ZN2QT9QComboBox11setEditTextERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1166C0 jmp     cs:_ZN2QT9QComboBox11setEditTextERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT9QComboBox11setEditTextERKNS_7QStringE
// Target address:  0x8D6800
// GOT/IAT slot:    0x8A2000
// Slot symbol:     _ZN2QT9QComboBox11setEditTextERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox11setEditTextERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox11setEditTextERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT9QComboBox11setEditTextERKNS_7QStringE(/* forwarded args */);
}

