// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1187D0
// Name:            ._ZNK2QT10QCompleter6widgetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1187D0 jmp     cs:_ZNK2QT10QCompleter6widgetEv_ptr
//
// Resolved target: _ZNK2QT10QCompleter6widgetEv
// Target address:  0x8D7CD0
// GOT/IAT slot:    0x8A3088
// Slot symbol:     _ZNK2QT10QCompleter6widgetEv_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QCompleter6widgetEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QCompleter6widgetEv via GOT/IAT indirection
    return _ZNK2QT10QCompleter6widgetEv(/* forwarded args */);
}

