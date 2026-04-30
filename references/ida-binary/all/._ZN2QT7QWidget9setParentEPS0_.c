// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112F60
// Name:            ._ZN2QT7QWidget9setParentEPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112F60 jmp     cs:_ZN2QT7QWidget9setParentEPS0__ptr
//
// Resolved target: _ZN2QT7QWidget9setParentEPS0_
// Target address:  0x8D44C0
// GOT/IAT slot:    0x8A0450
// Slot symbol:     _ZN2QT7QWidget9setParentEPS0__ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget9setParentEPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget9setParentEPS0_ via GOT/IAT indirection
    return _ZN2QT7QWidget9setParentEPS0_(/* forwarded args */);
}

