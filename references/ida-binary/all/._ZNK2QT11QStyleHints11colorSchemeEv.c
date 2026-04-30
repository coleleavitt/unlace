// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119DD0
// Name:            ._ZNK2QT11QStyleHints11colorSchemeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119DD0 jmp     cs:_ZNK2QT11QStyleHints11colorSchemeEv_ptr
//
// Resolved target: _ZNK2QT11QStyleHints11colorSchemeEv
// Target address:  0x8D8A88
// GOT/IAT slot:    0x8A3B88
// Slot symbol:     _ZNK2QT11QStyleHints11colorSchemeEv_ptr
// Target type:     _QWORD(QT::QStyleHints *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QStyleHints11colorSchemeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QStyleHints11colorSchemeEv via GOT/IAT indirection
    return _ZNK2QT11QStyleHints11colorSchemeEv(/* forwarded args */);
}

