// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x160A0
// Name:            ._ZN2QT7QStringaSERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x160A0 jmp     cs:off_4F038
//
// Resolved target: _ZN2QT7QStringaSERKS0_
// Target address:  0x4FE60
// GOT/IAT slot:    0x4F038
// Slot symbol:     off_4F038
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QStringaSERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QStringaSERKS0_ via GOT/IAT indirection
    return _ZN2QT7QStringaSERKS0_(/* forwarded args */);
}

