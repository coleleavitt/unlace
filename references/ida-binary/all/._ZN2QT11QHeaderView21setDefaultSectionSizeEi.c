// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114990
// Name:            ._ZN2QT11QHeaderView21setDefaultSectionSizeEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114990 jmp     cs:_ZN2QT11QHeaderView21setDefaultSectionSizeEi_ptr
//
// Resolved target: _ZN2QT11QHeaderView21setDefaultSectionSizeEi
// Target address:  0x8D55C0
// GOT/IAT slot:    0x8A1168
// Slot symbol:     _ZN2QT11QHeaderView21setDefaultSectionSizeEi_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView21setDefaultSectionSizeEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView21setDefaultSectionSizeEi via GOT/IAT indirection
    return _ZN2QT11QHeaderView21setDefaultSectionSizeEi(/* forwarded args */);
}

