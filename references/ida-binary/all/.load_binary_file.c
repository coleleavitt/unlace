// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A7D0
// Name:            .load_binary_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A7D0 jmp     cs:load_binary_file_ptr
//
// Resolved target: load_binary_file
// Target address:  0x8D9128
// GOT/IAT slot:    0x8A4088
// Slot symbol:     load_binary_file_ptr
// Target type:     <no type info>
// ============================================================

void .load_binary_file(/* see target signature */)
{
    // Tail-call to load_binary_file via GOT/IAT indirection
    return load_binary_file(/* forwarded args */);
}

