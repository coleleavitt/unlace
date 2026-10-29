__int64 __fastcall sub_221260(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  char v6; // bl
  int v7; // edx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  void *v14; // r12
  __m128i si128; // xmm0
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rax
  _BYTE *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // r12
  __int64 v25; // rdi
  __int64 v26; // r15
  unsigned __int64 v27; // r14
  _QWORD *v28; // rbp
  signed __int64 v29; // rbp
  __m128i v30; // xmm0
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rax
  signed __int64 v33; // rsi
  __m128i v34; // xmm0
  signed __int64 v35; // xmm0_8
  _QWORD *v37; // rdi
  __m128i v38; // xmm0
  unsigned __int64 v39; // xmm0_8
  unsigned __int64 *v40; // rax
  signed __int64 v41; // rax
  size_t n[2]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v43; // [rsp+18h] [rbp-150h]
  __int64 v44; // [rsp+20h] [rbp-148h]
  __int64 v45; // [rsp+28h] [rbp-140h]
  __int64 *v46; // [rsp+30h] [rbp-138h]
  unsigned __int8 v47; // [rsp+3Ah] [rbp-12Eh]
  char v48; // [rsp+3Bh] [rbp-12Dh]
  int v49; // [rsp+3Ch] [rbp-12Ch]
  __int64 v50[2]; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int64 *v51; // [rsp+50h] [rbp-118h] BYREF
  __int128 v52; // [rsp+58h] [rbp-110h]
  __int64 v53[2]; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD *v54; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v55; // [rsp+88h] [rbp-E0h]
  __int64 v56[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v58; // [rsp+B8h] [rbp-B0h]
  __int64 v59[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v61; // [rsp+E8h] [rbp-80h]
  __int64 v62; // [rsp+100h] [rbp-68h] BYREF
  __int128 v63; // [rsp+108h] [rbp-60h] BYREF
  __int128 v64; // [rsp+118h] [rbp-50h]
  unsigned __int64 v65; // [rsp+128h] [rbp-40h]

  v44 = a1;
  v46 = a2;
  v65 = __readfsqword(0x28u);
  v47 = *(_BYTE *)(a1 + 320);
  if ( v47 )
    return 0;
  v49 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 <= 0x10 )
    v4 = getinf();
  LOBYTE(a3) = v4 == 256;
  LOBYTE(v4) = v4 == 176;
  v5 = v4 | a3;
  v48 = v5;
  v6 = v5;
  v45 = sub_1D5170(v44, (__int64)a2, v5, a4);
  v7 = *(_QWORD *)(v45 + 352);
  if ( (!v7 || !v6) && !*(_BYTE *)(*(_QWORD *)(v44 + 1496) + 148LL) )
    return 0;
  v50[0] = 0;
  v50[1] = 0;
  v8 = *(_QWORD *)(v44 + 664);
  v9 = *(_QWORD *)(v44 + 672);
  v52 = 0;
  v51 = nullptr;
  if ( v8 + v9 - 1 >= v8 )
  {
    v51 = (unsigned __int64 *)qvector_reserve((__int64)&v51, 0, 1, 16);
    *(__m128i *)&v51[2 * v52] = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v9);
    *(_QWORD *)&v52 = v52 + 1;
    v7 = *(_DWORD *)(v45 + 352);
  }
  v53[0] = 0;
  v53[1] = 0;
  v54 = nullptr;
  v43 = 0;
  v55 = 0;
  if ( !v7 )
    goto LABEL_61;
  do
  {
    v10 = *(unsigned int *)(*(_QWORD *)(v45 + 344) + 4LL * (int)v43);
    if ( (unsigned int)v10 >= *(_DWORD *)(v44 + 64) )
    {
      if ( !under_debugger )
        sub_383060(52719);
LABEL_77:
      BUG();
    }
    v11 = *(_QWORD *)(*(_QWORD *)(v44 + 528) + 8 * v10);
    v58 = 0;
    v56[0] = 0;
    v56[1] = 0;
    v57 = 0;
    sub_648D0(v56, (__int64 *)(v11 + 200));
    v13 = *(_QWORD *)(v11 + 224);
    v14 = nullptr;
    if ( v13 )
    {
      n[0] = 16 * v13;
      v14 = (void *)qalloc_or_throw(16 * v13, v11 + 200, 16 * v13, v12);
      memcpy(v14, *(const void **)(v11 + 216), n[0]);
    }
    si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
    if ( v57 )
    {
      *(__m128i *)n = si128;
      v58.m128i_i64[0] = 0;
      qfree(v57);
      si128 = _mm_load_si128((const __m128i *)n);
    }
    v16 = *(_DWORD *)(v11 + 352) == 1;
    v57 = (__int64)v14;
    v59[0] = 0;
    v59[1] = 0;
    v60 = 0;
    v58 = si128;
    v61 = 0;
    if ( !v16 )
    {
      v25 = 0;
      goto LABEL_31;
    }
    while ( 1 )
    {
      sub_64280(v59, (__int64 *)(v11 + 120));
      sub_316CB0(&v60, v11 + 136);
      v17 = *(_QWORD *)(v11 + 64);
      v18 = **(unsigned int **)(v11 + 344);
      if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
      {
        if ( !under_debugger )
          sub_383060(52719);
        goto LABEL_77;
      }
      v11 = *(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18);
      if ( *(_QWORD *)(v11 + 48) )
        break;
LABEL_20:
      if ( *(_DWORD *)(v11 + 352) != 1 )
        goto LABEL_28;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v11 + 480) + 148LL) != 2
      || (v19 = *(_BYTE **)(v11 + 56), (v19[65] & 0x40) == 0) && !sub_120380(v19, 0) )
    {
      sub_64000(&v62, v11 + 200);
      *((_QWORD *)&v63 + 1) = 0;
      v64 = 0;
      v24 = *(_QWORD *)(v11 + 224);
      if ( v24 )
      {
        n[0] = 16 * v24;
        *((_QWORD *)&v63 + 1) = qalloc_or_throw(16 * v24, v11 + 200, 16 * v24, v21);
        *((_QWORD *)&v64 + 1) = v24;
        memcpy(*((void **)&v63 + 1), *(const void **)(v11 + 216), n[0]);
        *(_QWORD *)&v64 = v24;
      }
      sub_64640(&v62, v59, v20, v21, v22, v23);
      sub_317C60((char *)&v63 + 8, &v60);
      sub_64280(v56, &v62);
      sub_316CB0(&v57, (char *)&v63 + 8);
      if ( *((_QWORD *)&v63 + 1) )
      {
        *(_QWORD *)&v64 = 0;
        qfree(*((__int64 *)&v63 + 1));
      }
      qfree(v62);
      goto LABEL_20;
    }
LABEL_28:
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60);
    }
    v25 = v59[0];
LABEL_31:
    qfree(v25);
    sub_64280(v53, v56);
    sub_316CB0(&v54, &v57);
    sub_64700(v50, v56);
    sub_3180C0(&v51, &v57);
    if ( v57 )
    {
      v58.m128i_i64[0] = 0;
      qfree(v57);
    }
    qfree(v56[0]);
    ++v43;
  }
  while ( v43 < *(int *)(v45 + 352) );
  if ( !(_QWORD)v55 )
    goto LABEL_58;
  if ( v48 )
    goto LABEL_38;
  if ( (_QWORD)v52 )
  {
    *(_DWORD *)(v44 + 72) = 16;
LABEL_38:
    v26 = v44;
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 1496) + 24LL) + 16LL)
        & (*(_QWORD *)(v26 + 1440) + (int)sub_F2D80(v44));
    if ( !*(_DWORD *)(v26 + 64) )
      sub_21BD60();
    v28 = **(_QWORD ***)(v44 + 528);
    if ( v28[33] )
    {
      if ( (unsigned __int8)sub_64880(v28 + 30) )
      {
        v38 = _mm_loadu_si128((const __m128i *)(v28[32] + 16LL * v28[33] - 16));
        v39 = _mm_add_epi64(v38, _mm_srli_si128(v38, 8)).m128i_u64[0];
        if ( v27 < v39 )
          v27 = v39;
      }
    }
    if ( (_QWORD)v52 )
    {
      v29 = *v51;
      if ( *v51 < v27 )
      {
        v41 = sub_1F5460(
                v44,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 1496) + 24LL) + 16LL) & (v29 - *(_QWORD *)(v44 + 1440)));
        v27 = v29;
        if ( v41 >= v29 )
          v27 = v41;
      }
    }
    v62 = 0;
    v30 = _mm_loadu_si128((const __m128i *)(v44 + 664));
    v31 = _mm_add_epi64(v30, _mm_srli_si128(v30, 8)).m128i_u64[0];
    v63 = 0;
    if ( v31 - 1 >= v27 )
    {
      v62 = qvector_reserve((__int64)&v62, 0, 1, 16);
      v40 = (unsigned __int64 *)(16 * v63 + v62);
      *v40 = v27;
      v40[1] = v31 - v27;
      *(_QWORD *)&v63 = v63 + 1;
    }
    sub_3180C0(&v54, &v62);
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62);
    }
    if ( !(_QWORD)v55 )
      goto LABEL_50;
    v32 = *v54 & -v49;
    v33 = v32 + v49;
    if ( v32 >= v27 )
      v33 = *v54 & -v49;
    v34 = _mm_loadu_si128((const __m128i *)&v54[2 * v55 - 2]);
    v35 = _mm_add_epi64(v34, _mm_srli_si128(v34, 8)).m128i_u64[0];
    if ( v33 >= v35 )
    {
LABEL_50:
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree((__int64)v54);
      }
      qfree(v53[0]);
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree((__int64)v51);
      }
      qfree(v50[0]);
      return 0;
    }
    sub_122B20(v46, v33, v35 - v33);
    v47 = 1;
    v37 = v54;
  }
  else
  {
LABEL_58:
    v37 = v54;
  }
  if ( v37 )
  {
    *(_QWORD *)&v55 = 0;
    qfree((__int64)v37);
  }
LABEL_61:
  qfree(v53[0]);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree((__int64)v51);
  }
  qfree(v50[0]);
  return v47;
}
