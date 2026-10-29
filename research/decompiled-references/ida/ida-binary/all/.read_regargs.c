// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C50
// Name:            .read_regargs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C50 jmp     cs:read_regargs_ptr
//
// Resolved target: read_regargs
// Target address:  0x8D89B8
// GOT/IAT slot:    0x8A3AC8
// Slot symbol:     read_regargs_ptr
// Target type:     <no type info>
// ============================================================

void .read_regargs(/* see target signature */)
{
    // Tail-call to read_regargs via GOT/IAT indirection
    return read_regargs(/* forwarded args */);
}

