// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7550
// Name:            .is_ident
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7550 jmp     cs:off_2C79290
//
// Resolved target: is_ident
// Target address:  0x4CDA80
// GOT/IAT slot:    0x2C79290
// Slot symbol:     off_2C79290
// Target type:     <no type info>
// ============================================================

void .is_ident(/* see target signature */)
{
    // Tail-call to is_ident via GOT/IAT indirection
    return is_ident(/* forwarded args */);
}

