__int64 __fastcall sub_20DCBE0(__int64 a1, char a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rdx
  __int64 result; // rax
  _BYTE *v5; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // r15
  _QWORD *v12; // rbp
  __int64 v13; // rsi
  _QWORD *v14; // r9
  char v15; // al
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // r10
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  _QWORD *v23; // r11
  __int64 v24; // rdi
  __int64 *v25; // rdx
  char v26; // r12
  __int64 v27; // rax
  __int64 v28; // rbp
  _BYTE *v29; // rax
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r12
  void *v33; // r13
  char v34; // cl
  _QWORD *v35; // rax
  __int64 v36; // r9
  size_t v37; // rbp
  __int64 v38; // r15
  void *v39; // rdi
  void *v40; // rax
  __int64 v41; // r8
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  void *v44; // rax
  void *v45; // rax
  __m128i v46; // xmm0
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __m128i v49; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v50; // [rsp+10h] [rbp-58h]
  void *src; // [rsp+18h] [rbp-50h]
  __int64 v52[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_BYTE **)a1;
  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)a1 || *v2 != 73 )
    return 0;
  v5 = v2 + 1;
  *(_QWORD *)a1 = v5;
  if ( !a2 )
    goto LABEL_5;
  v35 = *(_QWORD **)(a1 + 664);
  *(_QWORD *)(a1 + 672) = v35;
  if ( v35 == *(_QWORD **)(a1 + 680) )
  {
    if ( v35 == (_QWORD *)(a1 + 688) )
    {
      v35 = malloc(0);
      if ( v35 )
      {
        *(_QWORD *)(a1 + 664) = v35;
        goto LABEL_111;
      }
    }
    else
    {
      v35 = realloc(v35, 0);
      *(_QWORD *)(a1 + 664) = v35;
      if ( v35 )
      {
LABEL_111:
        v49.m128i_i64[0] = (__int64)v35;
        v46 = _mm_loadl_epi64(&v49);
        *(__m128i *)(a1 + 672) = _mm_unpacklo_epi64(v46, v46);
        goto LABEL_93;
      }
    }
LABEL_135:
    abort();
  }
LABEL_93:
  *(_QWORD *)(a1 + 672) = v35 + 1;
  *v35 = a1 + 576;
  v3 = *(_BYTE **)(a1 + 8);
  *(_QWORD *)(a1 + 584) = *(_QWORD *)(a1 + 576);
  v5 = *(_BYTE **)a1;
LABEL_5:
  v8 = *(_QWORD *)(a1 + 24);
  v49.m128i_i64[0] = *(_QWORD *)(a1 + 16);
  do
  {
    if ( v5 != v3 && *v5 == 69 )
    {
      v28 = 0;
      *(_QWORD *)a1 = v5 + 1;
      goto LABEL_83;
    }
    if ( !a2 )
    {
      result = sub_20E1340(a1);
      v52[0] = result;
      if ( !result )
        return result;
      sub_20D8690((char **)(a1 + 16), v52);
      goto LABEL_74;
    }
    result = sub_20E1340(a1);
    v52[0] = result;
    if ( !result )
      return result;
    sub_20D8690((char **)(a1 + 16), v52);
    v9 = v52[0];
    v10 = *(_BYTE *)(v52[0] + 8);
    if ( v10 == 34 )
    {
      v9 = *(_QWORD *)(v52[0] + 24);
      goto LABEL_70;
    }
    if ( v10 == 41 )
    {
      v11 = *(_QWORD *)(v52[0] + 24);
      v12 = *(_QWORD **)(v52[0] + 16);
      v9 = sub_20CF970(a1 + 816, 32);
      *(_WORD *)(v9 + 8) = -32728;
      v13 = 8 * v11;
      *(_QWORD *)(v9 + 24) = v11;
      v14 = &v12[v11];
      *(_QWORD *)v9 = off_2BE75C0;
      v15 = *(_BYTE *)(v9 + 10);
      v16 = (8 * v11) >> 3;
      v17 = v13 >> 5;
      *(_QWORD *)(v9 + 16) = v12;
      v18 = v16;
      *(_BYTE *)(v9 + 10) = v15 & 0xF0 | 0xA;
      if ( v17 > 0 )
      {
        v19 = *v12;
        if ( (*(_BYTE *)(*v12 + 10LL) & 3) == 1 )
        {
          if ( (*(_BYTE *)(v12[1] + 10LL) & 3) == 1 )
          {
            if ( (*(_BYTE *)(v12[2] + 10LL) & 3) == 1 )
            {
              v20 = v12;
              if ( (*(_BYTE *)(v12[3] + 10LL) & 3) == 1 )
              {
                while ( 1 )
                {
                  v48 = v20 + 4;
                  if ( &v12[4 * v17] == v20 + 4 )
                  {
                    v21 = v14 - v48;
                    goto LABEL_25;
                  }
                  if ( (*(_BYTE *)(v20[4] + 10LL) & 3) != 1 )
                    goto LABEL_86;
                  if ( (*(_BYTE *)(v20[5] + 10LL) & 3) != 1 )
                  {
                    v48 = v20 + 5;
                    goto LABEL_86;
                  }
                  if ( (*(_BYTE *)(v20[6] + 10LL) & 3) != 1 )
                  {
                    v48 = v20 + 6;
                    goto LABEL_86;
                  }
                  if ( (*(_BYTE *)(v20[7] + 10LL) & 3) != 1 )
                    break;
                  v20 += 4;
                }
                v48 = v20 + 7;
              }
              else
              {
                v48 = v12 + 3;
              }
            }
            else
            {
              v48 = v12 + 2;
            }
          }
          else
          {
            v48 = v12 + 1;
          }
        }
        else
        {
          v48 = v12;
        }
LABEL_86:
        if ( v48 != v14 )
        {
LABEL_33:
          if ( ((*(_BYTE *)(v19 + 10) >> 2) & 3) == 1 )
          {
            v22 = v12 + 1;
            if ( ((*(_BYTE *)(v12[1] + 10LL) >> 2) & 3) == 1 )
            {
              v22 = v12 + 2;
              if ( ((*(_BYTE *)(v12[2] + 10LL) >> 2) & 3) == 1 )
              {
                v23 = v12;
                v24 = v17;
                v22 = v12 + 3;
                if ( ((*(_BYTE *)(v12[3] + 10LL) >> 2) & 3) == 1 )
                {
                  while ( 1 )
                  {
                    v22 = v23 + 4;
                    if ( !--v24 )
                    {
                      v16 = v14 - v22;
                      goto LABEL_45;
                    }
                    if ( ((*(_BYTE *)(v23[4] + 10LL) >> 2) & 3) != 1 )
                      goto LABEL_89;
                    if ( ((*(_BYTE *)(v23[5] + 10LL) >> 2) & 3) != 1 )
                    {
                      v22 = v23 + 5;
                      goto LABEL_89;
                    }
                    if ( ((*(_BYTE *)(v23[6] + 10LL) >> 2) & 3) != 1 )
                      break;
                    if ( ((*(_BYTE *)(v23[7] + 10LL) >> 2) & 3) != 1 )
                    {
                      v22 = v23 + 7;
                      goto LABEL_89;
                    }
                    v23 += 4;
                  }
                  v22 = v23 + 6;
                }
              }
            }
          }
          else
          {
            v22 = v12;
          }
LABEL_89:
          if ( v14 != v22 )
            goto LABEL_53;
          goto LABEL_50;
        }
        goto LABEL_30;
      }
      v21 = v16;
      v48 = v12;
LABEL_25:
      if ( v21 != 2 )
      {
        if ( v21 != 3 )
        {
          if ( v21 != 1 )
            goto LABEL_30;
          goto LABEL_28;
        }
        if ( (*(_BYTE *)(*v48 + 10LL) & 3) != 1 )
        {
LABEL_29:
          if ( v14 != v48 )
            goto LABEL_31;
          goto LABEL_30;
        }
        ++v48;
      }
      if ( (*(_BYTE *)(*v48 + 10LL) & 3) == 1 )
      {
        ++v48;
LABEL_28:
        if ( (*(_BYTE *)(*v48 + 10LL) & 3) != 1 )
          goto LABEL_29;
LABEL_30:
        *(_BYTE *)(v9 + 10) = *(_BYTE *)(v9 + 10) & 0xFC | 1;
LABEL_31:
        if ( v17 > 0 )
        {
          v19 = *v12;
          goto LABEL_33;
        }
        v22 = v12;
LABEL_45:
        if ( v16 != 2 )
        {
          if ( v16 != 3 )
          {
            if ( v16 != 1 )
              goto LABEL_50;
            goto LABEL_48;
          }
          if ( ((*(_BYTE *)(*v22 + 10LL) >> 2) & 3) != 1 )
          {
LABEL_49:
            if ( v14 != v22 )
              goto LABEL_51;
            goto LABEL_50;
          }
          ++v22;
        }
        if ( ((*(_BYTE *)(*v22 + 10LL) >> 2) & 3) == 1 )
        {
          ++v22;
LABEL_48:
          if ( ((*(_BYTE *)(*v22 + 10LL) >> 2) & 3) != 1 )
            goto LABEL_49;
LABEL_50:
          *(_BYTE *)(v9 + 10) = *(_BYTE *)(v9 + 10) & 0xF3 | 4;
LABEL_51:
          if ( v17 > 0 )
          {
            v19 = *v12;
LABEL_53:
            if ( *(_BYTE *)(v19 + 9) >> 6 == 1 )
            {
              if ( *(_BYTE *)(v12[1] + 9LL) >> 6 == 1 )
              {
                if ( *(_BYTE *)(v12[2] + 9LL) >> 6 == 1 )
                {
                  if ( *(_BYTE *)(v12[3] + 9LL) >> 6 == 1 )
                  {
                    while ( 1 )
                    {
                      v47 = v12 + 4;
                      if ( !--v17 )
                      {
                        v18 = v14 - v47;
                        goto LABEL_65;
                      }
                      if ( *(_BYTE *)(v12[4] + 9LL) >> 6 != 1 )
                        goto LABEL_69;
                      if ( *(_BYTE *)(v12[5] + 9LL) >> 6 != 1 )
                      {
                        v47 = v12 + 5;
                        goto LABEL_69;
                      }
                      if ( *(_BYTE *)(v12[6] + 9LL) >> 6 != 1 )
                      {
                        v47 = v12 + 6;
                        goto LABEL_69;
                      }
                      if ( *(_BYTE *)(v12[7] + 9LL) >> 6 != 1 )
                        break;
                      v12 += 4;
                    }
                    v47 = v12 + 7;
                  }
                  else
                  {
                    v47 = v12 + 3;
                  }
                }
                else
                {
                  v47 = v12 + 2;
                }
              }
              else
              {
                v47 = v12 + 1;
              }
            }
            else
            {
              v47 = v12;
            }
            goto LABEL_69;
          }
          v47 = v12;
LABEL_65:
          if ( v18 != 2 )
          {
            if ( v18 != 3 )
            {
              if ( v18 != 1 )
                goto LABEL_91;
LABEL_68:
              if ( *(_BYTE *)(*v47 + 9LL) >> 6 == 1 )
                goto LABEL_91;
LABEL_69:
              if ( v14 == v47 )
              {
LABEL_91:
                *(_BYTE *)(v9 + 9) = *(_BYTE *)(v9 + 9) & 0x3F | 0x40;
                goto LABEL_70;
              }
              goto LABEL_70;
            }
            if ( *(_BYTE *)(*v47 + 9LL) >> 6 != 1 )
              goto LABEL_69;
            ++v47;
          }
          if ( *(_BYTE *)(*v47 + 9LL) >> 6 != 1 )
            goto LABEL_69;
          ++v47;
          goto LABEL_68;
        }
        goto LABEL_49;
      }
      goto LABEL_29;
    }
LABEL_70:
    v25 = *(__int64 **)(a1 + 584);
    if ( v25 == *(__int64 **)(a1 + 592) )
    {
      v36 = *(_QWORD *)(a1 + 576);
      v37 = (size_t)v25 - v36;
      v38 = 16 * (((__int64)v25 - v36) >> 3);
      if ( v36 == a1 + 600 )
      {
        src = *(void **)(a1 + 576);
        v50 = v25;
        v49.m128i_i64[1] = v9;
        v44 = malloc(16 * (((__int64)v25 - v36) >> 3));
        v41 = (__int64)v44;
        if ( !v44 )
          goto LABEL_135;
        v9 = v49.m128i_i64[1];
        if ( v50 != src )
        {
          v45 = memmove(v44, src, v37);
          v9 = v49.m128i_i64[1];
          v41 = (__int64)v45;
        }
        *(_QWORD *)(a1 + 576) = v41;
      }
      else
      {
        v39 = *(void **)(a1 + 576);
        v49.m128i_i64[1] = v9;
        v40 = realloc(v39, 16 * (((__int64)v25 - v36) >> 3));
        v9 = v49.m128i_i64[1];
        v41 = (__int64)v40;
        *(_QWORD *)(a1 + 576) = v40;
        if ( !v40 )
          goto LABEL_135;
      }
      v25 = (__int64 *)(v41 + v37);
      v49.m128i_i64[1] = v38;
      v42 = (__m128i)_mm_loadh_ps((const double *)&v49.m128i_i64[1]);
      v49.m128i_i64[1] = v41;
      v43 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
      *(__m128i *)(a1 + 584) = _mm_add_epi64(v42, _mm_unpacklo_epi64(v43, v43));
    }
    *(_QWORD *)(a1 + 584) = v25 + 1;
    *v25 = v9;
LABEL_74:
    v5 = *(_BYTE **)a1;
    v3 = *(_BYTE **)(a1 + 8);
  }
  while ( *(_BYTE **)a1 == v3 || *v5 != 81 );
  v26 = *(_BYTE *)(a1 + 778);
  *(_BYTE *)(a1 + 778) = 1;
  *(_QWORD *)a1 = v5 + 1;
  v27 = sub_20DA8A0(a1);
  *(_BYTE *)(a1 + 778) = v26;
  v28 = v27;
  if ( !v27 )
    return 0;
  v29 = *(_BYTE **)a1;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v29 != 69 )
    return 0;
  *(_QWORD *)a1 = v29 + 1;
LABEL_83:
  v30 = sub_20CFAD0(a1, (v8 - v49.m128i_i64[0]) >> 3);
  v32 = v31;
  v33 = v30;
  result = sub_20CF970(a1 + 816, 40);
  v34 = *(_BYTE *)(result + 10);
  *(_WORD *)(result + 8) = 16427;
  *(_QWORD *)(result + 16) = v33;
  *(_QWORD *)(result + 24) = v32;
  *(_QWORD *)(result + 32) = v28;
  *(_BYTE *)(result + 10) = v34 & 0xF0 | 5;
  *(_QWORD *)result = off_2BE76E0;
  return result;
}
