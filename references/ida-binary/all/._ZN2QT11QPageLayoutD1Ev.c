// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118C00
// Name:            ._ZN2QT11QPageLayoutD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118C00 jmp     cs:_ZN2QT11QPageLayoutD1Ev_ptr
//
// Resolved target: _ZN2QT11QPageLayoutD1Ev
// Target address:  0x8D7F48
// GOT/IAT slot:    0x8A32A0
// Slot symbol:     _ZN2QT11QPageLayoutD1Ev_ptr
// Target type:     void(QT::QPageLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QPageLayoutD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QPageLayoutD1Ev via GOT/IAT indirection
    return _ZN2QT11QPageLayoutD1Ev(/* forwarded args */);
}

