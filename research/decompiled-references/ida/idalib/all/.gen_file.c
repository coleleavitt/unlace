// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8960
// Name:            .gen_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8960 jmp     cs:off_2C79C98
//
// Resolved target: gen_file
// Target address:  0x390460
// GOT/IAT slot:    0x2C79C98
// Slot symbol:     off_2C79C98
// Target type:     <no type info>
// ============================================================

void .gen_file(/* see target signature */)
{
    // Tail-call to gen_file via GOT/IAT indirection
    return gen_file(/* forwarded args */);
}

