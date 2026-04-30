// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118430
// Name:            ._ZN2QT12QApplicationC2ERiPPci
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118430 jmp     cs:_ZN2QT12QApplicationC2ERiPPci_ptr
//
// Resolved target: _ZN2QT12QApplicationC2ERiPPci
// Target address:  0x8D7A98
// GOT/IAT slot:    0x8A2EB8
// Slot symbol:     _ZN2QT12QApplicationC2ERiPPci_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this, int *, char **, int)
// ============================================================

/* see target sig */ ._ZN2QT12QApplicationC2ERiPPci(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplicationC2ERiPPci via GOT/IAT indirection
    return _ZN2QT12QApplicationC2ERiPPci(/* forwarded args */);
}

