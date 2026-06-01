__int64 __fastcall sub_6846A0(__int64 a1, __int64 a2)
{
  const __m128i *v3; // rax
  __m128i *v4; // rbx
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 v7; // rcx
  __m128i v8; // xmm0
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // rcx
  const __m128i *v12; // r12
  __int64 v13; // r15
  void *v15; // rdi
  char *v16; // r13
  char *v17; // r14
  __m128i **v18; // rdi
  void *v19; // rdi
  __m128i *v20; // r13
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // r14
  _QWORD *v26; // r15
  int v27; // r12d
  __m128i *v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v31[8]; // [rsp+18h] [rbp-40h] BYREF

  v29 = (__m128i *)(a1 + 16);
  v30 = sub_25D5F70(a1, a1 + 16, a2, 104, v31);
  v3 = *(const __m128i **)a1;
  v4 = (__m128i *)(*(_QWORD *)a1 + 104LL * *(unsigned int *)(a1 + 8));
  if ( *(__m128i **)a1 != v4 )
  {
    v5 = v30;
    do
    {
      v6 = _mm_loadu_si128(v3);
      v7 = v3[5].m128i_i64[0];
      v3 = (const __m128i *)((char *)v3 + 104);
      v5 += 104;
      *(__m128i *)(v5 - 104) = v6;
      v8 = _mm_loadu_si128((const __m128i *)((char *)v3 - 88));
      *(_QWORD *)(v5 - 24) = v7;
      v9 = v3[-1].m128i_i64[0];
      *(__m128i *)(v5 - 88) = v8;
      v10 = _mm_loadu_si128((const __m128i *)((char *)v3 - 72));
      *(_QWORD *)(v5 - 16) = v9;
      *(__m128i *)(v5 - 72) = v10;
      *(__m128i *)(v5 - 56) = _mm_loadu_si128((const __m128i *)((char *)v3 - 56));
      *(__m128i *)(v5 - 40) = _mm_loadu_si128((const __m128i *)((char *)v3 - 40));
      v11 = v3[-1].m128i_i64[1];
      v3[-1].m128i_i64[1] = 0;
      *(_QWORD *)(v5 - 8) = v11;
    }
    while ( v4 != v3 );
    v12 = *(const __m128i **)a1;
    v4 = (__m128i *)(*(_QWORD *)a1 + 104LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v4 )
    {
      do
      {
        while ( 1 )
        {
          v13 = v4[-1].m128i_i64[1];
          v4 = (__m128i *)((char *)v4 - 104);
          if ( v13 )
          {
            if ( (*(_DWORD *)(v13 + 712))-- == 1 )
            {
              v15 = *(void **)(v13 + 680);
              if ( v15 != (void *)(v13 + 696) )
                free(v15);
              v16 = *(char **)(v13 + 168);
              v17 = &v16[248 * *(unsigned int *)(v13 + 176)];
              if ( v16 != v17 )
              {
                do
                {
                  v18 = *((__m128i ***)v17 - 10);
                  v17 -= 248;
                  sub_67AA40(v18);
                }
                while ( v16 != v17 );
                v17 = *(char **)(v13 + 168);
              }
              if ( v17 != (char *)(v13 + 184) )
                free(v17);
              v19 = *(void **)(v13 + 8);
              if ( v19 != (void *)(v13 + 24) )
                free(v19);
              --*(_DWORD *)(*(_QWORD *)v13 + 240LL);
              v20 = *(__m128i **)v13;
              if ( !*(_DWORD *)(*(_QWORD *)v13 + 240LL) )
              {
                v21 = v20[13].m128i_i64[0];
                v22 = v21 + 16LL * v20[13].m128i_u32[2];
                while ( v22 != v21 )
                {
                  v21 += 16;
                  operator delete();
                }
                v23 = v20[10].m128i_u32[2];
                v20[13].m128i_i32[2] = 0;
                if ( (_DWORD)v23 )
                  break;
              }
            }
          }
          if ( v12 == v4 )
            goto LABEL_25;
        }
        v24 = (_QWORD *)v20[10].m128i_i64[0];
        v20[14].m128i_i64[0] = 0;
        v25 = v24 + 1;
        v26 = &v24[v23];
        v20[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v24, (__m128i)(unsigned __int64)(*v24 + 4096LL));
        if ( 8 * v23 != 8 )
        {
          do
          {
            ++v25;
            operator delete();
          }
          while ( v26 != v25 );
        }
        v20[10].m128i_i32[2] = 1;
      }
      while ( v12 != v4 );
LABEL_25:
      v4 = *(__m128i **)a1;
    }
  }
  v27 = v31[0];
  if ( v29 != v4 )
    free(v4);
  *(_DWORD *)(a1 + 12) = v27;
  *(_QWORD *)a1 = v30;
  return v30;
}

