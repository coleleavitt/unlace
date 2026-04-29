// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17460
// Name:            ._ZNK2QT6QColor7getHsvFEPfS1_S1_S1_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17460 jmp     cs:off_4FA18
//
// Resolved target: _ZNK2QT6QColor7getHsvFEPfS1_S1_S1_
// Target address:  0x50FF0
// GOT/IAT slot:    0x4FA18
// Slot symbol:     off_4FA18
// Target type:     _QWORD(QT::QColor *__hidden this, float *, float *, float *, float *)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor7getHsvFEPfS1_S1_S1_(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor7getHsvFEPfS1_S1_S1_ via GOT/IAT indirection
    return _ZNK2QT6QColor7getHsvFEPfS1_S1_S1_(/* forwarded args */);
}

