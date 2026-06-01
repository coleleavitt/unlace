// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113090
// Name:            .rebase_program
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113090 jmp     cs:rebase_program_ptr
//
// Resolved target: rebase_program
// Target address:  0x8D4588
// GOT/IAT slot:    0x8A04E8
// Slot symbol:     rebase_program_ptr
// Target type:     <no type info>
// ============================================================

void .rebase_program(/* see target signature */)
{
    // Tail-call to rebase_program via GOT/IAT indirection
    return rebase_program(/* forwarded args */);
}

