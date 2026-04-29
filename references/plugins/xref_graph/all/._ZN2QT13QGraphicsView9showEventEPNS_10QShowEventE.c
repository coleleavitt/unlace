// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16FD0
// Name:            ._ZN2QT13QGraphicsView9showEventEPNS_10QShowEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16FD0 jmp     cs:off_4F7D0
//
// Resolved target: _ZN2QT13QGraphicsView9showEventEPNS_10QShowEventE
// Target address:  0x50BF8
// GOT/IAT slot:    0x4F7D0
// Slot symbol:     off_4F7D0
// Target type:     <no type info>
// ============================================================

void ._ZN2QT13QGraphicsView9showEventEPNS_10QShowEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsView9showEventEPNS_10QShowEventE via GOT/IAT indirection
    return _ZN2QT13QGraphicsView9showEventEPNS_10QShowEventE(/* forwarded args */);
}

