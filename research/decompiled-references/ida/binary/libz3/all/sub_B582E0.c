__int64 __fastcall sub_B582E0(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r9
  const __m128i *v8; // r10
  int v9; // r11d
  __int64 v10; // r9
  __int64 *v11; // rsi
  __int64 v12; // r11
  __int64 result; // rax
  __int64 *i; // rdx
  __int64 v15; // rcx
  const __m128i *v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbp
  void *v19; // rdi
  void *v20; // rbx
  __int64 v21; // r9
  int v22; // r11d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 *v26; // rcx
  unsigned int v27; // edx
  int v28; // eax
  __int64 v29; // r13
  _OWORD *v30; // rax
  _OWORD *v31; // r12
  _OWORD *v32; // rdx
  __int64 v33; // rax
  __m128i *v34; // rdi
  unsigned int v35; // ecx
  const __m128i *v36; // rbp
  const __m128i *v37; // r15
  __int64 v38; // r14
  char *v39; // r13
  __int64 v40; // rax
  _OWORD *v41; // rdx

  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[1];
    if ( (*(_DWORD *)(v2 + 8))-- == 1 )
    {
      sub_15D7BC0(v3, v2);
      v2 = a1[3];
    }
  }
  v5 = a1[2];
  v6 = *(unsigned int *)(v2 + 12);
  v7 = *(unsigned int *)(v5 + 8);
  v8 = *(const __m128i **)v5;
  v9 = v7 - 1;
  v10 = 16 * v7;
  v11 = (__int64 *)(*(_QWORD *)v5 + v10);
  v12 = 16LL * ((unsigned int)v6 & v9);
  result = *(_QWORD *)v5 + v12;
  if ( v12 != v10 )
  {
    for ( i = (__int64 *)(*(_QWORD *)v5 + v12); v11 != i; i += 2 )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == (_DWORD)v6 && v15 == v2 )
        {
          v18 = (_QWORD *)i[1];
          if ( !v18 )
          {
            v23 = *(_QWORD *)v5 + v12;
            while ( 1 )
            {
LABEL_29:
              v24 = *(_QWORD *)result;
              if ( *(_QWORD *)result > 1u )
              {
                if ( *(_DWORD *)(v24 + 12) == (_DWORD)v6 && v24 == v2 )
                {
LABEL_40:
                  v26 = (__int64 *)(result + 16);
                  if ( (__int64 *)(result + 16) == v11 )
                    v26 = (__int64 *)v8;
                  v27 = *(_DWORD *)(v5 + 12) - 1;
                  if ( *v26 )
                  {
                    *(_QWORD *)result = 1;
                    v28 = *(_DWORD *)(v5 + 16);
                    *(_DWORD *)(v5 + 12) = v27;
                    result = (unsigned int)(v28 + 1);
                    if ( v27 < 0x40 )
                      v27 = 64;
                    *(_DWORD *)(v5 + 16) = result;
                    if ( v27 < (unsigned int)result )
                    {
                      result = sub_186AF10(v6);
                      if ( !(_BYTE)result )
                      {
                        v29 = *(unsigned int *)(v5 + 8);
                        v30 = (_OWORD *)sub_186B270(16 * v29);
                        v31 = v30;
                        v32 = &v30[v29];
                        if ( (_DWORD)v29 )
                        {
                          if ( ((16 * (_BYTE)v29) & 0x10) == 0 || (*v30 = 0, ++v30, v32 != v30) )
                          {
                            do
                            {
                              *v30 = 0;
                              v30 += 2;
                              *(v30 - 1) = 0;
                            }
                            while ( v32 != v30 );
                          }
                        }
                        v33 = *(unsigned int *)(v5 + 8);
                        v34 = *(__m128i **)v5;
                        v35 = v33 - 1;
                        result = 16 * v33;
                        v36 = *(const __m128i **)v5;
                        v37 = (const __m128i *)(*(_QWORD *)v5 + result);
                        v38 = result;
                        v39 = (char *)v31 + result;
                        if ( *(const __m128i **)v5 != v37 )
                        {
                          do
                          {
                            result = v36->m128i_i64[0];
                            if ( v36->m128i_i64[0] > 1uLL )
                            {
                              v40 = 16LL * (*(_DWORD *)(result + 12) & v35);
                              v41 = &v31[(unsigned __int64)v40 / 0x10];
                              if ( v38 == v40 )
                              {
LABEL_64:
                                if ( v31 == v41 )
                                {
LABEL_73:
                                  sub_1872CE0("");
                                  sub_1873130(114, 213);
                                }
                                result = (__int64)v31;
                                while ( *(_QWORD *)result )
                                {
                                  result += 16;
                                  if ( v41 == (_OWORD *)result )
                                    goto LABEL_73;
                                }
                              }
                              else
                              {
                                result = (__int64)&v31[(unsigned __int64)v40 / 0x10];
                                while ( *(_QWORD *)result )
                                {
                                  result += 16;
                                  if ( v39 == (char *)result )
                                    goto LABEL_64;
                                }
                              }
                              *(__m128i *)result = _mm_loadu_si128(v36);
                            }
                            ++v36;
                          }
                          while ( v37 != v36 );
                          v34 = *(__m128i **)v5;
                        }
                        if ( v34 )
                          result = sub_186B220(v34);
                        *(_QWORD *)v5 = v31;
                        *(_DWORD *)(v5 + 16) = 0;
                      }
                    }
                  }
                  else
                  {
                    *(_QWORD *)result = 0;
                    *(_DWORD *)(v5 + 12) = v27;
                  }
                  return result;
                }
              }
              else if ( !v24 )
              {
                return result;
              }
              result += 16;
              if ( (__int64 *)result == v11 )
                goto LABEL_32;
            }
          }
LABEL_21:
          v19 = (void *)v18[5];
          if ( v19 )
            sub_186B220(v19);
          v20 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v18 + 1);
          sub_182CBA0(v20, v18 + 3);
          sub_186B220(v18);
          v5 = a1[2];
          v2 = a1[3];
          v21 = *(unsigned int *)(v5 + 8);
          v6 = *(unsigned int *)(v2 + 12);
          v8 = *(const __m128i **)v5;
          v22 = v21 - 1;
          v10 = 16 * v21;
          v11 = (__int64 *)(*(_QWORD *)v5 + v10);
          v12 = 16LL * ((unsigned int)v6 & v22);
          result = *(_QWORD *)v5 + v12;
          goto LABEL_24;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_11;
      }
    }
  }
  if ( v8 == (const __m128i *)result )
LABEL_11:
    BUG();
  v16 = *(const __m128i **)v5;
  while ( 1 )
  {
    v17 = v16->m128i_i64[0];
    if ( v16->m128i_i64[0] > 1uLL )
      break;
    if ( !v17 )
      goto LABEL_11;
LABEL_16:
    if ( (const __m128i *)result == ++v16 )
      goto LABEL_11;
  }
  if ( *(_DWORD *)(v17 + 12) != (_DWORD)v6 || v17 != v2 )
    goto LABEL_16;
  v18 = (_QWORD *)v16->m128i_i64[1];
  if ( v18 )
    goto LABEL_21;
LABEL_24:
  v23 = result;
  if ( v12 != v10 )
    goto LABEL_29;
LABEL_32:
  if ( (const __m128i *)v23 != v8 )
  {
    for ( result = (__int64)v8; result != v23; result += 16 )
    {
      v25 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v25 + 12) == (_DWORD)v6 && v25 == v2 )
          goto LABEL_40;
      }
      else if ( !v25 )
      {
        return result;
      }
    }
  }
  return result;
}

