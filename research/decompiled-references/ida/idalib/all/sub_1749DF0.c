__int64 __fastcall sub_1749DF0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  bool v16; // zf
  __int64 v17; // r13
  __m128i *v18; // rdx
  __int64 v19; // rcx
  __m128i *v20; // rcx
  __m128i k; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r10
  int v25; // r9d
  __int64 v26; // r8
  int v27; // r12d
  unsigned int m; // edx
  __int64 v29; // rdi
  __int64 v30; // r11
  __m128i *v31; // r14
  __int64 v32; // rax
  __int8 v33; // al
  __int64 v34; // rax
  __int8 v35; // al
  __int64 v36; // rax
  __int8 v37; // al
  __int64 v38; // rax
  __int8 v39; // al
  __int64 v40; // rax
  __int64 result; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __m128i i; // xmm0
  __m128i *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  int v48; // esi
  __int64 v49; // rdi
  __int64 *v50; // rbp
  int v51; // r11d
  unsigned int j; // eax
  __int64 *v53; // r10
  __int64 v54; // r15
  unsigned int v55; // eax
  int v56; // esi
  unsigned int v57; // edx
  __int64 v58; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+10h] [rbp-A8h]
  __int64 v60; // [rsp+18h] [rbp-A0h]
  __m128i v61; // [rsp+20h] [rbp-98h] BYREF
  char v62; // [rsp+30h] [rbp-88h]
  __int64 v63; // [rsp+38h] [rbp-80h] BYREF

  v6 = a2;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    v15 = a1 + 8;
    v10 = a1 + 104;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = v8;
      v6 = v12;
      goto LABEL_8;
    }
    goto LABEL_27;
  }
  v10 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
        | (a2 - 1)
        | ((unsigned __int64)(a2 - 1) >> 1)
        | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
      | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
      | (a2 - 1)
      | ((unsigned __int64)(a2 - 1) >> 1)
      | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
  v11 = (v10 | (v10 >> 16)) + 1;
  v6 = v11;
  if ( (unsigned int)v11 > 0x40 )
  {
    v15 = a1 + 8;
    v10 = a1 + 104;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      v13 = 24LL * (unsigned int)v11;
      goto LABEL_5;
    }
LABEL_27:
    if ( *(_QWORD *)v15 == -4096 )
    {
      if ( *(_QWORD *)(v15 + 8) == -4096 )
      {
LABEL_79:
        v31 = &v61;
LABEL_30:
        if ( v10 == v15 + 24 )
          goto LABEL_46;
        v32 = *(_QWORD *)(v15 + 24);
        if ( v32 == -4096 )
        {
          if ( *(_QWORD *)(v15 + 32) == -4096 )
            goto LABEL_34;
        }
        else if ( v32 == -8192 && *(_QWORD *)(v15 + 32) == -8192 )
        {
LABEL_34:
          if ( v10 == v15 + 48 )
            goto LABEL_46;
          v34 = *(_QWORD *)(v15 + 48);
          if ( v34 == -4096 )
          {
            if ( *(_QWORD *)(v15 + 56) == -4096 )
              goto LABEL_38;
          }
          else if ( v34 == -8192 && *(_QWORD *)(v15 + 56) == -8192 )
          {
LABEL_38:
            if ( v10 == v15 + 72 )
              goto LABEL_46;
            v36 = *(_QWORD *)(v15 + 72);
            if ( v36 == -4096 )
            {
              if ( *(_QWORD *)(v15 + 80) == -4096 )
                goto LABEL_42;
            }
            else if ( v36 == -8192 && *(_QWORD *)(v15 + 80) == -8192 )
            {
LABEL_42:
              if ( v10 == v15 + 96 )
                goto LABEL_46;
              v38 = *(_QWORD *)(v15 + 96);
              if ( v38 == -4096 )
              {
                if ( *(_QWORD *)(v15 + 104) == -4096 )
                  goto LABEL_46;
              }
              else if ( v38 == -8192 && *(_QWORD *)(v15 + 104) == -8192 )
              {
LABEL_46:
                if ( v6 > 4 )
                {
                  *(_BYTE *)a1 &= ~1u;
                  v40 = sub_22300B0(24LL * v6, 8, v10, v9, a5, a6);
                  *(_DWORD *)(a1 + 16) = v6;
                  *(_QWORD *)(a1 + 8) = v40;
                  v8 = v40;
                }
                v16 = (*(_QWORD *)a1 & 1LL) == 0;
                *(_QWORD *)a1 &= 1uLL;
                if ( v16 )
                {
                  result = v8;
                  v42 = 24LL * *(unsigned int *)(a1 + 16);
                }
                else
                {
                  result = v15;
                  v42 = 96;
                }
                v43 = result + v42;
                for ( i = _mm_load_si128((const __m128i *)&xmmword_23A8C80); v43 != result; result += 24 )
                  *(__m128i *)result = i;
                v45 = &v61;
                if ( v31 == &v61 )
                  return result;
                while ( 1 )
                {
                  v46 = v45->m128i_i64[0];
                  if ( v45->m128i_i64[0] == -4096 )
                  {
                    if ( v45->m128i_i64[1] != -4096 )
                      goto LABEL_55;
                  }
                  else if ( v46 != -8192 || v45->m128i_i64[1] != -8192 )
                  {
LABEL_55:
                    if ( (*(_BYTE *)a1 & 1) != 0 )
                    {
                      v47 = v15;
                      v48 = 3;
                    }
                    else
                    {
                      v56 = *(_DWORD *)(a1 + 16);
                      if ( !v56 )
                      {
                        *(_QWORD *)&dword_0 = v45->m128i_i64[0];
                        BUG();
                      }
                      v48 = v56 - 1;
                      v47 = v8;
                    }
                    v49 = v45->m128i_i64[1];
                    v50 = nullptr;
                    v51 = 1;
                    for ( j = v48
                            & (((0xBF58476D1CE4E5B9LL
                               * (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4)
                                | ((unsigned __int64)(((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4)) << 32))) >> 31)
                             ^ (484763065 * (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4)))); ; j = v48 & v55 )
                    {
                      v53 = (__int64 *)(v47 + 24LL * j);
                      v54 = *v53;
                      if ( v46 == *v53 && v49 == v53[1] )
                        break;
                      if ( v54 == -4096 )
                      {
                        if ( v53[1] == -4096 )
                        {
                          if ( v50 )
                            v53 = v50;
                          break;
                        }
                      }
                      else if ( v54 == -8192 && v53[1] == -8192 && !v50 )
                      {
                        v50 = (__int64 *)(v47 + 24LL * j);
                      }
                      v55 = v51 + j;
                      ++v51;
                    }
                    v58 = v45->m128i_i64[1];
                    *((_BYTE *)v53 + 16) = v45[1].m128i_i8[0];
                    *(__m128 *)v53 = _mm_loadh_ps((const double *)&v58);
                    result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
                    *(_DWORD *)a1 = result;
                  }
                  v45 = (__m128i *)((char *)v45 + 24);
                  if ( v45 == v31 )
                    return result;
                }
              }
              v39 = *(_BYTE *)(v15 + 112);
              v31 = (__m128i *)((char *)v31 + 24);
              *(__m128i *)((char *)v31 - 24) = _mm_loadu_si128((const __m128i *)(v15 + 96));
              v31[-1].m128i_i8[8] = v39;
              goto LABEL_46;
            }
            v37 = *(_BYTE *)(v15 + 88);
            v31 = (__m128i *)((char *)v31 + 24);
            *(__m128i *)((char *)v31 - 24) = _mm_loadu_si128((const __m128i *)(v15 + 72));
            v31[-1].m128i_i8[8] = v37;
            goto LABEL_42;
          }
          v35 = *(_BYTE *)(v15 + 64);
          v31 = (__m128i *)((char *)v31 + 24);
          *(__m128i *)((char *)v31 - 24) = _mm_loadu_si128((const __m128i *)(v15 + 48));
          v31[-1].m128i_i8[8] = v35;
          goto LABEL_38;
        }
        v33 = *(_BYTE *)(v15 + 40);
        v31 = (__m128i *)((char *)v31 + 24);
        *(__m128i *)((char *)v31 - 24) = _mm_loadu_si128((const __m128i *)(v15 + 24));
        v31[-1].m128i_i8[8] = v33;
        goto LABEL_34;
      }
    }
    else if ( *(_QWORD *)v15 == -8192 && *(_QWORD *)(v15 + 8) == -8192 )
    {
      goto LABEL_79;
    }
    v31 = (__m128i *)&v63;
    v62 = *(_BYTE *)(v15 + 16);
    v61 = _mm_loadu_si128((const __m128i *)v15);
    goto LABEL_30;
  }
  if ( (_BYTE)v9 )
  {
    v15 = a1 + 8;
    v10 = a1 + 104;
    v6 = 64;
    goto LABEL_27;
  }
  v12 = *(_DWORD *)(a1 + 16);
  v6 = 64;
  v13 = 1536;
LABEL_5:
  v14 = sub_22300B0(v13, 8, v10, v9, a5, a6);
  *(_DWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
  v16 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  v59 = 24LL * v12;
  v17 = v8 + v59;
  if ( v16 )
  {
    v18 = (__m128i *)v14;
    v19 = 24LL * v6;
  }
  else
  {
    v18 = (__m128i *)(a1 + 8);
    v19 = 96;
  }
  v20 = (__m128i *)((char *)v18 + v19);
  for ( k = _mm_load_si128((const __m128i *)&xmmword_23A8C80); v20 != v18; v18 = (__m128i *)((char *)v18 + 24) )
    *v18 = k;
  v22 = v8;
  if ( v17 != v8 )
  {
    v60 = v8;
    while ( 1 )
    {
      v23 = *(_QWORD *)v22;
      if ( *(_QWORD *)v22 == -4096 )
      {
        if ( *(_QWORD *)(v22 + 8) != -4096 )
          goto LABEL_16;
      }
      else if ( v23 != -8192 || *(_QWORD *)(v22 + 8) != -8192 )
      {
LABEL_16:
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v24 = a1 + 8;
          v25 = 3;
        }
        else
        {
          if ( !v6 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)v22;
            BUG();
          }
          v25 = v6 - 1;
          v24 = v14;
        }
        v26 = *(_QWORD *)(v22 + 8);
        v27 = 1;
        v58 = 0;
        for ( m = v25
                & (((0xBF58476D1CE4E5B9LL
                   * (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4)
                    | ((unsigned __int64)(((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4)) << 32))) >> 31)
                 ^ (484763065 * (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4)))); ; m = v25 & v57 )
        {
          v29 = v24 + 24LL * m;
          v30 = *(_QWORD *)v29;
          if ( v23 == *(_QWORD *)v29 && v26 == *(_QWORD *)(v29 + 8) )
            break;
          if ( v30 == -4096 )
          {
            if ( *(_QWORD *)(v29 + 8) == -4096 )
            {
              if ( v58 )
                v29 = v58;
              break;
            }
          }
          else if ( v30 == -8192 && *(_QWORD *)(v29 + 8) == -8192 )
          {
            if ( v58 )
              v29 = v58;
            v58 = v29;
          }
          v57 = v27 + m;
          ++v27;
        }
        *(_QWORD *)v29 = v23;
        *(_QWORD *)(v29 + 8) = *(_QWORD *)(v22 + 8);
        *(_BYTE *)(v29 + 16) = *(_BYTE *)(v22 + 16);
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      v22 += 24;
      if ( v17 == v22 )
      {
        v8 = v60;
        return operator delete(v8, v59, 8);
      }
    }
  }
  return operator delete(v8, v59, 8);
}
