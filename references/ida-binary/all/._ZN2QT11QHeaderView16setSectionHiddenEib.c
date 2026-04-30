// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112710
// Name:            ._ZN2QT11QHeaderView16setSectionHiddenEib
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112710 jmp     cs:_ZN2QT11QHeaderView16setSectionHiddenEib_ptr
//
// Resolved target: _ZN2QT11QHeaderView16setSectionHiddenEib
// Target address:  0x8D3F60
// GOT/IAT slot:    0x8A0028
// Slot symbol:     _ZN2QT11QHeaderView16setSectionHiddenEib_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView16setSectionHiddenEib(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView16setSectionHiddenEib via GOT/IAT indirection
    return _ZN2QT11QHeaderView16setSectionHiddenEib(/* forwarded args */);
}

