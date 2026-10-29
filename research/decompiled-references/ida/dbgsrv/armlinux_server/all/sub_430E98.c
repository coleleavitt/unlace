/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430E98
// Address: 0x0000000000430E98

//----- (0000000000430E98) ----------------------------------------------------
__int64 __fastcall sub_430E98(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x0
  FILE *v3; // x0

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < qword_522130 && (v3 = *(FILE **)(qword_522128 + 8 * v2)) != nullptr )
  {
    *(_BYTE *)a2 = 9;
    *(_QWORD *)(a2 + 8) = sub_4871C0(v3);
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
