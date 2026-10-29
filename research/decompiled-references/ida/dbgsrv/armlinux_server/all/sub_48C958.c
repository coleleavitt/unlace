/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C958
// Address: 0x000000000048C958

//----- (000000000048C958) ----------------------------------------------------
_QWORD *__fastcall sub_48C958(__int64 a1, __int64 a2)
{
  _DWORD *v4; // x0

  v4 = sub_49E050(0x20u);
  v4[4] = 0;
  *(_QWORD *)v4 = &off_51CA00;
  *((_QWORD *)v4 + 1) = a2;
  *((_QWORD *)v4 + 3) = a1;
  return sub_48C048((__int64)v4);
}
// 51CA00: using guessed type __int64 (__fastcall *off_51CA00)(int, int, void *dest);
