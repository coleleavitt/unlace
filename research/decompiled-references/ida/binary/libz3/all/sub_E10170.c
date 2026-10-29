__int64 __fastcall sub_E10170(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 result; // rax
  __m128i *v8; // rcx
  __int64 v9; // rdx
  __m128i *v10; // rsi
  __int32 v11; // edx
  char *v12; // rsi
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int32 v15; // edx
  int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // r12
  __int64 v19; // rax
  __m128i *v20; // rdi
  const __m128i *v21; // rbp
  int v22; // r14d
  __int64 v23; // r13
  __int64 v24; // r15
  __m128i *v25; // rcx
  __int64 v26; // rax
  __m128i *v27; // rdx

  v3 = *a2;
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v4 = v3 >> 3;
    else
      LODWORD(v4) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v4) = -1640531495;
  }
  v5 = *((unsigned int *)a1 + 2);
  v6 = v5 - 1;
  result = 24 * v5;
  v8 = (__m128i *)(*a1 + result);
  v9 = 24LL * ((unsigned int)v4 & v6);
  v10 = (__m128i *)(*a1 + v9);
  if ( v9 != result )
  {
    for ( result = *a1 + v9; v8 != (__m128i *)result; result += 24 )
    {
      v11 = *(_DWORD *)(result + 4);
      if ( v11 == 2 )
      {
        if ( *(_DWORD *)result == (_DWORD)v4 && *(_QWORD *)(result + 8) == v3 )
        {
LABEL_11:
          v12 = (char *)(result + 24);
          v13 = *((unsigned int *)a1 + 3);
          if ( v8 == (__m128i *)(result + 24) )
            v12 = (char *)*a1;
          v14 = v13 - 1;
          if ( *((_DWORD *)v12 + 1) )
          {
            *(_DWORD *)(result + 4) = 1;
            v16 = *((_DWORD *)a1 + 4);
            *((_DWORD *)a1 + 3) = v14;
            result = (unsigned int)(v16 + 1);
            if ( v14 < 0x40 )
              v14 = 64;
            *((_DWORD *)a1 + 4) = result;
            if ( v14 < (unsigned int)result )
            {
              result = sub_186AF10(v13);
              if ( !(_BYTE)result )
              {
                v17 = *((_DWORD *)a1 + 2);
                v18 = sub_186B270(24LL * v17);
                v19 = v18 + 8;
                if ( v17 )
                {
                  do
                  {
                    *(_QWORD *)(v19 - 8) = 0;
                    v19 += 24;
                    *(_QWORD *)(v19 - 24) = 0;
                    *(_QWORD *)(v19 - 16) = 0;
                  }
                  while ( v19 != v18 + 24LL * v17 + 8 );
                }
                result = *((unsigned int *)a1 + 2);
                v20 = (__m128i *)*a1;
                v21 = (const __m128i *)*a1;
                v22 = result - 1;
                v23 = 24 * result;
                v24 = *a1 + 24 * result;
                v25 = (__m128i *)(v18 + 24 * result);
                if ( *a1 != v24 )
                {
                  do
                  {
                    if ( v21->m128i_i32[1] == 2 )
                    {
                      v26 = 24LL * (v21->m128i_i32[0] & (unsigned int)v22);
                      v27 = (__m128i *)(v18 + v26);
                      if ( v23 == v26 )
                      {
LABEL_45:
                        if ( v27 == (__m128i *)v18 )
                        {
LABEL_50:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = v18;
                        while ( *(_DWORD *)(result + 4) )
                        {
                          result += 24;
                          if ( v27 == (__m128i *)result )
                            goto LABEL_50;
                        }
                      }
                      else
                      {
                        result = v18 + v26;
                        while ( *(_DWORD *)(result + 4) )
                        {
                          result += 24;
                          if ( v25 == (__m128i *)result )
                            goto LABEL_45;
                        }
                      }
                      *(__m128i *)result = _mm_loadu_si128(v21);
                      *(_QWORD *)(result + 16) = v21[1].m128i_i64[0];
                    }
                    v21 = (const __m128i *)((char *)v21 + 24);
                  }
                  while ( (const __m128i *)v24 != v21 );
                  v20 = (__m128i *)*a1;
                }
                if ( v20 )
                  result = sub_186B220(v20);
                *a1 = v18;
                *((_DWORD *)a1 + 4) = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
            *((_DWORD *)a1 + 3) = v14;
          }
          return result;
        }
      }
      else if ( !v11 )
      {
        return result;
      }
    }
  }
  if ( (__m128i *)*a1 != v10 )
  {
    for ( result = *a1; v10 != (__m128i *)result; result += 24 )
    {
      v15 = *(_DWORD *)(result + 4);
      if ( v15 == 2 )
      {
        if ( (_DWORD)v4 == *(_DWORD *)result && v3 == *(_QWORD *)(result + 8) )
          goto LABEL_11;
      }
      else if ( !v15 )
      {
        return result;
      }
    }
  }
  return result;
}

