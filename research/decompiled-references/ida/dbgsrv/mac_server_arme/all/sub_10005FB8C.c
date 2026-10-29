/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005FB8C
// Address: 0x000000010005FB8C

//----- (000000010005FB8C) ----------------------------------------------------
void __fastcall sub_10005FB8C(void **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x9
  char *v6; // x22
  __int64 v7; // x21
  char *v8; // x23
  _QWORD *v9; // x24
  void *v10; // x0
  unsigned __int64 v12; // x8
  unsigned __int64 v14; // x23
  __int64 v15; // x24
  _QWORD *v16; // x25
  size_t v17; // x22
  void *v18; // x0
  __int64 v19; // x24
  size_t v20; // x22
  void *v21; // x23
  unsigned __int64 v22; // x8
  unsigned __int64 v23; // x21
  __int64 v24; // x25
  void *v25; // x26
  _QWORD *v26; // x27
  _QWORD *v27; // x27
  void *v28; // x0
  __int64 v29; // x26

  v5 = (unsigned __int64)a1[1];
  v6 = (char *)(v5 - a2);
  if ( v5 > a2 )
  {
    v7 = 32 * a2;
    do
    {
      v8 = (char *)*a1;
      v9 = (char *)*a1 + v7;
      v10 = (void *)v9[1];
      if ( v10 )
      {
        v9[2] = 0;
        qfree(v10);
        v9[1] = 0;
        *(_QWORD *)&v8[v7 + 24] = 0;
      }
      v7 += 32;
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
  if ( (unsigned __int64)*a1 > a3 || (unsigned __int64)*a1 + 32 * v12 <= a3 )
  {
    if ( v12 < a2 )
    {
      *a1 = qvector_reserve(a1, *a1, a2, 0x20u);
      v5 = (unsigned __int64)a1[1];
    }
    v14 = a2 - v5;
    if ( a2 > v5 )
    {
      v15 = 32 * v5;
      do
      {
        v16 = (char *)*a1 + v15;
        *v16 = *(_QWORD *)a3;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = 0;
        v17 = *(_QWORD *)(a3 + 16);
        if ( v17 )
        {
          v18 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          v16[1] = v18;
          v16[3] = v17;
          memcpy(v18, *(const void **)(a3 + 8), v17);
          v16[2] = v17;
        }
        v15 += 32;
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_18;
  }
  v19 = *(_QWORD *)a3;
  v20 = *(_QWORD *)(a3 + 16);
  if ( v20 )
  {
    v21 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
    memcpy(v21, *(const void **)(a3 + 8), v20);
    if ( (unsigned __int64)a1[2] >= a2 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v21 = nullptr;
  if ( v12 < a2 )
LABEL_24:
    *a1 = qvector_reserve(a1, *a1, a2, 0x20u);
LABEL_25:
  v22 = (unsigned __int64)a1[1];
  v23 = a2 - v22;
  if ( a2 > v22 )
  {
    v24 = 32 * v22;
    do
    {
      v25 = *a1;
      v26 = (char *)*a1 + v24;
      *v26 = v19;
      v26[2] = 0;
      v26[3] = 0;
      v26[1] = 0;
      v27 = v26 + 1;
      if ( v20 )
      {
        v28 = qalloc_or_throw(v20);
        v29 = (__int64)v25 + v24;
        *v27 = v28;
        *(_QWORD *)(v29 + 24) = v20;
        memcpy(v28, v21, v20);
        *(_QWORD *)(v29 + 16) = v20;
      }
      v24 += 32;
      --v23;
    }
    while ( v23 );
  }
  a1[1] = (void *)a2;
  if ( v21 )
    qfree(v21);
}
