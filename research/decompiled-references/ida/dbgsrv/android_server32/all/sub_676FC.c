/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_676FC
// Address: 0x000676FC

//----- (000676FC) --------------------------------------------------------
int __fastcall sub_676FC(int a1, int a2, int a3)
{
  int result; // r0

  sub_6BDC0(a1, a2, a3);
  cliopts_t_add(a2, &dword_DA338, 1);
  result = *(unsigned __int8 *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 72) )
    return cliopts_t_add(a2, &dword_DA34C, 2);
  return result;
}
// DA338: using guessed type int dword_DA338;
// DA34C: using guessed type int dword_DA34C;
