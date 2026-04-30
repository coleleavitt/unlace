// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0A0
// Name:            ._ZNK2QT10QTabWidget13currentWidgetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0A0 jmp     cs:_ZNK2QT10QTabWidget13currentWidgetEv_ptr
//
// Resolved target: _ZNK2QT10QTabWidget13currentWidgetEv
// Target address:  0x8D8C88
// GOT/IAT slot:    0x8A3CF0
// Slot symbol:     _ZNK2QT10QTabWidget13currentWidgetEv_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTabWidget13currentWidgetEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTabWidget13currentWidgetEv via GOT/IAT indirection
    return _ZNK2QT10QTabWidget13currentWidgetEv(/* forwarded args */);
}

