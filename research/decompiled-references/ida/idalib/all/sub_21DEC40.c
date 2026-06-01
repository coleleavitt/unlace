void *__fastcall sub_21DEC40(__int64 a1, char **p_ptr, __int64 a3, __int64 a4, __int64 a5, void *a6)
{
  _BYTE *v6; // rax
  __int64 v7; // rdx
  void *v8; // r14
  _BYTE *v10; // rax
  char v11; // bl
  _BYTE *v13; // rcx
  char v14; // al
  unsigned __int64 *v15; // r15
  __int64 v16; // r14
  __int8 v17; // al
  __int64 v18; // rax
  void *v19; // r8
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rdx
  char v23; // bl
  char *v24; // rax
  char *v25; // r15
  _BYTE *v26; // rax
  void *v27; // rax
  __int8 v28; // bl
  __int64 v29; // rdx
  __int64 v30; // r13
  void **v31; // r13
  __int64 v32; // rax
  __int64 *v33; // rax
  void *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // r9
  size_t v37; // r14
  __int64 v38; // r15
  void *v39; // rdi
  _BYTE *v40; // rax
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  _BYTE *v43; // rax
  _BYTE *v44; // rax
  __m128i v45; // xmm0
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // dl
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // r14
  unsigned __int64 *v52; // rdi
  __int64 v53; // r14
  char v54; // dl
  unsigned __int64 v55; // r10
  unsigned __int64 *v56; // rsi
  __int64 v57; // rcx
  unsigned __int64 *v58; // rcx
  unsigned __int64 *v59; // r11
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 *v63; // rdx
  unsigned __int64 *v64; // rdx
  __m128i v65; // [rsp+0h] [rbp-108h] BYREF
  __int64 v66; // [rsp+10h] [rbp-F8h]
  __m128i v67; // [rsp+18h] [rbp-F0h] BYREF
  void *src; // [rsp+28h] [rbp-E0h]
  char *v69; // [rsp+30h] [rbp-D8h] BYREF
  void **v70; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+48h] [rbp-C0h]
  _BYTE v73[184]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = *(_BYTE **)a1;
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == *(_QWORD *)a1 || *v6 != 73 )
    return nullptr;
  v10 = v6 + 1;
  v11 = (char)p_ptr;
  *(_QWORD *)a1 = v10;
  if ( !(_BYTE)p_ptr )
    goto LABEL_6;
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
        goto LABEL_64;
      }
    }
    else
    {
      p_ptr = nullptr;
      v35 = realloc(v35, 0);
      *(_QWORD *)(a1 + 664) = v35;
      if ( v35 )
      {
LABEL_64:
        v65.m128i_i64[0] = (__int64)v35;
        v45 = _mm_loadl_epi64(&v65);
        *(__m128i *)(a1 + 672) = _mm_unpacklo_epi64(v45, v45);
        goto LABEL_44;
      }
    }
LABEL_164:
    abort();
  }
LABEL_44:
  *(_QWORD *)(a1 + 672) = v35 + 1;
  *v35 = a1 + 576;
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 584) = *(_QWORD *)(a1 + 576);
  v10 = *(_BYTE **)a1;
LABEL_6:
  v65.m128i_i64[1] = *(_QWORD *)(a1 + 16);
  v66 = *(_QWORD *)(a1 + 24);
  v13 = v73;
  v65.m128i_i64[0] = (__int64)v73;
  do
  {
    if ( (_BYTE *)v7 != v10 && *v10 == 69 )
    {
      v67.m128i_i32[2] = 0;
      v25 = nullptr;
      *(_QWORD *)a1 = v10 + 1;
      v67.m128i_i32[0] = 0;
      goto LABEL_33;
    }
    if ( v11 )
    {
      v69 = sub_21DE810(a1, (__int64)p_ptr, v7, (__int64)v13, a5, (__int64)a6);
      if ( !v69 )
        return nullptr;
      p_ptr = &v69;
      sub_20D8690((char **)(a1 + 16), (__int64 *)&v69);
      a5 = (__int64)v69;
      v14 = v69[8];
      if ( v14 == 34 )
      {
        a5 = *((_QWORD *)v69 + 3);
      }
      else if ( v14 == 41 )
      {
        v15 = *((unsigned __int64 **)v69 + 2);
        v16 = *((_QWORD *)v69 + 3);
        v17 = *(_BYTE *)(a1 + 937);
        v72 = 0x2000000000LL;
        v67.m128i_i8[0] = v17;
        ptr = (void *)v65.m128i_i64[0];
        sub_21D0C90((__int64)&ptr, 0x28u, v15, v16);
        p_ptr = (char **)&ptr;
        v67.m128i_i64[1] = a1 + 904;
        v18 = sub_2223360(a1 + 904, &ptr, &v70, off_2BE9FD0);
        a5 = v18;
        if ( v18 )
        {
          v19 = (void *)(v18 + 8);
          if ( ptr != (void *)v65.m128i_i64[0] )
          {
            v67.m128i_i64[0] = v18 + 8;
            free(ptr);
            v19 = (void *)v67.m128i_i64[0];
          }
          if ( !v19 )
            return nullptr;
          p_ptr = (char **)&ptr;
          ptr = v19;
          v67.m128i_i64[0] = (__int64)v19;
          v20 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
          a5 = v67.m128i_i64[0];
          if ( v20 )
          {
            v21 = v20[1];
            if ( v21 )
              a5 = v21;
          }
          if ( *(_QWORD *)(a1 + 928) == a5 )
            *(_BYTE *)(a1 + 936) = 1;
          goto LABEL_22;
        }
        if ( !v67.m128i_i8[0] )
        {
LABEL_54:
          if ( ptr != (void *)v65.m128i_i64[0] )
          {
            v67.m128i_i64[0] = a5;
            free(ptr);
            a5 = v67.m128i_i64[0];
          }
          *(_QWORD *)(a1 + 920) = a5;
          if ( !a5 )
            return nullptr;
          goto LABEL_22;
        }
        v50 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        *(_QWORD *)(v50 + 32) = v16;
        v51 = v16;
        v52 = &v15[v51];
        v53 = (v51 * 8) >> 5;
        *(_QWORD *)(v50 + 24) = v15;
        *(_QWORD *)(v50 + 8) = off_2BE75C0;
        v54 = *(_BYTE *)(v50 + 18);
        *(_QWORD *)v50 = 0;
        *(_WORD *)(v50 + 16) = -32728;
        *(_BYTE *)(v50 + 18) = v54 & 0xF0 | 0xA;
        if ( v53 > 0 )
        {
          v55 = *v15;
          if ( (*(_BYTE *)(*v15 + 10) & 3) == 1 )
          {
            if ( (*(_BYTE *)(v15[1] + 10) & 3) == 1 )
            {
              if ( (*(_BYTE *)(v15[2] + 10) & 3) == 1 )
              {
                v56 = v15;
                if ( (*(_BYTE *)(v15[3] + 10) & 3) != 1 )
                {
                  v64 = v15 + 3;
                  goto LABEL_119;
                }
                while ( 1 )
                {
                  v64 = v56 + 4;
                  if ( &v15[4 * v53] == v56 + 4 )
                    break;
                  if ( (*(_BYTE *)(v56[4] + 10) & 3) != 1 )
                    goto LABEL_119;
                  if ( (*(_BYTE *)(v56[5] + 10) & 3) != 1 )
                  {
                    v64 = v56 + 5;
                    goto LABEL_119;
                  }
                  if ( (*(_BYTE *)(v56[6] + 10) & 3) != 1 )
                  {
                    v64 = v56 + 6;
                    goto LABEL_119;
                  }
                  if ( (*(_BYTE *)(v56[7] + 10) & 3) != 1 )
                  {
                    v64 = v56 + 7;
                    goto LABEL_119;
                  }
                  v56 += 4;
                }
LABEL_77:
                v57 = v52 - v64;
                if ( v57 != 2 )
                {
                  if ( v57 != 3 )
                  {
                    if ( v57 != 1 )
                    {
LABEL_80:
                      *(_BYTE *)(v50 + 18) = *(_BYTE *)(v50 + 18) & 0xFC | 1;
LABEL_81:
                      if ( v53 <= 0 )
                      {
                        v58 = v15;
                        goto LABEL_94;
                      }
                      v55 = *v15;
LABEL_83:
                      if ( ((*(_BYTE *)(v55 + 10) >> 2) & 3) != 1 )
                      {
                        v58 = v15;
                        goto LABEL_122;
                      }
                      v58 = v15 + 1;
                      if ( ((*(_BYTE *)(v15[1] + 10) >> 2) & 3) != 1
                        || (v58 = v15 + 2, ((*(_BYTE *)(v15[2] + 10) >> 2) & 3) != 1)
                        || (v59 = v15, v60 = v53, v58 = v15 + 3, ((*(_BYTE *)(v15[3] + 10) >> 2) & 3) != 1) )
                      {
LABEL_122:
                        if ( v52 != v58 )
                          goto LABEL_100;
                        goto LABEL_97;
                      }
                      while ( 1 )
                      {
                        v58 = v59 + 4;
                        if ( !--v60 )
                          break;
                        if ( ((*(_BYTE *)(v59[4] + 10) >> 2) & 3) != 1 )
                          goto LABEL_122;
                        if ( ((*(_BYTE *)(v59[5] + 10) >> 2) & 3) != 1 )
                        {
                          v58 = v59 + 5;
                          goto LABEL_122;
                        }
                        if ( ((*(_BYTE *)(v59[6] + 10) >> 2) & 3) != 1 )
                        {
                          v58 = v59 + 6;
                          goto LABEL_122;
                        }
                        if ( ((*(_BYTE *)(v59[7] + 10) >> 2) & 3) != 1 )
                        {
                          v58 = v59 + 7;
                          goto LABEL_122;
                        }
                        v59 += 4;
                      }
LABEL_94:
                      v61 = v52 - v58;
                      if ( v61 != 2 )
                      {
                        if ( v61 != 3 )
                        {
                          if ( v61 != 1 )
                          {
LABEL_97:
                            *(_BYTE *)(v50 + 18) = *(_BYTE *)(v50 + 18) & 0xF3 | 4;
LABEL_98:
                            if ( v53 <= 0 )
                            {
                              v63 = v15;
                              goto LABEL_111;
                            }
                            v55 = *v15;
LABEL_100:
                            if ( *(_BYTE *)(v55 + 9) >> 6 != 1 )
                            {
                              v63 = v15;
                              goto LABEL_116;
                            }
                            if ( *(_BYTE *)(v15[1] + 9) >> 6 != 1 )
                            {
                              v63 = v15 + 1;
                              goto LABEL_116;
                            }
                            if ( *(_BYTE *)(v15[2] + 9) >> 6 != 1 )
                            {
                              v63 = v15 + 2;
                              goto LABEL_116;
                            }
                            if ( *(_BYTE *)(v15[3] + 9) >> 6 != 1 )
                            {
                              v63 = v15 + 3;
                              goto LABEL_116;
                            }
                            while ( 1 )
                            {
                              v63 = v15 + 4;
                              if ( !--v53 )
                                break;
                              if ( *(_BYTE *)(v15[4] + 9) >> 6 != 1 )
                                goto LABEL_116;
                              if ( *(_BYTE *)(v15[5] + 9) >> 6 != 1 )
                              {
                                v63 = v15 + 5;
                                goto LABEL_116;
                              }
                              if ( *(_BYTE *)(v15[6] + 9) >> 6 != 1 )
                              {
                                v63 = v15 + 6;
                                goto LABEL_116;
                              }
                              if ( *(_BYTE *)(v15[7] + 9) >> 6 != 1 )
                              {
                                v63 = v15 + 7;
                                goto LABEL_116;
                              }
                              v15 += 4;
                            }
LABEL_111:
                            v62 = v52 - v63;
                            if ( v62 != 2 )
                            {
                              if ( v62 != 3 )
                              {
                                if ( v62 != 1 )
                                {
LABEL_114:
                                  *(_BYTE *)(v50 + 17) = *(_BYTE *)(v50 + 17) & 0x3F | 0x40;
LABEL_115:
                                  p_ptr = (char **)v50;
                                  v67.m128i_i64[0] = v50 + 8;
                                  sub_2223210(v67.m128i_i64[1], v50, v70, off_2BE9FD0);
                                  a5 = v67.m128i_i64[0];
                                  goto LABEL_54;
                                }
LABEL_153:
                                if ( *(_BYTE *)(*v63 + 9) >> 6 == 1 )
                                  goto LABEL_114;
LABEL_116:
                                if ( v52 != v63 )
                                  goto LABEL_115;
                                goto LABEL_114;
                              }
                              if ( *(_BYTE *)(*v63 + 9) >> 6 != 1 )
                                goto LABEL_116;
                              ++v63;
                            }
                            if ( *(_BYTE *)(*v63 + 9) >> 6 != 1 )
                              goto LABEL_116;
                            ++v63;
                            goto LABEL_153;
                          }
                          goto LABEL_139;
                        }
                        if ( ((*(_BYTE *)(*v58 + 10) >> 2) & 3) != 1 )
                          goto LABEL_140;
                        ++v58;
                      }
                      if ( ((*(_BYTE *)(*v58 + 10) >> 2) & 3) != 1 )
                        goto LABEL_140;
                      ++v58;
LABEL_139:
                      if ( ((*(_BYTE *)(*v58 + 10) >> 2) & 3) == 1 )
                        goto LABEL_97;
LABEL_140:
                      if ( v52 != v58 )
                        goto LABEL_98;
                      goto LABEL_97;
                    }
                    goto LABEL_146;
                  }
                  if ( (*(_BYTE *)(*v64 + 10) & 3) != 1 )
                    goto LABEL_147;
                  ++v64;
                }
                if ( (*(_BYTE *)(*v64 + 10) & 3) != 1 )
                  goto LABEL_147;
                ++v64;
LABEL_146:
                if ( (*(_BYTE *)(*v64 + 10) & 3) == 1 )
                  goto LABEL_80;
LABEL_147:
                if ( v52 != v64 )
                  goto LABEL_81;
                goto LABEL_80;
              }
              v64 = v15 + 2;
            }
            else
            {
              v64 = v15 + 1;
            }
          }
          else
          {
            v64 = v15;
          }
LABEL_119:
          if ( v52 != v64 )
            goto LABEL_83;
          goto LABEL_80;
        }
        v64 = v15;
        goto LABEL_77;
      }
LABEL_22:
      v22 = *(__int64 **)(a1 + 584);
      if ( v22 == *(__int64 **)(a1 + 592) )
      {
        v36 = *(_QWORD *)(a1 + 576);
        v37 = (size_t)v22 - v36;
        v38 = 16 * (((__int64)v22 - v36) >> 3);
        if ( v36 == a1 + 600 )
        {
          src = *(void **)(a1 + 576);
          v67.m128i_i64[1] = (__int64)v22;
          v67.m128i_i64[0] = a5;
          v43 = malloc(16 * (((__int64)v22 - v36) >> 3));
          v13 = v43;
          if ( !v43 )
            goto LABEL_164;
          a6 = src;
          a5 = v67.m128i_i64[0];
          if ( (void *)v67.m128i_i64[1] != src )
          {
            p_ptr = (char **)src;
            v44 = memmove(v43, src, v37);
            a5 = v67.m128i_i64[0];
            v13 = v44;
          }
          *(_QWORD *)(a1 + 576) = v13;
        }
        else
        {
          p_ptr = (char **)(16 * (((__int64)v22 - v36) >> 3));
          v39 = *(void **)(a1 + 576);
          v67.m128i_i64[0] = a5;
          v40 = realloc(v39, (size_t)p_ptr);
          a5 = v67.m128i_i64[0];
          v13 = v40;
          *(_QWORD *)(a1 + 576) = v40;
          if ( !v40 )
            goto LABEL_164;
        }
        v22 = (__int64 *)&v13[v37];
        v67.m128i_i64[0] = v38;
        v41 = (__m128i)_mm_loadh_ps((const double *)v67.m128i_i64);
        v67.m128i_i64[0] = (__int64)v13;
        v42 = _mm_loadl_epi64(&v67);
        *(__m128i *)(a1 + 584) = _mm_add_epi64(v41, _mm_unpacklo_epi64(v42, v42));
      }
      *(_QWORD *)(a1 + 584) = v22 + 1;
      *v22 = a5;
      goto LABEL_26;
    }
    ptr = sub_21DE810(a1, (__int64)p_ptr, v7, (__int64)v13, a5, (__int64)a6);
    if ( !ptr )
      return nullptr;
    p_ptr = (char **)&ptr;
    sub_20D8690((char **)(a1 + 16), (__int64 *)&ptr);
LABEL_26:
    v10 = *(_BYTE **)a1;
    v7 = *(_QWORD *)(a1 + 8);
  }
  while ( *(_QWORD *)a1 == v7 || *v10 != 81 );
  v23 = *(_BYTE *)(a1 + 778);
  *(_BYTE *)(a1 + 778) = 1;
  *(_QWORD *)a1 = v10 + 1;
  v24 = sub_21D94E0(a1);
  *(_BYTE *)(a1 + 778) = v23;
  v25 = v24;
  if ( !v24 )
    return nullptr;
  v26 = *(_BYTE **)a1;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v26 != 69 )
    return nullptr;
  v67.m128i_i32[0] = (int)v25;
  *(_QWORD *)a1 = v26 + 1;
  v67.m128i_i64[1] = (unsigned __int64)v25 >> 32;
LABEL_33:
  v27 = sub_21D4550((_QWORD *)a1, (v66 - v65.m128i_i64[1]) >> 3, v7, (__int64)v13, a5, (__int64)a6);
  v28 = *(_BYTE *)(a1 + 937);
  v65.m128i_i64[0] = (__int64)v27;
  v30 = v29;
  v65.m128i_i8[8] = v28;
  v72 = 0x2000000000LL;
  v66 = v29;
  ptr = v73;
  v70 = &ptr;
  sub_9B7040((__int64)&ptr, 43);
  sub_21CFFC0((__int64)&ptr);
  sub_21D0B50(&v70, (unsigned __int64 *)v65.m128i_i64[0], v30);
  v31 = v70;
  sub_9B7040((__int64)v70, v67.m128i_i32[0]);
  sub_9B7040((__int64)v31, v67.m128i_i32[2]);
  v32 = sub_2223360(a1 + 904, &ptr, &v70, off_2BE9FD0);
  v8 = (void *)v32;
  if ( v32 )
  {
    v8 = (void *)(v32 + 8);
    if ( ptr != v73 )
      free(ptr);
    if ( v8 )
    {
      ptr = v8;
      v33 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
      if ( v33 )
      {
        v34 = (void *)v33[1];
        if ( v34 )
          v8 = v34;
      }
      if ( *(void **)(a1 + 928) == v8 )
        *(_BYTE *)(a1 + 936) = 1;
    }
  }
  else
  {
    if ( v65.m128i_i8[8] )
    {
      v46 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
      v47 = v65.m128i_i64[0];
      *(_WORD *)(v46 + 16) = 16427;
      v48 = *(_BYTE *)(v46 + 18);
      v8 = (void *)(v46 + 8);
      *(_QWORD *)(v46 + 24) = v47;
      v49 = v66;
      *(_QWORD *)v46 = 0;
      *(_QWORD *)(v46 + 32) = v49;
      *(_BYTE *)(v46 + 18) = v48 & 0xF0 | 5;
      *(_QWORD *)(v46 + 40) = v25;
      *(_QWORD *)(v46 + 8) = off_2BE76E0;
      sub_2223210(a1 + 904, v46, v70, off_2BE9FD0);
    }
    if ( ptr != v73 )
      free(ptr);
    *(_QWORD *)(a1 + 920) = v8;
  }
  return v8;
}
