__int64 __fastcall sub_823BA0(
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
  unsigned int qerrno; // r13d
  __int64 v46; // rax
  const char *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __m128 v51; // xmm4
  __m128 v52; // xmm5
  __m128 v53; // [rsp+0h] [rbp-98h] BYREF
  __int64 v54; // [rsp+10h] [rbp-88h]
  __int64 v55; // [rsp+18h] [rbp-80h]
  __int64 *v56; // [rsp+20h] [rbp-78h]
  __int64 v57; // [rsp+28h] [rbp-70h]
  int v58; // [rsp+30h] [rbp-68h] BYREF
  int v59; // [rsp+34h] [rbp-64h] BYREF
  __int64 *v60; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v61; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v62; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v63[9]; // [rsp+50h] [rbp-48h] BYREF

  v11 = *a2;
  v12 = (__int64 *)a2[2];
  v54 = a1;
  v63[1] = __readfsqword(0x28u);
  v13 = a3;
  v61 = 0;
  if ( (unsigned int)sub_818280(a3, &v60, &v58) )
    return 4294949587LL;
  if ( !v58 )
  {
    v42 = v60;
    a2[4] = v13;
    ++dword_2CD49F8;
    a2[5] = v42[2];
    a2[6] = *v42;
    return 0;
  }
  ++dword_2CD49F4;
  v55 = v13 * v11;
  if ( v12[11] == v13 * v11 )
    goto LABEL_20;
  v18 = a2[2];
  v19 = *a2;
  v63[0] = 0;
  v20 = *(unsigned int *)(v18 + 96);
  v21 = v13 * v19;
  if ( (_DWORD)v20 )
  {
    v22 = *(_QWORD *)(v18 + 88);
    if ( v21 >= v22 )
    {
      v23 = dword_2CD4A28;
      goto LABEL_7;
    }
    goto LABEL_37;
  }
  v43 = *(_QWORD *)v18;
  if ( *(_DWORD *)(v18 + 8) || !v43 )
    sub_817EC0(v43);
  if ( v21 == qlseek(v43, v21, 0) || (qerrno = get_qerrno(v43)) == 0 )
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
    if ( !dword_2CD4A2C )
      sub_823790(
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
    v46 = v54;
    *(_DWORD *)(v18 + 96) = 1;
    *(_QWORD *)(v46 + 64) = "non-seekable source: copy is too far back (try raising -B)";
    return 4294949587LL;
  }
  v14 = *(unsigned int *)(v18 + 96);
  v23 = dword_2CD4A28;
  if ( !(_DWORD)v14 )
  {
    if ( !dword_2CD4A28 )
    {
LABEL_34:
      *(_DWORD *)(v18 + 96) = 1;
      goto LABEL_10;
    }
    sub_823790(
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
      v44,
      v14,
      v15,
      v20);
    if ( dword_2CD4A28 <= 1 )
    {
      v22 = *(_QWORD *)(v18 + 88);
      goto LABEL_34;
    }
    v47 = sub_823970(qerrno);
    sub_823790(
      a4,
      a5,
      a6,
      a7,
      v51,
      v52,
      a10,
      a11,
      (__int64)"xdelta3: seek error at offset %zu: %s\n",
      v21,
      (__int64)v47,
      v48,
      v49,
      v50);
    v23 = dword_2CD4A28;
    v22 = *(_QWORD *)(v18 + 88);
  }
LABEL_7:
  *(_DWORD *)(v18 + 96) = 1;
  if ( v23 > 1 )
  {
    if ( v21 == v22 )
      goto LABEL_20;
    sub_823790(
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
    v56 = v12;
    v57 = v13;
    v24 = v21;
    v53.m128_u64[0] = (unsigned __int64)v63;
    while ( !(unsigned int)sub_818280(v22 >> a2[9], &v62, &v59) )
    {
      v25 = v62;
      v26 = (__int64 *)v53.m128_u64[0];
      v62[1] = v29;
      result = sub_823AE0(
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
      v28 = v63[0];
      if ( *a2 != v63[0] )
      {
        *(_QWORD *)(v54 + 64) = "non-seekable input is short";
        return 4294949584LL;
      }
      *(_QWORD *)(v18 + 88) += v63[0];
      v25[2] = v28;
      v22 = *(_QWORD *)(v18 + 88);
      if ( v22 >= v24 )
      {
        v12 = v56;
        v13 = v57;
        goto LABEL_20;
      }
    }
    return 4294949587LL;
  }
LABEL_20:
  v33 = v60;
  result = sub_823AE0(
             v12,
             *v60,
             *a2,
             (__int64 *)&v61,
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
    v36 = v61;
    v37 = (__m128)v61;
    v38 = dword_2CD4A28 <= 3;
    v12[11] = v61 + v55;
    si128 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)v37);
    if ( !v38 )
    {
      v40 = v33[1];
      v53 = si128;
      if ( v40 == -1 || v40 == v13 )
      {
        sub_823790(
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
          (unsigned int)dword_2CD49F8,
          (unsigned int)dword_2CD49F4,
          (unsigned int)dword_2CD49F0);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v53);
      }
      else
      {
        sub_823790(
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
          (unsigned int)dword_2CD49F8,
          (unsigned int)dword_2CD49F4);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v53);
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
