// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A8B0
// Name:            ._ZNK2QT17QAccessibleWidget6widgetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A8B0 jmp     cs:_ZNK2QT17QAccessibleWidget6widgetEv_ptr
//
// Resolved target: _ZNK2QT17QAccessibleWidget6widgetEv
// Target address:  0x8D91B8
// GOT/IAT slot:    0x8A40F8
// Slot symbol:     _ZNK2QT17QAccessibleWidget6widgetEv_ptr
// Target type:     _QWORD(QT::QAccessibleWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAccessibleWidget6widgetEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAccessibleWidget6widgetEv via GOT/IAT indirection
    return _ZNK2QT17QAccessibleWidget6widgetEv(/* forwarded args */);
}

