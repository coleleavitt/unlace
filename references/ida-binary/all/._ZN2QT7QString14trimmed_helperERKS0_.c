// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160A0
// Name:            ._ZN2QT7QString14trimmed_helperERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160A0 jmp     cs:_ZN2QT7QString14trimmed_helperERKS0__ptr
//
// Resolved target: _ZN2QT7QString14trimmed_helperERKS0_
// Target address:  0x8D6448
// GOT/IAT slot:    0x8A1CF0
// Slot symbol:     _ZN2QT7QString14trimmed_helperERKS0__ptr
// Target type:     _QWORD(QT::QString *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QString14trimmed_helperERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString14trimmed_helperERKS0_ via GOT/IAT indirection
    return _ZN2QT7QString14trimmed_helperERKS0_(/* forwarded args */);
}

