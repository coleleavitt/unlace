// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111650
// Name:            ._ZN2QT8QMenuBar7addMenuEPNS_5QMenuE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111650 jmp     cs:_ZN2QT8QMenuBar7addMenuEPNS_5QMenuE_ptr
//
// Resolved target: _ZN2QT8QMenuBar7addMenuEPNS_5QMenuE
// Target address:  0x8D34A0
// GOT/IAT slot:    0x89F7C8
// Slot symbol:     _ZN2QT8QMenuBar7addMenuEPNS_5QMenuE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT8QMenuBar7addMenuEPNS_5QMenuE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QMenuBar7addMenuEPNS_5QMenuE via GOT/IAT indirection
    return _ZN2QT8QMenuBar7addMenuEPNS_5QMenuE(/* forwarded args */);
}

