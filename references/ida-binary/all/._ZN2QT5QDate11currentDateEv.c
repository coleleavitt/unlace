// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B150
// Name:            ._ZN2QT5QDate11currentDateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B150 jmp     cs:_ZN2QT5QDate11currentDateEv_ptr
//
// Resolved target: _ZN2QT5QDate11currentDateEv
// Target address:  0x8D96E8
// GOT/IAT slot:    0x8A4548
// Slot symbol:     _ZN2QT5QDate11currentDateEv_ptr
// Target type:     _QWORD(QT::QDate *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QDate11currentDateEv(/* see target signature */)
{
    // Tail-call to _ZN2QT5QDate11currentDateEv via GOT/IAT indirection
    return _ZN2QT5QDate11currentDateEv(/* forwarded args */);
}

