// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116FD0
// Name:            ._ZN2QT10QByteArrayaSERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116FD0 jmp     cs:_ZN2QT10QByteArrayaSERKS0__ptr
//
// Resolved target: _ZN2QT10QByteArrayaSERKS0_
// Target address:  0x8D6DB0
// GOT/IAT slot:    0x8A2488
// Slot symbol:     _ZN2QT10QByteArrayaSERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT10QByteArrayaSERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT10QByteArrayaSERKS0_ via GOT/IAT indirection
    return _ZN2QT10QByteArrayaSERKS0_(/* forwarded args */);
}

