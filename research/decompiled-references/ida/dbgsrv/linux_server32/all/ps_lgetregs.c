/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lgetregs
// Address: 0x08059C20

//----- (08059C20) --------------------------------------------------------
_BOOL4 __cdecl ps_lgetregs(int a1, int a2, int a3)
{
  return ptrace(PTRACE_GETREGS, a2, 0, a3) != 0;
}
