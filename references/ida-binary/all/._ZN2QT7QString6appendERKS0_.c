// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1186B0
// Name:            ._ZN2QT7QString6appendERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1186B0 jmp     cs:_ZN2QT7QString6appendERKS0__ptr
//
// Resolved target: _ZN2QT7QString6appendERKS0_
// Target address:  0x8D7C20
// GOT/IAT slot:    0x8A2FF8
// Slot symbol:     _ZN2QT7QString6appendERKS0__ptr
// Target type:     _QWORD(QT::QString *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QString6appendERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6appendERKS0_ via GOT/IAT indirection
    return _ZN2QT7QString6appendERKS0_(/* forwarded args */);
}

