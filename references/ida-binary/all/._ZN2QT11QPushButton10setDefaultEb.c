// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AFC0
// Name:            ._ZN2QT11QPushButton10setDefaultEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AFC0 jmp     cs:_ZN2QT11QPushButton10setDefaultEb_ptr
//
// Resolved target: _ZN2QT11QPushButton10setDefaultEb
// Target address:  0x8D9608
// GOT/IAT slot:    0x8A4480
// Slot symbol:     _ZN2QT11QPushButton10setDefaultEb_ptr
// Target type:     _QWORD(QT::QPushButton *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QPushButton10setDefaultEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QPushButton10setDefaultEb via GOT/IAT indirection
    return _ZN2QT11QPushButton10setDefaultEb(/* forwarded args */);
}

