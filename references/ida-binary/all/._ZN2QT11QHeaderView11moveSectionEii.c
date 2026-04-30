// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111C40
// Name:            ._ZN2QT11QHeaderView11moveSectionEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111C40 jmp     cs:_ZN2QT11QHeaderView11moveSectionEii_ptr
//
// Resolved target: _ZN2QT11QHeaderView11moveSectionEii
// Target address:  0x8D3868
// GOT/IAT slot:    0x89FAC0
// Slot symbol:     _ZN2QT11QHeaderView11moveSectionEii_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView11moveSectionEii(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView11moveSectionEii via GOT/IAT indirection
    return _ZN2QT11QHeaderView11moveSectionEii(/* forwarded args */);
}

