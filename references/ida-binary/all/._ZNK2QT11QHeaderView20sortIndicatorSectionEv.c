// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117AE0
// Name:            ._ZNK2QT11QHeaderView20sortIndicatorSectionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117AE0 jmp     cs:_ZNK2QT11QHeaderView20sortIndicatorSectionEv_ptr
//
// Resolved target: _ZNK2QT11QHeaderView20sortIndicatorSectionEv
// Target address:  0x8D74B8
// GOT/IAT slot:    0x8A2A10
// Slot symbol:     _ZNK2QT11QHeaderView20sortIndicatorSectionEv_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView20sortIndicatorSectionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView20sortIndicatorSectionEv via GOT/IAT indirection
    return _ZNK2QT11QHeaderView20sortIndicatorSectionEv(/* forwarded args */);
}

