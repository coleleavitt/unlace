// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9240
// Name:            .gen_use_arg_tinfos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9240 jmp     cs:off_2E108
//
// Resolved target: gen_use_arg_tinfos
// Target address:  0x2E778
// GOT/IAT slot:    0x2E108
// Slot symbol:     off_2E108
// Target type:     <no type info>
// ============================================================

void .gen_use_arg_tinfos(/* see target signature */)
{
    // Tail-call to gen_use_arg_tinfos via GOT/IAT indirection
    return gen_use_arg_tinfos(/* forwarded args */);
}

