__int64 __fastcall sub_1D3D700(unsigned __int8 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rbp
  unsigned int v12; // r12d
  __int64 v13; // rdi
  _DWORD *v14; // rax
  unsigned __int8 *v15; // rbp
  unsigned __int8 *v16; // rsi
  __int64 v17; // rsi
  bool v18; // zf
  _DWORD *v19; // r12
  __int64 v20; // rdx
  _DWORD *k; // rdx
  _DWORD *v22; // rdx
  int v23; // ecx
  unsigned __int8 *v24; // r10
  int v25; // edi
  unsigned __int64 v26; // r9
  int v27; // esi
  unsigned __int8 *v28; // r14
  int m; // eax
  unsigned __int8 *v30; // r8
  int v31; // r11d
  __m128i *v32; // r12
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 result; // rax
  __int64 v43; // rcx
  __int64 i; // rcx
  __m128i *v45; // rdx
  __int32 v46; // ecx
  unsigned __int8 *v47; // r9
  int v48; // edi
  unsigned __int64 v49; // r8
  int v50; // r14d
  unsigned __int8 *v51; // r13
  int j; // eax
  unsigned __int8 *v53; // r10
  int v54; // r11d
  int v55; // eax
  int v56; // edi
  int v57; // edi
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // [rsp+8h] [rbp-A0h]
  __m128i v61; // [rsp+10h] [rbp-98h] BYREF
  __int64 v62; // [rsp+20h] [rbp-88h]
  __int64 v63; // [rsp+28h] [rbp-80h] BYREF

  LODWORD(v6) = a2;
  v8 = *a1;
  v9 = *a1 & 1;
  if ( a2 <= 4 )
  {
    v15 = a1 + 8;
    v16 = a1 + 104;
    if ( !(_BYTE)v9 )
    {
      v14 = *((_DWORD **)a1 + 1);
      v12 = *((_DWORD *)a1 + 4);
      *a1 = v8 | 1;
      v6 = v12;
      v11 = v14;
      goto LABEL_8;
    }
    goto LABEL_27;
  }
  v8 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
     | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
     | (a2 - 1)
     | ((unsigned __int64)(a2 - 1) >> 1)
     | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
  v10 = (v8 | (v8 >> 16)) + 1;
  v6 = (unsigned int)v10;
  if ( (unsigned int)v10 > 0x40 )
  {
    v15 = a1 + 8;
    v16 = a1 + 104;
    if ( !(_BYTE)v9 )
    {
      v11 = *((_DWORD **)a1 + 1);
      v12 = *((_DWORD *)a1 + 4);
      v13 = 24LL * (unsigned int)v10;
      goto LABEL_5;
    }
LABEL_27:
    if ( *(_DWORD *)v15 == -1 )
    {
      if ( !*((_QWORD *)v15 + 1) )
      {
LABEL_79:
        v32 = &v61;
LABEL_30:
        if ( v16 == v15 + 24 )
          goto LABEL_46;
        v33 = *((_DWORD *)v15 + 6);
        if ( v33 == -1 )
        {
          if ( !*((_QWORD *)v15 + 4) )
            goto LABEL_34;
        }
        else if ( v33 == -2 && *((_QWORD *)v15 + 4) == -1 )
        {
LABEL_34:
          if ( v16 == v15 + 48 )
            goto LABEL_46;
          v35 = *((_DWORD *)v15 + 12);
          if ( v35 == -1 )
          {
            if ( !*((_QWORD *)v15 + 7) )
              goto LABEL_38;
          }
          else if ( v35 == -2 && *((_QWORD *)v15 + 7) == -1 )
          {
LABEL_38:
            if ( v16 == v15 + 72 )
              goto LABEL_46;
            v37 = *((_DWORD *)v15 + 18);
            if ( v37 == -1 )
            {
              if ( !*((_QWORD *)v15 + 10) )
                goto LABEL_42;
            }
            else if ( v37 == -2 && *((_QWORD *)v15 + 10) == -1 )
            {
LABEL_42:
              if ( v16 == v15 + 96 )
                goto LABEL_46;
              v39 = *((_DWORD *)v15 + 24);
              if ( v39 == -1 )
              {
                if ( !*((_QWORD *)v15 + 13) )
                  goto LABEL_46;
              }
              else if ( v39 == -2 && *((_QWORD *)v15 + 13) == -1 )
              {
LABEL_46:
                if ( (unsigned int)v6 > 4 )
                {
                  *a1 &= ~1u;
                  v41 = sub_22300B0(24LL * (unsigned int)v6, 8, v8, v9, a5, a6);
                  *((_DWORD *)a1 + 4) = v6;
                  *((_QWORD *)a1 + 1) = v41;
                }
                v18 = (*(_QWORD *)a1 & 1LL) == 0;
                *(_QWORD *)a1 &= 1uLL;
                if ( v18 )
                {
                  result = *((_QWORD *)a1 + 1);
                  v43 = 24LL * *((unsigned int *)a1 + 4);
                }
                else
                {
                  result = (__int64)v15;
                  v43 = 96;
                }
                for ( i = result + v43; i != result; *(_QWORD *)(result - 16) = 0 )
                {
                  *(_DWORD *)result = -1;
                  result += 24;
                }
                v45 = &v61;
                if ( v32 == &v61 )
                  return result;
                while ( 1 )
                {
                  v46 = v45->m128i_i32[0];
                  if ( v45->m128i_i32[0] == -1 )
                  {
                    if ( v45->m128i_i64[1] )
                      goto LABEL_55;
                  }
                  else if ( v46 != -2 || v45->m128i_i64[1] != -1 )
                  {
LABEL_55:
                    if ( (*a1 & 1) != 0 )
                    {
                      v47 = v15;
                      v48 = 3;
                    }
                    else
                    {
                      v57 = *((_DWORD *)a1 + 4);
                      v47 = *((unsigned __int8 **)a1 + 1);
                      if ( !v57 )
                      {
LABEL_117:
                        dword_0 = 0;
                        BUG();
                      }
                      v48 = v57 - 1;
                    }
                    v49 = v45->m128i_u64[1];
                    v50 = 1;
                    v51 = nullptr;
                    for ( j = v48
                            & (((0xBF58476D1CE4E5B9LL
                               * ((unsigned int)v49 ^ (unsigned int)(v49 >> 9)
                                | ((unsigned __int64)(unsigned int)(37 * v46) << 32))) >> 31)
                             ^ (484763065 * (v49 ^ (v49 >> 9)))); ; j = v48 & v55 )
                    {
                      v53 = &v47[24 * j];
                      v54 = *(_DWORD *)v53;
                      if ( v46 == *(_DWORD *)v53 && v49 == *((_QWORD *)v53 + 1) )
                        break;
                      if ( v54 == -1 )
                      {
                        if ( !*((_QWORD *)v53 + 1) )
                        {
                          if ( v51 )
                            v53 = v51;
                          break;
                        }
                      }
                      else if ( v54 == -2 && *((_QWORD *)v53 + 1) == -1 && !v51 )
                      {
                        v51 = &v47[24 * j];
                      }
                      v55 = v50 + j;
                      ++v50;
                    }
                    v58 = v45->m128i_i64[1];
                    *(_DWORD *)v53 = v46;
                    *((_QWORD *)v53 + 1) = v58;
                    *((_QWORD *)v53 + 2) = v45[1].m128i_i64[0];
                    result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
                    *(_DWORD *)a1 = result;
                  }
                  v45 = (__m128i *)((char *)v45 + 24);
                  if ( v45 == v32 )
                    return result;
                }
              }
              v40 = *((_QWORD *)v15 + 14);
              v32 = (__m128i *)((char *)v32 + 24);
              *(__m128i *)((char *)v32 - 24) = _mm_loadu_si128((const __m128i *)v15 + 6);
              v32[-1].m128i_i64[1] = v40;
              goto LABEL_46;
            }
            v38 = *((_QWORD *)v15 + 11);
            v32 = (__m128i *)((char *)v32 + 24);
            *(__m128i *)((char *)v32 - 24) = _mm_loadu_si128((const __m128i *)(v15 + 72));
            v32[-1].m128i_i64[1] = v38;
            goto LABEL_42;
          }
          v36 = *((_QWORD *)v15 + 8);
          v32 = (__m128i *)((char *)v32 + 24);
          *(__m128i *)((char *)v32 - 24) = _mm_loadu_si128((const __m128i *)v15 + 3);
          v32[-1].m128i_i64[1] = v36;
          goto LABEL_38;
        }
        v34 = *((_QWORD *)v15 + 5);
        v32 = (__m128i *)((char *)v32 + 24);
        *(__m128i *)((char *)v32 - 24) = _mm_loadu_si128((const __m128i *)(v15 + 24));
        v32[-1].m128i_i64[1] = v34;
        goto LABEL_34;
      }
    }
    else if ( *(_DWORD *)v15 == -2 && *((_QWORD *)v15 + 1) == -1 )
    {
      goto LABEL_79;
    }
    v32 = (__m128i *)&v63;
    v62 = *((_QWORD *)v15 + 2);
    v61 = _mm_loadu_si128((const __m128i *)v15);
    goto LABEL_30;
  }
  if ( (_BYTE)v9 )
  {
    v15 = a1 + 8;
    v16 = a1 + 104;
    LODWORD(v6) = 64;
    goto LABEL_27;
  }
  v11 = *((_DWORD **)a1 + 1);
  v12 = *((_DWORD *)a1 + 4);
  v6 = 64;
  v13 = 1536;
LABEL_5:
  v14 = (_DWORD *)sub_22300B0(v13, 8, v8, v9, a5, a6);
  *((_DWORD *)a1 + 4) = v6;
  *((_QWORD *)a1 + 1) = v14;
LABEL_8:
  v17 = 24LL * v12;
  v18 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  v19 = (_DWORD *)((char *)v11 + v17);
  if ( v18 )
  {
    v20 = 6 * v6;
  }
  else
  {
    v14 = a1 + 8;
    v20 = 24;
  }
  for ( k = &v14[v20]; k != v14; *((_QWORD *)v14 - 2) = 0 )
  {
    *v14 = -1;
    v14 += 6;
  }
  v22 = v11;
  if ( v19 != v11 )
  {
    v60 = v17;
    while ( 1 )
    {
      v23 = *v22;
      if ( *v22 == -1 )
      {
        if ( *((_QWORD *)v22 + 1) )
          goto LABEL_16;
      }
      else if ( v23 != -2 || *((_QWORD *)v22 + 1) != -1 )
      {
LABEL_16:
        if ( (*a1 & 1) != 0 )
        {
          v24 = a1 + 8;
          v25 = 3;
        }
        else
        {
          v56 = *((_DWORD *)a1 + 4);
          v24 = *((unsigned __int8 **)a1 + 1);
          if ( !v56 )
            goto LABEL_117;
          v25 = v56 - 1;
        }
        v26 = *((_QWORD *)v22 + 1);
        v27 = 1;
        v28 = nullptr;
        for ( m = v25
                & (((0xBF58476D1CE4E5B9LL
                   * ((unsigned int)v26 ^ (unsigned int)(v26 >> 9) | ((unsigned __int64)(unsigned int)(37 * v23) << 32))) >> 31)
                 ^ (484763065 * (v26 ^ (v26 >> 9)))); ; m = v25 & v59 )
        {
          v30 = &v24[24 * m];
          v31 = *(_DWORD *)v30;
          if ( v23 == *(_DWORD *)v30 && v26 == *((_QWORD *)v30 + 1) )
            break;
          if ( v31 == -1 )
          {
            if ( !*((_QWORD *)v30 + 1) )
            {
              if ( v28 )
                v30 = v28;
              break;
            }
          }
          else if ( v31 == -2 && *((_QWORD *)v30 + 1) == -1 && !v28 )
          {
            v28 = &v24[24 * m];
          }
          v59 = v27 + m;
          ++v27;
        }
        *(_DWORD *)v30 = v23;
        *((_QWORD *)v30 + 1) = *((_QWORD *)v22 + 1);
        *((_QWORD *)v30 + 2) = *((_QWORD *)v22 + 2);
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      v22 += 6;
      if ( v19 == v22 )
      {
        v17 = v60;
        return operator delete(v11, v17, 8);
      }
    }
  }
  return operator delete(v11, v17, 8);
}
