/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E640
// Address: 0x000000010006E640

//----- (000000010006E640) ----------------------------------------------------
__int64 __fastcall sub_10006E640(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)xmmword_1000AE410 + 184LL))(xmmword_1000AE410, a1);
  strlen(a2);
  result = sub_10006AA70(*(_QWORD *)(v2 + 32));
  if ( result <= 0 )
    *(_QWORD *)(v2 + 64) = "irs";
  return result;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
