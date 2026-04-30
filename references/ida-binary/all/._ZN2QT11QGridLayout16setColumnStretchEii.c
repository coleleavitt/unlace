// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117CA0
// Name:            ._ZN2QT11QGridLayout16setColumnStretchEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117CA0 jmp     cs:_ZN2QT11QGridLayout16setColumnStretchEii_ptr
//
// Resolved target: _ZN2QT11QGridLayout16setColumnStretchEii
// Target address:  0x8D75D8
// GOT/IAT slot:    0x8A2AF0
// Slot symbol:     _ZN2QT11QGridLayout16setColumnStretchEii_ptr
// Target type:     _QWORD(QT::QGridLayout *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT11QGridLayout16setColumnStretchEii(/* see target signature */)
{
    // Tail-call to _ZN2QT11QGridLayout16setColumnStretchEii via GOT/IAT indirection
    return _ZN2QT11QGridLayout16setColumnStretchEii(/* forwarded args */);
}

