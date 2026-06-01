/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063608
// Address: 0x0000000100063608

//----- (0000000100063608) ----------------------------------------------------
__int64 __fastcall sub_100063608(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 result; // x0
  __int64 v6; // x20
  const char *v7; // x8

  sub_10005E2CC(0);
  a1[4] = v4;
  if ( (sub_10005E32C(v4) & 1) != 0 )
  {
    a1[10] = *(_QWORD *)(a2 + 80);
    result = (*(__int64 (**)(void))(qword_10009DAD8 + 256))();
    a1[11] = result;
    if ( result )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(qword_10009DAD8 + 24))(qword_10009DAE0);
      (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)qword_10009DAD8 + 168LL))(qword_10009DAD8, v6, a1);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(qword_10009DAD8 + 288))(a1[11], v6, v6);
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
// 100063628: variable 'v4' is possibly undefined
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
// 10009DAE0: using guessed type __int64 qword_10009DAE0;
