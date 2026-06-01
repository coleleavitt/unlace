/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48CBB0
// Address: 0x000000000048CBB0

//----- (000000000048CBB0) ----------------------------------------------------
_QWORD *__fastcall sub_48CBB0(__int64 a1)
{
  _QWORD *v2; // x19
  __int64 v3; // x21
  void *v5; // x0
  const void *v6; // x1

  v2 = sub_49E050(0x48u);
  v3 = *(_QWORD *)(a1 + 8);
  *v2 = off_51C9B0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  if ( v3 )
  {
    v5 = sub_491248(8 * v3);
    v6 = *(const void **)a1;
    v2[3] = v5;
    v2[5] = v3;
    memcpy(v5, v6, 8 * v3);
    v2[4] = v3;
  }
  v2[1] = 0;
  *((_DWORD *)v2 + 4) = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  return sub_48C048((__int64)v2);
}
// 51C9B0: using guessed type __int64 (__fastcall *off_51C9B0[3])();
