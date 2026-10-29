/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449410
// Address: 0x0000000000449410

//----- (0000000000449410) ----------------------------------------------------
char *__fastcall sub_449410(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // x0
  _BYTE *v6; // x23
  __int64 v7; // x22
  _QWORD *v8; // x21
  __int64 v10[4]; // [xsp+48h] [xbp-28h] BYREF

  LOBYTE(v10[0]) = 2;
  memset(&v10[1], 0, 24);
  sub_4488B8(v10, a3);
  v6 = *(_BYTE **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v7 = a2 - *(_QWORD *)a1;
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(a1 + 16) )
  {
    v6 = sub_491288(a1, *(void **)a1, v5 + 1, 0x20u);
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v6;
  }
  v8 = &v6[v7];
  memmove(&v6[v7 + 32], &v6[v7], 32 * v5 - v7);
  v6[v7] = 2;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  sub_4488B8((__int64 *)&v6[v7], v10);
  ++*(_QWORD *)(a1 + 8);
  sub_448310(v10);
  return &v6[v7];
}
