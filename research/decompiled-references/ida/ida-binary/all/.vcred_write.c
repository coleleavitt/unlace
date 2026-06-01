// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112910
// Name:            .vcred_write
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112910 jmp     cs:vcred_write_ptr
//
// Resolved target: vcred_write
// Target address:  0x8D40A0
// GOT/IAT slot:    0x8A0128
// Slot symbol:     vcred_write_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_write(/* see target signature */)
{
    // Tail-call to vcred_write via GOT/IAT indirection
    return vcred_write(/* forwarded args */);
}

