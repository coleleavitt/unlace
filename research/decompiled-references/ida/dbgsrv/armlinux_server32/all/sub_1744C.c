/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1744C
// Address: 0x0001744C

//----- (0001744C) --------------------------------------------------------
int __fastcall sub_1744C(int result)
{
  int v1; // r5

  v1 = result;
  if ( dword_D36E4 != -1 )
  {
    if ( !dword_D36E4 )
      return result;
    return j_ptrace(PTRACE_SETOPTIONS, v1, 0, 8);
  }
  result = sub_171F8();
  if ( dword_D36E4 )
    return j_ptrace(PTRACE_SETOPTIONS, v1, 0, 8);
  return result;
}
// D36E4: using guessed type int dword_D36E4;
