// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116A30
// Name:            ._ZN2QT9QLineEdit12setSelectionEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116A30 jmp     cs:_ZN2QT9QLineEdit12setSelectionEii_ptr
//
// Resolved target: _ZN2QT9QLineEdit12setSelectionEii
// Target address:  0x8D6A40
// GOT/IAT slot:    0x8A21B8
// Slot symbol:     _ZN2QT9QLineEdit12setSelectionEii_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit12setSelectionEii(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit12setSelectionEii via GOT/IAT indirection
    return _ZN2QT9QLineEdit12setSelectionEii(/* forwarded args */);
}

