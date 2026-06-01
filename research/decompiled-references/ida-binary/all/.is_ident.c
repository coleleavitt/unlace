// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111880
// Name:            .is_ident
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111880 jmp     cs:is_ident_ptr
//
// Resolved target: is_ident
// Target address:  0x8D3620
// GOT/IAT slot:    0x89F8E0
// Slot symbol:     is_ident_ptr
// Target type:     <no type info>
// ============================================================

void .is_ident(/* see target signature */)
{
    // Tail-call to is_ident via GOT/IAT indirection
    return is_ident(/* forwarded args */);
}

