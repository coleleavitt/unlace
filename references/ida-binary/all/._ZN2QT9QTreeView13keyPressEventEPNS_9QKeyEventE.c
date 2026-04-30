// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1118A0
// Name:            ._ZN2QT9QTreeView13keyPressEventEPNS_9QKeyEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1118A0 jmp     cs:_ZN2QT9QTreeView13keyPressEventEPNS_9QKeyEventE_ptr
//
// Resolved target: _ZN2QT9QTreeView13keyPressEventEPNS_9QKeyEventE
// Target address:  0x8D3630
// GOT/IAT slot:    0x89F8F0
// Slot symbol:     _ZN2QT9QTreeView13keyPressEventEPNS_9QKeyEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT9QTreeView13keyPressEventEPNS_9QKeyEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView13keyPressEventEPNS_9QKeyEventE via GOT/IAT indirection
    return _ZN2QT9QTreeView13keyPressEventEPNS_9QKeyEventE(/* forwarded args */);
}

