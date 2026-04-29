// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x171F0
// Name:            ._ZN2QT11QScrollArea18setWidgetResizableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x171F0 jmp     cs:off_4F8E0
//
// Resolved target: _ZN2QT11QScrollArea18setWidgetResizableEb
// Target address:  0x50DC0
// GOT/IAT slot:    0x4F8E0
// Slot symbol:     off_4F8E0
// Target type:     _QWORD(QT::QScrollArea *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QScrollArea18setWidgetResizableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QScrollArea18setWidgetResizableEb via GOT/IAT indirection
    return _ZN2QT11QScrollArea18setWidgetResizableEb(/* forwarded args */);
}

