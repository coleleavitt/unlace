// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118370
// Name:            .xrefchar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118370 jmp     cs:xrefchar_ptr
//
// Resolved target: xrefchar
// Target address:  0x8D7A30
// GOT/IAT slot:    0x8A2E58
// Slot symbol:     xrefchar_ptr
// Target type:     <no type info>
// ============================================================

void .xrefchar(/* see target signature */)
{
    // Tail-call to xrefchar via GOT/IAT indirection
    return xrefchar(/* forwarded args */);
}

