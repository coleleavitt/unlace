// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111F70
// Name:            ._ZN2QT6QEventC2ENS0_4TypeE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111F70 jmp     cs:_ZN2QT6QEventC2ENS0_4TypeE_ptr
//
// Resolved target: _ZN2QT6QEventC2ENS0_4TypeE
// Target address:  0x8D3A68
// GOT/IAT slot:    0x89FC58
// Slot symbol:     _ZN2QT6QEventC2ENS0_4TypeE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT6QEventC2ENS0_4TypeE(/* see target signature */)
{
    // Tail-call to _ZN2QT6QEventC2ENS0_4TypeE via GOT/IAT indirection
    return _ZN2QT6QEventC2ENS0_4TypeE(/* forwarded args */);
}

