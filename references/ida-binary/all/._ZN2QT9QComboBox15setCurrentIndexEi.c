// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C40
// Name:            ._ZN2QT9QComboBox15setCurrentIndexEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C40 jmp     cs:_ZN2QT9QComboBox15setCurrentIndexEi_ptr
//
// Resolved target: _ZN2QT9QComboBox15setCurrentIndexEi
// Target address:  0x8D6B88
// GOT/IAT slot:    0x8A22C0
// Slot symbol:     _ZN2QT9QComboBox15setCurrentIndexEi_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox15setCurrentIndexEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox15setCurrentIndexEi via GOT/IAT indirection
    return _ZN2QT9QComboBox15setCurrentIndexEi(/* forwarded args */);
}

