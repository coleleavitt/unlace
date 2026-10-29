__int64 __fastcall sub_8C860(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rbp
  __int64 *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // r15
  __int64 v19; // rbp
  __int64 v20; // r9
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r11
  int v23; // eax
  unsigned __int64 v24; // rbx
  __int64 *v25; // rbp
  __int64 *v26; // rcx
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // r11
  double v30; // xmm4_8
  double v31; // xmm5_8
  int v32; // edi
  __int64 *v33; // r13
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __int64 v36; // rdx
  __m128 v37; // xmm1
  bool v38; // cc
  __m128 si128; // xmm0
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rdx
  unsigned int v46; // r13d
  __int64 v47; // rax
  const char *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  __m128 v54; // [rsp+0h] [rbp-98h] BYREF
  __int64 v55; // [rsp+10h] [rbp-88h]
  __int64 v56; // [rsp+18h] [rbp-80h]
  __int64 *v57; // [rsp+20h] [rbp-78h]
  __int64 v58; // [rsp+28h] [rbp-70h]
  int v59; // [rsp+30h] [rbp-68h] BYREF
  int v60; // [rsp+34h] [rbp-64h] BYREF
  __int64 *v61; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v62; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v63; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v64[9]; // [rsp+50h] [rbp-48h] BYREF

  v11 = *a2;
  v12 = (__int64 *)a2[2];
  v55 = a1;
  v64[1] = __readfsqword(0x28u);
  v13 = a3;
  v62 = 0;
  if ( (unsigned int)sub_80F40(a3, &v61, &v59) )
    return 4294949587LL;
  if ( !v59 )
  {
    v42 = v61;
    a2[4] = v13;
    ++dword_165CB8;
    a2[5] = v42[2];
    a2[6] = *v42;
    return 0;
  }
  ++dword_165CB4;
  v56 = v13 * v11;
  if ( v12[11] == v13 * v11 )
    goto LABEL_20;
  v18 = a2[2];
  v19 = *a2;
  v64[0] = 0;
  v20 = *(unsigned int *)(v18 + 96);
  v21 = v13 * v19;
  if ( (_DWORD)v20 )
  {
    v22 = *(_QWORD *)(v18 + 88);
    if ( v21 >= v22 )
    {
      v23 = dword_165CE8;
      goto LABEL_7;
    }
    goto LABEL_37;
  }
  v43 = *(_QWORD *)v18;
  if ( *(_DWORD *)(v18 + 8) || !v43 )
    sub_80B80(v43);
  if ( v21 == sub_92670(v43, v21, 0) || (v46 = sub_8F840(v43, v21, v44)) == 0 )
  {
    v32 = *(_DWORD *)(v18 + 96);
    *(_QWORD *)(v18 + 88) = v21;
    if ( v32 )
      *(_DWORD *)(v18 + 96) = 1;
    goto LABEL_20;
  }
  v22 = *(_QWORD *)(v18 + 88);
  if ( v21 < v22 )
  {
LABEL_37:
    if ( !dword_165CEC )
      sub_8C450(
        a4,
        a5,
        a6,
        a7,
        v16,
        v17,
        a10,
        a11,
        (__int64)"xdelta3: source can't seek backwards; requested block offset %zu source position is %zu\n",
        v21,
        v22,
        v14,
        v15,
        v20);
    v47 = v55;
    *(_DWORD *)(v18 + 96) = 1;
    *(_QWORD *)(v47 + 64) = "non-seekable source: copy is too far back (try raising -B)";
    return 4294949587LL;
  }
  v14 = *(unsigned int *)(v18 + 96);
  v23 = dword_165CE8;
  if ( !(_DWORD)v14 )
  {
    if ( !dword_165CE8 )
    {
LABEL_34:
      *(_DWORD *)(v18 + 96) = 1;
      goto LABEL_10;
    }
    sub_8C450(
      a4,
      a5,
      a6,
      a7,
      v16,
      v17,
      a10,
      a11,
      (__int64)"xdelta3: source can't seek, will use FIFO for %s\n",
      *(_QWORD *)(v18 + 16),
      v45,
      v14,
      v15,
      v20);
    if ( dword_165CE8 <= 1 )
    {
      v22 = *(_QWORD *)(v18 + 88);
      goto LABEL_34;
    }
    v48 = sub_8C630(v46);
    sub_8C450(
      a4,
      a5,
      a6,
      a7,
      v52,
      v53,
      a10,
      a11,
      (__int64)"xdelta3: seek error at offset %zu: %s\n",
      v21,
      (__int64)v48,
      v49,
      v50,
      v51);
    v23 = dword_165CE8;
    v22 = *(_QWORD *)(v18 + 88);
  }
LABEL_7:
  *(_DWORD *)(v18 + 96) = 1;
  if ( v23 > 1 )
  {
    if ( v21 == v22 )
      goto LABEL_20;
    sub_8C450(
      a4,
      a5,
      a6,
      a7,
      v16,
      v17,
      a10,
      a11,
      (__int64)"xdelta3: non-seekable source skipping %zu bytes @ %zu\n",
      v21 - v22,
      v22,
      v14,
      v15,
      v20);
    v22 = *(_QWORD *)(v18 + 88);
  }
LABEL_10:
  if ( v22 < v21 )
  {
    v57 = v12;
    v58 = v13;
    v24 = v21;
    v54.m128_u64[0] = (unsigned __int64)v64;
    while ( !(unsigned int)sub_80F40(v22 >> a2[9], &v63, &v60) )
    {
      v25 = v63;
      v26 = (__int64 *)v54.m128_u64[0];
      v63[1] = v29;
      result = sub_8C7A0(
                 (__int64 *)v18,
                 *v25,
                 *a2,
                 v26,
                 (__int64)"input read failed",
                 a4,
                 a5,
                 a6,
                 a7,
                 v30,
                 v31,
                 a10,
                 a11);
      if ( (_DWORD)result )
        return result;
      v28 = v64[0];
      if ( *a2 != v64[0] )
      {
        *(_QWORD *)(v55 + 64) = "non-seekable input is short";
        return 4294949584LL;
      }
      *(_QWORD *)(v18 + 88) += v64[0];
      v25[2] = v28;
      v22 = *(_QWORD *)(v18 + 88);
      if ( v22 >= v24 )
      {
        v12 = v57;
        v13 = v58;
        goto LABEL_20;
      }
    }
    return 4294949587LL;
  }
LABEL_20:
  v33 = v61;
  result = sub_8C7A0(
             v12,
             *v61,
             *a2,
             (__int64 *)&v62,
             (__int64)"input read failed",
             a4,
             a5,
             a6,
             a7,
             *(double *)v16.m128_u64,
             *(double *)v17.m128_u64,
             a10,
             a11);
  if ( !(_DWORD)result )
  {
    v36 = v62;
    v37 = (__m128)v62;
    v38 = dword_165CE8 <= 3;
    v12[11] = v62 + v56;
    si128 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)v37);
    if ( !v38 )
    {
      v40 = v33[1];
      v54 = si128;
      if ( v40 == -1 || v40 == v13 )
      {
        sub_8C450(
          si128,
          v37,
          a6,
          a7,
          v34,
          v35,
          a10,
          a11,
          (__int64)"xdelta3: source block %zu read %zu (lru_hits=%u, lru_misses=%u, lru_filled=%u)\n",
          v13,
          v36,
          (unsigned int)dword_165CB8,
          (unsigned int)dword_165CB4,
          (unsigned int)dword_165CB0);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v54);
      }
      else
      {
        sub_8C450(
          si128,
          v37,
          a6,
          a7,
          v34,
          v35,
          a10,
          a11,
          (__int64)"xdelta3: source block %zu read %zu ejects %zu (lru_hits=%u, lru_misses=%u, lru_filled=%u)\n",
          v13,
          v36,
          v40,
          (unsigned int)dword_165CB8,
          (unsigned int)dword_165CB4);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v54);
      }
    }
    v41 = *v33;
    *((__m128 *)a2 + 2) = si128;
    a2[6] = v41;
    *(__m128 *)(v33 + 1) = si128;
    return 0;
  }
  return result;
}

