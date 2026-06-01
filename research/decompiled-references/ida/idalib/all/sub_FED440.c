char __fastcall sub_FED440(_WORD *s2, size_t n, unsigned __int8 *a3, __int64 a4)
{
  __int64 v5; // r14
  bool v8; // zf
  _WORD *v9; // rsi
  char v10; // dl
  unsigned __int8 v11; // di
  unsigned __int8 v12; // al
  bool v13; // al
  int v14; // r12d
  bool v15; // di
  bool v16; // r12
  __int64 (*v17)(); // rax
  __int64 v18; // rax
  void *v19; // rdx
  void *v20; // r11
  void *v21; // rcx
  int v22; // eax
  const void *v23; // rax
  const void *v24; // r11
  void *v25; // rcx
  __int64 v26; // rdx
  void *v27; // rax
  unsigned __int64 v28; // rdx
  size_t v29; // r9
  size_t v30; // r8
  _BYTE *v31; // r11
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // r14d
  char result; // al
  __int64 v37; // r13
  __int64 v38; // rbp
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // r12
  int v42; // eax
  void *v43; // rdi
  int v44; // eax
  int v45; // eax
  _BYTE *v46; // rax
  size_t v47; // rax
  size_t v48; // r9
  unsigned __int64 v49; // r8
  __m128i v50; // xmm1
  size_t v51; // r10
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  size_t v54; // r9
  size_t v55; // rdx
  char *v56; // rax
  char *v57; // r11
  _BYTE *v58; // rcx
  _BYTE *v59; // rdi
  char *v60; // rdi
  void *ptre; // [rsp+8h] [rbp-1A0h]
  void *ptr; // [rsp+8h] [rbp-1A0h]
  void *ptra; // [rsp+8h] [rbp-1A0h]
  _BYTE *ptrb; // [rsp+8h] [rbp-1A0h]
  _BYTE *ptrc; // [rsp+8h] [rbp-1A0h]
  int ptrf; // [rsp+8h] [rbp-1A0h]
  _BYTE *ptrg; // [rsp+8h] [rbp-1A0h]
  char *ptrd; // [rsp+8h] [rbp-1A0h]
  char *ptrh; // [rsp+8h] [rbp-1A0h]
  void *ptri; // [rsp+8h] [rbp-1A0h]
  void *ptrj; // [rsp+8h] [rbp-1A0h]
  void *ptrk; // [rsp+8h] [rbp-1A0h]
  void *ptrl; // [rsp+8h] [rbp-1A0h]
  _BYTE *ptrm; // [rsp+8h] [rbp-1A0h]
  bool v75; // [rsp+17h] [rbp-191h]
  void *s1; // [rsp+18h] [rbp-190h]
  void *s1a; // [rsp+18h] [rbp-190h]
  void *s1c; // [rsp+18h] [rbp-190h]
  _BYTE *s1b; // [rsp+18h] [rbp-190h]
  char *s1d; // [rsp+18h] [rbp-190h]
  void *s1e; // [rsp+18h] [rbp-190h]
  size_t s1f; // [rsp+18h] [rbp-190h]
  void *v83; // [rsp+20h] [rbp-188h]
  size_t v84; // [rsp+20h] [rbp-188h]
  char *v85; // [rsp+20h] [rbp-188h]
  unsigned __int64 v86; // [rsp+20h] [rbp-188h]
  size_t v87; // [rsp+28h] [rbp-180h]
  size_t v88; // [rsp+28h] [rbp-180h]
  _BYTE *v89; // [rsp+30h] [rbp-178h] BYREF
  __m128i si128; // [rsp+38h] [rbp-170h]
  _BYTE v91[136]; // [rsp+48h] [rbp-160h] BYREF
  void *v92; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v93; // [rsp+D8h] [rbp-D0h]
  _BYTE v94[192]; // [rsp+E8h] [rbp-C0h] BYREF

  v5 = a4;
  v8 = n == 6;
  v9 = (_WORD *)a3[13];
  v10 = !v8;
  if ( n == 7 )
  {
    if ( *(_DWORD *)s2 == 1769237601 && s2[2] == 25974 && *((_BYTE *)s2 + 6) == 99 )
    {
      v75 = ((unsigned __int8)v9 & 2) != 0;
      goto LABEL_143;
    }
    goto LABEL_3;
  }
  if ( n == 6 )
  {
    if ( *(_DWORD *)s2 == 1668246626 && s2[2] == 29547 )
    {
      v75 = (a3[20] & 0x40) != 0;
      goto LABEL_143;
    }
LABEL_3:
    v11 = a3[15];
    goto LABEL_4;
  }
  v11 = a3[15];
  if ( n == 10 )
  {
    if ( *(_QWORD *)s2 == 0x6E6974756F726F63LL && s2[4] == 29541 )
    {
      v75 = (v11 & 8) != 0;
      goto LABEL_143;
    }
  }
  else
  {
    a4 = a3[1];
    if ( n == 9 )
    {
      if ( *(_QWORD *)s2 == 0x756C7073756C7063LL && *((_BYTE *)s2 + 8) == 115 )
      {
        v75 = (a4 & 8) != 0;
        goto LABEL_143;
      }
    }
    else if ( n == 11 )
    {
      if ( *(_QWORD *)s2 != 0x756C7073756C7063LL || s2[4] != 12659 || *((_BYTE *)s2 + 10) != 49 )
      {
        if ( *(_QWORD *)s2 == 0x756C7073756C7063LL && s2[4] == 12659 && *((_BYTE *)s2 + 10) == 52 )
        {
          v75 = (a4 & 0x20) != 0;
          goto LABEL_143;
        }
        if ( *(_QWORD *)s2 != 0x756C7073756C7063LL || s2[4] != 12659 || (v14 = 0, *((_BYTE *)s2 + 10) != 55) )
          v14 = 1;
        v12 = a3[2];
        if ( !v14 )
        {
          v75 = (a4 & 0x40) != 0;
          goto LABEL_143;
        }
        LOBYTE(a4) = (unsigned __int8)a4 >> 7;
        if ( *(_QWORD *)s2 == 0x756C7073756C7063LL && s2[4] == 12915 && *((_BYTE *)s2 + 10) == 48 )
          goto LABEL_146;
        a4 = 0x756C7073756C7063LL;
        if ( *(_QWORD *)s2 == 0x756C7073756C7063LL && s2[4] == 12915 && *((_BYTE *)s2 + 10) == 51 )
          goto LABEL_161;
        a4 = 0x756C7073756C7063LL;
        if ( *(_QWORD *)s2 == 0x756C7073756C7063LL && s2[4] == 12915 && *((_BYTE *)s2 + 10) == 54 )
        {
LABEL_160:
          v12 >>= 1;
LABEL_161:
          v13 = v12 & 1;
LABEL_157:
          v75 = v13;
          goto LABEL_143;
        }
        goto LABEL_30;
      }
      v75 = (a4 & 0x10) != 0;
LABEL_143:
      v16 = 1;
      goto LABEL_34;
    }
  }
LABEL_4:
  v12 = a3[2];
  a4 = *a3;
  if ( n == 3 )
  {
    if ( *s2 == 14691 && *((_BYTE *)s2 + 2) == 57 )
    {
      a4 &= 1u;
      v75 = a4;
      goto LABEL_143;
    }
    if ( *s2 == 12643 && *((_BYTE *)s2 + 2) == 49 )
    {
      v12 = *a3;
      goto LABEL_160;
    }
    v13 = (a4 & 4) != 0;
    if ( *s2 == 12643 && *((_BYTE *)s2 + 2) == 55 )
      goto LABEL_157;
    a4 = (a4 & 8) != 0;
    if ( *s2 == 12899 && *((_BYTE *)s2 + 2) == 51 )
    {
LABEL_146:
      v75 = a4;
      goto LABEL_143;
    }
LABEL_33:
    v16 = 0;
LABEL_34:
    v10 |= v16;
    goto LABEL_35;
  }
LABEL_30:
  a4 = a3[14] >> 7;
  if ( n == 12 )
  {
    if ( *(_QWORD *)s2 == 0x6E61747365657266LL && *((_DWORD *)s2 + 2) == 1735289188 )
      goto LABEL_146;
    v15 = (v11 & 4) != 0;
    if ( *(_QWORD *)s2 == 0x6E696C6E69756E67LL && *((_DWORD *)s2 + 2) == 1836278117 )
    {
      v75 = v15;
      goto LABEL_143;
    }
    goto LABEL_33;
  }
  if ( n != 4 )
  {
    if ( n == 8 )
    {
      v16 = 0;
      if ( *(_QWORD *)s2 == 0x6372615F636A626FLL )
      {
        v16 = 1;
        v75 = (a3[107] & 4) != 0;
      }
      goto LABEL_80;
    }
    goto LABEL_33;
  }
  v16 = 0;
  if ( *(_DWORD *)s2 == 1667916399 )
  {
    v16 = 1;
    v75 = (v12 & 4) != 0;
    goto LABEL_80;
  }
LABEL_35:
  if ( v10 )
  {
    if ( n == 3 && !v16 )
    {
      if ( *s2 == 27764 )
      {
        v9 = (_WORD *)v75;
        v16 = *((_BYTE *)s2 + 2) == 115;
        if ( *((_BYTE *)s2 + 2) == 115 )
          v9 = (_WORD *)*(unsigned __int8 *)(v5 + 273);
        v75 = (char)v9;
      }
      goto LABEL_39;
    }
  }
  else if ( *(_DWORD *)s2 == 1852141679 && s2[2] == 27747 )
  {
    v16 = 1;
    v75 = (a3[47] & 0x20) != 0;
    goto LABEL_39;
  }
LABEL_80:
  if ( !v16 && n == 7 && *(_DWORD *)s2 == 1667593850 && s2[2] == 28532 && *((_BYTE *)s2 + 6) == 114 )
  {
    v16 = 1;
    v75 = ((unsigned __int8)v9 & 4) != 0;
  }
LABEL_39:
  v17 = *(__int64 (**)())(*(_QWORD *)v5 + 584LL);
  if ( v17 == sub_A55EE0
    || (v9 = s2, !((unsigned __int8 (__fastcall *)(__int64, _WORD *, size_t, __int64))v17)(v5, s2, n, a4)) )
  {
    s1 = *(void **)(v5 + 360);
    ptre = *(void **)(v5 + 368);
    v18 = sub_22B76B0(v5 + 216);
    v20 = (void *)v18;
    v21 = v19;
    if ( (void *)n == ptre )
    {
      v83 = v19;
      ptr = (void *)v18;
      if ( !n )
        goto LABEL_91;
      v9 = s2;
      v22 = memcmp(s1, s2, n);
      v20 = ptr;
      v21 = v83;
      if ( !v22 )
        goto LABEL_91;
    }
    s1a = v21;
    ptra = v20;
    v23 = (const void *)sub_22B75A0(v5 + 216, v9);
    v24 = ptra;
    v25 = s1a;
    if ( n == v26 )
    {
      if ( !n )
        goto LABEL_91;
      v44 = memcmp(v23, s2, n);
      v24 = ptra;
      v25 = s1a;
      if ( !v44 )
        goto LABEL_91;
    }
    if ( (void *)n == v25 && (!n || !memcmp(v24, s2, n)) )
      goto LABEL_91;
    v27 = (void *)sub_22B77D0(v5 + 216);
    v29 = v28;
    v30 = v28;
    v89 = v91;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v28 > 0x80 )
    {
      s1e = v27;
      ptrj = (void *)v28;
      sub_2236E10(&v89, v91, v28, 1);
      v29 = (size_t)ptrj;
      v27 = s1e;
      v59 = &v89[si128.m128i_i64[0]];
    }
    else
    {
      v31 = v91;
      if ( !v28 )
      {
LABEL_49:
        v32 = *(unsigned int *)(v5 + 260);
        si128.m128i_i64[0] = v30;
        if ( (unsigned int)v32 <= 0x1F
          && (v33 = 4160750114LL, _bittest64(&v33, v32))
          && v30 > 8
          && (v34 = (__int64)&v31[v30 - 9], *(_QWORD *)v34 == 0x6F74616C756D6973LL)
          && *(_BYTE *)(v34 + 8) == 114 )
        {
          if ( n != v30 || (s1c = (void *)v30, ptrg = v31, v45 = memcmp(v31, s2, n), v31 = ptrg, v30 = (size_t)s1c, v45) )
          {
            s1b = v31;
            ptrd = (char *)v30;
            v46 = memchr(v31, 45, v30);
            v31 = s1b;
            if ( v46 )
            {
              v47 = v46 - s1b;
              v48 = v47;
              if ( v47 != -1 )
              {
                v49 = (unsigned __int64)ptrd;
                v50 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
                v51 = (size_t)ptrd;
                v92 = v94;
                if ( v47 <= (unsigned __int64)ptrd )
                  v51 = v47;
                v93 = v50;
                if ( v51 > 0x80 )
                {
                  v85 = ptrd;
                  ptrl = (void *)v51;
                  v87 = v47;
                  sub_2236E10(&v92, v94, v51, 1);
                  v51 = (size_t)ptrl;
                  v31 = s1b;
                  v49 = (unsigned __int64)v85;
                  v48 = v87;
                  v60 = (char *)v92 + v93.m128i_i64[0];
                }
                else
                {
                  if ( !v51 )
                  {
                    v52 = v47 + 1;
                    v53 = 128;
                    v93.m128i_i64[0] = 0;
                    if ( v52 > (unsigned __int64)ptrd )
                    {
                      v56 = &ptrd[(_QWORD)s1b];
                      v54 = 0;
                      v57 = &ptrd[(_QWORD)s1b];
LABEL_128:
                      v58 = v92;
                      if ( v56 != v57 )
                      {
                        ptri = (void *)v54;
                        memcpy((char *)v92 + v51, v56, v54);
                        v58 = v92;
                        v54 = (size_t)ptri;
                        v51 = v93.m128i_i64[0];
                      }
                      v93.m128i_i64[0] = v54 + v51;
                      if ( n != v54 + v51 )
                      {
                        if ( v58 != v94 )
                          free(v58);
                        v31 = v89;
                        goto LABEL_134;
                      }
                      if ( n )
                      {
                        ptrc = v58;
                        v42 = memcmp(v58, s2, n);
                        if ( ptrc != v94 )
                        {
                          v43 = ptrc;
                          ptrf = v42;
                          free(v43);
                          v42 = ptrf;
                        }
                        v31 = v89;
                        if ( v42 )
                          goto LABEL_134;
                      }
                      else
                      {
                        if ( v58 != v94 )
                          free(v58);
                        v31 = v89;
                      }
                      goto LABEL_89;
                    }
                    goto LABEL_123;
                  }
                  v60 = v94;
                }
                v88 = v48;
                v86 = v49;
                s1f = v51;
                ptrm = v31;
                memcpy(v60, v31, v51);
                v49 = v86;
                v51 = v93.m128i_i64[0] + s1f;
                v52 = v88 + 1;
                v53 = v93.m128i_u64[1];
                v31 = ptrm;
                v93.m128i_i64[0] += s1f;
                if ( v88 + 1 > v86 )
                {
                  v55 = v51;
                  v52 = v86;
                  v54 = 0;
LABEL_126:
                  v56 = &v31[v52];
                  v57 = &v31[v49];
                  if ( v53 < v55 )
                  {
                    v84 = v54;
                    s1d = v57;
                    ptrh = v56;
                    sub_2236E10(&v92, v94, v55, 1);
                    v54 = v84;
                    v57 = s1d;
                    v51 = v93.m128i_i64[0];
                    v56 = ptrh;
                  }
                  goto LABEL_128;
                }
LABEL_123:
                if ( v49 < v52 )
                  v49 = v52;
                v54 = v49 - v52;
                v55 = v51 + v49 - v52;
                goto LABEL_126;
              }
            }
LABEL_134:
            if ( v31 != v91 )
              free(v31);
            goto LABEL_58;
          }
        }
        else
        {
          if ( n != v30 )
            goto LABEL_134;
          if ( n )
          {
            ptrb = v31;
            v35 = memcmp(v31, s2, n);
            if ( ptrb != v91 )
              free(ptrb);
            if ( v35 )
            {
LABEL_58:
              if ( !v16 )
                goto LABEL_60;
              goto LABEL_59;
            }
LABEL_91:
            result = 1;
            if ( v16 )
              goto LABEL_59;
            return result;
          }
        }
LABEL_89:
        if ( v31 != v91 )
          free(v31);
        goto LABEL_91;
      }
      v59 = v91;
    }
    ptrk = (void *)v29;
    memcpy(v59, v27, v29);
    v31 = v89;
    v30 = (size_t)ptrk + si128.m128i_i64[0];
    goto LABEL_49;
  }
  result = 1;
  if ( v16 )
  {
LABEL_59:
    result = v75;
    if ( v75 )
      return result;
LABEL_60:
    v37 = *((_QWORD *)a3 + 66);
    v38 = *((_QWORD *)a3 + 65);
    v39 = (v37 - v38) >> 7;
    v40 = (v37 - v38) >> 5;
    if ( v39 > 0 )
    {
      v41 = v38 + (v39 << 7);
      while ( n != *(_QWORD *)(v38 + 8) || n && memcmp(*(const void **)v38, s2, n) )
      {
        if ( n == *(_QWORD *)(v38 + 40) && (!n || !memcmp(*(const void **)(v38 + 32), s2, n)) )
          return v37 != v38 + 32;
        if ( n == *(_QWORD *)(v38 + 72) && (!n || !memcmp(*(const void **)(v38 + 64), s2, n)) )
          return v37 != v38 + 64;
        if ( n == *(_QWORD *)(v38 + 104) && (!n || !memcmp(*(const void **)(v38 + 96), s2, n)) )
          return v37 != v38 + 96;
        v38 += 128;
        if ( v41 == v38 )
        {
          v40 = (v37 - v38) >> 5;
          goto LABEL_163;
        }
      }
      return v37 != v38;
    }
LABEL_163:
    if ( v40 != 2 )
    {
      if ( v40 != 3 )
      {
        if ( v40 != 1 )
          return 0;
        goto LABEL_182;
      }
      if ( n == *(_QWORD *)(v38 + 8) && (!n || !memcmp(*(const void **)v38, s2, n)) )
        return v37 != v38;
      v38 += 32;
    }
    if ( n == *(_QWORD *)(v38 + 8) && (!n || !memcmp(*(const void **)v38, s2, n)) )
      return v37 != v38;
    v38 += 32;
LABEL_182:
    if ( n != *(_QWORD *)(v38 + 8) || n && memcmp(*(const void **)v38, s2, n) )
      return 0;
    return v37 != v38;
  }
  return result;
}
