/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BD54
// Address: 0x0007BD54

//----- (0007BD54) --------------------------------------------------------
_DWORD *__fastcall sub_7BD54(int a1)
{
  _DWORD *v2; // r4
  int v3; // r7
  void *v4; // r0
  _DWORD *v5; // r5

  v2 = operator new(0x38u);
  *v2 = &off_DB228;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v4 = qalloc_or_throw(4 * v3);
    v2[7] = v3;
    v2[5] = v4;
    qmemcpy(v4, *(const void **)a1, 4 * v3);
    v2[6] = v3;
  }
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[8] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v5 = operator new(0x30u);
  *v5 = 4;
  v5[2] = v2;
  sub_7B454((int)v5);
  return v5;
}
// DB228: using guessed type _UNKNOWN *off_DB228;
