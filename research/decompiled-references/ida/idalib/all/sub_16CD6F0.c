_QWORD *__fastcall sub_16CD6F0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // r12d
  const __m128i *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  const __m128i *v14; // r10
  _QWORD *i; // rdx
  const __m128i *v16; // rdx
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // rdi
  int v20; // r12d
  const __m128i *v21; // r9
  __m128i *v22; // r14
  int v23; // r13d
  unsigned int j; // eax
  __m128i *v25; // r11
  __int64 v26; // r15
  __int64 v27; // rdx
  _QWORD *k; // rdx
  unsigned int v29; // eax

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(const __m128i **)a1;
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
  result = (_QWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = 32LL * v8;
    v14 = &v9[(unsigned __int64)v13 / 0x10];
    for ( i = &result[4 * v12]; i != result; *(result - 3) = -1 )
    {
      *result = -4096;
      result += 4;
    }
    v16 = v9;
    if ( v14 != v9 )
    {
      while ( 1 )
      {
        v17 = v16->m128i_i64[0];
        if ( v16->m128i_i64[0] == -4096 )
        {
          if ( v16->m128i_i64[1] == -1 )
            goto LABEL_19;
LABEL_9:
          v18 = *(_DWORD *)(a1 + 16);
          if ( !v18 )
            goto LABEL_23;
LABEL_10:
          v19 = v16->m128i_i64[1];
          v20 = v18 - 1;
          v21 = *(const __m128i **)a1;
          v22 = nullptr;
          v23 = 1;
          for ( j = v20
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)((0xBF58476D1CE4E5B9LL * v19) >> 31) ^ (484763065 * v16->m128i_i32[2])
                      | ((unsigned __int64)(((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4)) << 32))) >> 31)
                   ^ (484763065 * (((0xBF58476D1CE4E5B9LL * v19) >> 31) ^ (484763065 * v16->m128i_i32[2]))));
                ;
                j = v20 & v29 )
          {
            v25 = (__m128i *)&v21[2 * j];
            v26 = v25->m128i_i64[0];
            if ( v17 == v25->m128i_i64[0] && v19 == v25->m128i_i64[1] )
              break;
            if ( v26 == -4096 )
            {
              if ( v25->m128i_i64[1] == -1 )
              {
                if ( v22 )
                  v25 = v22;
                break;
              }
            }
            else if ( v26 == -8192 && v25->m128i_i64[1] == -2 && !v22 )
            {
              v22 = (__m128i *)&v21[2 * j];
            }
            v29 = v23 + j;
            ++v23;
          }
          v25->m128i_i64[0] = v17;
          v16 += 2;
          v25->m128i_i64[1] = v19;
          v25[1] = _mm_loadu_si128(v16 - 1);
          ++*(_DWORD *)(a1 + 8);
          if ( v14 == v16 )
            return (_QWORD *)operator delete(v9, v13, 8);
        }
        else
        {
          if ( v17 != -8192 )
            goto LABEL_9;
          if ( v16->m128i_i64[1] != -2 )
          {
            v18 = *(_DWORD *)(a1 + 16);
            if ( !v18 )
            {
LABEL_23:
              *(_QWORD *)&dword_0 = v16->m128i_i64[0];
              BUG();
            }
            goto LABEL_10;
          }
LABEL_19:
          v16 += 2;
          if ( v14 == v16 )
            return (_QWORD *)operator delete(v9, v13, 8);
        }
      }
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v27 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[4 * v27]; k != result; *(result - 3) = -1 )
    {
      *result = -4096;
      result += 4;
    }
  }
  return result;
}
