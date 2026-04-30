// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116F40
// Name:            ._ZN2QT7QWidget4hideEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116F40 jmp     cs:_ZN2QT7QWidget4hideEv_ptr
//
// Resolved target: _ZN2QT7QWidget4hideEv
// Target address:  0x8D6D58
// GOT/IAT slot:    0x8A2440
// Slot symbol:     _ZN2QT7QWidget4hideEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget4hideEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget4hideEv via GOT/IAT indirection
    return _ZN2QT7QWidget4hideEv(/* forwarded args */);
}

