// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3350
// Name:            .create_generic_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3350 jmp     cs:off_28190
//
// Resolved target: create_generic_linput
// Target address:  0x28640
// GOT/IAT slot:    0x28190
// Slot symbol:     off_28190
// Target type:     <no type info>
// ============================================================

void .create_generic_linput(/* see target signature */)
{
    // Tail-call to create_generic_linput via GOT/IAT indirection
    return create_generic_linput(/* forwarded args */);
}

