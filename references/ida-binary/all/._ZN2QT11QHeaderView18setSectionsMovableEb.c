// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119EB0
// Name:            ._ZN2QT11QHeaderView18setSectionsMovableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119EB0 jmp     cs:_ZN2QT11QHeaderView18setSectionsMovableEb_ptr
//
// Resolved target: _ZN2QT11QHeaderView18setSectionsMovableEb
// Target address:  0x8D8B30
// GOT/IAT slot:    0x8A3BF8
// Slot symbol:     _ZN2QT11QHeaderView18setSectionsMovableEb_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView18setSectionsMovableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView18setSectionsMovableEb via GOT/IAT indirection
    return _ZN2QT11QHeaderView18setSectionsMovableEb(/* forwarded args */);
}

