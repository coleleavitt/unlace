// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x1A360
// Name:     print_fpval
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to print_fpval are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void print_fpval(/* see import library declaration */);

