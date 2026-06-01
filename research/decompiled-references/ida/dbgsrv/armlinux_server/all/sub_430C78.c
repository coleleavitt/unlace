/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430C78
// Address: 0x0000000000430C78

//----- (0000000000430C78) ----------------------------------------------------
__int64 __fastcall sub_430C78(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x2
  __int64 v3; // x4

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < qword_522130 && (v3 = *(_QWORD *)(qword_522128 + 8 * v2)) != 0 )
  {
    --*(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = (int)sub_43AAE8((__int64 (__fastcall *)(__int64))sub_430CF0, v3, (__int64 *)(a1 + 32), a2);
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
