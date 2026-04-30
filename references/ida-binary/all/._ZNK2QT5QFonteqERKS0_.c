// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180A0
// Name:            ._ZNK2QT5QFonteqERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180A0 jmp     cs:_ZNK2QT5QFonteqERKS0__ptr
//
// Resolved target: _ZNK2QT5QFonteqERKS0_
// Target address:  0x8D7880
// GOT/IAT slot:    0x8A2CF0
// Slot symbol:     _ZNK2QT5QFonteqERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT5QFonteqERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFonteqERKS0_ via GOT/IAT indirection
    return _ZNK2QT5QFonteqERKS0_(/* forwarded args */);
}

