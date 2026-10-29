// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA910
// Name:            .get_ida_subdirs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA910 jmp     cs:off_2C7AC70
//
// Resolved target: get_ida_subdirs
// Target address:  0x834B90
// GOT/IAT slot:    0x2C7AC70
// Slot symbol:     off_2C7AC70
// Target type:     <no type info>
// ============================================================

void .get_ida_subdirs(/* see target signature */)
{
    // Tail-call to get_ida_subdirs via GOT/IAT indirection
    return get_ida_subdirs(/* forwarded args */);
}

