/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4514F8
// Address: 0x00000000004514F8

//----- (00000000004514F8) ----------------------------------------------------
__int64 __fastcall sub_4514F8(__int64 a1, _DWORD *a2, __int64 **a3, int a4)
{
  int v4; // w6
  __int64 *v5; // x5
  __int64 v6; // x4
  int v7; // w4
  __int64 v8; // x3

  v4 = *(_DWORD *)(a1 + 304);
  if ( *(_QWORD *)(a1 + 320) )
    v5 = *(__int64 **)(a1 + 312);
  else
    v5 = &qword_4B2D48;
  v6 = *(_QWORD *)(a1 + 296);
  if ( a4 > 0 )
  {
    v7 = *(_QWORD *)(a1 + 272) - a4;
    if ( v7 < 0 )
      return 0;
    v5 = (__int64 *)"#include ...";
    v8 = *(_QWORD *)(a1 + 264) + 40LL * v7;
    v6 = *(_QWORD *)v8;
    v4 = *(_DWORD *)(v8 + 32);
  }
  if ( a2 )
    *a2 = v4;
  if ( a3 )
    *a3 = v5;
  return v6;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
