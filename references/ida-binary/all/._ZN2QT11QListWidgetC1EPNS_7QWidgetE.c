// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112350
// Name:            ._ZN2QT11QListWidgetC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112350 jmp     cs:_ZN2QT11QListWidgetC1EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT11QListWidgetC1EPNS_7QWidgetE
// Target address:  0x8D3CE8
// GOT/IAT slot:    0x89FE48
// Slot symbol:     _ZN2QT11QListWidgetC1EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidgetC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidgetC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QListWidgetC1EPNS_7QWidgetE(/* forwarded args */);
}

