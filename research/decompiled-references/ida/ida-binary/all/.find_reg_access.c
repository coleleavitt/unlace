// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113EF0
// Name:            .find_reg_access
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113EF0 jmp     cs:find_reg_access_ptr
//
// Resolved target: find_reg_access
// Target address:  0x8D4ED0
// GOT/IAT slot:    0x8A0C18
// Slot symbol:     find_reg_access_ptr
// Target type:     <no type info>
// ============================================================

void .find_reg_access(/* see target signature */)
{
    // Tail-call to find_reg_access via GOT/IAT indirection
    return find_reg_access(/* forwarded args */);
}

