// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xD0D00
// Name:     print_argloc
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to print_argloc are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void print_argloc(/* see import library declaration */);

