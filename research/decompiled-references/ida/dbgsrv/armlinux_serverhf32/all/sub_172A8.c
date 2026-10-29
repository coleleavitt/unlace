/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_172A8
// Address: 0x000172A8

//----- (000172A8) --------------------------------------------------------
int __fastcall sub_172A8(int result)
{
  int v1; // r5

  v1 = result;
  if ( dword_D26C4 != -1 )
  {
    if ( !dword_D26C4 )
      return result;
    return j_ptrace(PTRACE_SETOPTIONS, v1, 0, 8);
  }
  result = sub_17054();
  if ( dword_D26C4 )
    return j_ptrace(PTRACE_SETOPTIONS, v1, 0, 8);
  return result;
}
// D26C4: using guessed type int dword_D26C4;
