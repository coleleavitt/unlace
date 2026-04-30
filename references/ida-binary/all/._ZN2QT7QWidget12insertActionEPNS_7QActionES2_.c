// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112570
// Name:            ._ZN2QT7QWidget12insertActionEPNS_7QActionES2_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112570 jmp     cs:_ZN2QT7QWidget12insertActionEPNS_7QActionES2__ptr
//
// Resolved target: _ZN2QT7QWidget12insertActionEPNS_7QActionES2_
// Target address:  0x8D3E58
// GOT/IAT slot:    0x89FF58
// Slot symbol:     _ZN2QT7QWidget12insertActionEPNS_7QActionES2__ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QAction *, QT::QAction *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget12insertActionEPNS_7QActionES2_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget12insertActionEPNS_7QActionES2_ via GOT/IAT indirection
    return _ZN2QT7QWidget12insertActionEPNS_7QActionES2_(/* forwarded args */);
}

