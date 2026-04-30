// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112CC0
// Name:            ._ZN2QT7QAction5eventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112CC0 jmp     cs:_ZN2QT7QAction5eventEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT7QAction5eventEPNS_6QEventE
// Target address:  0x8D4300
// GOT/IAT slot:    0x8A0300
// Slot symbol:     _ZN2QT7QAction5eventEPNS_6QEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QAction5eventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction5eventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT7QAction5eventEPNS_6QEventE(/* forwarded args */);
}

