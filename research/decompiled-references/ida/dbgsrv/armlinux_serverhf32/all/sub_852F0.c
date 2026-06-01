/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_852F0
// Address: 0x000852F0

//----- (000852F0) --------------------------------------------------------
int __fastcall sub_852F0(_DWORD *a1, int a2)
{
  unsigned __int8 *v2; // r3

  v2 = (unsigned __int8 *)a1[3];
  if ( (unsigned int)*v2 - 73 > 1 )
    return 0;
  a1[3] = v2 + 1;
  return sub_8522C(a1);
}
