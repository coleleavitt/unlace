// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114380
// Name:            ._ZN2QT17QAbstractItemView15setItemDelegateEPNS_21QAbstractItemDelegateE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114380 jmp     cs:_ZN2QT17QAbstractItemView15setItemDelegateEPNS_21QAbstractItemDelegateE_ptr
//
// Resolved target: _ZN2QT17QAbstractItemView15setItemDelegateEPNS_21QAbstractItemDelegateE
// Target address:  0x8D5190
// GOT/IAT slot:    0x8A0E60
// Slot symbol:     _ZN2QT17QAbstractItemView15setItemDelegateEPNS_21QAbstractItemDelegateE_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this, QT::QAbstractItemDelegate *)
// ============================================================

/* see target sig */ ._ZN2QT17QAbstractItemView15setItemDelegateEPNS_21QAbstractItemDelegateE(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAbstractItemView15setItemDelegateEPNS_21QAbstractItemDelegateE via GOT/IAT indirection
    return _ZN2QT17QAbstractItemView15setItemDelegateEPNS_21QAbstractItemDelegateE(/* forwarded args */);
}

