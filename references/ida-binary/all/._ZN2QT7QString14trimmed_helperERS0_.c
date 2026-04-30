// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115570
// Name:            ._ZN2QT7QString14trimmed_helperERS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115570 jmp     cs:_ZN2QT7QString14trimmed_helperERS0__ptr
//
// Resolved target: _ZN2QT7QString14trimmed_helperERS0_
// Target address:  0x8D5D38
// GOT/IAT slot:    0x8A1758
// Slot symbol:     _ZN2QT7QString14trimmed_helperERS0__ptr
// Target type:     _QWORD(QT::QString *__hidden this, QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QString14trimmed_helperERS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString14trimmed_helperERS0_ via GOT/IAT indirection
    return _ZN2QT7QString14trimmed_helperERS0_(/* forwarded args */);
}

