/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E8F8
// Address: 0x000000000048E8F8

//----- (000000000048E8F8) ----------------------------------------------------
__int64 __fastcall sub_48E8F8(__int64 a1, unsigned __int8 *a2, int a3)
{
  const char *v5; // x20
  char *v7; // x0
  unsigned __int8 *v8; // x1
  __int64 result; // x0

  v5 = (const char *)(a1 + 4128);
  sub_4860D8(a1 + 4128, a2, 4096);
  v7 = strrchr(v5, 47);
  if ( v7 )
  {
    v8 = (unsigned __int8 *)(v7 + 1);
    *v7 = 0;
    *(_QWORD *)(a1 + 4112) = 0;
    if ( v7 == (char *)-1LL )
      v8 = a2;
    *(_DWORD *)(a1 + 4120) = 0;
    result = sub_4860D8(a1 + 8224, v8, 4096);
    *(_DWORD *)(a1 + 12320) = a3;
  }
  else
  {
    sub_4860D8((unsigned __int64)v5, (unsigned __int8 *)".", 4096);
    *(_QWORD *)(a1 + 4112) = 0;
    *(_DWORD *)(a1 + 4120) = 0;
    result = sub_4860D8(a1 + 8224, a2, 4096);
    *(_DWORD *)(a1 + 12320) = a3;
  }
  return result;
}
