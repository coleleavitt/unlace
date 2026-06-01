__int64 __fastcall sub_67AFC0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v4; // rax
  __m128i v5; // xmm1
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rdi
  __m128i v9; // xmm0
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  void *v14; // rdi
  char *v15; // r13
  char *v16; // rbp
  __m128i **v17; // rdi
  void *v18; // rdi
  __m128i *v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rbp
  _QWORD *v26; // r14

  v2 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v4 = *(_QWORD *)(a2 + 64);
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  *(_QWORD *)(a1 + 176) = a1;
  v6 = *(_QWORD *)(a2 + 48);
  v7 = *(_DWORD *)(a2 + 56);
  v8 = *(_QWORD *)(a2 + 8);
  *(__m128i *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 64) = v4;
  *(_DWORD *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 48) = v6;
  *(_DWORD *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(__m128i *)(a1 + 16) = v5;
  *(_OWORD *)(a1 + 88) = 0;
  *(__m128i *)(a1 + 192) = _mm_loadu_si128((const __m128i *)(a2 + 192));
  *(__m128i *)(a1 + 208) = _mm_loadu_si128((const __m128i *)(a2 + 208));
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 224));
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
  result = *(_QWORD *)(a2 + 184);
  *(__m128i *)(a1 + 224) = v9;
  if ( result )
  {
    *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
    *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
    *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
    *(__m128i *)(a1 + 120) = _mm_loadu_si128((const __m128i *)(a2 + 120));
    *(__m128i *)(a1 + 136) = _mm_loadu_si128((const __m128i *)(a2 + 136));
    *(__m128i *)(a1 + 152) = _mm_loadu_si128((const __m128i *)(a2 + 152));
    v11 = *(_QWORD *)(a2 + 168);
    if ( v11 )
    {
      ++*(_DWORD *)(v11 + 712);
      v12 = *(_QWORD *)(a1 + 168);
      *(_QWORD *)(a1 + 168) = v11;
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 712))-- == 1 )
        {
          v14 = *(void **)(v12 + 680);
          if ( v14 != (void *)(v12 + 696) )
            free(v14);
          v15 = *(char **)(v12 + 168);
          v16 = &v15[248 * *(unsigned int *)(v12 + 176)];
          if ( v15 != v16 )
          {
            do
            {
              v17 = *((__m128i ***)v16 - 10);
              v16 -= 248;
              sub_67AA40(v17);
            }
            while ( v15 != v16 );
            v16 = *(char **)(v12 + 168);
          }
          if ( v16 != (char *)(v12 + 184) )
            free(v16);
          v18 = *(void **)(v12 + 8);
          if ( v18 != (void *)(v12 + 24) )
            free(v18);
          --*(_DWORD *)(*(_QWORD *)v12 + 240LL);
          v19 = *(__m128i **)v12;
          if ( !v19[15].m128i_i32[0] )
          {
            v20 = v19[13].m128i_i64[0];
            v21 = v20 + 16LL * v19[13].m128i_u32[2];
            while ( v21 != v20 )
            {
              v20 += 16;
              operator delete();
            }
            v22 = v19[10].m128i_u32[2];
            v19[13].m128i_i32[2] = 0;
            if ( (_DWORD)v22 )
            {
              v23 = (_QWORD *)v19[10].m128i_i64[0];
              v24 = v22;
              v19[14].m128i_i64[0] = 0;
              v25 = &v23[v24];
              v26 = v23 + 1;
              v19[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v23, (__m128i)(unsigned __int64)(*v23 + 4096LL));
              if ( v24 != 1 )
              {
                do
                {
                  ++v26;
                  operator delete();
                }
                while ( v25 != v26 );
              }
              v19[10].m128i_i32[2] = 1;
            }
          }
        }
      }
    }
    result = a1 + 72;
  }
  *(_QWORD *)(a1 + 184) = result;
  return result;
}

