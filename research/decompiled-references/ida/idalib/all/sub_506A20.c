__int64 __fastcall sub_506A20(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        double a6,
        double a7,
        double a8)
{
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v15; // rdx
  unsigned __int64 **v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  unsigned __int64 *v20; // rsi
  char *v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rbp
  __int64 v24; // rdx
  char *v25; // r15
  void **v26; // r13
  void *v27; // rax
  __int64 v28; // rax
  _OWORD v29[64]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v30; // [rsp+408h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v10 = *(_QWORD **)(a1 + 32);
  v11 = v10[1];
  if ( a2 >= (unsigned int)v11 )
    return 0;
  v15 = 16LL * a2;
  v16 = (unsigned __int64 **)(v15 + *v10);
  if ( 16 * v11 == v15 )
    return 0;
  v17 = **v16;
  if ( v17 >= a4 )
    return 0;
  v18 = (*v16)[1];
  if ( v17 < a3 )
  {
    v12 = sub_5061A0(a1, a2, a3, a6, a7, a8);
    if ( (_BYTE)v12 )
    {
      if ( a4 < v18 && a5 )
      {
        v20 = *v16;
        v21 = (char *)(v16 + 2);
        __memcpy_chk(v29, v20, *(unsigned __int16 *)(a1 + 8), 1024);
        v22 = (__m128i)a4;
        v23 = *(_QWORD *)(a1 + 32);
        v29[0] = _mm_unpacklo_epi64(v22, (__m128i)v18);
        v24 = *(_QWORD *)(v23 + 8);
        v25 = &v21[-*(_QWORD *)v23];
        if ( *(_QWORD *)(v23 + 16) < (unsigned __int64)(v24 + 1) )
        {
          v28 = qvector_reserve(v23, *(_QWORD *)v23, v24 + 1, 16);
          *(_QWORD *)v23 = v28;
          v24 = *(_QWORD *)(v23 + 8);
          v21 = &v25[v28];
        }
        memmove(v21 + 16, v21, 16 * v24 - (_QWORD)v25);
        *(_QWORD *)v21 = 0;
        *((_DWORD *)v21 + 2) = 0;
        v21[12] = 1;
        ++*(_QWORD *)(v23 + 8);
        qfree(nullptr);
        *(_QWORD *)(v23 + 24) = v21;
        qfree(nullptr);
        v26 = *(void ***)(v23 + 24);
        v27 = (void *)qalloc(*(unsigned int *)(v23 + 32));
        if ( !v27 )
          sub_3BC000((int)"ranges_cache_t");
        *v26 = memcpy(v27, v29, *(unsigned int *)(v23 + 32));
        sub_503D10((_QWORD *)a1, **(_QWORD ***)(v23 + 24));
        sub_5056E0((__int64 *)(*(_QWORD *)(a1 + 32) + 64LL), 0, a1, v29);
      }
      return v12;
    }
    return 0;
  }
  if ( a4 >= v18 )
    return sub_505AA0((_QWORD *)a1, **v16, 1, a6);
  else
    return sub_506920((_QWORD *)a1, a2, a4, a6, a7, a8);
}
