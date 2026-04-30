// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113DC0
// Name:            ._ZN2QT11QGridLayout20setHorizontalSpacingEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113DC0 jmp     cs:_ZN2QT11QGridLayout20setHorizontalSpacingEi_ptr
//
// Resolved target: _ZN2QT11QGridLayout20setHorizontalSpacingEi
// Target address:  0x8D4E00
// GOT/IAT slot:    0x8A0B80
// Slot symbol:     _ZN2QT11QGridLayout20setHorizontalSpacingEi_ptr
// Target type:     _QWORD(QT::QGridLayout *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT11QGridLayout20setHorizontalSpacingEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QGridLayout20setHorizontalSpacingEi via GOT/IAT indirection
    return _ZN2QT11QGridLayout20setHorizontalSpacingEi(/* forwarded args */);
}

