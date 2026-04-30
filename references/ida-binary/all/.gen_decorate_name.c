// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118970
// Name:            .gen_decorate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118970 jmp     cs:gen_decorate_name_ptr
//
// Resolved target: gen_decorate_name
// Target address:  0x8D7DD0
// GOT/IAT slot:    0x8A3158
// Slot symbol:     gen_decorate_name_ptr
// Target type:     <no type info>
// ============================================================

void .gen_decorate_name(/* see target signature */)
{
    // Tail-call to gen_decorate_name via GOT/IAT indirection
    return gen_decorate_name(/* forwarded args */);
}

