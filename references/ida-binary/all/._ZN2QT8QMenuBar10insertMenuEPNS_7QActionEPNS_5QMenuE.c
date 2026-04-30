// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115560
// Name:            ._ZN2QT8QMenuBar10insertMenuEPNS_7QActionEPNS_5QMenuE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115560 jmp     cs:_ZN2QT8QMenuBar10insertMenuEPNS_7QActionEPNS_5QMenuE_ptr
//
// Resolved target: _ZN2QT8QMenuBar10insertMenuEPNS_7QActionEPNS_5QMenuE
// Target address:  0x8D5D28
// GOT/IAT slot:    0x8A1750
// Slot symbol:     _ZN2QT8QMenuBar10insertMenuEPNS_7QActionEPNS_5QMenuE_ptr
// Target type:     _QWORD(QT::QMenuBar *__hidden this, QT::QAction *, QT::QMenu *)
// ============================================================

/* see target sig */ ._ZN2QT8QMenuBar10insertMenuEPNS_7QActionEPNS_5QMenuE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QMenuBar10insertMenuEPNS_7QActionEPNS_5QMenuE via GOT/IAT indirection
    return _ZN2QT8QMenuBar10insertMenuEPNS_7QActionEPNS_5QMenuE(/* forwarded args */);
}

