// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BB40
// Name:            ._ZNK2QT5QFontltERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BB40 jmp     cs:_ZNK2QT5QFontltERKS0__ptr
//
// Resolved target: _ZNK2QT5QFontltERKS0_
// Target address:  0x8D9D28
// GOT/IAT slot:    0x8A4A40
// Slot symbol:     _ZNK2QT5QFontltERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT5QFontltERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFontltERKS0_ via GOT/IAT indirection
    return _ZNK2QT5QFontltERKS0_(/* forwarded args */);
}

