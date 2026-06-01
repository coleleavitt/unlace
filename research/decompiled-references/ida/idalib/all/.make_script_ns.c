// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD040
// Name:            .make_script_ns
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD040 jmp     cs:off_2C7C008
//
// Resolved target: make_script_ns
// Target address:  0x84F9F0
// GOT/IAT slot:    0x2C7C008
// Slot symbol:     off_2C7C008
// Target type:     <no type info>
// ============================================================

void .make_script_ns(/* see target signature */)
{
    // Tail-call to make_script_ns via GOT/IAT indirection
    return make_script_ns(/* forwarded args */);
}

