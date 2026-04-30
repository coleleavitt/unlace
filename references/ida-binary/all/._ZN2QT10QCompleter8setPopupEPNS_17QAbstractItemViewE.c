// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117220
// Name:            ._ZN2QT10QCompleter8setPopupEPNS_17QAbstractItemViewE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117220 jmp     cs:_ZN2QT10QCompleter8setPopupEPNS_17QAbstractItemViewE_ptr
//
// Resolved target: _ZN2QT10QCompleter8setPopupEPNS_17QAbstractItemViewE
// Target address:  0x8D6F40
// GOT/IAT slot:    0x8A25B0
// Slot symbol:     _ZN2QT10QCompleter8setPopupEPNS_17QAbstractItemViewE_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this, QT::QAbstractItemView *)
// ============================================================

/* see target sig */ ._ZN2QT10QCompleter8setPopupEPNS_17QAbstractItemViewE(/* see target signature */)
{
    // Tail-call to _ZN2QT10QCompleter8setPopupEPNS_17QAbstractItemViewE via GOT/IAT indirection
    return _ZN2QT10QCompleter8setPopupEPNS_17QAbstractItemViewE(/* forwarded args */);
}

