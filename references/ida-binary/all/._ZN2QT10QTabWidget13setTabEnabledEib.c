// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB30
// Name:            ._ZN2QT10QTabWidget13setTabEnabledEib
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB30 jmp     cs:_ZN2QT10QTabWidget13setTabEnabledEib_ptr
//
// Resolved target: _ZN2QT10QTabWidget13setTabEnabledEib
// Target address:  0x8D9340
// GOT/IAT slot:    0x8A4238
// Slot symbol:     _ZN2QT10QTabWidget13setTabEnabledEib_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this, int, bool)
// ============================================================

/* see target sig */ ._ZN2QT10QTabWidget13setTabEnabledEib(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTabWidget13setTabEnabledEib via GOT/IAT indirection
    return _ZN2QT10QTabWidget13setTabEnabledEib(/* forwarded args */);
}

