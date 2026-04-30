// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118020
// Name:            ._ZNK2QT11QScrollArea6widgetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118020 jmp     cs:_ZNK2QT11QScrollArea6widgetEv_ptr
//
// Resolved target: _ZNK2QT11QScrollArea6widgetEv
// Target address:  0x8D7838
// GOT/IAT slot:    0x8A2CB0
// Slot symbol:     _ZNK2QT11QScrollArea6widgetEv_ptr
// Target type:     _QWORD(QT::QScrollArea *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QScrollArea6widgetEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QScrollArea6widgetEv via GOT/IAT indirection
    return _ZNK2QT11QScrollArea6widgetEv(/* forwarded args */);
}

