// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17000
// Name:            ._ZN2QT13QGraphicsView5eventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17000 jmp     cs:off_4F7E8
//
// Resolved target: _ZN2QT13QGraphicsView5eventEPNS_6QEventE
// Target address:  0x50C18
// GOT/IAT slot:    0x4F7E8
// Slot symbol:     off_4F7E8
// Target type:     <no type info>
// ============================================================

void ._ZN2QT13QGraphicsView5eventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsView5eventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT13QGraphicsView5eventEPNS_6QEventE(/* forwarded args */);
}

