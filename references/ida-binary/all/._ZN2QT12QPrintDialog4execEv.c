// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1169F0
// Name:            ._ZN2QT12QPrintDialog4execEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1169F0 jmp     cs:_ZN2QT12QPrintDialog4execEv_ptr
//
// Resolved target: _ZN2QT12QPrintDialog4execEv
// Target address:  0x8D6A20
// GOT/IAT slot:    0x8A2198
// Slot symbol:     _ZN2QT12QPrintDialog4execEv_ptr
// Target type:     _QWORD(QT::QPrintDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QPrintDialog4execEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPrintDialog4execEv via GOT/IAT indirection
    return _ZN2QT12QPrintDialog4execEv(/* forwarded args */);
}

