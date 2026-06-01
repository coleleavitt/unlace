/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430D18
// Address: 0x0000000000430D18

//----- (0000000000430D18) ----------------------------------------------------
__int64 __fastcall sub_430D18(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x2
  FILE *v3; // x2

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 < qword_522130 && (v3 = *(FILE **)(qword_522128 + 8 * v2)) != nullptr )
  {
    *(_QWORD *)(a2 + 8) = (int)sub_490C98(*(unsigned __int8 *)(a1 + 8), v3);
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
