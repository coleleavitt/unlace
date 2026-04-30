// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C80
// Name:            ._ZN2QT6QLabel20setOpenExternalLinksEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C80 jmp     cs:_ZN2QT6QLabel20setOpenExternalLinksEb_ptr
//
// Resolved target: _ZN2QT6QLabel20setOpenExternalLinksEb
// Target address:  0x8D42D8
// GOT/IAT slot:    0x8A02E0
// Slot symbol:     _ZN2QT6QLabel20setOpenExternalLinksEb_ptr
// Target type:     _QWORD(QT::QLabel *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT6QLabel20setOpenExternalLinksEb(/* see target signature */)
{
    // Tail-call to _ZN2QT6QLabel20setOpenExternalLinksEb via GOT/IAT indirection
    return _ZN2QT6QLabel20setOpenExternalLinksEb(/* forwarded args */);
}

