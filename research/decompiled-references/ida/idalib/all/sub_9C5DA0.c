bool __fastcall sub_9C5DA0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // edi
  _QWORD *v10; // r9
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 *v16; // rsi
  __int64 v17; // r8
  unsigned __int64 v18; // rbp
  unsigned int v19; // r14d
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  int v26; // r8d
  int v27; // esi
  int v28; // r8d
  __int64 v29; // r10
  __m128 v30[3]; // [rsp+0h] [rbp-38h] BYREF

  v5 = *a1;
  v6 = *(unsigned int *)(v5 + 48);
  v7 = v5 + 32;
  v8 = *(_QWORD *)(v5 + 32);
  if ( (_DWORD)v6 )
  {
    v9 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v10 = (_QWORD *)(v8 + 16LL * v9);
    if ( a2 == *v10 )
    {
LABEL_3:
      sub_9C5D30(v30, v10, (_QWORD *)(16 * v6 + v8), v7, 1);
      v11 = v30[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v10 != -4096 )
    {
      v26 = 1;
      do
      {
        v9 = (v6 - 1) & (v26 + v9);
        v10 = (_QWORD *)(v8 + 16LL * v9);
        if ( a2 == *v10 )
          goto LABEL_3;
        ++v26;
      }
      while ( *v10 != -4096 );
    }
  }
  sub_9C5D30(v30, (_QWORD *)(v8 + 16LL * (unsigned int)v6), (_QWORD *)(v8 + 16LL * (unsigned int)v6), v7, 1);
  v11 = v30[0].m128_u64[0];
LABEL_4:
  v12 = *(unsigned int *)(*a1 + 48);
  v13 = (__int64 *)(*a1 + 32);
  v14 = *v13;
  if ( (_DWORD)v12 )
  {
    v15 = (v12 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
    v16 = (__int64 *)(v14 + 16LL * v15);
    v17 = *v16;
    if ( a3 == *v16 )
    {
LABEL_6:
      sub_9C5D30(v30, v16, (_QWORD *)(v14 + 16 * v12), (__int64)v13, 1);
      v18 = v30[0].m128_u64[0];
      goto LABEL_7;
    }
    v27 = 1;
    if ( v17 != -4096 )
    {
      do
      {
        v28 = v27 + 1;
        v15 = (v12 - 1) & (v27 + v15);
        v16 = (__int64 *)(v14 + 16LL * v15);
        v29 = *v16;
        if ( a3 == *v16 )
          goto LABEL_6;
        v27 = v28;
      }
      while ( v29 != -4096 );
    }
  }
  sub_9C5D30(
    v30,
    (_QWORD *)(v14 + 16LL * (unsigned int)v12),
    (_QWORD *)(v14 + 16LL * (unsigned int)v12),
    (__int64)v13,
    1);
  v18 = v30[0].m128_u64[0];
LABEL_7:
  v19 = 0;
  v20 = (_QWORD *)(*a1 + 32);
  v21 = (_QWORD *)(*v20 + 16LL * *(unsigned int *)(*a1 + 48));
  sub_9C5D30(v30, v21, v21, (__int64)v20, 1);
  if ( v30[0].m128_u64[0] != v11 )
    v19 = *(_DWORD *)(v11 + 8);
  v22 = (_QWORD *)(*a1 + 32);
  v23 = (_QWORD *)(*v22 + 16LL * *(unsigned int *)(*a1 + 48));
  sub_9C5D30(v30, v23, v23, (__int64)v22, 1);
  v24 = 0;
  if ( v18 != v30[0].m128_u64[0] )
    v24 = *(_DWORD *)(v18 + 8);
  return v19 > v24;
}
