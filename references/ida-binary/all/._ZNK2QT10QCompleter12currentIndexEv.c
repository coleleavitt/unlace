// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119540
// Name:            ._ZNK2QT10QCompleter12currentIndexEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119540 jmp     cs:_ZNK2QT10QCompleter12currentIndexEv_ptr
//
// Resolved target: _ZNK2QT10QCompleter12currentIndexEv
// Target address:  0x8D8520
// GOT/IAT slot:    0x8A3740
// Slot symbol:     _ZNK2QT10QCompleter12currentIndexEv_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QCompleter12currentIndexEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QCompleter12currentIndexEv via GOT/IAT indirection
    return _ZNK2QT10QCompleter12currentIndexEv(/* forwarded args */);
}

