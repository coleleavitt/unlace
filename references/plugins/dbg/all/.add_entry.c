// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3640
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3640 jmp     cs:off_13308
//
// Resolved target: add_entry
// Target address:  0x136B0
// GOT/IAT slot:    0x13308
// Slot symbol:     off_13308
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

