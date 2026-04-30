// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1179E0
// Name:            ._ZNK2QT10QTabWidget12isTabVisibleEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1179E0 jmp     cs:_ZNK2QT10QTabWidget12isTabVisibleEi_ptr
//
// Resolved target: _ZNK2QT10QTabWidget12isTabVisibleEi
// Target address:  0x8D7428
// GOT/IAT slot:    0x8A2990
// Slot symbol:     _ZNK2QT10QTabWidget12isTabVisibleEi_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT10QTabWidget12isTabVisibleEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTabWidget12isTabVisibleEi via GOT/IAT indirection
    return _ZNK2QT10QTabWidget12isTabVisibleEi(/* forwarded args */);
}

