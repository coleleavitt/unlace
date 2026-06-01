/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F400
// Address: 0x000000010006F400

//----- (000000010006F400) ----------------------------------------------------
bool __fastcall sub_10006F400(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15

  v1 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 256))(*(_QWORD *)(a1 + 80));
  *(_QWORD *)(a1 + 88) = v1;
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 24))(*((_QWORD *)&xmmword_1000AE410 + 1));
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)xmmword_1000AE410 + 168LL))(xmmword_1000AE410, v2, a1);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(xmmword_1000AE410 + 288))(*(_QWORD *)(a1 + 88), v2, v2);
  }
  return v1 != 0;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
