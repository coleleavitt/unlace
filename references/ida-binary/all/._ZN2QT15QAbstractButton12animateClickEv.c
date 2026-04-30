// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112BA0
// Name:            ._ZN2QT15QAbstractButton12animateClickEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112BA0 jmp     cs:_ZN2QT15QAbstractButton12animateClickEv_ptr
//
// Resolved target: _ZN2QT15QAbstractButton12animateClickEv
// Target address:  0x8D4228
// GOT/IAT slot:    0x8A0270
// Slot symbol:     _ZN2QT15QAbstractButton12animateClickEv_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton12animateClickEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton12animateClickEv via GOT/IAT indirection
    return _ZN2QT15QAbstractButton12animateClickEv(/* forwarded args */);
}

