__int64 __fastcall sub_800860(
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
  __int64 v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // r9
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r11
  int v24; // eax
  unsigned __int64 v25; // rbx
  __int64 *v26; // rbp
  __int64 *v27; // rcx
  __int64 result; // rax
  __int64 v29; // rax
  __int64 v30; // r11
  double v31; // xmm4_8
  double v32; // xmm5_8
  int v33; // edi
  __int64 *v34; // r13
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __int64 v37; // rdx
  __m128 v38; // xmm1
  bool v39; // cc
  __m128 si128; // xmm0
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rdx
  unsigned int qerrno; // r13d
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  const char *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  __m128 v57; // [rsp+0h] [rbp-98h] BYREF
  __int64 v58; // [rsp+10h] [rbp-88h]
  __int64 v59; // [rsp+18h] [rbp-80h]
  __int64 *v60; // [rsp+20h] [rbp-78h]
  __int64 v61; // [rsp+28h] [rbp-70h]
  int v62; // [rsp+30h] [rbp-68h] BYREF
  int v63; // [rsp+34h] [rbp-64h] BYREF
  __int64 *v64; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v65; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v66; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v67[9]; // [rsp+50h] [rbp-48h] BYREF

  v12 = *a2;
  v13 = (__int64 *)a2[2];
  v58 = a1;
  v67[1] = __readfsqword(0x28u);
  v14 = a3;
  v65 = 0;
  if ( (unsigned int)sub_7F4F40(a3, &v64, &v62) )
    return 4294949587LL;
  if ( !v62 )
  {
    v43 = v64;
    a2[4] = v14;
    ++dword_2CAAAD8;
    a2[5] = v43[2];
    a2[6] = *v43;
    return 0;
  }
  ++dword_2CAAAD4;
  v59 = v14 * v12;
  if ( v13[11] == v14 * v12 )
    goto LABEL_20;
  v19 = a2[2];
  v20 = *a2;
  v67[0] = 0;
  v21 = *(unsigned int *)(v19 + 96);
  v22 = v14 * v20;
  if ( (_DWORD)v21 )
  {
    v23 = *(_QWORD *)(v19 + 88);
    if ( v22 >= v23 )
    {
      v24 = dword_2CAAB08;
      goto LABEL_7;
    }
    goto LABEL_37;
  }
  v44 = *(_QWORD *)v19;
  if ( *(_DWORD *)(v19 + 8) || !v44 )
    sub_7F4B80(v44);
  if ( v22 == qlseek(v44, v22, 0) || (qerrno = get_qerrno(v44)) == 0 )
  {
    v33 = *(_DWORD *)(v19 + 96);
    *(_QWORD *)(v19 + 88) = v22;
    if ( v33 )
      *(_DWORD *)(v19 + 96) = 1;
    goto LABEL_20;
  }
  v23 = *(_QWORD *)(v19 + 88);
  if ( v22 < v23 )
  {
LABEL_37:
    if ( !dword_2CAAB0C )
      sub_800450(
        a4,
        a5,
        a6,
        a7,
        v17,
        v18,
        a10,
        a11,
        (__int64)"xdelta3: source can't seek backwards; requested block offset %zu source position is %zu\n",
        v22,
        v23,
        v15,
        v16,
        v21);
    v47 = v58;
    *(_DWORD *)(v19 + 96) = 1;
    *(_QWORD *)(v47 + 64) = "non-seekable source: copy is too far back (try raising -B)";
    return 4294949587LL;
  }
  v15 = *(unsigned int *)(v19 + 96);
  v24 = dword_2CAAB08;
  if ( !(_DWORD)v15 )
  {
    if ( !dword_2CAAB08 )
    {
LABEL_34:
      *(_DWORD *)(v19 + 96) = 1;
      goto LABEL_10;
    }
    v48 = *(_QWORD *)(v19 + 16);
    sub_800450(
      a4,
      a5,
      a6,
      a7,
      v17,
      v18,
      a10,
      a11,
      (__int64)"xdelta3: source can't seek, will use FIFO for %s\n",
      v48,
      v45,
      v15,
      v16,
      v21);
    if ( dword_2CAAB08 <= 1 )
    {
      v23 = *(_QWORD *)(v19 + 88);
      goto LABEL_34;
    }
    v51 = sub_800630(qerrno, v48, v49, v50);
    sub_800450(
      a4,
      a5,
      a6,
      a7,
      v55,
      v56,
      a10,
      a11,
      (__int64)"xdelta3: seek error at offset %zu: %s\n",
      v22,
      (__int64)v51,
      v52,
      v53,
      v54);
    v24 = dword_2CAAB08;
    v23 = *(_QWORD *)(v19 + 88);
  }
LABEL_7:
  *(_DWORD *)(v19 + 96) = 1;
  if ( v24 > 1 )
  {
    if ( v22 == v23 )
      goto LABEL_20;
    sub_800450(
      a4,
      a5,
      a6,
      a7,
      v17,
      v18,
      a10,
      a11,
      (__int64)"xdelta3: non-seekable source skipping %zu bytes @ %zu\n",
      v22 - v23,
      v23,
      v15,
      v16,
      v21);
    v23 = *(_QWORD *)(v19 + 88);
  }
LABEL_10:
  if ( v23 < v22 )
  {
    v60 = v13;
    v61 = v14;
    v25 = v22;
    v57.m128_u64[0] = (unsigned __int64)v67;
    while ( !(unsigned int)sub_7F4F40(v23 >> a2[9], &v66, &v63) )
    {
      v26 = v66;
      v27 = (__int64 *)v57.m128_u64[0];
      v66[1] = v30;
      result = sub_8007A0(
                 (__int64 *)v19,
                 *v26,
                 *a2,
                 v27,
                 (__int64)"input read failed",
                 a4,
                 a5,
                 a6,
                 a7,
                 v31,
                 v32,
                 a10,
                 a11);
      if ( (_DWORD)result )
        return result;
      v29 = v67[0];
      if ( *a2 != v67[0] )
      {
        *(_QWORD *)(v58 + 64) = "non-seekable input is short";
        return 4294949584LL;
      }
      *(_QWORD *)(v19 + 88) += v67[0];
      v26[2] = v29;
      v23 = *(_QWORD *)(v19 + 88);
      if ( v23 >= v25 )
      {
        v13 = v60;
        v14 = v61;
        goto LABEL_20;
      }
    }
    return 4294949587LL;
  }
LABEL_20:
  v34 = v64;
  result = sub_8007A0(
             v13,
             *v64,
             *a2,
             (__int64 *)&v65,
             (__int64)"input read failed",
             a4,
             a5,
             a6,
             a7,
             *(double *)v17.m128_u64,
             *(double *)v18.m128_u64,
             a10,
             a11);
  if ( !(_DWORD)result )
  {
    v37 = v65;
    v38 = (__m128)v65;
    v39 = dword_2CAAB08 <= 3;
    v13[11] = v65 + v59;
    si128 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)v38);
    if ( !v39 )
    {
      v41 = v34[1];
      v57 = si128;
      if ( v41 == -1 || v41 == v14 )
      {
        sub_800450(
          si128,
          v38,
          a6,
          a7,
          v35,
          v36,
          a10,
          a11,
          (__int64)"xdelta3: source block %zu read %zu (lru_hits=%u, lru_misses=%u, lru_filled=%u)\n",
          v14,
          v37,
          (unsigned int)dword_2CAAAD8,
          (unsigned int)dword_2CAAAD4,
          (unsigned int)dword_2CAAAD0);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v57);
      }
      else
      {
        sub_800450(
          si128,
          v38,
          a6,
          a7,
          v35,
          v36,
          a10,
          a11,
          (__int64)"xdelta3: source block %zu read %zu ejects %zu (lru_hits=%u, lru_misses=%u, lru_filled=%u)\n",
          v14,
          v37,
          v41,
          (unsigned int)dword_2CAAAD8,
          (unsigned int)dword_2CAAAD4);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v57);
      }
    }
    v42 = *v34;
    *((__m128 *)a2 + 2) = si128;
    a2[6] = v42;
    *(__m128 *)(v34 + 1) = si128;
    return 0;
  }
  return result;
}

