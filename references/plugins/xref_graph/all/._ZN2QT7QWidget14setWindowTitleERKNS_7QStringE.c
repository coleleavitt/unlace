// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16190
// Name:            ._ZN2QT7QWidget14setWindowTitleERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16190 jmp     cs:off_4F0B0
//
// Resolved target: _ZN2QT7QWidget14setWindowTitleERKNS_7QStringE
// Target address:  0x4FF00
// GOT/IAT slot:    0x4F0B0
// Slot symbol:     off_4F0B0
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QWidget14setWindowTitleERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget14setWindowTitleERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QWidget14setWindowTitleERKNS_7QStringE(/* forwarded args */);
}

