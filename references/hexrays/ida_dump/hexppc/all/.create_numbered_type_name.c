// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE60
// Name:            .create_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE60 jmp     cs:off_4DAF18
//
// Resolved target: create_numbered_type_name
// Target address:  0x4DD948
// GOT/IAT slot:    0x4DAF18
// Slot symbol:     off_4DAF18
// Target type:     <no type info>
// ============================================================

void .create_numbered_type_name(/* see target signature */)
{
    // Tail-call to create_numbered_type_name via GOT/IAT indirection
    return create_numbered_type_name(/* forwarded args */);
}

