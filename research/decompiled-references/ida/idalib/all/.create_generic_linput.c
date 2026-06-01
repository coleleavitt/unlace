// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A74C0
// Name:            .create_generic_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A74C0 jmp     cs:off_2C79248
//
// Resolved target: create_generic_linput
// Target address:  0x837380
// GOT/IAT slot:    0x2C79248
// Slot symbol:     off_2C79248
// Target type:     <no type info>
// ============================================================

void .create_generic_linput(/* see target signature */)
{
    // Tail-call to create_generic_linput via GOT/IAT indirection
    return create_generic_linput(/* forwarded args */);
}

