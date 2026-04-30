// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1123B0
// Name:            ._ZN2QT11QGridLayout13setRowStretchEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1123B0 jmp     cs:_ZN2QT11QGridLayout13setRowStretchEii_ptr
//
// Resolved target: _ZN2QT11QGridLayout13setRowStretchEii
// Target address:  0x8D3D20
// GOT/IAT slot:    0x89FE78
// Slot symbol:     _ZN2QT11QGridLayout13setRowStretchEii_ptr
// Target type:     _QWORD(QT::QGridLayout *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT11QGridLayout13setRowStretchEii(/* see target signature */)
{
    // Tail-call to _ZN2QT11QGridLayout13setRowStretchEii via GOT/IAT indirection
    return _ZN2QT11QGridLayout13setRowStretchEii(/* forwarded args */);
}

