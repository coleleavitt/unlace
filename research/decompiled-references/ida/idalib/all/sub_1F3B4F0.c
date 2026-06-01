__m128i *__fastcall sub_1F3B4F0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __m128i *v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rsi
  bool v17; // zf
  __m128i *v18; // r13
  __m128i *v19; // rdx
  __int64 v20; // rcx
  __m128i *v21; // rcx
  __m128i k; // xmm0
  __m128i *m; // rcx
  __int64 v24; // rdi
  __int64 v25; // r11
  int v26; // r9d
  __int64 v27; // r10
  unsigned int v28; // edx
  __int64 v29; // r8
  __int64 v30; // r12
  __m128i *v31; // r13
  __int64 v32; // rax
  __int32 v33; // eax
  __int64 v34; // rax
  __int32 v35; // eax
  __int64 v36; // rax
  __m128i *result; // rax
  __int64 v38; // rdx
  __m128i *v39; // rdx
  __m128i i; // xmm0
  __m128i *v41; // rcx
  __int64 v42; // rdx
  __m128i *v43; // r8
  int v44; // esi
  __int64 v45; // rdi
  __int64 *v46; // r14
  int v47; // r11d
  unsigned int j; // eax
  __int64 *v49; // r10
  __int64 v50; // r15
  unsigned int v51; // eax
  int v52; // r9d
  int v53; // esi
  __int64 v54; // [rsp+0h] [rbp-78h] BYREF
  __int64 v55; // [rsp+8h] [rbp-70h]
  __m128i v56; // [rsp+10h] [rbp-68h] BYREF
  int v57; // [rsp+20h] [rbp-58h]
  __int64 v58; // [rsp+28h] [rbp-50h] BYREF

  LODWORD(v6) = a2;
  v8 = *(__m128i **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 2 )
  {
    v15 = a1 + 8;
    v10 = a1 + 56;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = (__int64)v8;
      v6 = v12;
      goto LABEL_8;
    }
    goto LABEL_26;
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
  v6 = (unsigned int)v11;
  if ( (unsigned int)v11 > 0x40 )
  {
    v15 = a1 + 8;
    v10 = a1 + 56;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      v13 = 24LL * (unsigned int)v11;
      goto LABEL_5;
    }
LABEL_26:
    if ( *(_QWORD *)v15 == -4096 )
    {
      if ( *(_QWORD *)(v15 + 8) == -4096 )
      {
LABEL_70:
        v31 = &v56;
LABEL_29:
        if ( v10 == v15 + 24 )
          goto LABEL_37;
        v32 = *(_QWORD *)(v15 + 24);
        if ( v32 == -4096 )
        {
          if ( *(_QWORD *)(v15 + 32) == -4096 )
            goto LABEL_33;
        }
        else if ( v32 == -8192 && *(_QWORD *)(v15 + 32) == -8192 )
        {
LABEL_33:
          if ( v10 == v15 + 48 )
            goto LABEL_37;
          v34 = *(_QWORD *)(v15 + 48);
          if ( v34 == -4096 )
          {
            if ( *(_QWORD *)(v15 + 56) == -4096 )
              goto LABEL_37;
          }
          else if ( v34 == -8192 && *(_QWORD *)(v15 + 56) == -8192 )
          {
LABEL_37:
            if ( (unsigned int)v6 > 2 )
            {
              *(_BYTE *)a1 &= ~1u;
              v36 = sub_22300B0(24LL * (unsigned int)v6, 8, v10, v9, a5, a6);
              *(_DWORD *)(a1 + 16) = v6;
              *(_QWORD *)(a1 + 8) = v36;
              v8 = (__m128i *)v36;
            }
            v17 = (*(_QWORD *)a1 & 1LL) == 0;
            *(_QWORD *)a1 &= 1uLL;
            if ( v17 )
            {
              result = v8;
              v38 = 24LL * *(unsigned int *)(a1 + 16);
            }
            else
            {
              result = (__m128i *)v15;
              v38 = 48;
            }
            v39 = (__m128i *)((char *)result + v38);
            for ( i = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                  v39 != result;
                  result = (__m128i *)((char *)result + 24) )
            {
              *result = i;
            }
            v41 = &v56;
            if ( v31 == &v56 )
              return result;
            while ( 1 )
            {
              v42 = v41->m128i_i64[0];
              if ( v41->m128i_i64[0] == -4096 )
              {
                if ( v41->m128i_i64[1] != -4096 )
                  goto LABEL_46;
              }
              else if ( v42 != -8192 || v41->m128i_i64[1] != -8192 )
              {
LABEL_46:
                if ( (*(_BYTE *)a1 & 1) != 0 )
                {
                  v43 = (__m128i *)v15;
                  v44 = 1;
                }
                else
                {
                  v53 = *(_DWORD *)(a1 + 16);
                  if ( !v53 )
                  {
                    *(_QWORD *)&dword_0 = v41->m128i_i64[0];
                    BUG();
                  }
                  v44 = v53 - 1;
                  v43 = v8;
                }
                v45 = v41->m128i_i64[1];
                v46 = nullptr;
                v47 = 1;
                for ( j = v44
                        & (((0xBF58476D1CE4E5B9LL
                           * (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4)
                            | ((unsigned __int64)(((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4)) << 32))) >> 31)
                         ^ (484763065 * (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4)))); ; j = v44 & v51 )
                {
                  v49 = &v43->m128i_i64[3 * j];
                  v50 = *v49;
                  if ( v42 == *v49 && v45 == v49[1] )
                    break;
                  if ( v50 == -4096 )
                  {
                    if ( v49[1] == -4096 )
                    {
                      if ( v46 )
                        v49 = v46;
                      break;
                    }
                  }
                  else if ( v50 == -8192 && v49[1] == -8192 && !v46 )
                  {
                    v46 = &v43->m128i_i64[3 * j];
                  }
                  v51 = v47 + j;
                  ++v47;
                }
                v54 = v41->m128i_i64[1];
                *((_DWORD *)v49 + 4) = v41[1].m128i_i32[0];
                *(__m128 *)v49 = _mm_loadh_ps((const double *)&v54);
                result = (__m128i *)((2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u);
                *(_DWORD *)a1 = (_DWORD)result;
              }
              v41 = (__m128i *)((char *)v41 + 24);
              if ( v41 == v31 )
                return result;
            }
          }
          v35 = *(_DWORD *)(v15 + 64);
          v31 = (__m128i *)((char *)v31 + 24);
          *(__m128i *)((char *)v31 - 24) = _mm_loadu_si128((const __m128i *)(v15 + 48));
          v31[-1].m128i_i32[2] = v35;
          goto LABEL_37;
        }
        v33 = *(_DWORD *)(v15 + 40);
        v31 = (__m128i *)((char *)v31 + 24);
        *(__m128i *)((char *)v31 - 24) = _mm_loadu_si128((const __m128i *)(v15 + 24));
        v31[-1].m128i_i32[2] = v33;
        goto LABEL_33;
      }
    }
    else if ( *(_QWORD *)v15 == -8192 && *(_QWORD *)(v15 + 8) == -8192 )
    {
      goto LABEL_70;
    }
    v31 = (__m128i *)&v58;
    v57 = *(_DWORD *)(v15 + 16);
    v56 = _mm_loadu_si128((const __m128i *)v15);
    goto LABEL_29;
  }
  if ( (_BYTE)v9 )
  {
    v15 = a1 + 8;
    v10 = a1 + 56;
    LODWORD(v6) = 64;
    goto LABEL_26;
  }
  v12 = *(_DWORD *)(a1 + 16);
  v6 = 64;
  v13 = 1536;
LABEL_5:
  v14 = sub_22300B0(v13, 8, v10, v9, a5, a6);
  *(_DWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
  v16 = 24LL * v12;
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  v18 = (__m128i *)((char *)v8 + v16);
  if ( v17 )
  {
    v19 = (__m128i *)v14;
    v20 = 24 * v6;
  }
  else
  {
    v19 = (__m128i *)(a1 + 8);
    v20 = 48;
  }
  v21 = (__m128i *)((char *)v19 + v20);
  for ( k = _mm_load_si128((const __m128i *)&xmmword_23A8C80); v21 != v19; v19 = (__m128i *)((char *)v19 + 24) )
    *v19 = k;
  for ( m = v8; v18 != m; m = (__m128i *)((char *)m + 24) )
  {
    v24 = m->m128i_i64[0];
    if ( m->m128i_i64[0] == -4096 )
    {
      if ( m->m128i_i64[1] != -4096 )
        goto LABEL_15;
    }
    else if ( v24 != -8192 || m->m128i_i64[1] != -8192 )
    {
LABEL_15:
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v25 = a1 + 8;
        v26 = 1;
      }
      else
      {
        v52 = *(_DWORD *)(a1 + 16);
        if ( !v52 )
        {
          *(_QWORD *)&dword_0 = m->m128i_i64[0];
          BUG();
        }
        v26 = v52 - 1;
        v25 = v14;
      }
      v27 = m->m128i_i64[1];
      LODWORD(v54) = 1;
      v55 = 0;
      v28 = v26
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4)
              | ((unsigned __int64)(((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4))));
      while ( 1 )
      {
        v29 = v25 + 24LL * v28;
        v30 = *(_QWORD *)v29;
        if ( v24 == *(_QWORD *)v29 && v27 == *(_QWORD *)(v29 + 8) )
          break;
        if ( v30 == -4096 )
        {
          if ( *(_QWORD *)(v29 + 8) == -4096 )
          {
            if ( v55 )
              v29 = v55;
            break;
          }
        }
        else if ( v30 == -8192 && *(_QWORD *)(v29 + 8) == -8192 )
        {
          if ( v55 )
            v29 = v55;
          v55 = v29;
        }
        v28 = v26 & (v54 + v28);
        LODWORD(v54) = v54 + 1;
      }
      *(_QWORD *)v29 = v24;
      *(_QWORD *)(v29 + 8) = m->m128i_i64[1];
      *(_DWORD *)(v29 + 16) = m[1].m128i_i32[0];
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return (__m128i *)operator delete(v8, v16, 8);
}
