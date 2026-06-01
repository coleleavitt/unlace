// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC370
// Name:            .vcred_load_site
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC370 jmp     cs:off_2C7B9A0
//
// Resolved target: vcred_load_site
// Target address:  0x7C9C90
// GOT/IAT slot:    0x2C7B9A0
// Slot symbol:     off_2C7B9A0
// Target type:     <no type info>
// ============================================================

void .vcred_load_site(/* see target signature */)
{
    // Tail-call to vcred_load_site via GOT/IAT indirection
    return vcred_load_site(/* forwarded args */);
}

