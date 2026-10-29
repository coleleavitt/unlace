/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D2D8
// Address: 0x000000010005D2D8

//----- (000000010005D2D8) ----------------------------------------------------
_BYTE *__fastcall sub_10005D2D8(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x19
  _DWORD *v5; // x0

  v4 = operator new(0x1C8u);
  sub_10004DC08((__int64)v4, a2, a1);
  v4[184] = *(_BYTE *)(a1 + 107);
  v5 = sub_1000202A0();
  v5[10] = 1;
  sub_10004E4A4((__int64)v4, (__int64)v5);
  qword_1000A5878 = (__int64)v4;
  return v4;
}
// 1000A5878: using guessed type __int64 qword_1000A5878;
