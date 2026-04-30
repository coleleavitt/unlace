// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A560
// Name:            ._ZN2QT11QHeaderView26setCascadingSectionResizesEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A560 jmp     cs:_ZN2QT11QHeaderView26setCascadingSectionResizesEb_ptr
//
// Resolved target: _ZN2QT11QHeaderView26setCascadingSectionResizesEb
// Target address:  0x8D8F78
// GOT/IAT slot:    0x8A3F50
// Slot symbol:     _ZN2QT11QHeaderView26setCascadingSectionResizesEb_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView26setCascadingSectionResizesEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView26setCascadingSectionResizesEb via GOT/IAT indirection
    return _ZN2QT11QHeaderView26setCascadingSectionResizesEb(/* forwarded args */);
}

