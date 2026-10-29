/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C998
// Address: 0x000000000048C998

//----- (000000000048C998) ----------------------------------------------------
_QWORD *__fastcall sub_48C998(int a1, int a2)
{
  _DWORD *v4; // x19

  v4 = sub_49E050(0x18u);
  *(_QWORD *)v4 = off_51C960;
  v4[4] = a2;
  v4[5] = a1;
  *((_QWORD *)v4 + 1) = sub_490430(a1);
  return sub_48C048((__int64)v4);
}
// 51C960: using guessed type __int64 (__fastcall *off_51C960[3])();
