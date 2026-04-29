// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x162F0
// Name:            ._ZN2QT11QListWidgetC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x162F0 jmp     cs:off_4F160
//
// Resolved target: _ZN2QT11QListWidgetC1EPNS_7QWidgetE
// Target address:  0x50030
// GOT/IAT slot:    0x4F160
// Slot symbol:     off_4F160
// Target type:     _QWORD(QT::QListWidget *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidgetC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidgetC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QListWidgetC1EPNS_7QWidgetE(/* forwarded args */);
}

