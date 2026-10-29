/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054464
// Address: 0x0000000100054464

//----- (0000000100054464) ----------------------------------------------------
void __fastcall sub_100054464(void **a1, unsigned __int64 a2, unsigned __int64 a3)
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
  __int128 v16; // q0
  _QWORD *v17; // x25
  size_t v18; // x22
  void *v19; // x0
  __int64 v20; // x24
  size_t v21; // x22
  unsigned __int64 v22; // x8
  unsigned __int64 v23; // x21
  __int64 v24; // x26
  void *v25; // x28
  _QWORD *v26; // x27
  void *v27; // x0
  __int64 v28; // x28
  void *__src; // [xsp+8h] [xbp-98h]
  __int128 v30; // [xsp+30h] [xbp-70h]
  int v31; // [xsp+40h] [xbp-60h]

  v5 = (unsigned __int64)a1[1];
  v6 = (char *)(v5 - a2);
  if ( v5 > a2 )
  {
    v7 = 56 * a2;
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
      v7 += 56;
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
  if ( (unsigned __int64)*a1 > a3 || (unsigned __int64)*a1 + 56 * v12 <= a3 )
  {
    if ( v12 < a2 )
    {
      *a1 = qvector_reserve(a1, *a1, a2, 0x38u);
      v5 = (unsigned __int64)a1[1];
    }
    v14 = a2 - v5;
    if ( a2 > v5 )
    {
      v15 = 56 * v5;
      do
      {
        v17 = (char *)*a1 + v15;
        *v17 = *(_QWORD *)a3;
        v17[1] = 0;
        v17[2] = 0;
        v17[3] = 0;
        v18 = *(_QWORD *)(a3 + 16);
        if ( v18 )
        {
          v19 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          v17[1] = v19;
          v17[3] = v18;
          memcpy(v19, *(const void **)(a3 + 8), v18);
          v17[2] = v18;
        }
        v16 = *(_OWORD *)(a3 + 32);
        *((_DWORD *)v17 + 12) = *(_DWORD *)(a3 + 48);
        *((_OWORD *)v17 + 2) = v16;
        v15 += 56;
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_18;
  }
  v20 = *(_QWORD *)a3;
  v21 = *(_QWORD *)(a3 + 16);
  if ( v21 )
  {
    __src = qalloc_or_throw(*(_QWORD *)(a3 + 16));
    memcpy(__src, *(const void **)(a3 + 8), v21);
    v12 = (unsigned __int64)a1[2];
  }
  else
  {
    __src = nullptr;
  }
  v30 = *(_OWORD *)(a3 + 32);
  v31 = *(_DWORD *)(a3 + 48);
  if ( v12 < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 0x38u);
  v22 = (unsigned __int64)a1[1];
  v23 = a2 - v22;
  if ( a2 > v22 )
  {
    v24 = 56 * v22;
    do
    {
      v25 = *a1;
      v26 = (char *)*a1 + v24;
      *v26 = v20;
      v26[1] = 0;
      v26[2] = 0;
      v26[3] = 0;
      if ( v21 )
      {
        v27 = qalloc_or_throw(v21);
        v28 = (__int64)v25 + v24;
        v26[1] = v27;
        *(_QWORD *)(v28 + 24) = v21;
        memcpy(v27, __src, v21);
        *(_QWORD *)(v28 + 16) = v21;
      }
      *((_DWORD *)v26 + 12) = v31;
      *((_OWORD *)v26 + 2) = v30;
      v24 += 56;
      --v23;
    }
    while ( v23 );
  }
  a1[1] = (void *)a2;
  if ( __src )
    qfree(__src);
}
