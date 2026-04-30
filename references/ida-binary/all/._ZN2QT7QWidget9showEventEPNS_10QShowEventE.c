// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111140
// Name:            ._ZN2QT7QWidget9showEventEPNS_10QShowEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111140 jmp     cs:_ZN2QT7QWidget9showEventEPNS_10QShowEventE_ptr
//
// Resolved target: _ZN2QT7QWidget9showEventEPNS_10QShowEventE
// Target address:  0x8D3138
// GOT/IAT slot:    0x89F540
// Slot symbol:     _ZN2QT7QWidget9showEventEPNS_10QShowEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QWidget9showEventEPNS_10QShowEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget9showEventEPNS_10QShowEventE via GOT/IAT indirection
    return _ZN2QT7QWidget9showEventEPNS_10QShowEventE(/* forwarded args */);
}

