/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48CC58
// Address: 0x000000000048CC58

//----- (000000000048CC58) ----------------------------------------------------
_QWORD *__fastcall sub_48CC58(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x19

  v4 = sub_49E050(0x48u);
  *v4 = off_51C9D8;
  v4[1] = a2;
  *((_DWORD *)v4 + 4) = 0;
  v4[3] = a1;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[8] = 0;
  v4[4] = sub_490488();
  return sub_48C048((__int64)v4);
}
// 51C9D8: using guessed type __int64 (__fastcall *off_51C9D8[3])();
