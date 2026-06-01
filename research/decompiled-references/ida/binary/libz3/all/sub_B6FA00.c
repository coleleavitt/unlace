__int64 __fastcall sub_B6FA00(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  unsigned int v13; // edx
  int v14; // eax
  __int64 v15; // r13
  _OWORD *v16; // rax
  _OWORD *v17; // r12
  _OWORD *v18; // rdx
  __int64 v19; // rax
  __m128i *v20; // rdi
  unsigned int v21; // ecx
  const __m128i *v22; // rbp
  const __m128i *v23; // r15
  __int64 v24; // r14
  char *v25; // r13
  __int64 v26; // rax
  _OWORD *v27; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 12LL);
  v4 = *(unsigned int *)(v2 + 8);
  v5 = v4 - 1;
  result = 16 * v4;
  v7 = *(_QWORD *)v2 + result;
  v8 = 16LL * ((unsigned int)v3 & v5);
  v9 = *(_QWORD *)v2 + v8;
  if ( v8 != result )
  {
    for ( result = *(_QWORD *)v2 + v8; v7 != result; result += 16 )
    {
      v10 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(*(_QWORD *)v10 + 12LL) == (_DWORD)v3 && v1 == v10 )
        {
LABEL_17:
          v12 = (_QWORD *)(result + 16);
          if ( v7 == result + 16 )
            v12 = *(_QWORD **)v2;
          v13 = *(_DWORD *)(v2 + 12) - 1;
          if ( *v12 )
          {
            *(_QWORD *)result = 1;
            v14 = *(_DWORD *)(v2 + 16);
            *(_DWORD *)(v2 + 12) = v13;
            result = (unsigned int)(v14 + 1);
            if ( v13 < 0x40 )
              v13 = 64;
            *(_DWORD *)(v2 + 16) = result;
            if ( v13 < (unsigned int)result )
            {
              result = sub_186AF10(v3);
              if ( !(_BYTE)result )
              {
                v15 = *(unsigned int *)(v2 + 8);
                v16 = (_OWORD *)sub_186B270(16 * v15);
                v17 = v16;
                v18 = &v16[v15];
                if ( (_DWORD)v15 )
                {
                  if ( ((16 * (_BYTE)v15) & 0x10) == 0 || (*v16 = 0, ++v16, v16 != v18) )
                  {
                    do
                    {
                      *v16 = 0;
                      v16 += 2;
                      *(v16 - 1) = 0;
                    }
                    while ( v16 != v18 );
                  }
                }
                v19 = *(unsigned int *)(v2 + 8);
                v20 = *(__m128i **)v2;
                v21 = v19 - 1;
                result = 16 * v19;
                v22 = *(const __m128i **)v2;
                v23 = (const __m128i *)(*(_QWORD *)v2 + result);
                v24 = result;
                v25 = (char *)v17 + result;
                if ( *(const __m128i **)v2 != v23 )
                {
                  do
                  {
                    result = v22->m128i_i64[0];
                    if ( v22->m128i_i64[0] > 1uLL )
                    {
                      v26 = 16LL * (*(_DWORD *)(*(_QWORD *)result + 12LL) & v21);
                      v27 = &v17[(unsigned __int64)v26 / 0x10];
                      if ( v24 == v26 )
                      {
LABEL_38:
                        if ( v17 == v27 )
                        {
LABEL_47:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = (__int64)v17;
                        while ( *(_QWORD *)result )
                        {
                          result += 16;
                          if ( v27 == (_OWORD *)result )
                            goto LABEL_47;
                        }
                      }
                      else
                      {
                        result = (__int64)&v17[(unsigned __int64)v26 / 0x10];
                        while ( *(_QWORD *)result )
                        {
                          result += 16;
                          if ( v25 == (char *)result )
                            goto LABEL_38;
                        }
                      }
                      *(__m128i *)result = _mm_loadu_si128(v22);
                    }
                    ++v22;
                  }
                  while ( v23 != v22 );
                  v20 = *(__m128i **)v2;
                }
                if ( v20 )
                  result = sub_186B220(v20);
                *(_QWORD *)v2 = v17;
                *(_DWORD *)(v2 + 16) = 0;
              }
            }
          }
          else
          {
            *(_QWORD *)result = 0;
            *(_DWORD *)(v2 + 12) = v13;
          }
          return result;
        }
      }
      else if ( !v10 )
      {
        return result;
      }
    }
  }
  if ( *(_QWORD *)v2 != v9 )
  {
    for ( result = *(_QWORD *)v2; v9 != result; result += 16 )
    {
      v11 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(*(_QWORD *)v11 + 12LL) == (_DWORD)v3 && v1 == v11 )
          goto LABEL_17;
      }
      else if ( !v11 )
      {
        return result;
      }
    }
  }
  return result;
}

