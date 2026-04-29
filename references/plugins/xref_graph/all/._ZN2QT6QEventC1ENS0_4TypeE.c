// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16850
// Name:            ._ZN2QT6QEventC1ENS0_4TypeE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16850 jmp     cs:off_4F410
//
// Resolved target: _ZN2QT6QEventC1ENS0_4TypeE
// Target address:  0x50510
// GOT/IAT slot:    0x4F410
// Slot symbol:     off_4F410
// Target type:     <no type info>
// ============================================================

void ._ZN2QT6QEventC1ENS0_4TypeE(/* see target signature */)
{
    // Tail-call to _ZN2QT6QEventC1ENS0_4TypeE via GOT/IAT indirection
    return _ZN2QT6QEventC1ENS0_4TypeE(/* forwarded args */);
}

