__int64 __fastcall sub_866060(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 *v6; // r10
  int v7; // esi
  unsigned int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 *i; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // r13
  __m128i *v30; // rax
  __m128i *v31; // r12
  __m128i *v32; // rdx
  __int64 v33; // rax
  __m128i *v34; // rdi
  unsigned int v35; // ecx
  const __m128i *v36; // rbp
  const __m128i *v37; // r15
  __int64 v38; // r14
  __m128i *v39; // r13
  __int64 v40; // rax
  __m128i *v41; // rdx
  __m128i *v42; // rax

  v1 = 0x7FFFFFFF8LL;
  v2 = *(__int64 **)(a1 + 8);
  v3 = v2[1];
  if ( v3 )
    v1 = 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
  v4 = *(_QWORD *)(v3 + v1);
  v5 = *((unsigned int *)v2 + 10);
  v6 = (__int64 *)v2[4];
  v7 = *(_DWORD *)(v4 + 12);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = (__int64 *)((char *)v6 + v5);
  v10 = 16LL * (v7 & v8);
  v11 = &v6[(unsigned __int64)v10 / 8];
  if ( v10 != v5 )
  {
    for ( i = &v6[(unsigned __int64)v10 / 8]; v9 != i; i += 2 )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v7 && v4 == v13 )
        {
LABEL_25:
          v24 = i + 2;
          v25 = *((unsigned int *)v2 + 11);
          if ( v9 == i + 2 )
            v24 = (_QWORD *)v2[4];
          v26 = v25 - 1;
          if ( *v24 )
          {
            *i = 1;
            v27 = *((_DWORD *)v2 + 12);
            *((_DWORD *)v2 + 11) = v26;
            v28 = v27 + 1;
            if ( v26 < 0x40 )
              v26 = 64;
            *((_DWORD *)v2 + 12) = v28;
            if ( v26 < v28 )
            {
              if ( !(unsigned __int8)sub_186AF10(v25) )
              {
                v29 = *((unsigned int *)v2 + 10);
                v30 = (__m128i *)sub_186B270(16 * v29);
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
                      v30[-1] = 0;
                    }
                    while ( v32 != v30 );
                  }
                }
                v33 = *((unsigned int *)v2 + 10);
                v34 = (__m128i *)v2[4];
                v35 = v33 - 1;
                v33 *= 16;
                v36 = v34;
                v37 = (__m128i *)((char *)v34 + v33);
                v38 = v33;
                v39 = (__m128i *)((char *)v31 + v33);
                if ( v34 != (__m128i *)&v34->m128i_i8[v33] )
                {
                  do
                  {
                    if ( v36->m128i_i64[0] > 1uLL )
                    {
                      v40 = 16LL * (*(_DWORD *)(v36->m128i_i64[0] + 12) & v35);
                      v41 = &v31[(unsigned __int64)v40 / 0x10];
                      if ( v38 == v40 )
                      {
LABEL_51:
                        if ( v31 == v41 )
                        {
LABEL_56:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v42 = v31;
                        while ( v42->m128i_i64[0] )
                        {
                          if ( v41 == ++v42 )
                            goto LABEL_56;
                        }
                      }
                      else
                      {
                        v42 = &v31[(unsigned __int64)v40 / 0x10];
                        while ( v42->m128i_i64[0] )
                        {
                          if ( v39 == ++v42 )
                            goto LABEL_51;
                        }
                      }
                      *v42 = _mm_loadu_si128(v36);
                    }
                    ++v36;
                  }
                  while ( v37 != v36 );
                  v34 = (__m128i *)v2[4];
                }
                if ( v34 )
                  sub_186B220(v34);
                v2[4] = (__int64)v31;
                *((_DWORD *)v2 + 12) = 0;
              }
              v3 = v2[1];
            }
          }
          else
          {
            *i = 0;
            *((_DWORD *)v2 + 11) = v26;
          }
          goto LABEL_10;
        }
      }
      else if ( !v13 )
      {
        goto LABEL_10;
      }
    }
  }
  if ( v6 != v11 )
  {
    for ( i = (__int64 *)v2[4]; v11 != i; i += 2 )
    {
      v23 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v23 + 12) == v7 && v4 == v23 )
          goto LABEL_25;
      }
      else if ( !v23 )
      {
        break;
      }
    }
  }
LABEL_10:
  v14 = *(_DWORD *)(v3 - 4) - 1;
  v15 = *(_QWORD *)(v3 + 8LL * v14);
  *(_DWORD *)(v3 - 4) = v14;
  if ( v15 )
  {
    v16 = *v2;
    v17 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v16, v15);
  }
  v18 = v2[3];
  result = *(unsigned int *)(v18 - 4);
  v20 = (unsigned int)(result - 1);
  v21 = *(_QWORD *)(v18 + 8 * v20);
  *(_DWORD *)(v18 - 4) = v20;
  if ( v21 )
  {
    v22 = v2[2];
    v17 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v17 )
      return sub_15D7BC0(v22, v21);
  }
  return result;
}

