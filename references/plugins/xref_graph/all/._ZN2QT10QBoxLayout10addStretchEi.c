// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x173F0
// Name:            ._ZN2QT10QBoxLayout10addStretchEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x173F0 jmp     cs:off_4F9E0
//
// Resolved target: _ZN2QT10QBoxLayout10addStretchEi
// Target address:  0x50FA8
// GOT/IAT slot:    0x4F9E0
// Slot symbol:     off_4F9E0
// Target type:     _QWORD(QT::QBoxLayout *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT10QBoxLayout10addStretchEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QBoxLayout10addStretchEi via GOT/IAT indirection
    return _ZN2QT10QBoxLayout10addStretchEi(/* forwarded args */);
}

