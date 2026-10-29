/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430948
// Address: 0x0000000000430948

//----- (0000000000430948) ----------------------------------------------------
__int64 __fastcall sub_430948(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x2
  FILE *v3; // x2

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < qword_522130 && (v3 = *(FILE **)(qword_522128 + 8 * v2)) != nullptr )
  {
    if ( *(_QWORD *)(a1 + 48) )
      *(_QWORD *)(a2 + 8) = (int)sub_490DF0(*(const char **)(a1 + 40), v3);
    else
      *(_QWORD *)(a2 + 8) = (int)sub_490DF0((const char *)&qword_4B2D48, v3);
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
