// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99C0
// Name:            .get_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99C0 jmp     cs:off_894C8
//
// Resolved target: get_entry
// Target address:  0x8C7F8
// GOT/IAT slot:    0x894C8
// Slot symbol:     off_894C8
// Target type:     <no type info>
// ============================================================

void .get_entry(/* see target signature */)
{
    // Tail-call to get_entry via GOT/IAT indirection
    return get_entry(/* forwarded args */);
}

