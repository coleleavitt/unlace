__int64 __fastcall sub_9F93B0(_QWORD *a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  int v19; // esi
  int v20; // r9d
  __int64 v21; // rdi
  __m128 v22[4]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a1[5];
  sub_9F9340(
    v22,
    (_QWORD *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 16)),
    (_QWORD *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 16)),
    v6,
    1);
  v7 = *(unsigned int *)(v6 + 16);
  v8 = v22[0].m128_u64[0];
  v9 = *(_QWORD *)v6;
  if ( (_DWORD)v7 )
  {
    v10 = (v7 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v11 = (__int64 *)(v9 + 8LL * v10);
    v12 = *v11;
    if ( *v11 == a2 )
    {
LABEL_3:
      sub_9F9340(v22, v11, (_QWORD *)(v9 + 8 * v7), v6, 1);
      v13 = v22[0].m128_u64[0];
      goto LABEL_4;
    }
    v19 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v20 = v19 + 1;
        v10 = (v7 - 1) & (v19 + v10);
        v11 = (__int64 *)(v9 + 8LL * v10);
        v21 = *v11;
        if ( *v11 == a2 )
          goto LABEL_3;
        v19 = v20;
      }
      while ( v21 != -4096 );
    }
  }
  sub_9F9340(v22, (_QWORD *)(v9 + 8 * v7), (_QWORD *)(v9 + 8 * v7), v6, 1);
  v13 = v22[0].m128_u64[0];
LABEL_4:
  if ( v8 == v13 )
  {
    if ( a3 )
      *a3 = 0;
    v15 = a1[4];
    v16 = (_QWORD *)(v15 + 8);
    v17 = *(_QWORD **)(v15 + 16);
    if ( !v17 )
      return 0;
    v18 = v16;
    do
    {
      while ( v17[4] >= a2 )
      {
        v18 = v17;
        v17 = (_QWORD *)v17[2];
        if ( !v17 )
          goto LABEL_15;
      }
      v17 = (_QWORD *)v17[3];
    }
    while ( v17 );
LABEL_15:
    if ( v16 != v18 && v18[4] <= a2 )
      return *(_QWORD *)(a1[1] + 24LL * *((unsigned int *)v18 + 10));
    else
      return 0;
  }
  else
  {
    if ( a3 )
      *a3 = 1;
    return *(_QWORD *)(a1[5] + 24LL);
  }
}
