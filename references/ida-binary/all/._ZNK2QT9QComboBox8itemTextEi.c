// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111580
// Name:            ._ZNK2QT9QComboBox8itemTextEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111580 jmp     cs:_ZNK2QT9QComboBox8itemTextEi_ptr
//
// Resolved target: _ZNK2QT9QComboBox8itemTextEi
// Target address:  0x8D3418
// GOT/IAT slot:    0x89F760
// Slot symbol:     _ZNK2QT9QComboBox8itemTextEi_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox8itemTextEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox8itemTextEi via GOT/IAT indirection
    return _ZNK2QT9QComboBox8itemTextEi(/* forwarded args */);
}

