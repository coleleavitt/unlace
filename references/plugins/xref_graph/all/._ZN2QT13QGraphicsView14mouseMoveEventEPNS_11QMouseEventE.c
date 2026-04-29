// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16880
// Name:            ._ZN2QT13QGraphicsView14mouseMoveEventEPNS_11QMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16880 jmp     cs:off_4F428
//
// Resolved target: _ZN2QT13QGraphicsView14mouseMoveEventEPNS_11QMouseEventE
// Target address:  0x50530
// GOT/IAT slot:    0x4F428
// Slot symbol:     off_4F428
// Target type:     <no type info>
// ============================================================

void ._ZN2QT13QGraphicsView14mouseMoveEventEPNS_11QMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsView14mouseMoveEventEPNS_11QMouseEventE via GOT/IAT indirection
    return _ZN2QT13QGraphicsView14mouseMoveEventEPNS_11QMouseEventE(/* forwarded args */);
}

