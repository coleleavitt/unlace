/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_701C0
// Address: 0x000701C0

//----- (000701C0) --------------------------------------------------------
int __fastcall sub_701C0(int a1, int a2, int a3)
{
  int result; // r0

  sub_6BDC0(a1, a2, a3);
  cliopts_t_add(a2, &dword_DAA68, 6);
  result = a3 << 30;
  if ( (a3 & 2) != 0 )
    return cliopts_t_add(a2, &dword_DAAE0, 1);
  return result;
}
// DAA68: using guessed type int dword_DAA68;
// DAAE0: using guessed type int dword_DAAE0;
