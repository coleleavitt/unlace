// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119E40
// Name:            ._ZNK2QT14QStackedWidget6widgetEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119E40 jmp     cs:_ZNK2QT14QStackedWidget6widgetEi_ptr
//
// Resolved target: _ZNK2QT14QStackedWidget6widgetEi
// Target address:  0x8D8AC0
// GOT/IAT slot:    0x8A3BC0
// Slot symbol:     _ZNK2QT14QStackedWidget6widgetEi_ptr
// Target type:     _QWORD(QT::QStackedWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT14QStackedWidget6widgetEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QStackedWidget6widgetEi via GOT/IAT indirection
    return _ZNK2QT14QStackedWidget6widgetEi(/* forwarded args */);
}

