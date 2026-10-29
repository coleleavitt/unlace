/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C9F8
// Address: 0x000000000048C9F8

//----- (000000000048C9F8) ----------------------------------------------------
_QWORD *__fastcall sub_48C9F8(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // x0

  v6 = sub_49E050(0x30u);
  v6[4] = 0;
  *((_QWORD *)v6 + 3) = a1;
  *((_QWORD *)v6 + 4) = a2;
  *((_QWORD *)v6 + 5) = a2 + a3;
  *(_QWORD *)v6 = off_51C988;
  *((_QWORD *)v6 + 1) = a3;
  return sub_48C048((__int64)v6);
}
// 51C988: using guessed type __int64 (__fastcall *off_51C988[3])();
