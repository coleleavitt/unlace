// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C90
// Name:            ._ZN2QT6QBrush8setColorERKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C90 jmp     cs:_ZN2QT6QBrush8setColorERKNS_6QColorE_ptr
//
// Resolved target: _ZN2QT6QBrush8setColorERKNS_6QColorE
// Target address:  0x8D75D0
// GOT/IAT slot:    0x8A2AE8
// Slot symbol:     _ZN2QT6QBrush8setColorERKNS_6QColorE_ptr
// Target type:     _QWORD(QT::QBrush *__hidden this, const QT::QColor *)
// ============================================================

/* see target sig */ ._ZN2QT6QBrush8setColorERKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QT6QBrush8setColorERKNS_6QColorE via GOT/IAT indirection
    return _ZN2QT6QBrush8setColorERKNS_6QColorE(/* forwarded args */);
}

