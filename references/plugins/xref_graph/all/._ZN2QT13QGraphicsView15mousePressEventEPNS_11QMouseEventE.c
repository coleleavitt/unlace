// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17250
// Name:            ._ZN2QT13QGraphicsView15mousePressEventEPNS_11QMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17250 jmp     cs:off_4F910
//
// Resolved target: _ZN2QT13QGraphicsView15mousePressEventEPNS_11QMouseEventE
// Target address:  0x50E00
// GOT/IAT slot:    0x4F910
// Slot symbol:     off_4F910
// Target type:     <no type info>
// ============================================================

void ._ZN2QT13QGraphicsView15mousePressEventEPNS_11QMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsView15mousePressEventEPNS_11QMouseEventE via GOT/IAT indirection
    return _ZN2QT13QGraphicsView15mousePressEventEPNS_11QMouseEventE(/* forwarded args */);
}

