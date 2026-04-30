// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115480
// Name:            ._ZN2QT11QScrollAreaC2EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115480 jmp     cs:_ZN2QT11QScrollAreaC2EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT11QScrollAreaC2EPNS_7QWidgetE
// Target address:  0x8D5CA8
// GOT/IAT slot:    0x8A16E0
// Slot symbol:     _ZN2QT11QScrollAreaC2EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QScrollArea *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QScrollAreaC2EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QScrollAreaC2EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QScrollAreaC2EPNS_7QWidgetE(/* forwarded args */);
}

