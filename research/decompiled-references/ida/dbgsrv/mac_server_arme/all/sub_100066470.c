/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066470
// Address: 0x0000000100066470

//----- (0000000100066470) ----------------------------------------------------
__int64 __fastcall sub_100066470(__int64 a1, const char *a2)
{
  __int64 v3; // x19
  __int64 result; // x0

  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_1000A5AD8 + 184LL))(qword_1000A5AD8, a1);
  strlen(a2);
  result = sub_100062420(*(_QWORD *)(v3 + 32));
  if ( result <= 0 )
    *(_QWORD *)(v3 + 64) = "irs";
  return result;
}
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
