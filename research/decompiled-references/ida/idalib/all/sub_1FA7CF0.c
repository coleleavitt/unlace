_DWORD *__fastcall sub_1FA7CF0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  _DWORD *i; // rdx
  __int64 v15; // rbp
  int v16; // r14d
  __int64 v17; // r12
  int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // eax
  int j; // r9d
  __int64 v22; // rdi
  unsigned int v23; // eax
  __m128i v24; // xmm1
  void *v25; // rdi
  __int64 v26; // rcx
  _DWORD *k; // rdx
  __int64 v28; // r10
  __int64 v29; // [rsp+8h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_DWORD *)sub_22300B0(544LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v29 = 544 * v8;
    v13 = v9 + 544 * v8;
    for ( i = &result[136 * v12]; i != result; *((_QWORD *)result - 67) = 1 )
    {
      *result = -1;
      result += 136;
    }
    if ( v13 != v9 )
    {
      v15 = v9;
      do
      {
        while ( 1 )
        {
          if ( *(_DWORD *)v15 != -1 || (unsigned __int64)(*(_QWORD *)(v15 + 8) - 1LL) > 1 )
          {
            v16 = *(_DWORD *)(a1 + 16);
            if ( !v16 )
            {
              *(__m128i *)&dword_0 = _mm_loadu_si128((const __m128i *)v15);
              BUG();
            }
            v17 = *(_QWORD *)a1;
            v18 = sub_1EADE10(v15);
            v19 = 0;
            v20 = (v16 - 1) & v18;
            for ( j = 1; ; ++j )
            {
              v22 = v17 + 544LL * v20;
              if ( *(_DWORD *)v15 == *(_DWORD *)v22 && *(_QWORD *)(v15 + 8) == *(_QWORD *)(v22 + 8) )
                break;
              if ( *(_DWORD *)v22 == -1 )
              {
                v28 = *(_QWORD *)(v22 + 8);
                if ( v28 == 1 )
                {
                  if ( v19 )
                    v22 = v19;
                  break;
                }
                if ( !v19 && v28 == 2 )
                  v19 = v17 + 544LL * v20;
              }
              v23 = j + v20;
              v20 = (v16 - 1) & v23;
            }
            v24 = _mm_loadu_si128((const __m128i *)v15);
            *(_QWORD *)(v22 + 16) = v22 + 32;
            *(__m128i *)v22 = v24;
            *(_QWORD *)(v22 + 24) = 0x4000000000LL;
            if ( *(_DWORD *)(v15 + 24) )
              sub_1F7DEB0((char ***)(v22 + 16), (char ***)(v15 + 16));
            v25 = *(void **)(v15 + 16);
            ++*(_DWORD *)(a1 + 8);
            if ( v25 != (void *)(v15 + 32) )
              break;
          }
          v15 += 544;
          if ( v13 == v15 )
            return (_DWORD *)operator delete(v9, v29, 8);
        }
        free(v25);
        v15 += 544;
      }
      while ( v13 != v15 );
    }
    return (_DWORD *)operator delete(v9, v29, 8);
  }
  else
  {
    v26 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[136 * v26]; k != result; *((_QWORD *)result - 67) = 1 )
    {
      *result = -1;
      result += 136;
    }
  }
  return result;
}
