// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118300
// Name:            ._ZN2QT11QHeaderView21setStretchLastSectionEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118300 jmp     cs:_ZN2QT11QHeaderView21setStretchLastSectionEb_ptr
//
// Resolved target: _ZN2QT11QHeaderView21setStretchLastSectionEb
// Target address:  0x8D79F0
// GOT/IAT slot:    0x8A2E20
// Slot symbol:     _ZN2QT11QHeaderView21setStretchLastSectionEb_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView21setStretchLastSectionEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView21setStretchLastSectionEb via GOT/IAT indirection
    return _ZN2QT11QHeaderView21setStretchLastSectionEb(/* forwarded args */);
}

