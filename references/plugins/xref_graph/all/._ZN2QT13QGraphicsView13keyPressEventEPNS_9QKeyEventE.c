// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17490
// Name:            ._ZN2QT13QGraphicsView13keyPressEventEPNS_9QKeyEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17490 jmp     cs:off_4FA30
//
// Resolved target: _ZN2QT13QGraphicsView13keyPressEventEPNS_9QKeyEventE
// Target address:  0x51020
// GOT/IAT slot:    0x4FA30
// Slot symbol:     off_4FA30
// Target type:     <no type info>
// ============================================================

void ._ZN2QT13QGraphicsView13keyPressEventEPNS_9QKeyEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsView13keyPressEventEPNS_9QKeyEventE via GOT/IAT indirection
    return _ZN2QT13QGraphicsView13keyPressEventEPNS_9QKeyEventE(/* forwarded args */);
}

