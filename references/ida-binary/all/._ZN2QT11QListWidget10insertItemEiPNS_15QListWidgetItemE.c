// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A290
// Name:            ._ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A290 jmp     cs:_ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE_ptr
//
// Resolved target: _ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE
// Target address:  0x8D8D90
// GOT/IAT slot:    0x8A3DE8
// Slot symbol:     _ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this, int, QT::QListWidgetItem *)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE via GOT/IAT indirection
    return _ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE(/* forwarded args */);
}

