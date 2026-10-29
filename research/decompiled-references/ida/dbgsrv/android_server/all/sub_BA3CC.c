/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA3CC
// Address: 0x00000000000BA3CC

//----- (00000000000BA3CC) ----------------------------------------------------
_QWORD *__fastcall sub_BA3CC(__int64 a1)
{
  _QWORD *v2; // x0
  __int64 v3; // x22
  _QWORD *v4; // x19
  void *v5; // x0
  _QWORD *v6; // x20

  v2 = operator new(0x48u);
  v2[4] = 0;
  v2[5] = 0;
  *v2 = &off_160390;
  v2[3] = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  if ( v3 )
  {
    v5 = qalloc_or_throw(8 * v3);
    v4[3] = v5;
    v4[5] = v3;
    memcpy(v5, *(const void **)a1, 8 * v3);
    v4[4] = v3;
  }
  *((_DWORD *)v4 + 4) = 0;
  v4[1] = 0;
  v4[7] = 0;
  v4[8] = 0;
  v4[6] = 0;
  v6 = operator new(0x38u);
  *(_DWORD *)v6 = 4;
  v6[1] = v4;
  sub_B9778(v6);
  return v6;
}
// 160390: using guessed type __int64 (__fastcall *off_160390)(int, int, void *ptr, size_t n);
