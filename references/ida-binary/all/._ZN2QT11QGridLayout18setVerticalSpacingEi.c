// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111C70
// Name:            ._ZN2QT11QGridLayout18setVerticalSpacingEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111C70 jmp     cs:_ZN2QT11QGridLayout18setVerticalSpacingEi_ptr
//
// Resolved target: _ZN2QT11QGridLayout18setVerticalSpacingEi
// Target address:  0x8D3890
// GOT/IAT slot:    0x89FAD8
// Slot symbol:     _ZN2QT11QGridLayout18setVerticalSpacingEi_ptr
// Target type:     _QWORD(QT::QGridLayout *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT11QGridLayout18setVerticalSpacingEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QGridLayout18setVerticalSpacingEi via GOT/IAT indirection
    return _ZN2QT11QGridLayout18setVerticalSpacingEi(/* forwarded args */);
}

