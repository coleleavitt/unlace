// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABBA0
// Name:            .gen_decorate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABBA0 jmp     cs:off_2C7B5B8
//
// Resolved target: gen_decorate_name
// Target address:  0x64EF90
// GOT/IAT slot:    0x2C7B5B8
// Slot symbol:     off_2C7B5B8
// Target type:     <no type info>
// ============================================================

void .gen_decorate_name(/* see target signature */)
{
    // Tail-call to gen_decorate_name via GOT/IAT indirection
    return gen_decorate_name(/* forwarded args */);
}

