__int64 __fastcall sub_E04470(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *exception; // rbx
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // ecx
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  int v26; // edx
  __int64 v27; // rsi
  __int64 v28; // rdi
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // r13d
  _QWORD *v32; // rax
  _QWORD *v33; // rbp
  _QWORD *v34; // r12
  __m128i *v35; // rdi
  const __m128i *v36; // r12
  unsigned int v37; // r14d
  __int64 v38; // r13
  const __m128i *v39; // r15
  _QWORD *v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rdx
  int v43; // edx
  __int64 v44; // rax
  unsigned int v45; // edx

  if ( !*(_BYTE *)(a1 + 257) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "sort declarations can only be erased when global (instead of scoped) declarations are used");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 672);
  v7 = *(unsigned int *)(a1 + 680);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v8 = v3 >> 3;
    else
      LODWORD(v8) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v8) = -1640531495;
  }
  v9 = v7 - 1;
  result = 24 * v7;
  v11 = v4 + result;
  v12 = 24LL * ((unsigned int)v8 & v9);
  v13 = v4 + v12;
  if ( v12 == result )
  {
LABEL_48:
    if ( v4 == v13 )
      return result;
    while ( 1 )
    {
      result = *(unsigned int *)(v4 + 4);
      if ( (_DWORD)result == 2 )
      {
        if ( (_DWORD)v8 == *(_DWORD *)v4 && *(_QWORD *)(v4 + 8) == v3 )
        {
          result = v4;
          goto LABEL_12;
        }
      }
      else if ( !(_DWORD)result )
      {
        return result;
      }
      v4 += 24;
      if ( v13 == v4 )
        return result;
    }
  }
  result = v4 + v12;
  while ( 1 )
  {
    v14 = *(_DWORD *)(result + 4);
    if ( v14 != 2 )
    {
      if ( !v14 )
        return result;
      goto LABEL_8;
    }
    if ( (_DWORD)v8 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v3 )
      break;
LABEL_8:
    result += 24;
    if ( v11 == result )
      goto LABEL_48;
  }
LABEL_12:
  v15 = *(_QWORD *)(a1 + 312);
  v16 = *(_QWORD *)(result + 16);
  if ( !v15 )
  {
    sub_DFBCB0(a1);
    v15 = *(_QWORD *)(a1 + 312);
  }
  if ( v16 )
  {
    if ( (*(_DWORD *)(v16 + 16))-- == 1 )
    {
      v44 = *(_QWORD *)(v15 + 80);
      if ( !v44 || (v45 = *(_DWORD *)(v44 - 4), v45 == *(_DWORD *)(v44 - 8)) )
      {
        sub_E0F880(v15 + 80, v11);
        v44 = *(_QWORD *)(v15 + 80);
        v45 = *(_DWORD *)(v44 - 4);
      }
      *(_QWORD *)(v44 + 8LL * v45) = v16;
      *(_DWORD *)(v44 - 4) = v45 + 1;
    }
    sub_DE3700(v15);
  }
  v18 = *a2;
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v19 = v18 >> 3;
    else
      LODWORD(v19) = *(_DWORD *)(v18 - 8);
  }
  else
  {
    LODWORD(v19) = -1640531495;
  }
  v20 = *(unsigned int *)(a1 + 680);
  v21 = *(_QWORD *)(a1 + 672);
  v22 = v20 - 1;
  result = 24 * v20;
  v23 = v21 + result;
  v24 = 24LL * ((unsigned int)v19 & v22);
  v25 = v21 + v24;
  if ( v24 != result )
  {
    for ( result = v21 + v24; v23 != result; result += 24 )
    {
      v26 = *(_DWORD *)(result + 4);
      if ( v26 == 2 )
      {
        if ( (_DWORD)v19 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v18 )
        {
LABEL_27:
          v27 = result + 24;
          v28 = *(unsigned int *)(a1 + 684);
          if ( v23 == result + 24 )
            v27 = *(_QWORD *)(a1 + 672);
          v29 = v28 - 1;
          if ( *(_DWORD *)(v27 + 4) )
          {
            *(_DWORD *)(result + 4) = 1;
            v30 = *(_DWORD *)(a1 + 688);
            *(_DWORD *)(a1 + 684) = v29;
            result = (unsigned int)(v30 + 1);
            if ( v29 < 0x40 )
              v29 = 64;
            *(_DWORD *)(a1 + 688) = result;
            if ( v29 < (unsigned int)result )
            {
              result = sub_186AF10(v28);
              if ( !(_BYTE)result )
              {
                v31 = *(_DWORD *)(a1 + 680);
                v32 = (_QWORD *)sub_186B270(24LL * v31);
                v33 = v32;
                v34 = &v32[3 * v31];
                if ( v31 )
                {
                  do
                  {
                    *v32 = 0;
                    v32 += 3;
                    *(v32 - 2) = 0;
                  }
                  while ( v32 != v34 );
                }
                result = *(unsigned int *)(a1 + 680);
                v35 = *(__m128i **)(a1 + 672);
                v36 = v35;
                v37 = result - 1;
                v38 = 24 * result;
                v39 = (__m128i *)((char *)v35 + 24 * result);
                v40 = &v33[3 * result];
                if ( v35 != v39 )
                {
                  do
                  {
                    if ( v36->m128i_i32[1] == 2 )
                    {
                      v41 = 24LL * (v36->m128i_i32[0] & v37);
                      v42 = &v33[(unsigned __int64)v41 / 8];
                      if ( v38 == v41 )
                      {
LABEL_75:
                        if ( v42 == v33 )
                        {
LABEL_80:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = (__int64)v33;
                        while ( *(_DWORD *)(result + 4) )
                        {
                          result += 24;
                          if ( v42 == (_QWORD *)result )
                            goto LABEL_80;
                        }
                      }
                      else
                      {
                        result = (__int64)&v33[(unsigned __int64)v41 / 8];
                        while ( *(_DWORD *)(result + 4) )
                        {
                          result += 24;
                          if ( v40 == (_QWORD *)result )
                            goto LABEL_75;
                        }
                      }
                      *(__m128i *)result = _mm_loadu_si128(v36);
                      *(_QWORD *)(result + 16) = v36[1].m128i_i64[0];
                    }
                    v36 = (const __m128i *)((char *)v36 + 24);
                  }
                  while ( v39 != v36 );
                  v35 = *(__m128i **)(a1 + 672);
                }
                if ( v35 )
                  result = sub_186B220(v35);
                *(_QWORD *)(a1 + 672) = v33;
                *(_DWORD *)(a1 + 688) = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(a1 + 684) = v29;
          }
          return result;
        }
      }
      else if ( !v26 )
      {
        return result;
      }
    }
  }
  if ( v21 != v25 )
  {
    for ( result = *(_QWORD *)(a1 + 672); v25 != result; result += 24 )
    {
      v43 = *(_DWORD *)(result + 4);
      if ( v43 == 2 )
      {
        if ( (_DWORD)v19 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v18 )
          goto LABEL_27;
      }
      else if ( !v43 )
      {
        return result;
      }
    }
  }
  return result;
}

