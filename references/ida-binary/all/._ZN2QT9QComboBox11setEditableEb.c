// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B350
// Name:            ._ZN2QT9QComboBox11setEditableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B350 jmp     cs:_ZN2QT9QComboBox11setEditableEb_ptr
//
// Resolved target: _ZN2QT9QComboBox11setEditableEb
// Target address:  0x8D9830
// GOT/IAT slot:    0x8A4648
// Slot symbol:     _ZN2QT9QComboBox11setEditableEb_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox11setEditableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox11setEditableEb via GOT/IAT indirection
    return _ZN2QT9QComboBox11setEditableEb(/* forwarded args */);
}

