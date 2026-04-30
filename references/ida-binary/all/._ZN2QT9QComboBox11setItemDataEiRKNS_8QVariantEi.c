// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1189A0
// Name:            ._ZN2QT9QComboBox11setItemDataEiRKNS_8QVariantEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1189A0 jmp     cs:_ZN2QT9QComboBox11setItemDataEiRKNS_8QVariantEi_ptr
//
// Resolved target: _ZN2QT9QComboBox11setItemDataEiRKNS_8QVariantEi
// Target address:  0x8D7DE8
// GOT/IAT slot:    0x8A3170
// Slot symbol:     _ZN2QT9QComboBox11setItemDataEiRKNS_8QVariantEi_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, int, const QT::QVariant *, int)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox11setItemDataEiRKNS_8QVariantEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox11setItemDataEiRKNS_8QVariantEi via GOT/IAT indirection
    return _ZN2QT9QComboBox11setItemDataEiRKNS_8QVariantEi(/* forwarded args */);
}

