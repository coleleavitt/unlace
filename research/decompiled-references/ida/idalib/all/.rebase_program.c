// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8510
// Name:            .rebase_program
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8510 jmp     cs:off_2C79A70
//
// Resolved target: rebase_program
// Target address:  0x673830
// GOT/IAT slot:    0x2C79A70
// Slot symbol:     off_2C79A70
// Target type:     <no type info>
// ============================================================

void .rebase_program(/* see target signature */)
{
    // Tail-call to rebase_program via GOT/IAT indirection
    return rebase_program(/* forwarded args */);
}

