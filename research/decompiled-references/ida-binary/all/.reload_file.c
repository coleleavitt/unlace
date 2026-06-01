// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119240
// Name:            .reload_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119240 jmp     cs:reload_file_ptr
//
// Resolved target: reload_file
// Target address:  0x8D8330
// GOT/IAT slot:    0x8A35C0
// Slot symbol:     reload_file_ptr
// Target type:     <no type info>
// ============================================================

void .reload_file(/* see target signature */)
{
    // Tail-call to reload_file via GOT/IAT indirection
    return reload_file(/* forwarded args */);
}

