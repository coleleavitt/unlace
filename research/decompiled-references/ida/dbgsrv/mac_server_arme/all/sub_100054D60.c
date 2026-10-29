/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054D60
// Address: 0x0000000100054D60

//----- (0000000100054D60) ----------------------------------------------------
void __fastcall sub_100054D60(void **a1, unsigned __int64 a2, unsigned __int64 a3)
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
  __int128 v17; // q1
  __int128 v18; // q2
  _QWORD *v19; // x25
  __int64 v20; // x8
  size_t v21; // x22
  void *v22; // x0
  size_t v23; // x22
  void *v24; // x23
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x21
  __int64 v27; // x25
  void *v28; // x27
  _QWORD *v29; // x26
  void *v30; // x0
  __int64 v31; // x27
  __int64 v32; // [xsp+0h] [xbp-D0h]
  int v33; // [xsp+8h] [xbp-C8h]
  __int128 v34; // [xsp+28h] [xbp-A8h]
  __int128 v35; // [xsp+38h] [xbp-98h]
  __int128 v36; // [xsp+48h] [xbp-88h]
  __int128 v37; // [xsp+58h] [xbp-78h]
  __int128 v38; // [xsp+68h] [xbp-68h]

  v5 = (unsigned __int64)a1[1];
  v6 = (char *)(v5 - a2);
  if ( v5 > a2 )
  {
    v7 = 120 * a2;
    do
    {
      v8 = (char *)*a1;
      v9 = (char *)*a1 + v7;
      v10 = (void *)v9[2];
      if ( v10 )
      {
        v9[3] = 0;
        qfree(v10);
        v9[2] = 0;
        *(_QWORD *)&v8[v7 + 32] = 0;
      }
      v7 += 120;
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
  if ( (unsigned __int64)*a1 > a3 || (unsigned __int64)*a1 + 120 * v12 <= a3 )
  {
    if ( v12 < a2 )
    {
      *a1 = qvector_reserve(a1, *a1, a2, 0x78u);
      v5 = (unsigned __int64)a1[1];
    }
    v14 = a2 - v5;
    if ( a2 > v5 )
    {
      v15 = 120 * v5;
      do
      {
        v19 = (char *)*a1 + v15;
        v20 = *(_QWORD *)a3;
        *((_DWORD *)v19 + 2) = *(_DWORD *)(a3 + 8);
        *v19 = v20;
        v19[2] = 0;
        v19[3] = 0;
        v19[4] = 0;
        v21 = *(_QWORD *)(a3 + 24);
        if ( v21 )
        {
          v22 = qalloc_or_throw(*(_QWORD *)(a3 + 24));
          v19[2] = v22;
          v19[4] = v21;
          memcpy(v22, *(const void **)(a3 + 16), v21);
          v19[3] = v21;
        }
        *(_OWORD *)(v19 + 5) = *(_OWORD *)(a3 + 40);
        v16 = *(_OWORD *)(a3 + 56);
        v17 = *(_OWORD *)(a3 + 72);
        v18 = *(_OWORD *)(a3 + 88);
        *(_OWORD *)(v19 + 13) = *(_OWORD *)(a3 + 104);
        *(_OWORD *)(v19 + 11) = v18;
        *(_OWORD *)(v19 + 9) = v17;
        *(_OWORD *)(v19 + 7) = v16;
        v15 += 120;
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_18;
  }
  v32 = *(_QWORD *)a3;
  v33 = *(_DWORD *)(a3 + 8);
  v23 = *(_QWORD *)(a3 + 24);
  if ( v23 )
  {
    v24 = qalloc_or_throw(*(_QWORD *)(a3 + 24));
    memcpy(v24, *(const void **)(a3 + 16), v23);
    v12 = (unsigned __int64)a1[2];
  }
  else
  {
    v24 = nullptr;
  }
  v35 = *(_OWORD *)(a3 + 56);
  v36 = *(_OWORD *)(a3 + 72);
  v37 = *(_OWORD *)(a3 + 88);
  v38 = *(_OWORD *)(a3 + 104);
  v34 = *(_OWORD *)(a3 + 40);
  if ( v12 < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 0x78u);
  v25 = (unsigned __int64)a1[1];
  v26 = a2 - v25;
  if ( a2 > v25 )
  {
    v27 = 120 * v25;
    do
    {
      v28 = *a1;
      v29 = (char *)*a1 + v27;
      *((_DWORD *)v29 + 2) = v33;
      *v29 = v32;
      v29[2] = 0;
      v29[3] = 0;
      v29[4] = 0;
      if ( v23 )
      {
        v30 = qalloc_or_throw(v23);
        v31 = (__int64)v28 + v27;
        v29[2] = v30;
        *(_QWORD *)(v31 + 32) = v23;
        memcpy(v30, v24, v23);
        *(_QWORD *)(v31 + 24) = v23;
      }
      *(_OWORD *)(v29 + 5) = v34;
      *(_OWORD *)(v29 + 13) = v38;
      *(_OWORD *)(v29 + 11) = v37;
      *(_OWORD *)(v29 + 9) = v36;
      *(_OWORD *)(v29 + 7) = v35;
      v27 += 120;
      --v26;
    }
    while ( v26 );
  }
  a1[1] = (void *)a2;
  if ( v24 )
    qfree(v24);
}
