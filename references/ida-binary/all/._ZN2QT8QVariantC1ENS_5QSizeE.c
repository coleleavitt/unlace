// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A080
// Name:            ._ZN2QT8QVariantC1ENS_5QSizeE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A080 jmp     cs:_ZN2QT8QVariantC1ENS_5QSizeE_ptr
//
// Resolved target: _ZN2QT8QVariantC1ENS_5QSizeE
// Target address:  0x8D8C68
// GOT/IAT slot:    0x8A3CE0
// Slot symbol:     _ZN2QT8QVariantC1ENS_5QSizeE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT8QVariantC1ENS_5QSizeE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1ENS_5QSizeE via GOT/IAT indirection
    return _ZN2QT8QVariantC1ENS_5QSizeE(/* forwarded args */);
}

