// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116CD0
// Name:            .load_til_header
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116CD0 jmp     cs:load_til_header_ptr
//
// Resolved target: load_til_header
// Target address:  0x8D6BF0
// GOT/IAT slot:    0x8A2308
// Slot symbol:     load_til_header_ptr
// Target type:     <no type info>
// ============================================================

void .load_til_header(/* see target signature */)
{
    // Tail-call to load_til_header via GOT/IAT indirection
    return load_til_header(/* forwarded args */);
}

