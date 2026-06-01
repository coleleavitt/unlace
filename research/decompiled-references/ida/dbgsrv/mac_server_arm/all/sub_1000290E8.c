/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000290E8
// Address: 0x00000001000290E8

//----- (00000001000290E8) ----------------------------------------------------
void __fastcall sub_1000290E8(void **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x8
  char *v6; // x22
  __int64 v7; // x21
  char *v8; // x8
  void *v9; // x0
  char *v10; // x23
  unsigned __int64 v12; // x9
  unsigned __int64 v14; // x23
  __int64 v15; // x24
  _QWORD *v16; // x25
  size_t v17; // x22
  void *v18; // x0
  size_t v19; // x22
  void *v20; // x23
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x21
  __int64 v23; // x24
  char *v24; // x25
  _QWORD *v25; // x8
  void *v26; // x0
  char *v27; // x25

  v5 = (unsigned __int64)a1[1];
  v6 = (char *)(v5 - a2);
  if ( v5 > a2 )
  {
    v7 = 24 * a2;
    do
    {
      v8 = (char *)*a1;
      v9 = *(void **)((char *)*a1 + v7);
      if ( v9 )
      {
        v10 = &v8[v7];
        *(_QWORD *)&v8[v7 + 8] = 0;
        qfree(v9);
        *(_QWORD *)v10 = 0;
        *((_QWORD *)v10 + 2) = 0;
      }
      v7 += 24;
      --v6;
    }
    while ( v6 );
LABEL_18:
    a1[1] = (void *)a2;
    return;
  }
  if ( v5 >= a2 )
    return;
  v12 = (unsigned __int64)a1[2];
  if ( (unsigned __int64)*a1 > a3 || (unsigned __int64)*a1 + 24 * v12 <= a3 )
  {
    if ( v12 < a2 )
    {
      *a1 = qvector_reserve(a1, *a1, a2, 0x18u);
      v5 = (unsigned __int64)a1[1];
    }
    v14 = a2 - v5;
    if ( a2 > v5 )
    {
      v15 = 24 * v5;
      do
      {
        v16 = (char *)*a1 + v15;
        *v16 = 0;
        v16[1] = 0;
        v16[2] = 0;
        v17 = *(_QWORD *)(a3 + 8);
        if ( v17 )
        {
          v18 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
          *v16 = v18;
          v16[2] = v17;
          memcpy(v18, *(const void **)a3, v17);
          v16[1] = v17;
        }
        v15 += 24;
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_18;
  }
  v19 = *(_QWORD *)(a3 + 8);
  if ( v19 )
  {
    v20 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
    memcpy(v20, *(const void **)a3, v19);
    if ( (unsigned __int64)a1[2] >= a2 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v20 = nullptr;
  if ( v12 < a2 )
LABEL_24:
    *a1 = qvector_reserve(a1, *a1, a2, 0x18u);
LABEL_25:
  v21 = (unsigned __int64)a1[1];
  v22 = a2 - v21;
  if ( a2 > v21 )
  {
    v23 = 24 * v21;
    do
    {
      v24 = (char *)*a1;
      v25 = (char *)*a1 + v23;
      *v25 = 0;
      v25[1] = 0;
      v25[2] = 0;
      if ( v19 )
      {
        v26 = qalloc_or_throw(v19);
        v27 = &v24[v23];
        *(_QWORD *)v27 = v26;
        *((_QWORD *)v27 + 2) = v19;
        memcpy(v26, v20, v19);
        *((_QWORD *)v27 + 1) = v19;
      }
      v23 += 24;
      --v22;
    }
    while ( v22 );
  }
  a1[1] = (void *)a2;
  if ( v20 )
    qfree(v20);
}
