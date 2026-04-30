// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B290
// Name:            .vcred_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B290 jmp     cs:vcred_init_ptr
//
// Resolved target: vcred_init
// Target address:  0x8D97A8
// GOT/IAT slot:    0x8A45E8
// Slot symbol:     vcred_init_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_init(/* see target signature */)
{
    // Tail-call to vcred_init via GOT/IAT indirection
    return vcred_init(/* forwarded args */);
}

