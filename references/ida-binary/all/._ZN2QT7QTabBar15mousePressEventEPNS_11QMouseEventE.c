// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E00
// Name:            ._ZN2QT7QTabBar15mousePressEventEPNS_11QMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E00 jmp     cs:_ZN2QT7QTabBar15mousePressEventEPNS_11QMouseEventE_ptr
//
// Resolved target: _ZN2QT7QTabBar15mousePressEventEPNS_11QMouseEventE
// Target address:  0x8D39A0
// GOT/IAT slot:    0x89FBA0
// Slot symbol:     _ZN2QT7QTabBar15mousePressEventEPNS_11QMouseEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QTabBar15mousePressEventEPNS_11QMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar15mousePressEventEPNS_11QMouseEventE via GOT/IAT indirection
    return _ZN2QT7QTabBar15mousePressEventEPNS_11QMouseEventE(/* forwarded args */);
}

