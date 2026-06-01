unsigned __int64 __fastcall sub_2D1580(__int64 a1, __int64 a2, _QWORD *a3, const void *a4)
{
  __int64 v4; // r15
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // r12
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  size_t v14; // rax
  size_t v15; // rbx
  void *v17; // rdi
  size_t v18; // r14
  __int64 v19; // rax
  char *v20; // r13
  _QWORD *v21; // rbx
  __int128 v22; // kr00_16
  char *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  char *v26; // [rsp+0h] [rbp-58h] BYREF
  __int128 v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v28 = __readfsqword(0x28u);
  sub_2D1400(a1, (const char *)a2);
  v8 = *(_QWORD **)a1;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = v8;
  *(__m128i *)(a2 + 8) = v9;
  v10 = *(_QWORD *)(a1 + 80);
  if ( v10 )
  {
    do
    {
      v11 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 80 * v4);
      v12 = v11[4];
      if ( v12 )
      {
        v11[5] = 0;
        *(double *)v9.m128i_i64 = qfree(v12, (const char *)a2);
      }
      v13 = v11[1];
      if ( v13 )
      {
        v11[2] = 0;
        *(double *)v9.m128i_i64 = qfree(v13, (const char *)a2, *(double *)v9.m128i_i64);
      }
      ++v4;
    }
    while ( v10 != v4 );
  }
  *(_QWORD *)(a1 + 80) = 0;
  if ( a3 )
    sub_2D0770((__int64 *)(a1 + 72), a3);
  if ( a4 && (v14 = strlen((const char *)a4), (v15 = v14) != 0) )
  {
    v17 = *(void **)(a1 + 48);
    v18 = v14 + 1;
    if ( *(_QWORD *)(a1 + 64) < v14 + 1 )
    {
      v24 = qvector_reserve(a1 + 48, *(_QWORD *)(a1 + 48), v14 + 1, 1);
      *(_QWORD *)(a1 + 48) = v24;
      v17 = (void *)v24;
    }
    *(_QWORD *)(a1 + 56) = v18;
    memmove(v17, a4, v15);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + v15) = 0;
    if ( *(_QWORD *)(a1 + 56) > 1u )
    {
      tag_remove(a1 + 48, *(_QWORD *)(a1 + 48), 0);
      if ( *(_QWORD *)(a1 + 56) > 1u )
      {
        v26 = nullptr;
        v27 = 0;
        v26 = (char *)qvector_reserve(&v26, 0, 3, 1);
        *(_QWORD *)&v27 = 3;
        strcpy(v26, "\r\n");
        v19 = *(_QWORD *)(a1 + 8);
        v20 = v26;
        v21 = *(_QWORD **)a1;
        v26 = nullptr;
        v22 = v27;
        v27 = 0;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v19 + 1) )
        {
          v25 = qvector_reserve(a1, v21, v19 + 1, 24);
          *(_QWORD *)a1 = v25;
          v21 = (_QWORD *)v25;
          v19 = *(_QWORD *)(a1 + 8);
        }
        memmove(v21 + 3, v21, 24 * v19);
        *v21 = v20;
        v23 = v26;
        *(__m128i *)(v21 + 1) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)v22,
                                  (__m128i)*((unsigned __int64 *)&v22 + 1));
        ++*(_QWORD *)(a1 + 8);
        if ( v23 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v23, (const char *)v21);
        }
        ++*(_DWORD *)(a1 + 100);
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = 0;
  }
  return v28 - __readfsqword(0x28u);
}
