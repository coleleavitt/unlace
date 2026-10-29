// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112870
// Name:            .reg_delete
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112870 jmp     cs:reg_delete_ptr
//
// Resolved target: reg_delete
// Target address:  0x8D4040
// GOT/IAT slot:    0x8A00D8
// Slot symbol:     reg_delete_ptr
// Target type:     <no type info>
// ============================================================

void .reg_delete(/* see target signature */)
{
    // Tail-call to reg_delete via GOT/IAT indirection
    return reg_delete(/* forwarded args */);
}

