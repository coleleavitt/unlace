/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BDC0
// Address: 0x0006BDC0

//----- (0006BDC0) --------------------------------------------------------
int __fastcall sub_6BDC0(int a1, int a2, int a3)
{
  int result; // r0

  cliopts_t_add(a2, &dword_DA8DC, 5);
  result = a3 << 31;
  if ( a3 << 31 )
    return cliopts_t_add(a2, &dword_DA940, 1);
  return result;
}
// DA8DC: using guessed type int dword_DA8DC;
// DA940: using guessed type int dword_DA940;
