// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B60
// Name:            ._ZNK2QT14QStackedWidget7indexOfEPKNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B60 jmp     cs:_ZNK2QT14QStackedWidget7indexOfEPKNS_7QWidgetE_ptr
//
// Resolved target: _ZNK2QT14QStackedWidget7indexOfEPKNS_7QWidgetE
// Target address:  0x8D60F0
// GOT/IAT slot:    0x8A1A50
// Slot symbol:     _ZNK2QT14QStackedWidget7indexOfEPKNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QStackedWidget *__hidden this, const QT::QWidget *)
// ============================================================

/* see target sig */ ._ZNK2QT14QStackedWidget7indexOfEPKNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QStackedWidget7indexOfEPKNS_7QWidgetE via GOT/IAT indirection
    return _ZNK2QT14QStackedWidget7indexOfEPKNS_7QWidgetE(/* forwarded args */);
}

