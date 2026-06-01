// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A70
// Name:            .extract_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A70 jmp     cs:extract_name_ptr
//
// Resolved target: extract_name
// Target address:  0x8D4178
// GOT/IAT slot:    0x8A01D8
// Slot symbol:     extract_name_ptr
// Target type:     <no type info>
// ============================================================

void .extract_name(/* see target signature */)
{
    // Tail-call to extract_name via GOT/IAT indirection
    return extract_name(/* forwarded args */);
}

