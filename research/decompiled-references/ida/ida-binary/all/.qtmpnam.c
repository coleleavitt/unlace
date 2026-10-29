// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118290
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118290 jmp     cs:qtmpnam_ptr
//
// Resolved target: qtmpnam
// Target address:  0x8D79B0
// GOT/IAT slot:    0x8A2DE8
// Slot symbol:     qtmpnam_ptr
// Target type:     <no type info>
// ============================================================

void .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

