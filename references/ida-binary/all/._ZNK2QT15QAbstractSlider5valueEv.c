// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112300
// Name:            ._ZNK2QT15QAbstractSlider5valueEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112300 jmp     cs:_ZNK2QT15QAbstractSlider5valueEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractSlider5valueEv
// Target address:  0x8D3CB0
// GOT/IAT slot:    0x89FE20
// Slot symbol:     _ZNK2QT15QAbstractSlider5valueEv_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractSlider5valueEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractSlider5valueEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractSlider5valueEv(/* forwarded args */);
}

