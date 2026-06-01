/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5029C
// Address: 0x0005029C

//----- (0005029C) --------------------------------------------------------
int __fastcall sub_5029C(int a1, unsigned __int8 **a2, _DWORD *a3)
{
  int result; // r0
  _BOOL4 v6; // r3

  result = sub_4F6D0((unsigned __int8 **)a1, (int)a2, nullptr, a3);
  v6 = result == 0;
  if ( !*(_DWORD *)(a1 + 32) )
    v6 = 0;
  if ( v6 )
    return sub_4FFF8((__int64 *)a1, a2);
  return result;
}
