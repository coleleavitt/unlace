/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BC90
// Address: 0x000000010001BC90

//----- (000000010001BC90) ----------------------------------------------------
void **__fastcall sub_10001BC90(void **a1, __int64 *a2)
{
  __int64 v3; // x24
  __int64 v5; // x23
  char *v6; // x8
  __int64 v7; // x10
  char *v8; // x25
  __int64 v9; // x22
  __int64 v10; // x26
  __int64 v11; // x27
  __int128 v12; // q0
  _QWORD *v13; // x28
  size_t v14; // x21
  void *v15; // x0
  _QWORD *v16; // x22
  size_t v17; // x21
  void *v18; // x0
  void *v20; // [xsp+8h] [xbp-58h]

  v3 = a2[1];
  if ( v3 )
  {
    *a1 = qalloc_or_throw(80 * v3);
    a1[2] = (void *)v3;
    v5 = 64;
    v20 = (void *)v3;
    do
    {
      v8 = (char *)*a1;
      v9 = (__int64)*a1 + v5;
      v10 = *a2;
      v11 = *a2 + v5;
      v12 = *(_OWORD *)(v11 - 64);
      *(_QWORD *)(v9 - 48) = 0;
      v13 = (_QWORD *)(v9 - 48);
      *(_OWORD *)(v9 - 64) = v12;
      v13[1] = 0;
      v13[2] = 0;
      v14 = *(_QWORD *)(v11 - 40);
      if ( v14 )
      {
        v15 = qalloc_or_throw(*(_QWORD *)(v11 - 40));
        *v13 = v15;
        *(_QWORD *)(v9 - 32) = v14;
        memcpy(v15, *(const void **)(v11 - 48), v14);
        *(_QWORD *)(v9 - 40) = v14;
      }
      *(_QWORD *)(v9 - 24) = 0;
      *(_QWORD *)(v9 - 16) = 0;
      v16 = (_QWORD *)(v9 - 24);
      v16[2] = 0;
      v17 = *(_QWORD *)(v11 - 16);
      if ( v17 )
      {
        v18 = qalloc_or_throw(*(_QWORD *)(v11 - 16));
        *v16 = v18;
        *(_QWORD *)&v8[v5 - 8] = v17;
        memcpy(v18, *(const void **)(v11 - 24), v17);
        *(_QWORD *)&v8[v5 - 16] = v17;
      }
      v6 = &v8[v5];
      v7 = *(_QWORD *)(v10 + v5);
      *((_WORD *)v6 + 4) = *(_WORD *)(v10 + v5 + 8);
      *(_QWORD *)v6 = v7;
      v5 += 80;
      --v3;
    }
    while ( v3 );
    a1[1] = v20;
  }
  return a1;
}
