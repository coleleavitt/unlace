// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116540
// Name:            ._ZN2QT11QHeaderView21setMinimumSectionSizeEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116540 jmp     cs:_ZN2QT11QHeaderView21setMinimumSectionSizeEi_ptr
//
// Resolved target: _ZN2QT11QHeaderView21setMinimumSectionSizeEi
// Target address:  0x8D6708
// GOT/IAT slot:    0x8A1F40
// Slot symbol:     _ZN2QT11QHeaderView21setMinimumSectionSizeEi_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView21setMinimumSectionSizeEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView21setMinimumSectionSizeEi via GOT/IAT indirection
    return _ZN2QT11QHeaderView21setMinimumSectionSizeEi(/* forwarded args */);
}

