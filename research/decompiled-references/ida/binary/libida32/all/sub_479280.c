__int64 __fastcall sub_479280(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned int *v7; // rbp
  unsigned int *i; // r15
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  char *v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  char *v18; // rax
  void *v19; // rdi
  __int64 v21; // [rsp+8h] [rbp-68h]
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v23; // [rsp+20h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v24 = __readfsqword(0x28u);
  v23 = 0;
  ptr = nullptr;
  v3 = *(int *)(v1 + 28);
  if ( *(_DWORD *)(v1 + 28) )
  {
    sub_46CE40((__int64 *)&ptr, *(int *)(v1 + 28));
    v4 = 0;
    v21 = 8 * v3;
    if ( (int)v3 > 0 )
    {
      do
      {
        v5 = *(_QWORD *)(a1 + v4 + 56);
        v6 = 3 * v4;
        v7 = *(unsigned int **)(v5 + 48);
        for ( i = &v7[16 * *(_QWORD *)(v5 + 56)]; i != v7; ++v11[1] )
        {
          v9 = _mm_cvtsi32_si128(*v7);
          v10 = _mm_cvtsi32_si128(v7[1]);
          v11 = (__int64 *)((char *)ptr + v6);
          v12 = *(_QWORD *)((char *)ptr + v6 + 8);
          v13 = *(_QWORD *)((char *)ptr + v6);
          if ( *(_QWORD *)((char *)ptr + v6 + 16) < (unsigned __int64)(v12 + 1) )
          {
            v14 = qvector_reserve((char *)ptr + v6, v13, v12 + 1, 8);
            *v11 = v14;
            v13 = v14;
            v12 = v11[1];
            v10 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v10));
            v9 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v9));
          }
          v7 += 16;
          *(_QWORD *)(v13 + 8 * v12) = _mm_unpacklo_epi32(v9, v10).m128i_u64[0];
        }
        v4 += 8;
      }
      while ( v21 != v4 );
    }
  }
  sub_4459B0((__int64 *)(a1 + 152), &ptr);
  v15 = (char *)ptr;
  if ( ptr )
  {
    v16 = v23;
    if ( (_QWORD)v23 )
    {
      v17 = 0;
      do
      {
        v18 = &v15[24 * v17];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v19);
          v15 = (char *)ptr;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v15);
  }
  return merge_handler_perform_diff(a1);
}

