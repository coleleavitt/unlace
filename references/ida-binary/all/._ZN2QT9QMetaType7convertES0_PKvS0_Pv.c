// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119700
// Name:            ._ZN2QT9QMetaType7convertES0_PKvS0_Pv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119700 jmp     cs:_ZN2QT9QMetaType7convertES0_PKvS0_Pv_ptr
//
// Resolved target: _ZN2QT9QMetaType7convertES0_PKvS0_Pv
// Target address:  0x8D8688
// GOT/IAT slot:    0x8A3820
// Slot symbol:     _ZN2QT9QMetaType7convertES0_PKvS0_Pv_ptr
// Target type:     _QWORD __high(QT::QMetaType, const void *, QT::QMetaType, void *)
// ============================================================

/* see target sig */ ._ZN2QT9QMetaType7convertES0_PKvS0_Pv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QMetaType7convertES0_PKvS0_Pv via GOT/IAT indirection
    return _ZN2QT9QMetaType7convertES0_PKvS0_Pv(/* forwarded args */);
}

