__int64 __fastcall sub_2082640(__int64 a1, const void **a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  int v5; // ebp
  unsigned int v6; // eax
  int v7; // r8d
  unsigned int v8; // r12d
  __int64 *v9; // r14
  __int64 v10; // rcx
  const void *v11; // rsi
  const void *v12; // rdx
  unsigned __int64 v13; // r12
  size_t v15; // rdx
  int v16; // eax
  int v17; // [rsp+Ch] [rbp-4Ch]
  __m128 v18[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(_QWORD *)a1;
  if ( !(_DWORD)v2 )
    goto LABEL_8;
  v5 = v2 - 1;
  v6 = sub_100C420(*a2, (__int64)*a2 + 8 * (_QWORD)a2[1]);
  v7 = 1;
  v8 = v5 & v6;
  v9 = (__int64 *)(v3 + 8LL * (v5 & v6));
  v10 = *v9;
  if ( *v9 == -4096 )
  {
LABEL_7:
    v3 = *(_QWORD *)a1;
    v2 = *(unsigned int *)(a1 + 16);
LABEL_8:
    sub_20825C0(v18, (_QWORD *)(v3 + 8 * v2), (_QWORD *)(v3 + 8 * v2), a1, 1);
    v13 = v18[0].m128_u64[0];
    goto LABEL_9;
  }
  while ( 1 )
  {
    if ( v10 != -8192 )
    {
      v11 = *(const void **)(v10 + 16);
      v12 = a2[1];
      if ( v12 == (const void *)((__int64)(*(_QWORD *)(v10 + 24) - (_QWORD)v11) >> 3) )
      {
        v15 = 8LL * (_QWORD)v12;
        if ( !v15 )
          break;
        v17 = v7;
        v16 = memcmp(*a2, v11, v15);
        v7 = v17;
        if ( !v16 )
          break;
      }
    }
    v8 = v5 & (v7 + v8);
    v9 = (__int64 *)(v3 + 8LL * v8);
    v10 = *v9;
    if ( *v9 == -4096 )
      goto LABEL_7;
    ++v7;
  }
  sub_20825C0(v18, v9, (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)), a1, 1);
  v13 = v18[0].m128_u64[0];
LABEL_9:
  sub_20825C0(
    v18,
    (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)),
    (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)),
    a1,
    1);
  if ( v18[0].m128_u64[0] == v13 )
    return 0;
  else
    return *(_QWORD *)v13;
}
