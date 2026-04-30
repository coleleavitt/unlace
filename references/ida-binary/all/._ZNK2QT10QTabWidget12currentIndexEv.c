// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114240
// Name:            ._ZNK2QT10QTabWidget12currentIndexEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114240 jmp     cs:_ZNK2QT10QTabWidget12currentIndexEv_ptr
//
// Resolved target: _ZNK2QT10QTabWidget12currentIndexEv
// Target address:  0x8D50B0
// GOT/IAT slot:    0x8A0DC0
// Slot symbol:     _ZNK2QT10QTabWidget12currentIndexEv_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTabWidget12currentIndexEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTabWidget12currentIndexEv via GOT/IAT indirection
    return _ZNK2QT10QTabWidget12currentIndexEv(/* forwarded args */);
}

