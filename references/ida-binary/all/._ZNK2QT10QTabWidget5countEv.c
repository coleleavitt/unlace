// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AAE0
// Name:            ._ZNK2QT10QTabWidget5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AAE0 jmp     cs:_ZNK2QT10QTabWidget5countEv_ptr
//
// Resolved target: _ZNK2QT10QTabWidget5countEv
// Target address:  0x8D9318
// GOT/IAT slot:    0x8A4210
// Slot symbol:     _ZNK2QT10QTabWidget5countEv_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTabWidget5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTabWidget5countEv via GOT/IAT indirection
    return _ZNK2QT10QTabWidget5countEv(/* forwarded args */);
}

