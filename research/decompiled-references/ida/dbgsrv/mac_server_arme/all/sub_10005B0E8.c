/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B0E8
// Address: 0x000000010005B0E8

//----- (000000010005B0E8) ----------------------------------------------------
__int64 __fastcall sub_10005B0E8(__int64 **a1, __int64 a2)
{
  __int64 *v2; // x8
  __int64 **v4; // x20
  __int64 *v5; // x8
  __int64 v6; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  __int64 *v14; // x8
  __int64 v15; // x23
  __int64 v16; // x22
  char *v17; // x21
  __int64 v18; // x24
  __int64 v19; // x26
  char *v20; // x0
  __int64 v21; // x8
  __int64 *v22; // x9
  __int64 *v23; // x8
  char *v24; // x24
  void *v25; // x0

  v2 = a1[39];
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = a1 + 39;
  do
  {
    if ( *((_DWORD *)v2 + 8) >= (int)a2 )
      v4 = (__int64 **)v2;
    v2 = (__int64 *)v2[*((_DWORD *)v2 + 8) < (int)a2];
  }
  while ( v2 );
  if ( v4 == a1 + 39 )
    return 0xFFFFFFFFLL;
  if ( *((_DWORD *)v4 + 8) > (int)a2 )
    return 0xFFFFFFFFLL;
  v5 = v4[6];
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = (__int64)&v4[5][6 * (_QWORD)v5];
  if ( !((unsigned int (__fastcall *)(__int64 **))(*a1)[60])(a1) )
    return 0xFFFFFFFFLL;
  ((void (__fastcall *)(__int64 **, __int64, _QWORD, __int64 *, _QWORD))(*a1)[40])(
    a1,
    4,
    *(_QWORD *)(v6 - 16),
    a1[51],
    *((unsigned int *)a1 + 104));
  if ( *(_BYTE *)(v6 - 8) == 1
    && (((__int64 (__fastcall *)(__int64 **, __int64, _QWORD, _QWORD, _QWORD))(*a1)[55])(
          a1,
          a2,
          0,
          *(unsigned int *)(v6 - 40),
          *(_QWORD *)(v6 - 48))
      & 1) == 0 )
  {
    sub_100004BD4((__int64)a1, "Failed to restore %zu registers!\n", v8, v9, v10, v11, v12, v13, *(_QWORD *)(v6 - 40));
    return 0xFFFFFFFFLL;
  }
  v14 = v4[6];
  v15 = (__int64)&v4[5][6 * (_QWORD)v14];
  v16 = *(_QWORD *)(v15 - 40);
  if ( v16 )
  {
    v17 = (char *)qalloc_or_throw(32 * v16);
    v18 = 0;
    v19 = v16;
    do
    {
      v20 = &v17[v18];
      v21 = *(_QWORD *)(v15 - 48);
      *(_DWORD *)v20 = -2;
      *((_QWORD *)v20 + 2) = 0;
      *((_QWORD *)v20 + 3) = 0;
      *((_QWORD *)v20 + 1) = 0;
      sub_10005825C(&v17[v18], v21 + v18);
      v18 += 32;
      --v19;
    }
    while ( v19 );
    v14 = v4[6];
  }
  else
  {
    v17 = nullptr;
  }
  if ( v14 )
  {
    v22 = v4[5];
    v23 = (__int64 *)((char *)v14 - 1);
    v4[6] = v23;
    sub_10000991C((char **)&v22[6 * (_QWORD)v23]);
  }
  if ( v17 )
  {
    if ( v16 )
    {
      v24 = v17;
      do
      {
        if ( *(int *)v24 >= -1 )
        {
          v25 = *((void **)v24 + 1);
          if ( v25 )
          {
            *((_QWORD *)v24 + 2) = 0;
            qfree(v25);
            *((_QWORD *)v24 + 1) = 0;
            *((_QWORD *)v24 + 3) = 0;
          }
          *(_DWORD *)v24 = -2;
        }
        v24 += 32;
        --v16;
      }
      while ( v16 );
    }
    qfree(v17);
  }
  if ( !v4[6] )
    sub_10005CDE4(a1 + 38, (__int64 *)v4);
  if ( a1[20] )
    return 3;
  else
    return 1;
}
// 10005B334: variable 'v8' is possibly undefined
// 10005B334: variable 'v9' is possibly undefined
// 10005B334: variable 'v10' is possibly undefined
// 10005B334: variable 'v11' is possibly undefined
// 10005B334: variable 'v12' is possibly undefined
// 10005B334: variable 'v13' is possibly undefined
