/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_696C0
// Address: 0x00000000000696C0

//----- (00000000000696C0) ----------------------------------------------------
void __fastcall sub_696C0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // x20
  unsigned __int64 v3; // x24
  __int64 v6; // x21
  __int64 v7; // x8
  _QWORD *v8; // x22
  __int64 *v9; // x0
  unsigned __int64 v10; // x10
  __int64 v11; // x23
  __int64 v12; // x8
  __int64 *v13; // x9
  __int64 v14; // x8
  __int64 *v15; // x0
  unsigned __int64 v16; // x10
  __int64 v17; // x23
  __int64 v18; // x8
  __int64 *v19; // x9
  unsigned __int64 v20; // x13
  __int128 *v21; // x12
  _OWORD *v22; // x13
  unsigned __int64 v23; // x14
  __int128 v24; // q0
  __int128 v25; // q1
  __int64 v26; // t1
  unsigned __int64 v27; // x13
  __int128 *v28; // x12
  _OWORD *v29; // x13
  unsigned __int64 v30; // x14
  __int128 v31; // q0
  __int128 v32; // q1
  __int64 v33; // t1

  v2 = *(__int64 **)a1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 <= (unsigned __int64)a2 && &v2[v3] > a2 )
  {
    v6 = *a2;
    v8 = (_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v3 >= v7 + 1 )
    {
LABEL_28:
      v2[v7] = v6;
      goto LABEL_29;
    }
    v2 = (__int64 *)qvector_reserve((pthread_mutex_t *)a1, nullptr, v7 + 1, 8u);
    v9 = *(__int64 **)a1;
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v3;
    v12 = v10 - 1;
    if ( (__int64)(v10 - 1) < 0 )
    {
LABEL_27:
      qfree(v9);
      v7 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 16) = v11;
      goto LABEL_28;
    }
    if ( v10 >= 4 )
    {
      if ( v2 >= &v9[v10] || (v13 = v2, &v2[v10] <= v9) )
      {
        v27 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        v28 = (__int128 *)(v9 + 2);
        v12 -= v10 & 0xFFFFFFFFFFFFFFFCLL;
        v13 = &v2[v27];
        v9 = (__int64 *)((char *)v9 + v27 * 8);
        v29 = v2 + 2;
        v30 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        do
        {
          v31 = *(v28 - 1);
          v32 = *v28;
          v28 += 2;
          v30 -= 4LL;
          *(v29 - 1) = v31;
          *v29 = v32;
          v29 += 2;
        }
        while ( v30 );
        if ( v10 == (v10 & 0xFFFFFFFFFFFFFFFCLL) )
          goto LABEL_26;
      }
    }
    else
    {
      v13 = v2;
    }
    do
    {
      v33 = *v9++;
      --v12;
      *v13++ = v33;
    }
    while ( v12 >= 0 );
LABEL_26:
    v9 = *(__int64 **)a1;
    goto LABEL_27;
  }
  v8 = (_QWORD *)(a1 + 8);
  v14 = *(_QWORD *)(a1 + 8);
  if ( v3 < v14 + 1 )
  {
    v2 = (__int64 *)qvector_reserve((pthread_mutex_t *)a1, nullptr, v14 + 1, 8u);
    v15 = *(__int64 **)a1;
    v16 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v3;
    v18 = v16 - 1;
    if ( (__int64)(v16 - 1) < 0 )
    {
LABEL_18:
      qfree(v15);
      v14 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 16) = v17;
      goto LABEL_19;
    }
    if ( v16 >= 4 )
    {
      if ( v2 >= &v15[v16] || (v19 = v2, &v2[v16] <= v15) )
      {
        v20 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        v21 = (__int128 *)(v15 + 2);
        v18 -= v16 & 0xFFFFFFFFFFFFFFFCLL;
        v19 = &v2[v20];
        v15 = (__int64 *)((char *)v15 + v20 * 8);
        v22 = v2 + 2;
        v23 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        do
        {
          v24 = *(v21 - 1);
          v25 = *v21;
          v21 += 2;
          v23 -= 4LL;
          *(v22 - 1) = v24;
          *v22 = v25;
          v22 += 2;
        }
        while ( v23 );
        if ( v16 == (v16 & 0xFFFFFFFFFFFFFFFCLL) )
          goto LABEL_17;
      }
    }
    else
    {
      v19 = v2;
    }
    do
    {
      v26 = *v15++;
      --v18;
      *v19++ = v26;
    }
    while ( v18 >= 0 );
LABEL_17:
    v15 = *(__int64 **)a1;
    goto LABEL_18;
  }
LABEL_19:
  v2[v14] = *a2;
LABEL_29:
  ++*v8;
}
