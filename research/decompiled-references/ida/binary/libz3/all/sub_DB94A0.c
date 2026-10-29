void __fastcall sub_DB94A0(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // rax
  __int64 *v9; // r11
  _QWORD *v10; // r10
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 *v13; // rbx
  __int64 v14; // r15
  __int64 *v15; // rbp
  __int64 *v16; // rbp
  __int64 *v17; // r14
  __int64 *v18; // r15
  size_t v19; // r15
  signed __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // r15
  __int64 *v25; // r13
  signed __int64 v26; // r8
  size_t v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rbx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rsi
  __m128i v35; // xmm0
  unsigned __int64 v36; // rdx
  __int64 *v37; // rdi
  __int64 *v38; // rdx
  __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  _QWORD *v42; // r9
  __int64 v43; // r11
  __int64 v44; // rdx
  _QWORD *v45; // rdi
  __int64 v46; // rsi
  char *v47; // rbx
  __int64 v48; // rdx
  __m128i v49; // xmm0
  unsigned __int64 v50; // rdx
  __int64 *v51; // rcx
  __int64 *v52; // rdx
  __int64 v53; // rsi
  __int64 i; // rdx
  __int64 v55; // rsi
  _QWORD *v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // r10
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __m128i v63; // xmm0
  unsigned __int64 v64; // rax
  __int64 *v65; // rdx
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  size_t v70; // r8
  signed __int64 v71; // rdx
  size_t v72; // rcx
  __int64 v73; // rax
  __int64 *v74; // rax
  __int64 *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // [rsp+8h] [rbp-A0h]
  size_t n; // [rsp+10h] [rbp-98h]
  size_t na; // [rsp+10h] [rbp-98h]
  size_t nb; // [rsp+10h] [rbp-98h]
  size_t nc; // [rsp+10h] [rbp-98h]
  size_t nd; // [rsp+10h] [rbp-98h]
  size_t ne; // [rsp+10h] [rbp-98h]
  __int64 *v85; // [rsp+18h] [rbp-90h]
  __int64 *src; // [rsp+28h] [rbp-80h]
  void *srca; // [rsp+28h] [rbp-80h]
  __int64 v88; // [rsp+30h] [rbp-78h]
  __int64 v89; // [rsp+30h] [rbp-78h]
  __int64 v90; // [rsp+38h] [rbp-70h]
  size_t v93; // [rsp+58h] [rbp-50h]
  _QWORD *v94[8]; // [rsp+68h] [rbp-40h] BYREF

  v8 = a5;
  v9 = a6;
  v85 = a1;
  if ( a4 <= a5 )
    v8 = a4;
  v10 = a8;
  v78 = a5;
  if ( a7 >= v8 )
  {
    v18 = a1;
    v17 = a2;
    goto LABEL_36;
  }
  v11 = a5;
  v12 = a4;
  src = a2;
  if ( a4 > a5 )
    goto LABEL_5;
  while ( 2 )
  {
    v89 = v12;
    v22 = v11 / 2;
    v23 = v85;
    v17 = &src[v22];
    v90 = v22;
    v24 = src - v85;
    nb = *v17;
    v94[0] = a8;
    while ( v24 > 0 )
    {
      while ( 1 )
      {
        v25 = &v23[v24 >> 1];
        if ( sub_DB0E50(v94, nb, *v25) )
          break;
        v23 = v25 + 1;
        v24 = v24 - (v24 >> 1) - 1;
        if ( v24 <= 0 )
          goto LABEL_26;
      }
      v24 >>= 1;
    }
LABEL_26:
    v12 = v89;
    v16 = v23;
    v88 = v23 - v85;
LABEL_10:
    v12 -= v88;
    if ( v12 > v90 && v90 <= a7 )
    {
      v18 = v16;
      if ( !v90 )
        goto LABEL_18;
      v19 = (char *)v17 - (char *)src;
      v20 = (char *)src - (char *)v16;
      if ( (char *)v17 - (char *)src > 8 )
      {
        na = (char *)src - (char *)v16;
        memmove(a6, src, (char *)v17 - (char *)src);
        if ( (char *)src - (char *)v16 <= 8 )
        {
          if ( na == 8 )
            *(v17 - 1) = *v16;
        }
        else
        {
          memmove((char *)v17 - na, v16, na);
        }
        memmove(v16, a6, v19);
        goto LABEL_17;
      }
      if ( (char *)v17 - (char *)src != 8 )
      {
        if ( v20 <= 8 )
        {
          if ( v20 == 8 )
            *(v17 - 1) = *v16;
        }
        else
        {
          memmove((char *)v17 - v20, v16, (char *)src - (char *)v16);
        }
        goto LABEL_17;
      }
      v68 = *src;
      *a6 = *src;
      if ( v20 <= 8 )
      {
        if ( v20 != 8 )
          goto LABEL_91;
        *(v17 - 1) = *v16;
      }
      else
      {
        memmove((char *)v17 - v20, v16, v20);
      }
      v68 = *a6;
LABEL_91:
      *v16 = v68;
LABEL_17:
      v18 = (__int64 *)((char *)v16 + v19);
      goto LABEL_18;
    }
    if ( v12 <= a7 )
    {
      v18 = v17;
      if ( !v12 )
        goto LABEL_18;
      v26 = (char *)v17 - (char *)src;
      v18 = (__int64 *)((char *)v17 - ((char *)src - (char *)v16));
      if ( (char *)src - (char *)v16 > 8 )
      {
        v93 = (char *)v17 - (char *)src;
        memmove(a6, v16, (char *)src - (char *)v16);
        v27 = (char *)src - (char *)v16;
        if ( (char *)v17 - (char *)src <= 8 )
        {
          if ( v93 == 8 )
            *v16 = *src;
        }
        else
        {
          memmove(v16, src, v93);
          v27 = (char *)src - (char *)v16;
        }
        memmove(v18, a6, v27);
        goto LABEL_18;
      }
      if ( (char *)src - (char *)v16 != 8 )
      {
        if ( v26 <= 8 )
        {
          if ( v26 == 8 )
            *v16 = *src;
        }
        else
        {
          memmove(v16, src, (char *)v17 - (char *)src);
        }
        goto LABEL_18;
      }
      v73 = *v16;
      *a6 = *v16;
      if ( v26 <= 8 )
      {
        if ( v26 != 8 )
          goto LABEL_107;
        *v16 = *src;
      }
      else
      {
        memmove(v16, src, v26);
      }
      v73 = *a6;
LABEL_107:
      *(v17 - 1) = v73;
      goto LABEL_18;
    }
    if ( v16 == src )
    {
      v18 = v17;
      goto LABEL_18;
    }
    if ( v17 == src )
    {
      v18 = v16;
      goto LABEL_18;
    }
    v28 = src - v16;
    v29 = v17 - v16;
    if ( v28 == v29 - v28 )
    {
      v60 = (char *)(src - 1) - (char *)v16;
      if ( v60 <= 8 || (unsigned __int64)((char *)v16 + 15 - (char *)src) <= 0x1E )
      {
        v74 = src;
        v75 = v16;
        do
        {
          v76 = *v75;
          v77 = *v74++;
          *v75++ = v77;
          *(v74 - 1) = v76;
        }
        while ( v74 != (__int64 *)((char *)src + (char *)src - (char *)v16) );
      }
      else
      {
        v61 = 0;
        v62 = (v60 >> 3) + 1;
        do
        {
          v63 = _mm_loadu_si128((const __m128i *)&v16[v61]);
          *(__m128i *)&v16[v61] = _mm_loadu_si128((const __m128i *)&src[v61]);
          *(__m128i *)&src[v61] = v63;
          v61 += 2;
        }
        while ( 2 * (v62 >> 1) != v61 );
        if ( (v62 & 1) != 0 )
        {
          v64 = v62 & 0xFFFFFFFFFFFFFFFELL;
          v65 = &src[v64];
          v66 = &v16[v64];
          v67 = *v66;
          *v66 = *v65;
          *v65 = v67;
        }
      }
      v18 = src;
      goto LABEL_18;
    }
    v30 = v16;
    v18 = (__int64 *)((char *)v16 + (char *)v17 - (char *)src);
    while ( 1 )
    {
      v31 = v29 - v28;
      if ( v28 < (__int64)(v29 - v28) )
        break;
LABEL_54:
      v41 = 8 * v29;
      v42 = &v30[v29];
      if ( v31 == 1 )
      {
        v72 = v30[(unsigned __int64)v41 / 8 - 1];
        if ( v41 - 8 <= 8 )
        {
          if ( v41 == 16 )
            *(v42 - 1) = *v30;
        }
        else
        {
          ne = v30[(unsigned __int64)v41 / 8 - 1];
          memmove(v30 + 1, v30, v41 - 8);
          v72 = ne;
        }
        *v30 = v72;
        goto LABEL_18;
      }
      v43 = 8 * v28;
      nc = (size_t)&v30[v28];
      if ( v28 > 0 )
      {
        if ( (unsigned __int64)(v28 - 1) <= 1 )
        {
          v56 = &v30[v28];
          v57 = 0;
        }
        else
        {
          v44 = v41 - 16;
          if ( v41 <= v43 - 16 || v43 <= v44 )
          {
            v45 = &v30[(unsigned __int64)v43 / 8 - 2];
            v46 = 0;
            v47 = (char *)v30 + v44;
            v48 = 0;
            do
            {
              v49 = _mm_loadu_si128((const __m128i *)&v45[v48]);
              ++v46;
              *(__m128i *)&v45[v48] = _mm_loadu_si128((const __m128i *)&v47[v48 * 8]);
              *(__m128i *)&v47[v48 * 8] = v49;
              v48 -= 2;
            }
            while ( v46 != (unsigned __int64)v28 >> 1 );
            if ( (v28 & 1) != 0 )
            {
              v50 = -8LL * (v28 & 0xFFFFFFFFFFFFFFFELL) - 8;
              v51 = (__int64 *)(nc + v50);
              v52 = (_QWORD *)((char *)v42 + v50);
              v53 = *v51;
              *v51 = *v52;
              *v52 = v53;
            }
            goto LABEL_63;
          }
          v56 = &v30[v28];
          v57 = 0;
        }
        do
        {
          v58 = *(v56 - 1);
          v59 = *(v42 - 1);
          ++v57;
          --v56;
          --v42;
          *v56 = v59;
          *v42 = v58;
        }
        while ( v28 != v57 );
LABEL_63:
        v30 = (_QWORD *)(nc - v43);
        goto LABEL_64;
      }
      v30 += v28;
LABEL_64:
      v28 = v29 % v31;
      if ( !(v29 % v31) )
        goto LABEL_18;
      v29 = v31;
    }
    while ( v28 != 1 )
    {
      v32 = (unsigned __int64)&v30[v28];
      if ( (__int64)v31 > 0 )
      {
        if ( v31 - 1 <= 1 || v32 < (unsigned __int64)(v30 + 2) && 8 * v28 + 16 > 0 )
        {
          for ( i = 0; i != v31; ++i )
          {
            v55 = v30[i];
            v30[i] = *(_QWORD *)(v32 + 8 * i);
            *(_QWORD *)(v32 + 8 * i) = v55;
          }
        }
        else
        {
          v33 = 0;
          v34 = 0;
          do
          {
            v35 = _mm_loadu_si128((const __m128i *)&v30[v33]);
            ++v34;
            *(__m128i *)&v30[v33] = _mm_loadu_si128((const __m128i *)(v32 + v33 * 8));
            *(__m128i *)(v32 + v33 * 8) = v35;
            v33 += 2;
          }
          while ( v31 >> 1 != v34 );
          if ( (v31 & 1) != 0 )
          {
            v36 = v31 & 0xFFFFFFFFFFFFFFFELL;
            v37 = (__int64 *)(v36 * 8 + v32);
            v38 = &v30[v36];
            v39 = *v38;
            *v38 = *v37;
            *v37 = v39;
          }
        }
        v30 += v31;
      }
      v40 = v29 % v28;
      if ( !(v29 % v28) )
        goto LABEL_18;
      v29 = v28;
      v28 -= v40;
      v31 = v29 - v28;
      if ( v28 >= (__int64)(v29 - v28) )
        goto LABEL_54;
    }
    v69 = 8 * v29;
    v70 = *v30;
    v71 = 8 * v29 - 8;
    if ( v71 <= 8 )
    {
      if ( 8 * v29 == 16 )
        *v30 = v30[1];
    }
    else
    {
      srca = (void *)(8 * v29);
      nd = *v30;
      memmove(v30, v30 + 1, v71);
      v70 = nd;
      v69 = (__int64)srca;
    }
    *(_QWORD *)((char *)v30 + v69 - 8) = v70;
LABEL_18:
    sub_DB94A0((_DWORD)v85, (_DWORD)v16, (_DWORD)v18, v88, v90, (_DWORD)a6, a7, (__int64)a8);
    v78 -= v90;
    v21 = v78;
    if ( v12 <= v78 )
      v21 = v12;
    if ( a7 < v21 )
    {
      v11 = v78;
      src = v17;
      v85 = v18;
      if ( v12 <= v78 )
        continue;
LABEL_5:
      v13 = src;
      v88 = v12 / 2;
      n = v85[v12 / 2];
      v14 = a3 - src;
      v94[0] = a8;
      while ( v14 > 0 )
      {
        while ( 1 )
        {
          v15 = &v13[v14 >> 1];
          if ( !sub_DB0E50(v94, *v15, n) )
            break;
          v13 = v15 + 1;
          v14 = v14 - (v14 >> 1) - 1;
          if ( v14 <= 0 )
            goto LABEL_9;
        }
        v14 >>= 1;
      }
LABEL_9:
      v16 = &v85[v12 / 2];
      v17 = v13;
      v90 = v13 - src;
      goto LABEL_10;
    }
    break;
  }
  v10 = a8;
  v9 = a6;
  a4 = v12;
LABEL_36:
  sub_DB8A80(v18, v17, a3, a4, v78, v9, v10);
}

