// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1194B0
// Name:            .vcred_load_site
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1194B0 jmp     cs:vcred_load_site_ptr
//
// Resolved target: vcred_load_site
// Target address:  0x8D84C8
// GOT/IAT slot:    0x8A36F8
// Slot symbol:     vcred_load_site_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_load_site(/* see target signature */)
{
    // Tail-call to vcred_load_site via GOT/IAT indirection
    return vcred_load_site(/* forwarded args */);
}

