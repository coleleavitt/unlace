/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062EF4
// Address: 0x0000000100062EF4

//----- (0000000100062EF4) ----------------------------------------------------
__int64 __fastcall sub_100062EF4(__int64 a1)
{
  __int64 v2; // x20
  int v3; // w0
  const char *v4; // x8

  v2 = (*(__int64 (__fastcall **)(_QWORD))(qword_10009DAD8 + 312))(*(_QWORD *)(a1 + 88));
  if ( (int)v2 <= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_10009DAD8 + 232))(*(_QWORD *)(a1 + 88), v2);
    v4 = "openssl";
    if ( v3 == 5 )
      v4 = "irs";
    *(_QWORD *)(a1 + 64) = v4;
  }
  return (int)v2;
}
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
