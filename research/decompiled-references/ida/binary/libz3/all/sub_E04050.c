__int64 __fastcall sub_E04050(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // r13d
  _QWORD *v31; // rax
  _QWORD *v32; // rbp
  _QWORD *v33; // r12
  __m128i *v34; // rdi
  const __m128i *v35; // r12
  unsigned int v36; // r14d
  __int64 v37; // r13
  const __m128i *v38; // r15
  _QWORD *v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rdx
  int v42; // edx
  __int64 v43; // rax
  unsigned int v44; // edx

  v4 = *a2;
  v5 = *(unsigned int *)(a1 + 680);
  v6 = *(_QWORD *)(a1 + 672);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v7 = v4 >> 3;
    else
      LODWORD(v7) = *(_DWORD *)(v4 - 8);
  }
  else
  {
    LODWORD(v7) = -1640531495;
  }
  v8 = v5 - 1;
  result = 24 * v5;
  v10 = v6 + result;
  v11 = 24LL * ((unsigned int)v7 & v8);
  v12 = v6 + v11;
  if ( v11 == result )
  {
LABEL_47:
    if ( v6 == v12 )
      return result;
    while ( 1 )
    {
      result = *(unsigned int *)(v6 + 4);
      if ( (_DWORD)result == 2 )
      {
        if ( (_DWORD)v7 == *(_DWORD *)v6 && *(_QWORD *)(v6 + 8) == v4 )
        {
          result = v6;
          goto LABEL_11;
        }
      }
      else if ( !(_DWORD)result )
      {
        return result;
      }
      v6 += 24;
      if ( v12 == v6 )
        return result;
    }
  }
  result = v6 + v11;
  while ( 1 )
  {
    v13 = *(_DWORD *)(result + 4);
    if ( v13 != 2 )
    {
      if ( !v13 )
        return result;
      goto LABEL_7;
    }
    if ( (_DWORD)v7 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v4 )
      break;
LABEL_7:
    result += 24;
    if ( v10 == result )
      goto LABEL_47;
  }
LABEL_11:
  v14 = *(_QWORD *)(a1 + 312);
  v15 = *(_QWORD *)(result + 16);
  if ( !v14 )
  {
    sub_DFBCB0(a1);
    v14 = *(_QWORD *)(a1 + 312);
  }
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 16))-- == 1 )
    {
      v43 = *(_QWORD *)(v14 + 80);
      if ( !v43 || (v44 = *(_DWORD *)(v43 - 4), v44 == *(_DWORD *)(v43 - 8)) )
      {
        sub_E0F880(v14 + 80, v10);
        v43 = *(_QWORD *)(v14 + 80);
        v44 = *(_DWORD *)(v43 - 4);
      }
      *(_QWORD *)(v43 + 8LL * v44) = v15;
      *(_DWORD *)(v43 - 4) = v44 + 1;
    }
    sub_DE3700(v14);
  }
  v17 = *a2;
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v18 = v17 >> 3;
    else
      LODWORD(v18) = *(_DWORD *)(v17 - 8);
  }
  else
  {
    LODWORD(v18) = -1640531495;
  }
  v19 = *(unsigned int *)(a1 + 680);
  v20 = *(_QWORD *)(a1 + 672);
  v21 = v19 - 1;
  result = 24 * v19;
  v22 = v20 + result;
  v23 = 24LL * ((unsigned int)v18 & v21);
  v24 = v20 + v23;
  if ( v23 != result )
  {
    for ( result = v20 + v23; v22 != result; result += 24 )
    {
      v25 = *(_DWORD *)(result + 4);
      if ( v25 == 2 )
      {
        if ( (_DWORD)v18 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v17 )
        {
LABEL_26:
          v26 = result + 24;
          v27 = *(unsigned int *)(a1 + 684);
          if ( v22 == result + 24 )
            v26 = *(_QWORD *)(a1 + 672);
          v28 = v27 - 1;
          if ( *(_DWORD *)(v26 + 4) )
          {
            *(_DWORD *)(result + 4) = 1;
            v29 = *(_DWORD *)(a1 + 688);
            *(_DWORD *)(a1 + 684) = v28;
            result = (unsigned int)(v29 + 1);
            if ( v28 < 0x40 )
              v28 = 64;
            *(_DWORD *)(a1 + 688) = result;
            if ( v28 < (unsigned int)result )
            {
              result = sub_186AF10(v27);
              if ( !(_BYTE)result )
              {
                v30 = *(_DWORD *)(a1 + 680);
                v31 = (_QWORD *)sub_186B270(24LL * v30);
                v32 = v31;
                v33 = &v31[3 * v30];
                if ( v30 )
                {
                  do
                  {
                    *v31 = 0;
                    v31 += 3;
                    *(v31 - 2) = 0;
                  }
                  while ( v31 != v33 );
                }
                result = *(unsigned int *)(a1 + 680);
                v34 = *(__m128i **)(a1 + 672);
                v35 = v34;
                v36 = result - 1;
                v37 = 24 * result;
                v38 = (__m128i *)((char *)v34 + 24 * result);
                v39 = &v32[3 * result];
                if ( v34 != v38 )
                {
                  do
                  {
                    if ( v35->m128i_i32[1] == 2 )
                    {
                      v40 = 24LL * (v35->m128i_i32[0] & v36);
                      v41 = &v32[(unsigned __int64)v40 / 8];
                      if ( v37 == v40 )
                      {
LABEL_74:
                        if ( v41 == v32 )
                        {
LABEL_79:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = (__int64)v32;
                        while ( *(_DWORD *)(result + 4) )
                        {
                          result += 24;
                          if ( v41 == (_QWORD *)result )
                            goto LABEL_79;
                        }
                      }
                      else
                      {
                        result = (__int64)&v32[(unsigned __int64)v40 / 8];
                        while ( *(_DWORD *)(result + 4) )
                        {
                          result += 24;
                          if ( v39 == (_QWORD *)result )
                            goto LABEL_74;
                        }
                      }
                      *(__m128i *)result = _mm_loadu_si128(v35);
                      *(_QWORD *)(result + 16) = v35[1].m128i_i64[0];
                    }
                    v35 = (const __m128i *)((char *)v35 + 24);
                  }
                  while ( v38 != v35 );
                  v34 = *(__m128i **)(a1 + 672);
                }
                if ( v34 )
                  result = sub_186B220(v34);
                *(_QWORD *)(a1 + 672) = v32;
                *(_DWORD *)(a1 + 688) = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(a1 + 684) = v28;
          }
          return result;
        }
      }
      else if ( !v25 )
      {
        return result;
      }
    }
  }
  if ( v20 != v24 )
  {
    for ( result = *(_QWORD *)(a1 + 672); v24 != result; result += 24 )
    {
      v42 = *(_DWORD *)(result + 4);
      if ( v42 == 2 )
      {
        if ( (_DWORD)v18 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v17 )
          goto LABEL_26;
      }
      else if ( !v42 )
      {
        return result;
      }
    }
  }
  return result;
}

