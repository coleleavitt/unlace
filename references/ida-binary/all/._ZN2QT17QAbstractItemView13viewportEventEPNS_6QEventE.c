// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B8E0
// Name:            ._ZN2QT17QAbstractItemView13viewportEventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B8E0 jmp     cs:_ZN2QT17QAbstractItemView13viewportEventEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT17QAbstractItemView13viewportEventEPNS_6QEventE
// Target address:  0x8D9BD0
// GOT/IAT slot:    0x8A4910
// Slot symbol:     _ZN2QT17QAbstractItemView13viewportEventEPNS_6QEventE_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this, QT::QEvent *)
// ============================================================

/* see target sig */ ._ZN2QT17QAbstractItemView13viewportEventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAbstractItemView13viewportEventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT17QAbstractItemView13viewportEventEPNS_6QEventE(/* forwarded args */);
}

