/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6723C
// Address: 0x0006723C

//----- (0006723C) --------------------------------------------------------
_DWORD *__fastcall sub_6723C(_DWORD *a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r4
  size_t v7; // r6
  void *v8; // r0
  size_t v9; // r6
  void *v10; // r0

  v4 = *a2;
  v5 = a2[1];
  *a1 = v4;
  a1[1] = v5;
  a1[2] = 0;
  a1 += 3;
  *a1 = 0;
  a1[1] = 0;
  v6 = a1 - 3;
  v7 = a2[3];
  if ( v7 )
  {
    v8 = qalloc_or_throw(a2[3]);
    v6[2] = v8;
    v6[4] = v7;
    qmemcpy(v8, (const void *)a2[2], v7);
    v6[3] = v7;
  }
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v9 = a2[6];
  if ( v9 )
  {
    v10 = qalloc_or_throw(a2[6]);
    v6[7] = v9;
    v6[5] = v10;
    qmemcpy(v10, (const void *)a2[5], v9);
    v6[6] = v9;
  }
  *((_WORD *)v6 + 18) = *((_WORD *)a2 + 18);
  v6[8] = a2[8];
  return v6;
}
