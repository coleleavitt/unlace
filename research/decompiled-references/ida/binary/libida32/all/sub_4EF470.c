__int64 __fastcall sub_4EF470(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        double a6,
        double a7,
        double a8)
{
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v15; // rdx
  _DWORD **v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // r15d
  char *v20; // r13
  __m128i v21; // xmm0
  __int64 v22; // rbp
  __int64 v23; // rdx
  char *v24; // r15
  void **v25; // r13
  void *v26; // rax
  __int64 v27; // rax
  _QWORD v28[137]; // [rsp+0h] [rbp-448h] BYREF

  v28[129] = __readfsqword(0x28u);
  v10 = *(_QWORD **)(a1 + 24);
  v11 = v10[1];
  if ( a2 >= (unsigned int)v11 )
    return 0;
  v15 = 16LL * a2;
  v16 = (_DWORD **)(v15 + *v10);
  if ( 16 * v11 == v15 )
    return 0;
  v17 = **v16;
  if ( v17 >= a4 )
    return 0;
  v18 = (*v16)[1];
  if ( v17 < a3 )
  {
    v12 = sub_4EEC40(a1, a2, a3, a6, a7, a8);
    if ( (_BYTE)v12 )
    {
      if ( a4 < v18 && a5 )
      {
        v20 = (char *)(v16 + 2);
        __memcpy_chk();
        v21 = _mm_cvtsi32_si128(a4);
        v22 = *(_QWORD *)(a1 + 24);
        v28[0] = _mm_unpacklo_epi32(v21, _mm_cvtsi32_si128(v18)).m128i_u64[0];
        v23 = *(_QWORD *)(v22 + 8);
        v24 = &v20[-*(_QWORD *)v22];
        if ( *(_QWORD *)(v22 + 16) < (unsigned __int64)(v23 + 1) )
        {
          v27 = qvector_reserve(v22, *(_QWORD *)v22, v23 + 1, 16);
          *(_QWORD *)v22 = v27;
          v23 = *(_QWORD *)(v22 + 8);
          v20 = &v24[v27];
        }
        memmove(v20 + 16, v20, 16 * v23 - (_QWORD)v24);
        *(_QWORD *)v20 = 0;
        *((_DWORD *)v20 + 2) = 0;
        v20[12] = 1;
        ++*(_QWORD *)(v22 + 8);
        qfree(nullptr);
        *(_QWORD *)(v22 + 24) = v20;
        qfree(nullptr);
        v25 = *(void ***)(v22 + 24);
        v26 = (void *)qalloc(*(unsigned int *)(v22 + 32));
        if ( !v26 )
          sub_3B74D0((int)"ranges_cache_t");
        *v25 = memcpy(v26, v28, *(unsigned int *)(v22 + 32));
        sub_4EC820((unsigned int *)a1, **(unsigned int ***)(v22 + 24));
        sub_4EE190((__int64 *)(*(_QWORD *)(a1 + 24) + 64LL), 0, a1, v28);
      }
      return v12;
    }
    return 0;
  }
  if ( a4 >= v18 )
    return sub_4EE550((unsigned int *)a1, v17, 1, a6);
  else
    return sub_4EF380((unsigned int *)a1, a2, a4, a6, a7, a8);
}

