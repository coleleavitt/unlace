// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1125D0
// Name:            ._ZN2QT10QTabWidget15setCurrentIndexEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1125D0 jmp     cs:_ZN2QT10QTabWidget15setCurrentIndexEi_ptr
//
// Resolved target: _ZN2QT10QTabWidget15setCurrentIndexEi
// Target address:  0x8D3E98
// GOT/IAT slot:    0x89FF88
// Slot symbol:     _ZN2QT10QTabWidget15setCurrentIndexEi_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT10QTabWidget15setCurrentIndexEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTabWidget15setCurrentIndexEi via GOT/IAT indirection
    return _ZN2QT10QTabWidget15setCurrentIndexEi(/* forwarded args */);
}

