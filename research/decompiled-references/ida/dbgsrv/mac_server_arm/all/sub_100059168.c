/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059168
// Address: 0x0000000100059168

//----- (0000000100059168) ----------------------------------------------------
__int64 __fastcall sub_100059168(_QWORD *a1, void **a2, __int64 a3)
{
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x25
  _QWORD *v9; // x24
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x25
  unsigned __int64 v13; // x21
  _QWORD *v14; // x22
  __int64 v15; // x23
  char *v16; // x24
  _QWORD *v17; // x25
  void *v18; // x0
  __int64 v19; // x26
  _QWORD *v20; // x1
  _QWORD *v21; // x8
  _QWORD *v22; // x22
  const void **v23; // x27
  __int64 v24; // x9
  __int64 v25; // x10
  const void **v26; // x8
  unsigned __int64 v27; // x9
  size_t v28; // x23
  const void *v29; // x24
  _QWORD *v30; // x1

  v6 = a1[36];
  if ( v6 )
  {
    v7 = 0;
    do
    {
      v8 = a1[35];
      v9 = (_QWORD *)(v8 + v7);
      v10 = *(void **)(v8 + v7 + 40);
      if ( v10 )
      {
        v9[6] = 0;
        qfree(v10);
        v9[5] = 0;
        *(_QWORD *)(v8 + v7 + 56) = 0;
      }
      v11 = (void *)v9[1];
      if ( v11 )
      {
        v12 = v8 + v7;
        *(_QWORD *)(v12 + 16) = 0;
        qfree(v11);
        v9[1] = 0;
        *(_QWORD *)(v12 + 24) = 0;
      }
      v7 += 64;
      --v6;
    }
    while ( v6 );
  }
  a1[36] = 0;
  (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 24LL))(a1, a1 + 35, a3);
  v13 = a1[36];
  v14 = a2[1];
  if ( v14 )
  {
    v15 = 0;
    do
    {
      v16 = (char *)*a2;
      v17 = (char *)*a2 + v15;
      v18 = (void *)v17[1];
      if ( v18 )
      {
        v17[2] = 0;
        qfree(v18);
        v17[1] = 0;
        *(_QWORD *)&v16[v15 + 24] = 0;
      }
      v15 += 32;
      v14 = (_QWORD *)((char *)v14 - 1);
    }
    while ( v14 );
  }
  a2[1] = nullptr;
  if ( (unsigned __int64)a2[2] >= v13 )
  {
    if ( !v13 )
      return 1;
  }
  else
  {
    *a2 = qvector_reserve(a2, *a2, v13, 0x20u);
  }
  v19 = 0;
  do
  {
    v20 = *a2;
    v21 = a2[1];
    if ( a2[2] < (char *)v21 + 1 )
    {
      v20 = qvector_reserve(a2, v20, (unsigned __int64)v21 + 1, 0x20u);
      *a2 = v20;
      v21 = a2[1];
    }
    v22 = &v20[4 * (_QWORD)v21];
    v22[1] = 0;
    v23 = (const void **)(v22 + 1);
    v22[2] = 0;
    v22[3] = 0;
    a2[1] = (char *)a2[1] + 1;
    v24 = a1[35];
    *(_DWORD *)v22 = *(_DWORD *)(v24 + v19);
    if ( *(_QWORD *)(v24 + v19 + 48) >= 2u )
      v25 = 40;
    else
      v25 = 8;
    v26 = (const void **)(v24 + v19 + v25);
    if ( v26 != v23 )
    {
      v27 = *(_QWORD *)(v24 + v25 + v19 + 8);
      if ( v27 )
        v28 = v27 - 1;
      else
        v28 = 0;
      if ( v27 < 2 )
      {
        v22[2] = 0;
      }
      else
      {
        v29 = *v26;
        v30 = (_QWORD *)v22[1];
        if ( v22[3] <= v28 )
        {
          v30 = qvector_reserve(v23, v30, v28 + 1, 1u);
          *v23 = v30;
        }
        v22[2] = v28 + 1;
        memmove(v30, v29, v28);
        *(_BYTE *)(v22[1] + v28) = 0;
      }
    }
    v19 += 64;
    --v13;
  }
  while ( v13 );
  return 1;
}
