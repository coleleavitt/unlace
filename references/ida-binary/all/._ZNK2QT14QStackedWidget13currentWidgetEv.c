// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111950
// Name:            ._ZNK2QT14QStackedWidget13currentWidgetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111950 jmp     cs:_ZNK2QT14QStackedWidget13currentWidgetEv_ptr
//
// Resolved target: _ZNK2QT14QStackedWidget13currentWidgetEv
// Target address:  0x8D3690
// GOT/IAT slot:    0x89F948
// Slot symbol:     _ZNK2QT14QStackedWidget13currentWidgetEv_ptr
// Target type:     _QWORD(QT::QStackedWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QStackedWidget13currentWidgetEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QStackedWidget13currentWidgetEv via GOT/IAT indirection
    return _ZNK2QT14QStackedWidget13currentWidgetEv(/* forwarded args */);
}

