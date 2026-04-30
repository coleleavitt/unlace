// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ABC0
// Name:            ._ZN2QT8QPainter12drawPolylineEPKNS_6QPointEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ABC0 jmp     cs:_ZN2QT8QPainter12drawPolylineEPKNS_6QPointEi_ptr
//
// Resolved target: _ZN2QT8QPainter12drawPolylineEPKNS_6QPointEi
// Target address:  0x8D9398
// GOT/IAT slot:    0x8A4280
// Slot symbol:     _ZN2QT8QPainter12drawPolylineEPKNS_6QPointEi_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT8QPainter12drawPolylineEPKNS_6QPointEi(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter12drawPolylineEPKNS_6QPointEi via GOT/IAT indirection
    return _ZN2QT8QPainter12drawPolylineEPKNS_6QPointEi(/* forwarded args */);
}

