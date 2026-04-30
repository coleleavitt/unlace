// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113150
// Name:            ._ZNK2QT10QTabWidget12isTabEnabledEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113150 jmp     cs:_ZNK2QT10QTabWidget12isTabEnabledEi_ptr
//
// Resolved target: _ZNK2QT10QTabWidget12isTabEnabledEi
// Target address:  0x8D45F0
// GOT/IAT slot:    0x8A0548
// Slot symbol:     _ZNK2QT10QTabWidget12isTabEnabledEi_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT10QTabWidget12isTabEnabledEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTabWidget12isTabEnabledEi via GOT/IAT indirection
    return _ZNK2QT10QTabWidget12isTabEnabledEi(/* forwarded args */);
}

