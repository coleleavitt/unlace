__m128i *__fastcall sub_8E3280(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // edx
  __m128i *result; // rax
  __m128i *v10; // rsi
  __int64 v11; // rdx
  __m128i *v12; // rdi
  __int64 v13; // rdx
  __m128i *v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // r12d
  size_t v19; // rbp
  __m128i *v20; // rax
  __m128i *v21; // r13
  __m128i *v22; // rdx
  __m128i *v23; // rax
  __m128i *v24; // rax
  const __m128i *v25; // rbp
  int v26; // ecx
  __int64 v27; // r15
  __m128i *v28; // r14
  __m128i *v29; // r12
  __int64 v30; // rax
  __m128i *v31; // rdx
  __int64 v32; // rdx

  v1 = a1[2];
  v2 = a1[3];
  v3 = a1[1];
  v4 = *(_DWORD *)(*(_QWORD *)v1 + 12LL);
  v5 = (*(_DWORD *)(*(_QWORD *)v2 + 12LL) - v4) ^ (v4 << 8);
  v6 = ((v5 ^ ((v4 - v5) << 16)) + v5 - v4) ^ ((v4 - v5) << 10);
  v7 = *(unsigned int *)(v3 + 8);
  v8 = v7 - 1;
  result = (__m128i *)(48 * v7);
  v10 = (__m128i *)((char *)result + *(_QWORD *)v3);
  v11 = 48LL * (v6 & v8);
  v12 = (__m128i *)(*(_QWORD *)v3 + v11);
  if ( (__m128i *)v11 != result )
  {
    for ( result = (__m128i *)(*(_QWORD *)v3 + v11); v10 != result; result += 3 )
    {
      v13 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( result[2].m128i_i32[2] == v6 && v1 == v13 && v2 == result->m128i_i64[1] )
        {
LABEL_10:
          v14 = result + 3;
          v15 = *(unsigned int *)(v3 + 12);
          if ( v10 == &result[3] )
            v14 = *(__m128i **)v3;
          v16 = v15 - 1;
          if ( v14->m128i_i64[0] )
          {
            result->m128i_i64[0] = 1;
            v17 = *(_DWORD *)(v3 + 16);
            *(_DWORD *)(v3 + 12) = v16;
            result = (__m128i *)(unsigned int)(v17 + 1);
            if ( v16 < 0x40 )
              v16 = 64;
            *(_DWORD *)(v3 + 16) = (_DWORD)result;
            if ( v16 < (unsigned int)result )
            {
              result = (__m128i *)sub_186AF10(v15);
              if ( !(_BYTE)result )
              {
                v18 = *(_DWORD *)(v3 + 8);
                v19 = 3LL * v18;
                v20 = (__m128i *)sub_186B270(v19 * 16);
                v21 = v20;
                v22 = &v20[v19];
                if ( v18 )
                {
                  if ( ((48 * (_BYTE)v18) & 0x10) == 0 || (v20->m128i_i64[0] = 0, v20 += 3, v20 != v22) )
                  {
                    do
                    {
                      v20->m128i_i64[0] = 0;
                      v20 += 6;
                      v20[-3].m128i_i64[0] = 0;
                    }
                    while ( v20 != v22 );
                  }
                  v23 = v21;
                  if ( (((_BYTE)v22 - (_BYTE)v21) & 0x10) == 0 || (v23 = v21 + 3, v21->m128i_i64[1] = 0, v22 != &v21[3]) )
                  {
                    do
                    {
                      v23->m128i_i64[1] = 0;
                      v23 += 6;
                      v23[-3].m128i_i64[1] = 0;
                    }
                    while ( v22 != v23 );
                  }
                  v24 = v21;
                  do
                  {
                    v24[2].m128i_i64[0] = 0;
                    v24 += 3;
                    v24[-2] = 0;
                    v24[-1].m128i_i32[2] = 0;
                  }
                  while ( v22 != v24 );
                }
                result = (__m128i *)*(unsigned int *)(v3 + 8);
                v25 = *(const __m128i **)v3;
                v26 = (_DWORD)result - 1;
                v27 = 48LL * (_QWORD)result;
                v28 = (__m128i *)(*(_QWORD *)v3 + 48LL * (_QWORD)result);
                v29 = &v21[3 * (_QWORD)result];
                if ( *(__m128i **)v3 != v28 )
                {
                  do
                  {
                    if ( v25->m128i_i64[0] > 1uLL )
                    {
                      v30 = 48LL * (v25[2].m128i_i32[2] & (unsigned int)v26);
                      v31 = &v21[(unsigned __int64)v30 / 0x10];
                      if ( v27 == v30 )
                      {
LABEL_46:
                        if ( v31 == v21 )
                        {
LABEL_55:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = v21;
                        while ( result->m128i_i64[0] )
                        {
                          result += 3;
                          if ( v31 == result )
                            goto LABEL_55;
                        }
                      }
                      else
                      {
                        result = &v21[(unsigned __int64)v30 / 0x10];
                        while ( result->m128i_i64[0] )
                        {
                          result += 3;
                          if ( v29 == result )
                            goto LABEL_46;
                        }
                      }
                      *result = _mm_loadu_si128(v25);
                      result[1] = _mm_loadu_si128(v25 + 1);
                      result[2] = _mm_loadu_si128(v25 + 2);
                    }
                    v25 += 3;
                  }
                  while ( v28 != v25 );
                  v28 = *(__m128i **)v3;
                }
                if ( v28 )
                  result = (__m128i *)sub_186B220(v28);
                *(_QWORD *)v3 = v21;
                *(_DWORD *)(v3 + 16) = 0;
              }
            }
          }
          else
          {
            result->m128i_i64[0] = 0;
            *(_DWORD *)(v3 + 12) = v16;
          }
          return result;
        }
      }
      else if ( !v13 )
      {
        return result;
      }
    }
  }
  if ( *(__m128i **)v3 != v12 )
  {
    for ( result = *(__m128i **)v3; v12 != result; result += 3 )
    {
      v32 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( result[2].m128i_i32[2] == v6 && v1 == v32 && v2 == result->m128i_i64[1] )
          goto LABEL_10;
      }
      else if ( !v32 )
      {
        return result;
      }
    }
  }
  return result;
}

