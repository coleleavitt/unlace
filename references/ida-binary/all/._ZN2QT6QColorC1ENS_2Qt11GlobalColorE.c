// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113660
// Name:            ._ZN2QT6QColorC1ENS_2Qt11GlobalColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113660 jmp     cs:_ZN2QT6QColorC1ENS_2Qt11GlobalColorE_ptr
//
// Resolved target: _ZN2QT6QColorC1ENS_2Qt11GlobalColorE
// Target address:  0x8D4930
// GOT/IAT slot:    0x8A07D0
// Slot symbol:     _ZN2QT6QColorC1ENS_2Qt11GlobalColorE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT6QColorC1ENS_2Qt11GlobalColorE(/* see target signature */)
{
    // Tail-call to _ZN2QT6QColorC1ENS_2Qt11GlobalColorE via GOT/IAT indirection
    return _ZN2QT6QColorC1ENS_2Qt11GlobalColorE(/* forwarded args */);
}

