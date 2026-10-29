// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC930
// Name:            .generate_deref_chain
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC930 jmp     cs:off_2C7BC80
//
// Resolved target: generate_deref_chain
// Target address:  0x3FF780
// GOT/IAT slot:    0x2C7BC80
// Slot symbol:     off_2C7BC80
// Target type:     <no type info>
// ============================================================

void .generate_deref_chain(/* see target signature */)
{
    // Tail-call to generate_deref_chain via GOT/IAT indirection
    return generate_deref_chain(/* forwarded args */);
}

