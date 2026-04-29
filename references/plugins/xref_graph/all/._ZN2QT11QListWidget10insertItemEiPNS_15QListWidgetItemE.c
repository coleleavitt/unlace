// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x172F0
// Name:            ._ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x172F0 jmp     cs:off_4F960
//
// Resolved target: _ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE
// Target address:  0x50E78
// GOT/IAT slot:    0x4F960
// Slot symbol:     off_4F960
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE via GOT/IAT indirection
    return _ZN2QT11QListWidget10insertItemEiPNS_15QListWidgetItemE(/* forwarded args */);
}

