// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113B10
// Name:            ._ZNK2QT15QAbstractSlider7minimumEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113B10 jmp     cs:_ZNK2QT15QAbstractSlider7minimumEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractSlider7minimumEv
// Target address:  0x8D4C30
// GOT/IAT slot:    0x8A0A28
// Slot symbol:     _ZNK2QT15QAbstractSlider7minimumEv_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractSlider7minimumEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractSlider7minimumEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractSlider7minimumEv(/* forwarded args */);
}

