void __fastcall sub_1012C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // r12
  __int64 v7; // rbx
  _BYTE *v8; // rcx
  _BYTE *v9; // r11
  __int64 i; // r9
  __int64 v11; // rdx
  _BYTE *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rax
  size_t v18; // r15
  size_t v19; // r14
  size_t v20; // rdx
  const void *v21; // rsi
  const void *v22; // rdi
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r12
  _BYTE *v26; // rdi
  __int64 v27; // rax
  size_t v28; // rdx
  size_t v29; // rdx
  __m128i v30; // xmm5
  __m128i v31; // xmm6
  void *v32; // rdx
  __int64 v33; // rax
  size_t v34; // rdx
  void *v35; // rdx
  void *v36; // rax
  __int64 v37; // rax
  size_t v38; // rdx
  _BYTE *v39; // r11
  __int64 v40; // r10
  _BYTE *v41; // r9
  _BYTE *v42; // rcx
  __int64 v43; // r14
  void *v44; // r15
  void *v45; // rdx
  void *v46; // r12
  const void *v47; // rdi
  int v48; // eax
  __int64 v49; // rax
  __m128i v50; // xmm5
  void *v51; // rsi
  _BYTE *v52; // rdi
  size_t v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  void *v56; // rsi
  _BYTE *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rax
  void **v60; // rbp
  void **v61; // rbx
  __int64 v62; // rbp
  _BYTE *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdx
  _BYTE *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  size_t v69; // rdx
  size_t v70; // rdx
  __int64 v71; // rbp
  const __m128i *v72; // rax
  size_t v73; // rdx
  __int64 v74; // [rsp+8h] [rbp-170h] BYREF
  __int64 v75; // [rsp+10h] [rbp-168h]
  __int64 v76; // [rsp+18h] [rbp-160h]
  __int64 v77; // [rsp+20h] [rbp-158h]
  __int64 v78; // [rsp+28h] [rbp-150h]
  __int64 v79; // [rsp+30h] [rbp-148h]
  __int64 v80; // [rsp+38h] [rbp-140h]
  void *s2[2]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v82; // [rsp+50h] [rbp-128h]
  __m128i v83; // [rsp+58h] [rbp-120h] BYREF
  void *src; // [rsp+68h] [rbp-110h]
  size_t n; // [rsp+70h] [rbp-108h]
  __m128i v86; // [rsp+78h] [rbp-100h] BYREF
  __int64 v87; // [rsp+88h] [rbp-F0h]
  void *v88; // [rsp+90h] [rbp-E8h]
  size_t v89; // [rsp+98h] [rbp-E0h]
  __m128i v90; // [rsp+A0h] [rbp-D8h]
  void **v91; // [rsp+B0h] [rbp-C8h]
  __int64 v92; // [rsp+B8h] [rbp-C0h]

  v4 = a4;
  v6 = a2;
  v7 = a1 + (a2 << 8);
  v79 = a3;
  v77 = a2;
  v78 = (a3 - 1) / 2;
  if ( a2 >= v78 )
  {
    v15 = a2;
    goto LABEL_35;
  }
  v80 = a4;
  v8 = (_BYTE *)(v7 + 56);
  v9 = (_BYTE *)(v7 + 96);
  for ( i = v7 + 112; ; i = v7 + 112 )
  {
    v15 = 2 * (v6 + 1);
    v16 = (v6 + 1) << 9;
    v17 = a1 + v16 - 256;
    v7 = a1 + v16;
    v18 = *(_QWORD *)(v7 + 8);
    v19 = *(_QWORD *)(v17 + 8);
    v20 = v19;
    if ( v18 <= v19 )
      v20 = *(_QWORD *)(v7 + 8);
    if ( v20
      && (v21 = *(const void **)v17,
          v22 = *(const void **)v7,
          v76 = (__int64)v9,
          v75 = i,
          v74 = (__int64)v8,
          v23 = memcmp(v22, v21, v20),
          v8 = (_BYTE *)v74,
          i = v75,
          v9 = (_BYTE *)v76,
          v23) )
    {
      if ( v23 < 0 )
        goto LABEL_18;
    }
    else if ( v18 != v19 && v18 < v19 )
    {
LABEL_18:
      v7 = a1 + (--v15 << 8);
    }
    v24 = v7 + 56;
    v25 = a1 + (v6 << 8);
    *(__m128i *)v25 = _mm_loadu_si128((const __m128i *)v7);
    v26 = *(_BYTE **)(v25 + 40);
    *(_QWORD *)(v25 + 16) = *(_QWORD *)(v7 + 16);
    *(__m128i *)(v25 + 24) = _mm_loadu_si128((const __m128i *)(v7 + 24));
    v27 = *(_QWORD *)(v7 + 40);
    if ( v27 == v7 + 56 )
    {
      v28 = *(_QWORD *)(v7 + 48);
      if ( v28 )
      {
        if ( v28 == 1 )
        {
          *v26 = *(_BYTE *)(v7 + 56);
          v28 = *(_QWORD *)(v7 + 48);
          v26 = *(_BYTE **)(v25 + 40);
        }
        else
        {
          v76 = (__int64)v9;
          v75 = i;
          v74 = v7 + 56;
          memcpy(v26, (const void *)(v7 + 56), v28);
          v28 = *(_QWORD *)(v7 + 48);
          v26 = *(_BYTE **)(v25 + 40);
          v9 = (_BYTE *)v76;
          i = v75;
          v24 = v7 + 56;
        }
      }
      *(_QWORD *)(v25 + 48) = v28;
      v26[v28] = 0;
      v26 = *(_BYTE **)(v7 + 40);
    }
    else
    {
      if ( v26 == v8 )
      {
        *(_QWORD *)(v25 + 40) = v27;
        *(_QWORD *)(v25 + 48) = *(_QWORD *)(v7 + 48);
        *(_QWORD *)(v25 + 56) = *(_QWORD *)(v7 + 56);
      }
      else
      {
        *(_QWORD *)(v25 + 40) = v27;
        v11 = *(_QWORD *)(v25 + 56);
        *(_QWORD *)(v25 + 48) = *(_QWORD *)(v7 + 48);
        *(_QWORD *)(v25 + 56) = *(_QWORD *)(v7 + 56);
        if ( v26 )
        {
          *(_QWORD *)(v7 + 40) = v26;
          *(_QWORD *)(v7 + 56) = v11;
          goto LABEL_6;
        }
      }
      *(_QWORD *)(v7 + 40) = v24;
      v26 = (_BYTE *)(v7 + 56);
    }
LABEL_6:
    *(_QWORD *)(v7 + 48) = 0;
    *v26 = 0;
    v12 = *(_BYTE **)(v25 + 80);
    *(_QWORD *)(v25 + 72) = *(_QWORD *)(v7 + 72);
    v13 = *(_QWORD *)(v7 + 80);
    if ( v13 == v7 + 96 )
    {
      v29 = *(_QWORD *)(v7 + 88);
      if ( v29 )
      {
        if ( v29 == 1 )
        {
          *v12 = *(_BYTE *)(v7 + 96);
          v29 = *(_QWORD *)(v7 + 88);
          v12 = *(_BYTE **)(v25 + 80);
        }
        else
        {
          v75 = i;
          v74 = v24;
          memcpy(v12, (const void *)(v7 + 96), v29);
          v29 = *(_QWORD *)(v7 + 88);
          v12 = *(_BYTE **)(v25 + 80);
          i = v75;
          v24 = v74;
        }
      }
      *(_QWORD *)(v25 + 88) = v29;
      v12[v29] = 0;
      v12 = *(_BYTE **)(v7 + 80);
    }
    else
    {
      if ( v12 == v9 )
      {
        *(_QWORD *)(v25 + 80) = v13;
        *(_QWORD *)(v25 + 88) = *(_QWORD *)(v7 + 88);
        *(_QWORD *)(v25 + 96) = *(_QWORD *)(v7 + 96);
      }
      else
      {
        *(_QWORD *)(v25 + 80) = v13;
        v14 = *(_QWORD *)(v25 + 96);
        *(_QWORD *)(v25 + 88) = *(_QWORD *)(v7 + 88);
        *(_QWORD *)(v25 + 96) = *(_QWORD *)(v7 + 96);
        if ( v12 )
        {
          *(_QWORD *)(v7 + 80) = v12;
          *(_QWORD *)(v7 + 96) = v14;
          goto LABEL_10;
        }
      }
      *(_QWORD *)(v7 + 80) = v7 + 96;
      v12 = (_BYTE *)(v7 + 96);
    }
LABEL_10:
    *(_QWORD *)(v7 + 88) = 0;
    v6 = v15;
    *v12 = 0;
    v74 = v24;
    sub_CEFDD0(i, v7 + 112);
    if ( v15 >= v78 )
      break;
    v8 = (_BYTE *)v74;
    v9 = (_BYTE *)(v7 + 96);
  }
  v4 = v80;
LABEL_35:
  if ( (v79 & 1) == 0 && (v79 - 2) / 2 == v15 )
  {
    v71 = v15 + 1;
    v72 = (const __m128i *)(a1 + (v71 << 9) - 256);
    v15 = 2 * v71 - 1;
    *(__m128i *)v7 = _mm_loadu_si128(v72);
    sub_1012A80(v7 + 16, (__int64)v72[1].m128i_i64);
    v7 = a1 + (v15 << 8);
  }
  v30 = _mm_loadu_si128((const __m128i *)v4);
  v31 = _mm_loadu_si128((const __m128i *)(v4 + 24));
  v32 = *(void **)(v4 + 40);
  v82 = *(_QWORD *)(v4 + 16);
  v78 = (__int64)s2;
  src = &v86;
  *(__m128i *)s2 = v30;
  v83 = v31;
  if ( v32 == (void *)(v4 + 56) )
  {
    v86 = _mm_loadu_si128((const __m128i *)(v4 + 56));
  }
  else
  {
    src = v32;
    v86.m128i_i64[0] = *(_QWORD *)(v4 + 56);
  }
  *(_QWORD *)(v4 + 40) = v4 + 56;
  v33 = *(_QWORD *)(v4 + 72);
  v34 = *(_QWORD *)(v4 + 48);
  *(_BYTE *)(v4 + 56) = 0;
  v87 = v33;
  n = v34;
  v35 = *(void **)(v4 + 80);
  v36 = (void *)(v78 + 96);
  *(_QWORD *)(v4 + 48) = 0;
  v88 = v36;
  if ( v35 == (void *)(v4 + 96) )
  {
    v90 = _mm_loadu_si128((const __m128i *)(v4 + 96));
  }
  else
  {
    v88 = v35;
    v90.m128i_i64[0] = *(_QWORD *)(v4 + 96);
  }
  *(_QWORD *)(v4 + 80) = v4 + 96;
  v37 = v78;
  v38 = *(_QWORD *)(v4 + 88);
  *(_BYTE *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  v91 = (void **)(v37 + 128);
  v92 = 0x400000000LL;
  LODWORD(v37) = *(_DWORD *)(v4 + 120);
  v89 = v38;
  if ( (_DWORD)v37 )
    sub_CEFDD0(v78 + 112, v4 + 112);
  v39 = (_BYTE *)(v7 + 56);
  v40 = v7 + 112;
  v41 = (_BYTE *)(v7 + 96);
  v42 = (_BYTE *)(v7 + 56);
  v43 = (v15 - 1) / 2;
  if ( v15 > v77 )
  {
    while ( 2 )
    {
      v44 = s2[1];
      v7 = a1 + (v43 << 8);
      v45 = s2[1];
      v46 = *(void **)(v7 + 8);
      if ( v46 <= s2[1] )
        v45 = *(void **)(v7 + 8);
      if ( v45
        && (v47 = *(const void **)v7,
            v76 = v40,
            v75 = (__int64)v41,
            v74 = (__int64)v42,
            v48 = memcmp(v47, s2[0], (size_t)v45),
            v42 = (_BYTE *)v74,
            v41 = (_BYTE *)v75,
            v40 = v76,
            v48) )
      {
        if ( v48 >= 0 )
          goto LABEL_49;
      }
      else if ( v46 == v44 || v46 >= v44 )
      {
LABEL_49:
        v39 = v42;
        v7 = a1 + (v15 << 8);
        goto LABEL_50;
      }
      v62 = a1 + (v15 << 8);
      *(__m128i *)v62 = _mm_loadu_si128((const __m128i *)v7);
      v63 = *(_BYTE **)(v62 + 40);
      *(_QWORD *)(v62 + 16) = *(_QWORD *)(v7 + 16);
      *(__m128i *)(v62 + 24) = _mm_loadu_si128((const __m128i *)(v7 + 24));
      v64 = *(_QWORD *)(v7 + 40);
      if ( v64 == v7 + 56 )
      {
        v69 = *(_QWORD *)(v7 + 48);
        if ( v69 )
        {
          if ( v69 == 1 )
          {
            *v63 = *(_BYTE *)(v7 + 56);
            v69 = *(_QWORD *)(v7 + 48);
            v63 = *(_BYTE **)(v62 + 40);
          }
          else
          {
            v75 = v40;
            v74 = (__int64)v41;
            memcpy(v63, (const void *)(v7 + 56), v69);
            v69 = *(_QWORD *)(v7 + 48);
            v63 = *(_BYTE **)(v62 + 40);
            v40 = v75;
            v41 = (_BYTE *)v74;
          }
        }
        *(_QWORD *)(v62 + 48) = v69;
        v63[v69] = 0;
        v63 = *(_BYTE **)(v7 + 40);
      }
      else
      {
        if ( v63 == v42 )
        {
          *(_QWORD *)(v62 + 40) = v64;
          *(_QWORD *)(v62 + 48) = *(_QWORD *)(v7 + 48);
          *(_QWORD *)(v62 + 56) = *(_QWORD *)(v7 + 56);
        }
        else
        {
          *(_QWORD *)(v62 + 40) = v64;
          v65 = *(_QWORD *)(v62 + 56);
          *(_QWORD *)(v62 + 48) = *(_QWORD *)(v7 + 48);
          *(_QWORD *)(v62 + 56) = *(_QWORD *)(v7 + 56);
          if ( v63 )
          {
            *(_QWORD *)(v7 + 40) = v63;
            *(_QWORD *)(v7 + 56) = v65;
            goto LABEL_74;
          }
        }
        *(_QWORD *)(v7 + 40) = v7 + 56;
        v63 = (_BYTE *)(v7 + 56);
      }
LABEL_74:
      *(_QWORD *)(v7 + 48) = 0;
      *v63 = 0;
      v66 = *(_BYTE **)(v62 + 80);
      *(_QWORD *)(v62 + 72) = *(_QWORD *)(v7 + 72);
      v67 = *(_QWORD *)(v7 + 80);
      if ( v67 == v7 + 96 )
      {
        v70 = *(_QWORD *)(v7 + 88);
        if ( v70 )
        {
          if ( v70 == 1 )
          {
            *v66 = *(_BYTE *)(v7 + 96);
            v70 = *(_QWORD *)(v7 + 88);
            v66 = *(_BYTE **)(v62 + 80);
          }
          else
          {
            v74 = v40;
            memcpy(v66, (const void *)(v7 + 96), v70);
            v70 = *(_QWORD *)(v7 + 88);
            v66 = *(_BYTE **)(v62 + 80);
            v40 = v74;
          }
        }
        *(_QWORD *)(v62 + 88) = v70;
        v66[v70] = 0;
        v66 = *(_BYTE **)(v7 + 80);
        goto LABEL_78;
      }
      if ( v66 == v41 )
      {
        *(_QWORD *)(v62 + 80) = v67;
        *(_QWORD *)(v62 + 88) = *(_QWORD *)(v7 + 88);
        *(_QWORD *)(v62 + 96) = *(_QWORD *)(v7 + 96);
      }
      else
      {
        *(_QWORD *)(v62 + 80) = v67;
        v68 = *(_QWORD *)(v62 + 96);
        *(_QWORD *)(v62 + 88) = *(_QWORD *)(v7 + 88);
        *(_QWORD *)(v62 + 96) = *(_QWORD *)(v7 + 96);
        if ( v66 )
        {
          *(_QWORD *)(v7 + 80) = v66;
          *(_QWORD *)(v7 + 96) = v68;
LABEL_78:
          *(_QWORD *)(v7 + 88) = 0;
          v15 = v43;
          *v66 = 0;
          v74 = v7 + 112;
          sub_CEFDD0(v40, v7 + 112);
          if ( v77 >= v43 )
          {
            v40 = v74;
            v39 = (_BYTE *)(v7 + 56);
            v41 = (_BYTE *)(v7 + 96);
            goto LABEL_50;
          }
          v42 = (_BYTE *)(v7 + 56);
          v41 = (_BYTE *)(v7 + 96);
          v40 = v74;
          v43 = (v43 - 1) / 2;
          continue;
        }
      }
      break;
    }
    *(_QWORD *)(v7 + 80) = v7 + 96;
    v66 = (_BYTE *)(v7 + 96);
    goto LABEL_78;
  }
LABEL_50:
  v49 = v82;
  v50 = _mm_loadu_si128(&v83);
  v51 = src;
  v52 = *(_BYTE **)(v7 + 40);
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)s2);
  v53 = n;
  *(_QWORD *)(v7 + 16) = v49;
  v54 = v78;
  *(__m128i *)(v7 + 24) = v50;
  if ( v51 == (void *)(v54 + 56) )
  {
    if ( v53 )
    {
      if ( v53 == 1 )
      {
        *v52 = v86.m128i_i8[0];
        v53 = n;
        v52 = *(_BYTE **)(v7 + 40);
      }
      else
      {
        v75 = v40;
        v74 = (__int64)v41;
        memcpy(v52, v51, v53);
        v53 = n;
        v52 = *(_BYTE **)(v7 + 40);
        v40 = v75;
        v41 = (_BYTE *)v74;
      }
    }
    *(_QWORD *)(v7 + 48) = v53;
    v52[v53] = 0;
    v52 = src;
  }
  else
  {
    if ( v52 == v39 )
    {
      v74 = v86.m128i_i64[0];
      *(_QWORD *)(v7 + 40) = v51;
      *(__m128 *)(v7 + 48) = _mm_loadh_ps((const double *)&v74);
    }
    else
    {
      v74 = v86.m128i_i64[0];
      v55 = *(_QWORD *)(v7 + 56);
      *(_QWORD *)(v7 + 40) = v51;
      *(__m128 *)(v7 + 48) = _mm_loadh_ps((const double *)&v74);
      if ( v52 )
      {
        src = v52;
        v86.m128i_i64[0] = v55;
        goto LABEL_54;
      }
    }
    v52 = (_BYTE *)(v78 + 56);
    src = (void *)(v78 + 56);
  }
LABEL_54:
  n = 0;
  *v52 = 0;
  v56 = v88;
  v57 = *(_BYTE **)(v7 + 80);
  *(_QWORD *)(v7 + 72) = v87;
  if ( v56 == (void *)(v78 + 96) )
  {
    v73 = v89;
    if ( v89 )
    {
      if ( v89 == 1 )
      {
        *v57 = v90.m128i_i8[0];
        v73 = v89;
        v57 = *(_BYTE **)(v7 + 80);
      }
      else
      {
        v74 = v40;
        memcpy(v57, v56, v89);
        v57 = *(_BYTE **)(v7 + 80);
        v40 = v74;
        v73 = v89;
      }
    }
    *(_QWORD *)(v7 + 88) = v73;
    v57[v73] = 0;
    v57 = v88;
  }
  else
  {
    if ( v57 == v41 )
    {
      v74 = v90.m128i_i64[0];
      *(_QWORD *)(v7 + 80) = v56;
      *(__m128 *)(v7 + 88) = _mm_loadh_ps((const double *)&v74);
    }
    else
    {
      v74 = v90.m128i_i64[0];
      v58 = *(_QWORD *)(v7 + 96);
      *(_QWORD *)(v7 + 80) = v56;
      *(__m128 *)(v7 + 88) = _mm_loadh_ps((const double *)&v74);
      if ( v57 )
      {
        v88 = v57;
        v90.m128i_i64[0] = v58;
        goto LABEL_58;
      }
    }
    v57 = (_BYTE *)(v78 + 96);
    v88 = (void *)(v78 + 96);
  }
LABEL_58:
  v89 = 0;
  v59 = v78;
  *v57 = 0;
  sub_CEFDD0(v40, v59 + 112);
  v60 = v91;
  v61 = &v91[4 * (unsigned int)v92];
  if ( v91 != v61 )
  {
    do
    {
      while ( 1 )
      {
        v61 -= 4;
        if ( *v61 == v61 + 2 )
          break;
        operator delete(*v61);
        if ( v60 == v61 )
          goto LABEL_61;
      }
    }
    while ( v60 != v61 );
LABEL_61:
    v61 = v91;
  }
  if ( v61 != (void **)(v78 + 128) )
    free(v61);
  if ( v88 != (void *)(v78 + 96) )
    operator delete(v88);
  if ( src != (void *)(v78 + 56) )
    operator delete(src);
}
