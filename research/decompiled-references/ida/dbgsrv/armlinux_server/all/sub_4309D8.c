/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4309D8
// Address: 0x00000000004309D8

//----- (00000000004309D8) ----------------------------------------------------
__int64 __fastcall sub_4309D8(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // x1
  FILE *v4; // x3
  __int64 v5; // x5
  int v7; // [xsp+24h] [xbp-Ch] BYREF

  v3 = a1[1];
  if ( v3 < qword_522130 && (v4 = *(FILE **)(qword_522128 + 8 * v3)) != nullptr )
  {
    v5 = a1[9];
    v7 = a1[5];
    *(_QWORD *)(a2 + 8) = (int)sub_490B60(v4, (__int64)&v7, 4, v5 != 0);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
