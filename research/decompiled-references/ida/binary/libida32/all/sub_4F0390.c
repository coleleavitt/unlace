void __fastcall sub_4F0390(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  int v7; // eax
  __int64 v9; // rax
  char *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  const void *v13; // rbp
  __int64 v14; // rdx
  char *v15; // r8
  unsigned __int64 v16; // r12
  void **v17; // rbx
  void *v18; // rax
  unsigned int *v19; // rbx
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  char v25; // dl
  __int64 v26; // rax
  void *v27; // rdi
  char *v28; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)v3 + 16LL * (int)a2;
  v5 = *(_DWORD *)(*(_QWORD *)v4 + 4LL);
  if ( (unsigned int)a3 < **(_DWORD **)v4 || (v6 = a3, (unsigned int)a3 >= v5) )
  {
    if ( !under_debugger )
      interr(1366);
    goto LABEL_26;
  }
  v7 = *(_DWORD *)(v3 + 180);
  if ( v7 )
    goto LABEL_6;
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v7 = *(_DWORD *)(v3 + 180);
LABEL_6:
    *(_DWORD *)(v3 + 180) = v7 + 1;
  }
  v9 = *(_QWORD *)v4;
  v10 = (char *)(v4 + 16);
  sub_4ED270((__int64 *)(*(_QWORD *)(a1 + 24) + 64LL), 4, a1, a2, v6, *(_DWORD *)(v9 + 4));
  v11 = *((_QWORD *)v10 - 2);
  *(v10 - 4) = 1;
  *(_DWORD *)(v11 + 4) = v6;
  v12 = *(_QWORD *)(a1 + 24);
  v13 = *((const void **)v10 - 2);
  v14 = *(_QWORD *)(v12 + 8);
  v15 = &v10[-*(_QWORD *)v12];
  if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v14 + 1) )
  {
    v28 = &v10[-*(_QWORD *)v12];
    v26 = qvector_reserve(*(_QWORD *)(a1 + 24), *(_QWORD *)v12, v14 + 1, 16);
    v15 = v28;
    v14 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)v12 = v26;
    v10 = &v28[v26];
  }
  v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v5)).m128i_u64[0];
  memmove(v10 + 16, v10, 16 * v14 - (_QWORD)v15);
  *(_QWORD *)v10 = 0;
  *((_DWORD *)v10 + 2) = 0;
  v10[12] = 1;
  ++*(_QWORD *)(v12 + 8);
  qfree(nullptr);
  *(_QWORD *)(v12 + 24) = v10;
  qfree(nullptr);
  v17 = *(void ***)(v12 + 24);
  v18 = (void *)qalloc(*(unsigned int *)(v12 + 32));
  if ( !v18 )
    sub_3B74D0((int)"ranges_cache_t");
  *v17 = memcpy(v18, v13, *(unsigned int *)(v12 + 32));
  v19 = **(unsigned int ***)(v12 + 24);
  *(_QWORD *)v19 = v16;
  if ( !(unsigned __int8)sub_4EC820((unsigned int *)a1, v19) )
  {
    if ( !under_debugger )
      interr(1367);
LABEL_26:
    BUG();
  }
  v20 = (__int64 *)(*(_QWORD *)(a1 + 24) + 64LL);
  sub_4EE190(v20, 0, a1, v19);
  v22 = *(_QWORD *)(a1 + 24);
  v23 = *(_DWORD *)(v22 + 180);
  if ( v23 || (v25 = must_journal(v20, 0, v21), v23 = *(_DWORD *)(v22 + 180), v25) )
    *(_DWORD *)(v22 + 180) = --v23;
  if ( !v23 )
  {
    v24 = *(_QWORD *)(v22 + 72);
    if ( v24 )
    {
      add_undo_record(*(unsigned int *)(v22 + 176), *(_QWORD *)(v22 + 64), v24);
      v27 = *(void **)(v22 + 64);
      if ( v27 )
      {
        *(_QWORD *)(v22 + 72) = 0;
        qfree(v27);
        *(_QWORD *)(v22 + 64) = 0;
        *(_QWORD *)(v22 + 80) = 0;
      }
      *(_QWORD *)(v22 + 144) = -1;
    }
  }
}

