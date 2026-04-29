// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA480
// Name:            ._ZNSt6vectorIjSaIjEE7reserveEm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA480 jmp     cs:off_48240
//
// Resolved target: _ZNSt6vectorIjSaIjEE7reserveEm
// Target address:  0x31A50
// GOT/IAT slot:    0x48240
// Slot symbol:     off_48240
// Target type:     <no type info>
// ============================================================

void ._ZNSt6vectorIjSaIjEE7reserveEm(/* see target signature */)
{
    // Tail-call to _ZNSt6vectorIjSaIjEE7reserveEm via GOT/IAT indirection
    return _ZNSt6vectorIjSaIjEE7reserveEm(/* forwarded args */);
}

