/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068178
// Address: 0x0000000100068178

//----- (0000000100068178) ----------------------------------------------------
__int64 __fastcall sub_100068178(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 result; // x0
  __int64 v6; // x20
  const char *v7; // x8

  sub_100062414(0);
  a1[4] = v4;
  if ( (sub_10006251C(v4) & 1) != 0 )
  {
    a1[10] = *(_QWORD *)(a2 + 80);
    result = (*(__int64 (**)(void))(qword_1000A5AD8 + 256))();
    a1[11] = result;
    if ( result )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(qword_1000A5AD8 + 24))(qword_1000A5AE0);
      (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)qword_1000A5AD8 + 168LL))(qword_1000A5AD8, v6, a1);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(qword_1000A5AD8 + 288))(a1[11], v6, v6);
      return 1;
    }
    v7 = "openssl";
  }
  else
  {
    result = 0;
    v7 = "irs";
  }
  a1[8] = v7;
  return result;
}
// 10006819C: variable 'v4' is possibly undefined
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
// 1000A5AE0: using guessed type __int64 qword_1000A5AE0;
