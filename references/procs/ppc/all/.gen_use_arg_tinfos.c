// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20360
// Name:            .gen_use_arg_tinfos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20360 jmp     cs:off_95198
//
// Resolved target: gen_use_arg_tinfos
// Target address:  0x95BD0
// GOT/IAT slot:    0x95198
// Slot symbol:     off_95198
// Target type:     <no type info>
// ============================================================

void .gen_use_arg_tinfos(/* see target signature */)
{
    // Tail-call to gen_use_arg_tinfos via GOT/IAT indirection
    return gen_use_arg_tinfos(/* forwarded args */);
}

