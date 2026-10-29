__int64 __fastcall sub_7EFC20(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // r8d
  __int64 v4; // r11
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  void *v23; // rdi
  unsigned int v24; // r15d
  const __m128i *v25; // r12
  const __m128i *v26; // rcx
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = sub_7E9000(v2, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) + 20LL));
  v5 = *(unsigned int *)(v1 + 8);
  v6 = v5 - 1;
  result = 16 * v5;
  v8 = *(_QWORD *)v1 + result;
  v9 = 16LL * (v3 & v6);
  v10 = *(_QWORD *)v1 + v9;
  if ( v9 != result )
  {
    result = *(_QWORD *)v1 + v9;
    do
    {
      v11 = *(_QWORD *)(result + 8);
      if ( v11 > 1 )
      {
        if ( v3 == *(_DWORD *)result && v4 == *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) )
        {
          v12 = *(_DWORD *)(v4 + 20) - 1;
          do
          {
            if ( v12 == -1 )
              goto LABEL_12;
            v13 = v12--;
          }
          while ( *(_QWORD *)(v11 + 8 * v13 + 48) == *(_QWORD *)(v2 + 8 * v13 + 48) );
        }
      }
      else if ( !v11 )
      {
        return result;
      }
      result += 16;
    }
    while ( v8 != result );
  }
  if ( *(_QWORD *)v1 != v10 )
  {
    for ( result = *(_QWORD *)v1; v10 != result; result += 16 )
    {
      v31 = *(_QWORD *)(result + 8);
      if ( v31 > 1 )
      {
        if ( v3 == *(_DWORD *)result && v4 == *(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) )
        {
          v32 = *(_DWORD *)(v4 + 20) - 1;
          while ( v32 != -1 )
          {
            v33 = v32--;
            if ( *(_QWORD *)(v31 + 8 * v33 + 48) != *(_QWORD *)(v2 + 8 * v33 + 48) )
              goto LABEL_35;
          }
LABEL_12:
          v14 = result + 16;
          v15 = *(unsigned int *)(v1 + 12);
          if ( v8 == result + 16 )
            v14 = *(_QWORD *)v1;
          v16 = v15 - 1;
          if ( *(_QWORD *)(v14 + 8) )
          {
            *(_QWORD *)(result + 8) = 1;
            v17 = *(_DWORD *)(v1 + 16);
            *(_DWORD *)(v1 + 12) = v16;
            result = (unsigned int)(v17 + 1);
            if ( v16 < 0x40 )
              v16 = 64;
            *(_DWORD *)(v1 + 16) = result;
            if ( v16 < (unsigned int)result )
            {
              result = sub_186AF10(v15);
              if ( !(_BYTE)result )
              {
                v18 = *(unsigned int *)(v1 + 8);
                v19 = sub_186B270(16 * v18);
                v20 = v19 + 16 * v18;
                v21 = v19;
                if ( (_DWORD)v18 )
                {
                  if ( ((16 * (_BYTE)v18) & 0x10) == 0 || (v21 = v19 + 16, *(_QWORD *)(v19 + 8) = 0, v20 != v19 + 16) )
                  {
                    do
                    {
                      *(_QWORD *)(v21 + 8) = 0;
                      v21 += 32;
                      *(_QWORD *)(v21 - 8) = 0;
                    }
                    while ( v20 != v21 );
                  }
                }
                v22 = *(unsigned int *)(v1 + 8);
                v23 = *(void **)v1;
                v24 = v22 - 1;
                result = 16 * v22;
                v25 = *(const __m128i **)v1;
                v26 = (const __m128i *)(*(_QWORD *)v1 + result);
                v27 = result;
                v28 = v19 + result;
                if ( *(const __m128i **)v1 != v26 )
                {
                  do
                  {
                    if ( v25->m128i_i64[1] > 1uLL )
                    {
                      v29 = 16LL * (v25->m128i_i32[0] & v24);
                      v30 = v19 + v29;
                      if ( v27 == v29 )
                      {
LABEL_45:
                        if ( v19 == v30 )
                        {
LABEL_54:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = v19;
                        while ( *(_QWORD *)(result + 8) )
                        {
                          result += 16;
                          if ( v30 == result )
                            goto LABEL_54;
                        }
                      }
                      else
                      {
                        result = v19 + v29;
                        while ( *(_QWORD *)(result + 8) )
                        {
                          result += 16;
                          if ( v28 == result )
                            goto LABEL_45;
                        }
                      }
                      *(__m128i *)result = _mm_loadu_si128(v25);
                    }
                    ++v25;
                  }
                  while ( v26 != v25 );
                  v23 = *(void **)v1;
                }
                if ( v23 )
                  result = sub_186B220(v23);
                *(_QWORD *)v1 = v19;
                *(_DWORD *)(v1 + 16) = 0;
              }
            }
          }
          else
          {
            *(_QWORD *)(result + 8) = 0;
            *(_DWORD *)(v1 + 12) = v16;
          }
          return result;
        }
      }
      else if ( !v31 )
      {
        return result;
      }
LABEL_35:
      ;
    }
  }
  return result;
}

