// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1133B0
// Name:            ._ZN2QT15QListWidgetItemC1ERKNS_7QStringEPNS_11QListWidgetEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1133B0 jmp     cs:_ZN2QT15QListWidgetItemC1ERKNS_7QStringEPNS_11QListWidgetEi_ptr
//
// Resolved target: _ZN2QT15QListWidgetItemC1ERKNS_7QStringEPNS_11QListWidgetEi
// Target address:  0x8D47A0
// GOT/IAT slot:    0x8A0678
// Slot symbol:     _ZN2QT15QListWidgetItemC1ERKNS_7QStringEPNS_11QListWidgetEi_ptr
// Target type:     _QWORD(QT::QListWidgetItem *__hidden this, const QT::QString *, QT::QListWidget *, int)
// ============================================================

/* see target sig */ ._ZN2QT15QListWidgetItemC1ERKNS_7QStringEPNS_11QListWidgetEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QListWidgetItemC1ERKNS_7QStringEPNS_11QListWidgetEi via GOT/IAT indirection
    return _ZN2QT15QListWidgetItemC1ERKNS_7QStringEPNS_11QListWidgetEi(/* forwarded args */);
}

