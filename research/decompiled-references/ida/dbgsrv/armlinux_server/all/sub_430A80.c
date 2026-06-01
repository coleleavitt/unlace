/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430A80
// Address: 0x0000000000430A80

//----- (0000000000430A80) ----------------------------------------------------
__int64 __fastcall sub_430A80(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // x1
  FILE *v4; // x3
  __int64 v5; // x5
  __int16 v7; // [xsp+26h] [xbp-Ah] BYREF

  v3 = a1[1];
  if ( v3 < qword_522130 && (v4 = *(FILE **)(qword_522128 + 8 * v3)) != nullptr )
  {
    v5 = a1[9];
    v7 = a1[5];
    *(_QWORD *)(a2 + 8) = (int)sub_490B60(v4, (__int64)&v7, 2, v5 != 0);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
