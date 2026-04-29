// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x166C0
// Name:            ._ZN2QT7QObject5eventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x166C0 jmp     cs:off_4F348
//
// Resolved target: _ZN2QT7QObject5eventEPNS_6QEventE
// Target address:  0x50380
// GOT/IAT slot:    0x4F348
// Slot symbol:     off_4F348
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QObject5eventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject5eventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT7QObject5eventEPNS_6QEventE(/* forwarded args */);
}

