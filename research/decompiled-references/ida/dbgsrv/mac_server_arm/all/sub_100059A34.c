/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059A34
// Address: 0x0000000100059A34

//----- (0000000100059A34) ----------------------------------------------------
_BYTE *__fastcall sub_100059A34(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x19
  _DWORD *v5; // x0

  v4 = operator new(0x1C8u);
  sub_10004B30C((__int64)v4, a2, a1);
  v4[184] = *(_BYTE *)(a1 + 107);
  v5 = sub_10001E4A4();
  v5[10] = 1;
  sub_10004BA54((__int64)v4, (__int64)v5);
  qword_10009D878 = (__int64)v4;
  return v4;
}
// 10009D878: using guessed type __int64 qword_10009D878;
