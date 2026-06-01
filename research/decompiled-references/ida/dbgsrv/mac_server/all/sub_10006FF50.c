/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006FF50
// Address: 0x000000010006FF50

//----- (000000010006FF50) ----------------------------------------------------
char __fastcall sub_10006FF50(_QWORD *a1, __int64 a2)
{
  char *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  const char *v10; // rax

  v4 = sub_10006AA50(0);
  a1[4] = v4;
  v5 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)sub_10006AAE0((__int64)v4) )
  {
    v6 = *(_QWORD *)(a2 + 80);
    a1[10] = v6;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(xmmword_1000AE410 + 256))(v6, v5);
    a1[11] = v7;
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 24))(*((_QWORD *)&xmmword_1000AE410 + 1));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)xmmword_1000AE410 + 168LL))(
        xmmword_1000AE410,
        v8,
        a1);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(xmmword_1000AE410 + 288))(a1[11], v8, v8);
      return 1;
    }
    v10 = "openssl";
  }
  else
  {
    v10 = "irs";
  }
  a1[8] = v10;
  return 0;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
