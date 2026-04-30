// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1113F0
// Name:            ._ZNK2QT15QAbstractSlider7maximumEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1113F0 jmp     cs:_ZNK2QT15QAbstractSlider7maximumEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractSlider7maximumEv
// Target address:  0x8D32F8
// GOT/IAT slot:    0x89F698
// Slot symbol:     _ZNK2QT15QAbstractSlider7maximumEv_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractSlider7maximumEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractSlider7maximumEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractSlider7maximumEv(/* forwarded args */);
}

