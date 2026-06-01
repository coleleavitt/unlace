// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B340
// Name:            .set_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B340 jmp     cs:set_opinfo_ptr
//
// Resolved target: set_opinfo
// Target address:  0x8D9820
// GOT/IAT slot:    0x8A4640
// Slot symbol:     set_opinfo_ptr
// Target type:     <no type info>
// ============================================================

void .set_opinfo(/* see target signature */)
{
    // Tail-call to set_opinfo via GOT/IAT indirection
    return set_opinfo(/* forwarded args */);
}

