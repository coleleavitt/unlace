// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7EB0
// Name:            .pipe_process
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7EB0 jmp     cs:off_2C79740
//
// Resolved target: pipe_process
// Target address:  0x83CB50
// GOT/IAT slot:    0x2C79740
// Slot symbol:     off_2C79740
// Target type:     <no type info>
// ============================================================

void .pipe_process(/* see target signature */)
{
    // Tail-call to pipe_process via GOT/IAT indirection
    return pipe_process(/* forwarded args */);
}

