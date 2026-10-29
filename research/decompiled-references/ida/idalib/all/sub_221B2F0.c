__int64 __fastcall sub_221B2F0(char *src, size_t n, char *a3)
{
  size_t v4; // rbp
  char *v6; // rax
  char *v7; // r12
  size_t v8; // r12
  char *v9; // rdi
  char *v10; // rsi
  unsigned int v11; // r14d
  size_t v12; // r8
  size_t v13; // r8
  char *v14; // rbx
  __int64 v15; // rax
  char *v16; // rbp
  size_t v17; // r12
  _BYTE *v18; // rax
  char *v19; // rbx
  char *v20; // rcx
  size_t v21; // rbx
  unsigned __int8 v22; // al
  size_t v23; // r9
  size_t v24; // r8
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rax
  unsigned int v29; // ecx
  __m128i *v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  _BYTE *v33; // rdi
  _BYTE *v34; // rax
  __int64 v36; // rax
  size_t v37; // r8
  __m128i *v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rax
  void *v41; // rdi
  __int64 v42; // rax
  __m128i *v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rax
  _BYTE *v46; // rdi
  _BYTE *v47; // rax
  _BYTE *v48; // rax
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __m128i si128; // xmm0
  __int64 v52; // rax
  __int64 v53; // rax
  size_t v54; // r9
  __m128i *v55; // rcx
  __int64 v56; // rax
  _DWORD *v57; // rcx
  size_t v58; // rsi
  __int64 v59; // rax
  _BYTE *v60; // rdx
  __int64 v61; // rax
  size_t v62; // r9
  signed __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 v65; // rax
  size_t v66; // r9
  size_t v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rax
  size_t v70; // rcx
  size_t v71; // r9
  _DWORD *v72; // rsi
  size_t v73; // rcx
  _BYTE *v74; // rdx
  __m128i v75; // xmm0
  unsigned __int8 na; // [rsp+0h] [rbp-68h]
  unsigned __int8 nh; // [rsp+0h] [rbp-68h]
  size_t nb; // [rsp+0h] [rbp-68h]
  size_t ni; // [rsp+0h] [rbp-68h]
  unsigned __int8 nj; // [rsp+0h] [rbp-68h]
  unsigned __int8 ng; // [rsp+0h] [rbp-68h]
  size_t nc; // [rsp+0h] [rbp-68h]
  size_t nd; // [rsp+0h] [rbp-68h]
  size_t ne; // [rsp+0h] [rbp-68h]
  size_t nk; // [rsp+0h] [rbp-68h]
  size_t nl; // [rsp+0h] [rbp-68h]
  size_t nf; // [rsp+0h] [rbp-68h]
  signed __int64 v88; // [rsp+8h] [rbp-60h] BYREF
  __m128i v89; // [rsp+10h] [rbp-58h] BYREF
  signed __int64 v90; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v91[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = n;
  if ( !n )
    goto LABEL_33;
LABEL_2:
  if ( (unsigned __int8)(*src - 48) <= 9u )
  {
    v6 = src;
    do
    {
      v7 = v6++;
      if ( v6 == &src[v4] )
      {
        v8 = v4;
        goto LABEL_8;
      }
    }
    while ( (unsigned __int8)(*v6 - 48) <= 9u );
    v8 = v7 - (src - 1);
    if ( v8 > v4 )
      v8 = v4;
    goto LABEL_8;
  }
  while ( 1 )
  {
LABEL_33:
    v8 = 0;
LABEL_8:
    v9 = src;
    v10 = (char *)v8;
    v11 = sub_2247A50(src, v8, 10, &v90);
    if ( (_BYTE)v11 )
    {
      v42 = sub_227D6D0(src, v8);
      v43 = *(__m128i **)(v42 + 32);
      v44 = v42;
      if ( *(_QWORD *)(v42 + 24) - (_QWORD)v43 > 0x18u )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AB9C0);
        v43[1].m128i_i8[8] = 32;
        v43[1].m128i_i64[0] = 0x3A20746120746E69LL;
        *v43 = si128;
        v46 = (_BYTE *)(*(_QWORD *)(v42 + 32) + 25LL);
        *(_QWORD *)(v42 + 32) = v46;
      }
      else
      {
        v45 = sub_227BF10(v42, "Failed to parse int at : ", 25);
        v46 = *(_BYTE **)(v45 + 32);
        v44 = v45;
      }
      v47 = *(_BYTE **)(v44 + 24);
      if ( v47 - v46 < v4 )
      {
        v44 = sub_227BF10(v44, src, v4);
        v46 = *(_BYTE **)(v44 + 32);
        if ( v46 == *(_BYTE **)(v44 + 24) )
        {
LABEL_55:
          sub_227BF10(v44, "\n", 1);
          return v11;
        }
      }
      else
      {
        if ( v4 )
        {
          memcpy(v46, src, v4);
          v47 = *(_BYTE **)(v44 + 24);
          v46 = (_BYTE *)(v4 + *(_QWORD *)(v44 + 32));
          *(_QWORD *)(v44 + 32) = v46;
        }
        if ( v46 == v47 )
          goto LABEL_55;
      }
      *v46 = 10;
      ++*(_QWORD *)(v44 + 32);
      return v11;
    }
    v12 = 0;
    if ( v8 <= v4 )
    {
      v13 = v4;
      v4 = v8;
      v12 = v13 - v8;
    }
    v14 = &src[v4];
    if ( v90 == -1 )
      return 1;
    v15 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v15 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a3 + 16 * ((unsigned int)v15 - 1LL) + 8) >= v90 )
        break;
    }
    if ( !v12 || *v14 != 45 )
    {
      v88 = v90;
      v25 = v15 + 1;
      v27 = _mm_loadl_epi64((const __m128i *)&v88);
      v26 = _mm_unpacklo_epi64(v27, v27);
      if ( v15 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
        goto LABEL_28;
      goto LABEL_30;
    }
    v16 = v14 + 1;
    v17 = v12 - 1;
    if ( v12 == 1 || (unsigned __int8)(v14[1] - 48) > 9u )
    {
      v21 = 0;
    }
    else
    {
      v18 = v14 + 2;
      v19 = &v14[v12];
      if ( v18 == v19 )
      {
LABEL_21:
        v21 = v12 - 1;
      }
      else
      {
        while ( 1 )
        {
          v20 = v18 + 1;
          if ( (unsigned __int8)(*v18 - 48) > 9u )
            break;
          ++v18;
          if ( v20 == v19 )
            goto LABEL_21;
        }
        v48 = (_BYTE *)(v18 - v19);
        v21 = (size_t)&v48[v17];
        if ( (unsigned __int64)&v48[v17] > v17 )
          v21 = v12 - 1;
      }
    }
    v9 = v16;
    v10 = (char *)v21;
    v88 = v90;
    v22 = sub_2247A50(v16, v21, 10, v91);
    v23 = v88;
    if ( v22 )
    {
      na = v22;
      v28 = sub_227D6D0(v16, v21);
      v29 = na;
      v30 = *(__m128i **)(v28 + 32);
      v31 = v28;
      if ( *(_QWORD *)(v28 + 24) - (_QWORD)v30 > 0x18u )
      {
        v49 = _mm_load_si128((const __m128i *)&xmmword_23AB9C0);
        v30[1].m128i_i8[8] = 32;
        v30[1].m128i_i64[0] = 0x3A20746120746E69LL;
        *v30 = v49;
        v33 = (_BYTE *)(*(_QWORD *)(v28 + 32) + 25LL);
        *(_QWORD *)(v28 + 32) = v33;
      }
      else
      {
        v32 = sub_227BF10(v28, "Failed to parse int at : ", 25);
        v29 = na;
        v33 = *(_BYTE **)(v32 + 32);
        v31 = v32;
      }
      v34 = *(_BYTE **)(v31 + 24);
      if ( v17 > v34 - v33 )
      {
        nj = v29;
        v52 = sub_227BF10(v31, v16, v17);
        v29 = nj;
        v31 = v52;
        v33 = *(_BYTE **)(v52 + 32);
        if ( v33 == *(_BYTE **)(v52 + 24) )
          goto LABEL_41;
      }
      else
      {
        if ( v17 )
        {
          ng = v29;
          memcpy(v33, v16, v17);
          v34 = *(_BYTE **)(v31 + 24);
          v29 = ng;
          v33 = (_BYTE *)(v17 + *(_QWORD *)(v31 + 32));
          *(_QWORD *)(v31 + 32) = v33;
        }
        if ( v33 == v34 )
        {
LABEL_41:
          nh = v29;
          sub_227BF10(v31, "\n", 1);
          return nh;
        }
      }
      *v33 = 10;
      ++*(_QWORD *)(v31 + 32);
      return v29;
    }
    v12 = 0;
    if ( v17 >= v21 )
    {
      v24 = v17;
      v17 = v21;
      v12 = v24 - v21;
    }
    v14 = &v16[v17];
    if ( v91[0] == -1 )
      return 1;
    if ( v88 >= v91[0] )
    {
      v88 = v91[0];
      nd = v23;
      v61 = sub_227D6D0(v16, v10);
      v62 = nd;
      v63 = v88;
      v64 = *(_QWORD *)(v61 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v61 + 24) - v64) > 8 )
      {
        *(_BYTE *)(v64 + 8) = 32;
        *(_QWORD *)v64 = 0x6465746365707845LL;
        *(_QWORD *)(v61 + 32) += 9LL;
      }
      else
      {
        v61 = sub_227BF10(v61, "Expected ", 9);
        v62 = nd;
        v63 = v88;
      }
      v88 = v63;
      ne = v62;
      v65 = sub_227B930(v61, v62);
      v66 = ne;
      v67 = v88;
      v68 = *(_QWORD *)(v65 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v65 + 24) - v68) > 2 )
      {
        *(_BYTE *)(v68 + 2) = 32;
        *(_WORD *)v68 = 15392;
        *(_QWORD *)(v65 + 32) += 3LL;
      }
      else
      {
        v65 = sub_227BF10(v65, " < ", 3);
        v66 = ne;
        v67 = v88;
      }
      v88 = v66;
      nk = v67;
      v69 = sub_227B930(v65, v67);
      v70 = nk;
      v71 = v88;
      v72 = *(_DWORD **)(v69 + 32);
      if ( *(_QWORD *)(v69 + 24) - (_QWORD)v72 > 3u )
      {
        *v72 = 544106784;
        *(_QWORD *)(v69 + 32) += 4LL;
      }
      else
      {
        nl = v88;
        v88 = v70;
        v69 = sub_227BF10(v69, " in ", 4);
        v71 = nl;
        v70 = v88;
      }
      nf = v70;
      v56 = sub_227B930(v69, v71);
      v73 = nf;
      v74 = *(_BYTE **)(v56 + 32);
      if ( *(_BYTE **)(v56 + 24) == v74 )
      {
        v56 = sub_227BF10(v56, "-", 1);
        v73 = nf;
      }
      else
      {
        *v74 = 45;
        ++*(_QWORD *)(v56 + 32);
      }
      v58 = v73;
      goto LABEL_73;
    }
    v15 = *((unsigned int *)a3 + 2);
    v88 = v91[0];
    v25 = v15 + 1;
    v26 = (__m128i)_mm_loadh_ps((const double *)&v88);
    if ( v15 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
    {
LABEL_28:
      v10 = a3 + 16;
      v9 = a3;
      v89 = v26;
      v88 = v12;
      sub_2237220(a3, a3 + 16, v25, 16);
      v15 = *((unsigned int *)a3 + 2);
      v26 = _mm_load_si128(&v89);
      v12 = v88;
    }
LABEL_30:
    *(__m128i *)(*(_QWORD *)a3 + 16 * v15) = v26;
    ++*((_DWORD *)a3 + 2);
    if ( !v12 )
      return v11;
    if ( *v14 != 58 )
    {
      nb = v12;
      v36 = sub_227D6D0(v9, v10);
      v37 = nb;
      v38 = *(__m128i **)(v36 + 32);
      v39 = v36;
      if ( *(_QWORD *)(v36 + 24) - (_QWORD)v38 > 0x14u )
      {
        v50 = _mm_load_si128((const __m128i *)&xmmword_23AB9C0);
        v38[1].m128i_i32[0] = 975205473;
        v38[1].m128i_i8[4] = 32;
        *v38 = v50;
        v41 = (void *)(*(_QWORD *)(v36 + 32) + 21LL);
        *(_QWORD *)(v36 + 32) = v41;
      }
      else
      {
        v40 = sub_227BF10(v36, "Failed to parse at : ", 21);
        v37 = nb;
        v41 = *(void **)(v40 + 32);
        v39 = v40;
      }
      if ( v37 > *(_QWORD *)(v39 + 24) - (_QWORD)v41 )
      {
        sub_227BF10(v39, v14, v37);
      }
      else
      {
        ni = v37;
        memcpy(v41, v14, v37);
        *(_QWORD *)(v39 + 32) += ni;
      }
      return 1;
    }
    v4 = v12 - 1;
    src = v14 + 1;
    if ( v12 != 1 )
      goto LABEL_2;
  }
  nc = v90;
  v53 = sub_227D6D0(v9, v8);
  v54 = nc;
  v55 = *(__m128i **)(v53 + 32);
  if ( *(_QWORD *)(v53 + 24) - (_QWORD)v55 > 0x29u )
  {
    v75 = _mm_load_si128((const __m128i *)&xmmword_23AB9D0);
    qmemcpy(&v55[2], "ing order ", 10);
    *v55 = v75;
    v55[1] = _mm_load_si128((const __m128i *)&xmmword_23AB9E0);
    *(_QWORD *)(v53 + 32) += 42LL;
  }
  else
  {
    v53 = sub_227BF10(v53, "Expected Chunks to be in increasing order ", 42);
    v54 = nc;
  }
  v56 = sub_227B930(v53, v54);
  v57 = *(_DWORD **)(v56 + 32);
  if ( *(_QWORD *)(v56 + 24) - (_QWORD)v57 > 3u )
  {
    *v57 = 540884000;
    *(_QWORD *)(v56 + 32) += 4LL;
  }
  else
  {
    v56 = sub_227BF10(v56, " <= ", 4);
  }
  v58 = *(_QWORD *)(*(_QWORD *)a3 + 16 * (*((unsigned int *)a3 + 2) - 1LL) + 8);
LABEL_73:
  v59 = sub_227B930(v56, v58);
  v60 = *(_BYTE **)(v59 + 32);
  if ( *(_BYTE **)(v59 + 24) == v60 )
  {
    sub_227BF10(v59, "\n", 1);
  }
  else
  {
    *v60 = 10;
    ++*(_QWORD *)(v59 + 32);
  }
  return 1;
}
