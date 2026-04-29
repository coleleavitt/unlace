// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x19870
// Name:     check_for_table_jump
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to check_for_table_jump are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void check_for_table_jump(/* see import library declaration */);

