/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lsetregs
// Address: 0x00017540

//----- (00017540) --------------------------------------------------------
bool __fastcall ps_lsetregs(int a1, int a2, int a3)
{
  return ptrace(PTRACE_SETREGS, a2, 0, a3) != 0;
}
