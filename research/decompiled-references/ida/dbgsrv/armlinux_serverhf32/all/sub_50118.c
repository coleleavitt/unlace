/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50118
// Address: 0x00050118

//----- (00050118) --------------------------------------------------------
int __fastcall sub_50118(int a1, unsigned __int8 **a2, _DWORD *a3)
{
  int result; // r0
  _BOOL4 v6; // r3

  result = sub_4F54C((unsigned __int8 **)a1, (int)a2, nullptr, a3);
  v6 = result == 0;
  if ( !*(_DWORD *)(a1 + 32) )
    v6 = 0;
  if ( v6 )
    return sub_4FE74((__int64 *)a1, a2);
  return result;
}
