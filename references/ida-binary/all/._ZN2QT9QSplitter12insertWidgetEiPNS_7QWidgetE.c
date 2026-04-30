// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115890
// Name:            ._ZN2QT9QSplitter12insertWidgetEiPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115890 jmp     cs:_ZN2QT9QSplitter12insertWidgetEiPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT9QSplitter12insertWidgetEiPNS_7QWidgetE
// Target address:  0x8D5F10
// GOT/IAT slot:    0x8A18E8
// Slot symbol:     _ZN2QT9QSplitter12insertWidgetEiPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this, int, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT9QSplitter12insertWidgetEiPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QSplitter12insertWidgetEiPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT9QSplitter12insertWidgetEiPNS_7QWidgetE(/* forwarded args */);
}

