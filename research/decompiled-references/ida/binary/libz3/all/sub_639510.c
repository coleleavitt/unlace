__int64 __fastcall sub_639510(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  const __m128i *v5; // r9
  __int64 v6; // rdi
  int v7; // r10d
  __int64 v8; // r8
  const __m128i *v9; // rsi
  __int64 v10; // r10
  __int64 result; // rax
  const __m128i *v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // rcx
  void **v16; // r12
  __int64 v17; // r8
  int v18; // r10d
  __int64 m128i_i64; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // rcx
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // r13d
  _OWORD *v26; // rax
  _OWORD *v27; // r12
  _OWORD *v28; // rdx
  __int64 v29; // rax
  __m128i *v30; // rdi
  unsigned int v31; // ecx
  const __m128i *v32; // rbx
  const __m128i *v33; // r15
  __int64 v34; // r14
  char *v35; // r13
  __int64 v36; // rax
  _OWORD *v37; // rdx

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(const __m128i **)a1;
  v6 = *(unsigned int *)(a2 + 12);
  v7 = v4 - 1;
  v8 = 16 * v4;
  v9 = &v5[(unsigned __int64)v8 / 0x10];
  v10 = 16LL * ((unsigned int)v6 & v7);
  result = (__int64)v5[(unsigned __int64)v10 / 0x10].m128i_i64;
  if ( v10 != v8 )
  {
    v12 = &v5[(unsigned __int64)v10 / 0x10];
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = v12->m128i_i64[0];
        if ( v12->m128i_i64[0] > 1uLL )
          break;
        if ( !v13 )
          goto LABEL_71;
        if ( v9 == ++v12 )
          goto LABEL_9;
      }
      if ( *(_DWORD *)(v13 + 12) == (_DWORD)v6 && a2 == v13 )
        break;
      if ( v9 == ++v12 )
        goto LABEL_9;
    }
    v16 = (void **)v12->m128i_i64[1];
    if ( !v16 )
    {
      m128i_i64 = (__int64)v5[(unsigned __int64)v10 / 0x10].m128i_i64;
      while ( 1 )
      {
LABEL_26:
        v20 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v20 + 12) == (_DWORD)v6 && a2 == v20 )
          {
LABEL_37:
            v22 = (__int64 *)(result + 16);
            if ( (const __m128i *)(result + 16) == v9 )
              v22 = (__int64 *)v5;
            v23 = *(_DWORD *)(a1 + 12) - 1;
            if ( *v22 )
            {
              *(_QWORD *)result = 1;
              v24 = *(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 12) = v23;
              result = (unsigned int)(v24 + 1);
              if ( v23 < 0x40 )
                v23 = 64;
              *(_DWORD *)(a1 + 16) = result;
              if ( v23 < (unsigned int)result )
              {
                result = sub_186AF10(v6);
                if ( !(_BYTE)result )
                {
                  v25 = *(_DWORD *)(a1 + 8);
                  v26 = (_OWORD *)sub_186B270(16LL * v25);
                  v27 = v26;
                  v28 = &v26[v25];
                  if ( v25 )
                  {
                    if ( ((16 * (_BYTE)v25) & 0x10) == 0 || (*v26 = 0, ++v26, v28 != v26) )
                    {
                      do
                      {
                        *v26 = 0;
                        v26 += 2;
                        *(v26 - 1) = 0;
                      }
                      while ( v28 != v26 );
                    }
                  }
                  v29 = *(unsigned int *)(a1 + 8);
                  v30 = *(__m128i **)a1;
                  v31 = v29 - 1;
                  result = 16 * v29;
                  v32 = *(const __m128i **)a1;
                  v33 = (const __m128i *)(*(_QWORD *)a1 + result);
                  v34 = result;
                  v35 = (char *)v27 + result;
                  if ( *(const __m128i **)a1 != v33 )
                  {
                    do
                    {
                      result = v32->m128i_i64[0];
                      if ( v32->m128i_i64[0] > 1uLL )
                      {
                        v36 = 16LL * (*(_DWORD *)(result + 12) & v31);
                        v37 = &v27[(unsigned __int64)v36 / 0x10];
                        if ( v34 == v36 )
                        {
LABEL_61:
                          if ( v27 == v37 )
                          {
LABEL_70:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          result = (__int64)v27;
                          while ( *(_QWORD *)result )
                          {
                            result += 16;
                            if ( v37 == (_OWORD *)result )
                              goto LABEL_70;
                          }
                        }
                        else
                        {
                          result = (__int64)&v27[(unsigned __int64)v36 / 0x10];
                          while ( *(_QWORD *)result )
                          {
                            result += 16;
                            if ( v35 == (char *)result )
                              goto LABEL_61;
                          }
                        }
                        *(__m128i *)result = _mm_loadu_si128(v32);
                      }
                      ++v32;
                    }
                    while ( v33 != v32 );
                    v30 = *(__m128i **)a1;
                  }
                  if ( v30 )
                    result = sub_186B220(v30);
                  *(_QWORD *)a1 = v27;
                  *(_DWORD *)(a1 + 16) = 0;
                }
              }
            }
            else
            {
              *(_QWORD *)result = 0;
              *(_DWORD *)(a1 + 12) = v23;
            }
            return result;
          }
        }
        else if ( !v20 )
        {
          return result;
        }
        result += 16;
        if ( (const __m128i *)result == v9 )
          goto LABEL_29;
      }
    }
LABEL_18:
    if ( *v16 )
      sub_186B220(*v16);
    sub_186B220(v16);
    v17 = *(unsigned int *)(a1 + 8);
    v6 = *(unsigned int *)(a2 + 12);
    v5 = *(const __m128i **)a1;
    v18 = v17 - 1;
    v8 = 16 * v17;
    v9 = (const __m128i *)(*(_QWORD *)a1 + v8);
    v10 = 16LL * ((unsigned int)v6 & v18);
    result = *(_QWORD *)a1 + v10;
    goto LABEL_21;
  }
LABEL_9:
  if ( v5 == (const __m128i *)result )
LABEL_71:
    BUG();
  v14 = (__int64 *)v5;
  while ( 1 )
  {
    v15 = *v14;
    if ( (unsigned __int64)*v14 > 1 )
      break;
    if ( !v15 )
      goto LABEL_71;
LABEL_13:
    v14 += 2;
    if ( (__int64 *)result == v14 )
      goto LABEL_71;
  }
  if ( *(_DWORD *)(v15 + 12) != (_DWORD)v6 || a2 != v15 )
    goto LABEL_13;
  v16 = (void **)v14[1];
  if ( v16 )
    goto LABEL_18;
LABEL_21:
  m128i_i64 = result;
  if ( v10 != v8 )
    goto LABEL_26;
LABEL_29:
  if ( v5 != (const __m128i *)m128i_i64 )
  {
    for ( result = (__int64)v5; result != m128i_i64; result += 16 )
    {
      v21 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v21 + 12) == (_DWORD)v6 && a2 == v21 )
          goto LABEL_37;
      }
      else if ( !v21 )
      {
        return result;
      }
    }
  }
  return result;
}

