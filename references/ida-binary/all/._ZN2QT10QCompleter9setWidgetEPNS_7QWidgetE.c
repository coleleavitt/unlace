// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117770
// Name:            ._ZN2QT10QCompleter9setWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117770 jmp     cs:_ZN2QT10QCompleter9setWidgetEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT10QCompleter9setWidgetEPNS_7QWidgetE
// Target address:  0x8D72A8
// GOT/IAT slot:    0x8A2858
// Slot symbol:     _ZN2QT10QCompleter9setWidgetEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT10QCompleter9setWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT10QCompleter9setWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT10QCompleter9setWidgetEPNS_7QWidgetE(/* forwarded args */);
}

