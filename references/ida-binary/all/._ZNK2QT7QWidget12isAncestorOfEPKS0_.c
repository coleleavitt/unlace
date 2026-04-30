// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113690
// Name:            ._ZNK2QT7QWidget12isAncestorOfEPKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113690 jmp     cs:_ZNK2QT7QWidget12isAncestorOfEPKS0__ptr
//
// Resolved target: _ZNK2QT7QWidget12isAncestorOfEPKS0_
// Target address:  0x8D4950
// GOT/IAT slot:    0x8A07E8
// Slot symbol:     _ZNK2QT7QWidget12isAncestorOfEPKS0__ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, const QT::QWidget *)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget12isAncestorOfEPKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget12isAncestorOfEPKS0_ via GOT/IAT indirection
    return _ZNK2QT7QWidget12isAncestorOfEPKS0_(/* forwarded args */);
}

