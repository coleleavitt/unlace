// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117B80
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117B80 jmp     cs:segtype_ptr
//
// Resolved target: segtype
// Target address:  0x8D7528
// GOT/IAT slot:    0x8A2A60
// Slot symbol:     segtype_ptr
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

