__int64 __fastcall sub_219EE0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  int v3; // edx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  void *v9; // r12
  __m128i si128; // xmm0
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r15
  unsigned __int64 v22; // r14
  _QWORD *v23; // rbp
  signed __int64 v24; // rbp
  __m128i v25; // xmm0
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rax
  signed __int64 v28; // rsi
  __m128i v29; // xmm0
  signed __int64 v30; // xmm0_8
  _QWORD *v32; // rdi
  __m128i v33; // xmm0
  unsigned __int64 v34; // xmm0_8
  unsigned __int64 *v35; // rax
  signed __int64 v36; // rax
  size_t n[2]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v38; // [rsp+18h] [rbp-150h]
  __int64 v39; // [rsp+20h] [rbp-148h]
  __int64 v40; // [rsp+28h] [rbp-140h]
  __int64 *v41; // [rsp+30h] [rbp-138h]
  unsigned __int8 v42; // [rsp+3Ah] [rbp-12Eh]
  bool v43; // [rsp+3Bh] [rbp-12Dh]
  int v44; // [rsp+3Ch] [rbp-12Ch]
  __int64 v45[2]; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int64 *v46; // [rsp+50h] [rbp-118h] BYREF
  __int128 v47; // [rsp+58h] [rbp-110h]
  __int64 v48[2]; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD *v49; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v50; // [rsp+88h] [rbp-E0h]
  __int64 v51[2]; // [rsp+A0h] [rbp-C8h] BYREF
  void *v52; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v53; // [rsp+B8h] [rbp-B0h]
  __int64 v54[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v56; // [rsp+E8h] [rbp-80h]
  __int64 v57; // [rsp+100h] [rbp-68h] BYREF
  __int128 v58; // [rsp+108h] [rbp-60h] BYREF
  __int128 v59; // [rsp+118h] [rbp-50h]
  unsigned __int64 v60; // [rsp+128h] [rbp-40h]

  v39 = a1;
  v41 = a2;
  v60 = __readfsqword(0x28u);
  v42 = *(_BYTE *)(a1 + 320);
  if ( v42 )
    return 0;
  v44 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 <= 0x10 )
    v2 = getinf(99);
  v43 = v2 == 176 || v2 == 256;
  v40 = sub_1CE070(v39);
  v3 = *(_QWORD *)(v40 + 352);
  if ( (!v3 || !v43) && !*(_BYTE *)(*(_QWORD *)(v39 + 1496) + 148LL) )
    return 0;
  v45[0] = 0;
  v45[1] = 0;
  v4 = *(_QWORD *)(v39 + 664);
  v5 = *(_QWORD *)(v39 + 672);
  v47 = 0;
  v46 = nullptr;
  if ( v4 + v5 - 1 >= v4 )
  {
    v46 = (unsigned __int64 *)qvector_reserve(&v46, 0, 1, 16);
    *(__m128i *)&v46[2 * v47] = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v5);
    *(_QWORD *)&v47 = v47 + 1;
    v3 = *(_DWORD *)(v40 + 352);
  }
  v48[0] = 0;
  v48[1] = 0;
  v49 = nullptr;
  v38 = 0;
  v50 = 0;
  if ( !v3 )
    goto LABEL_61;
  do
  {
    v6 = *(unsigned int *)(*(_QWORD *)(v40 + 344) + 4LL * (int)v38);
    if ( (unsigned int)v6 >= *(_DWORD *)(v39 + 64) )
    {
      if ( !under_debugger )
        sub_37B760(52719);
LABEL_77:
      BUG();
    }
    v7 = *(_QWORD *)(*(_QWORD *)(v39 + 528) + 8 * v6);
    v53 = 0;
    v51[0] = 0;
    v51[1] = 0;
    v52 = nullptr;
    sub_5E350(v51, (__int64 *)(v7 + 200));
    v8 = *(_QWORD *)(v7 + 224);
    v9 = nullptr;
    if ( v8 )
    {
      n[0] = 16 * v8;
      v9 = (void *)qalloc_or_throw(16 * v8);
      memcpy(v9, *(const void **)(v7 + 216), n[0]);
    }
    si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v52 )
    {
      *(__m128i *)n = si128;
      v53.m128i_i64[0] = 0;
      qfree(v52);
      si128 = _mm_load_si128((const __m128i *)n);
    }
    v11 = *(_DWORD *)(v7 + 352) == 1;
    v52 = v9;
    v54[0] = 0;
    v54[1] = 0;
    v55 = 0;
    v53 = si128;
    v56 = 0;
    if ( !v11 )
    {
      v20 = 0;
      goto LABEL_31;
    }
    while ( 1 )
    {
      sub_5DD00(v54, (__int64 *)(v7 + 120));
      sub_30F930(&v55, v7 + 136);
      v12 = *(_QWORD *)(v7 + 64);
      v13 = **(unsigned int **)(v7 + 344);
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 64) )
      {
        if ( !under_debugger )
          sub_37B760(52719);
        goto LABEL_77;
      }
      v7 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v13);
      if ( *(_QWORD *)(v7 + 48) )
        break;
LABEL_20:
      if ( *(_DWORD *)(v7 + 352) != 1 )
        goto LABEL_28;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 480) + 148LL) != 2
      || (v14 = *(_BYTE **)(v7 + 56), (v14[65] & 0x40) == 0) && !sub_119CC0(v14, 0) )
    {
      sub_5DA80(&v57, v7 + 200);
      *((_QWORD *)&v58 + 1) = 0;
      v59 = 0;
      v19 = *(_QWORD *)(v7 + 224);
      if ( v19 )
      {
        n[0] = 16 * v19;
        *((_QWORD *)&v58 + 1) = qalloc_or_throw(16 * v19);
        *((_QWORD *)&v59 + 1) = v19;
        memcpy(*((void **)&v58 + 1), *(const void **)(v7 + 216), n[0]);
        *(_QWORD *)&v59 = v19;
      }
      sub_5E0C0(&v57, v54, v15, v16, v17, v18);
      sub_3108E0((char *)&v58 + 8, &v55);
      sub_5DD00(v51, &v57);
      sub_30F930(&v52, (char *)&v58 + 8);
      if ( *((_QWORD *)&v58 + 1) )
      {
        *(_QWORD *)&v59 = 0;
        qfree(*((_QWORD *)&v58 + 1));
      }
      qfree(v57);
      goto LABEL_20;
    }
LABEL_28:
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
    v20 = v54[0];
LABEL_31:
    qfree(v20);
    sub_5DD00(v48, v51);
    sub_30F930(&v49, &v52);
    sub_5E180(v45, v51);
    sub_310D40(&v46, &v52);
    if ( v52 )
    {
      v53.m128i_i64[0] = 0;
      qfree(v52);
    }
    qfree(v51[0]);
    ++v38;
  }
  while ( v38 < *(int *)(v40 + 352) );
  if ( !(_QWORD)v50 )
    goto LABEL_58;
  if ( v43 )
    goto LABEL_38;
  if ( (_QWORD)v47 )
  {
    *(_DWORD *)(v39 + 72) = 16;
LABEL_38:
    v21 = v39;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 1496) + 24LL) + 16LL)
        & (*(_QWORD *)(v21 + 1440) + (int)sub_EC6C0(v39));
    if ( !*(_DWORD *)(v21 + 64) )
      sub_2149E0();
    v23 = **(_QWORD ***)(v39 + 528);
    if ( v23[33] )
    {
      if ( (unsigned __int8)sub_5E300(v23 + 30) )
      {
        v33 = _mm_loadu_si128((const __m128i *)(v23[32] + 16LL * v23[33] - 16));
        v34 = _mm_add_epi64(v33, _mm_srli_si128(v33, 8)).m128i_u64[0];
        if ( v22 < v34 )
          v22 = v34;
      }
    }
    if ( (_QWORD)v47 )
    {
      v24 = *v46;
      if ( *v46 < v22 )
      {
        v36 = sub_1EE0E0(
                v39,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 1496) + 24LL) + 16LL) & (v24 - *(_QWORD *)(v39 + 1440)));
        v22 = v24;
        if ( v36 >= v24 )
          v22 = v36;
      }
    }
    v57 = 0;
    v25 = _mm_loadu_si128((const __m128i *)(v39 + 664));
    v26 = _mm_add_epi64(v25, _mm_srli_si128(v25, 8)).m128i_u64[0];
    v58 = 0;
    if ( v26 - 1 >= v22 )
    {
      v57 = qvector_reserve(&v57, 0, 1, 16);
      v35 = (unsigned __int64 *)(16 * v58 + v57);
      *v35 = v22;
      v35[1] = v26 - v22;
      *(_QWORD *)&v58 = v58 + 1;
    }
    sub_310D40(&v49, &v57);
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(v57);
    }
    if ( !(_QWORD)v50 )
      goto LABEL_50;
    v27 = *v49 & -v44;
    v28 = v27 + v44;
    if ( v27 >= v22 )
      v28 = *v49 & -v44;
    v29 = _mm_loadu_si128((const __m128i *)&v49[2 * v50 - 2]);
    v30 = _mm_add_epi64(v29, _mm_srli_si128(v29, 8)).m128i_u64[0];
    if ( v28 >= v30 )
    {
LABEL_50:
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree(v49);
      }
      qfree(v48[0]);
      if ( v46 )
      {
        *(_QWORD *)&v47 = 0;
        qfree(v46);
      }
      qfree(v45[0]);
      return 0;
    }
    sub_11C460(v41, v28, v30 - v28);
    v42 = 1;
    v32 = v49;
  }
  else
  {
LABEL_58:
    v32 = v49;
  }
  if ( v32 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v32);
  }
LABEL_61:
  qfree(v48[0]);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  qfree(v45[0]);
  return v42;
}
