// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B740
// Name:            ._ZN2QT7QRegionD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B740 jmp     cs:_ZN2QT7QRegionD1Ev_ptr
//
// Resolved target: _ZN2QT7QRegionD1Ev
// Target address:  0x8D9AC0
// GOT/IAT slot:    0x8A4840
// Slot symbol:     _ZN2QT7QRegionD1Ev_ptr
// Target type:     void(QT::QRegion *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QRegionD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QRegionD1Ev via GOT/IAT indirection
    return _ZN2QT7QRegionD1Ev(/* forwarded args */);
}

