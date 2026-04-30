// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119CA0
// Name:            ._ZN2QT11QScrollArea18setWidgetResizableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119CA0 jmp     cs:_ZN2QT11QScrollArea18setWidgetResizableEb_ptr
//
// Resolved target: _ZN2QT11QScrollArea18setWidgetResizableEb
// Target address:  0x8D89E0
// GOT/IAT slot:    0x8A3AF0
// Slot symbol:     _ZN2QT11QScrollArea18setWidgetResizableEb_ptr
// Target type:     _QWORD(QT::QScrollArea *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QScrollArea18setWidgetResizableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QScrollArea18setWidgetResizableEb via GOT/IAT indirection
    return _ZN2QT11QScrollArea18setWidgetResizableEb(/* forwarded args */);
}

