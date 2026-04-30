// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1134A0
// Name:            ._ZN2QT10QTabWidget13setTabVisibleEib
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1134A0 jmp     cs:_ZN2QT10QTabWidget13setTabVisibleEib_ptr
//
// Resolved target: _ZN2QT10QTabWidget13setTabVisibleEib
// Target address:  0x8D4828
// GOT/IAT slot:    0x8A06F0
// Slot symbol:     _ZN2QT10QTabWidget13setTabVisibleEib_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this, int, bool)
// ============================================================

/* see target sig */ ._ZN2QT10QTabWidget13setTabVisibleEib(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTabWidget13setTabVisibleEib via GOT/IAT indirection
    return _ZN2QT10QTabWidget13setTabVisibleEib(/* forwarded args */);
}

