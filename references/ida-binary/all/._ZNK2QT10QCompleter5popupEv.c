// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118B90
// Name:            ._ZNK2QT10QCompleter5popupEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118B90 jmp     cs:_ZNK2QT10QCompleter5popupEv_ptr
//
// Resolved target: _ZNK2QT10QCompleter5popupEv
// Target address:  0x8D7F10
// GOT/IAT slot:    0x8A3268
// Slot symbol:     _ZNK2QT10QCompleter5popupEv_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QCompleter5popupEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QCompleter5popupEv via GOT/IAT indirection
    return _ZNK2QT10QCompleter5popupEv(/* forwarded args */);
}

