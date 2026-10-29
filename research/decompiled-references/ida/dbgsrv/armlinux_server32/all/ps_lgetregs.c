/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lgetregs
// Address: 0x0001752C

//----- (0001752C) --------------------------------------------------------
bool __fastcall ps_lgetregs(int a1, int a2, int a3)
{
  return ptrace(PTRACE_GETREGS, a2, 0, a3) != 0;
}
