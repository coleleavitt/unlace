/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430BD0
// Address: 0x0000000000430BD0

//----- (0000000000430BD0) ----------------------------------------------------
__int64 __fastcall sub_430BD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // x1
  FILE *v4; // x3
  unsigned __int16 v6; // [xsp+26h] [xbp-Ah] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 < qword_522130
    && (v4 = *(FILE **)(qword_522128 + 8 * v3)) != nullptr
    && !(unsigned int)sub_490A88(v4, (__int64)&v6, 2, *(_QWORD *)(a1 + 40) != 0) )
  {
    *(_QWORD *)(a2 + 8) = v6;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
