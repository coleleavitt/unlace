// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D50
// Name:            .create_xrefs_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D50 jmp     cs:create_xrefs_from_ptr
//
// Resolved target: create_xrefs_from
// Target address:  0x8D4DB0
// GOT/IAT slot:    0x8A0B48
// Slot symbol:     create_xrefs_from_ptr
// Target type:     <no type info>
// ============================================================

void .create_xrefs_from(/* see target signature */)
{
    // Tail-call to create_xrefs_from via GOT/IAT indirection
    return create_xrefs_from(/* forwarded args */);
}

