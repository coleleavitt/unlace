// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112DD0
// Name:            ._ZN2QT11QHeaderView13resizeSectionEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112DD0 jmp     cs:_ZN2QT11QHeaderView13resizeSectionEii_ptr
//
// Resolved target: _ZN2QT11QHeaderView13resizeSectionEii
// Target address:  0x8D43A0
// GOT/IAT slot:    0x8A0388
// Slot symbol:     _ZN2QT11QHeaderView13resizeSectionEii_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView13resizeSectionEii(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView13resizeSectionEii via GOT/IAT indirection
    return _ZN2QT11QHeaderView13resizeSectionEii(/* forwarded args */);
}

