// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1189C0
// Name:            ._ZN2QT7QString7replaceExxRKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1189C0 jmp     cs:_ZN2QT7QString7replaceExxRKS0__ptr
//
// Resolved target: _ZN2QT7QString7replaceExxRKS0_
// Target address:  0x8D7E00
// GOT/IAT slot:    0x8A3180
// Slot symbol:     _ZN2QT7QString7replaceExxRKS0__ptr
// Target type:     _QWORD(QT::QString *__hidden this, __int64, __int64, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QString7replaceExxRKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString7replaceExxRKS0_ via GOT/IAT indirection
    return _ZN2QT7QString7replaceExxRKS0_(/* forwarded args */);
}

