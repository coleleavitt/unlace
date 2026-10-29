/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461868
// Address: 0x0000000000461868

//----- (0000000000461868) ----------------------------------------------------
_BYTE *__fastcall sub_461868(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x19
  _DWORD *v5; // x0

  v4 = sub_49E050(0x1C8u);
  sub_465710((__int64)v4, a2, a1);
  v4[184] = *(_BYTE *)(a1 + 107);
  v5 = sub_410018();
  v5[10] = 1;
  sub_465840((__int64)v4, (__int64)v5);
  qword_522368 = (__int64)v4;
  return v4;
}
// 522368: using guessed type __int64 qword_522368;
