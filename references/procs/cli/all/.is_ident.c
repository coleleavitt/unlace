// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31F0
// Name:            .is_ident
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31F0 jmp     cs:off_1A0E0
//
// Resolved target: is_ident
// Target address:  0x1A398
// GOT/IAT slot:    0x1A0E0
// Slot symbol:     off_1A0E0
// Target type:     <no type info>
// ============================================================

void .is_ident(/* see target signature */)
{
    // Tail-call to is_ident via GOT/IAT indirection
    return is_ident(/* forwarded args */);
}

