// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112E40
// Name:            ._ZNK2QT9QSplitter7indexOfEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112E40 jmp     cs:_ZNK2QT9QSplitter7indexOfEPNS_7QWidgetE_ptr
//
// Resolved target: _ZNK2QT9QSplitter7indexOfEPNS_7QWidgetE
// Target address:  0x8D43E8
// GOT/IAT slot:    0x8A03C0
// Slot symbol:     _ZNK2QT9QSplitter7indexOfEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZNK2QT9QSplitter7indexOfEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QSplitter7indexOfEPNS_7QWidgetE via GOT/IAT indirection
    return _ZNK2QT9QSplitter7indexOfEPNS_7QWidgetE(/* forwarded args */);
}

