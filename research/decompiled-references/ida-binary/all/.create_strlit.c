// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1147A0
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1147A0 jmp     cs:create_strlit_ptr
//
// Resolved target: create_strlit
// Target address:  0x8D5430
// GOT/IAT slot:    0x8A1070
// Slot symbol:     create_strlit_ptr
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

