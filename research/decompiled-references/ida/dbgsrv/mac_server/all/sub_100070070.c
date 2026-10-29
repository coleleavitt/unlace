/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070070
// Address: 0x0000000100070070

//----- (0000000100070070) ----------------------------------------------------
__int64 __fastcall sub_100070070(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi

  sub_10006AB30(*(_QWORD *)(a1 + 32));
  *(_OWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  v7 = 78;
  if ( a3 != 0 && a2 >= 0 )
  {
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = a4;
    *(_DWORD *)(a1 + 24) = a2;
    v7 = 33;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(xmmword_1000AE410 + 216))(
           *(_QWORD *)(a1 + 88),
           v7,
           1,
           0);
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
