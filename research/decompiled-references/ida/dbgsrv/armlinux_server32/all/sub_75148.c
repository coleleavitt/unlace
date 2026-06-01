/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75148
// Address: 0x00075148

//----- (00075148) --------------------------------------------------------
_DWORD *__fastcall sub_75148(int a1, int a2)
{
  _DWORD *v4; // r4
  __int64 v5; // r0

  v4 = sub_808A4(0x18u);
  v4[4] = a2;
  v4[5] = a1;
  *v4 = &off_D1CC0;
  LODWORD(v5) = sub_7771C(a1);
  *((_QWORD *)v4 + 1) = v5;
  return sub_74AF4(v4);
}
// 7516E: variable 'v5' is possibly undefined
// D1CC0: using guessed type _UNKNOWN *;
