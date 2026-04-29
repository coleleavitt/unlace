__int64 __fastcall sub_2FD40(
        __int64 a1,
        __int64 a2,
        size_t a3,
        void *a4,
        const char *a5,
        const __m128i *a6,
        const __m128i *a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  __int64 v10; // r11
  _QWORD *v13; // rbx
  size_t v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // r13
  __int64 v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // rbp
  _QWORD *v22; // r8
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __m128i v25; // xmm1
  __m128i si128; // xmm1
  __m128i v27; // xmm2
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r15
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rdi
  bool v41; // cf
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r15
  _QWORD *v50; // r8
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rbp
  __int64 v55; // rbx
  _QWORD *v56; // r15
  __int64 v57; // rdx
  __m128i v58; // xmm0
  __int64 v59; // rdx
  __m128i v60; // xmm0
  __int64 v61; // rdx
  __m128i v62; // xmm0
  __int64 v63; // rdi
  __int64 v64; // rax
  size_t v65; // r15
  unsigned __int64 v66; // r12
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  __m128i v71; // xmm0
  __int64 v72; // rdx
  __m128i v73; // xmm0
  __m128i v74; // xmm0
  __int64 v75; // rax
  size_t v76; // r15
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // r12
  __int64 v81; // r13
  __int64 v82; // rax
  __m128i v83; // xmm0
  __int64 v84; // rax
  __m128i v85; // xmm0
  __int64 v86; // rax
  __m128i v87; // xmm0
  __int64 v88; // rdi
  __int64 v89; // rax
  char v90; // [rsp+7h] [rbp-179h]
  size_t n[2]; // [rsp+8h] [rbp-178h] BYREF
  __m128i v92; // [rsp+18h] [rbp-168h] BYREF
  __m128i v93; // [rsp+28h] [rbp-158h] BYREF
  __int64 v94; // [rsp+38h] [rbp-148h]
  _QWORD *v95; // [rsp+40h] [rbp-140h]
  __m128i v96; // [rsp+48h] [rbp-138h] BYREF
  __int64 v97; // [rsp+58h] [rbp-128h]
  __int64 v98; // [rsp+68h] [rbp-118h]
  __int64 v99; // [rsp+70h] [rbp-110h]
  void *v100; // [rsp+78h] [rbp-108h] BYREF
  size_t v101[2]; // [rsp+80h] [rbp-100h]
  __int64 v102; // [rsp+90h] [rbp-F0h]
  __m128i v103; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-D8h]
  char v105; // [rsp+B0h] [rbp-D0h]
  __m128i v106[5]; // [rsp+B8h] [rbp-C8h] BYREF
  __m128i v107; // [rsp+108h] [rbp-78h] BYREF
  __int64 v108; // [rsp+118h] [rbp-68h]
  __m128i v109; // [rsp+130h] [rbp-50h] BYREF
  unsigned __int64 v110; // [rsp+140h] [rbp-40h]

  v10 = a3;
  v13 = (_QWORD *)a1;
  v90 = a9;
  v110 = __readfsqword(0x28u);
  v105 = 0;
  v100 = nullptr;
  v102 = -1;
  v104 = 0;
  v98 = a2;
  v99 = a3;
  *(_OWORD *)v101 = 0;
  v103 = 0;
  memset(v106, 0, 24);
  if ( a5 )
  {
    v93.m128i_i64[0] = (__int64)a5;
    n[0] = a3;
    v14 = strlen(a5);
    v10 = n[0];
    if ( v14 )
    {
      v93.m128i_i64[1] = v93.m128i_i64[0];
      v92.m128i_i64[0] = n[0];
      n[0] = v14;
      v93.m128i_i64[0] = v14 + 1;
      v100 = (void *)qvector_reserve(&v100, 0, v14 + 1, 1);
      v101[0] = v93.m128i_i64[0];
      v93.m128i_i64[0] = n[0];
      memmove(v100, (const void *)v93.m128i_i64[1], n[0]);
      v10 = v92.m128i_i64[0];
      *((_BYTE *)v100 + n[0]) = 0;
    }
  }
  v15 = _mm_loadu_si128(a6);
  v97 = 0;
  *(__m128i *)((char *)v106 + 8) = v15;
  v96 = 0;
  if ( (unsigned __int8)sub_2FB40(a1, &v96, a2, (__int64)a6, a7, v10) )
  {
    v16 = _mm_load_si128(&v96);
    v104 = v97;
    v103 = v16;
  }
  else
  {
    v47 = a7[1].m128i_i64[0];
    v103 = _mm_loadu_si128(a7);
    v104 = v47;
  }
  if ( *(_DWORD *)(a1 + 408) == 3 )
    a8 = 0;
  v105 = a9;
  v102 = a8;
  v106[0].m128i_i64[0] = a10;
  if ( a4 )
  {
    v17 = *(_QWORD *)(a1 + 384);
    v18 = (__int64)a4 - v17;
    if ( v18 < 0 || (v19 = *(_QWORD *)(a1 + 392), 0x4EC4EC4EC4EC4EC5LL * (v18 >> 3) >= v19) )
    {
      if ( !under_debugger )
        interr(30388);
      BUG();
    }
    v20 = v17 + v18 + 104;
    v93.m128i_i64[0] = 0;
    v92.m128i_i64[0] = v98;
    v93.m128i_i64[1] = v99;
    n[0] = v101[0];
    if ( v101[0] )
    {
      v65 = v101[0];
      v93.m128i_i64[0] = qalloc_or_throw(v101[0]);
      memcpy((void *)v93.m128i_i64[0], v100, v65);
      v17 = *(_QWORD *)(a1 + 384);
      v19 = *(_QWORD *)(a1 + 392);
      a8 = v102;
      a10 = v106[0].m128i_i64[0];
      v90 = v105;
    }
    v21 = *(_QWORD *)(a1 + 400);
    v22 = (_QWORD *)(v20 - v17);
    v107 = _mm_load_si128(&v103);
    v23 = _mm_loadu_si128((const __m128i *)&v106[0].m128i_u64[1]);
    v108 = v104;
    v109 = v23;
    if ( v21 < v19 + 1 )
    {
      v95 = (_QWORD *)(v20 - v17);
      v48 = qvector_reserve(a1 + 384, 0, v19 + 1, 104);
      v49 = *(_QWORD *)(a1 + 392);
      v17 = v48;
      v50 = v95;
      v51 = *(_QWORD *)(a1 + 400);
      v52 = *(_QWORD *)(a1 + 384);
      *(_QWORD *)(a1 + 400) = v21;
      v53 = v49 - 1;
      v94 = v51;
      if ( v53 >= 0 )
      {
        v95 = (_QWORD *)a1;
        v54 = v17;
        v55 = v53;
        v56 = v50;
        do
        {
          *(__m128i *)v54 = _mm_loadu_si128((const __m128i *)v52);
          v57 = *(_QWORD *)(v52 + 16);
          v58 = _mm_loadu_si128((const __m128i *)(v52 + 24));
          *(_QWORD *)(v52 + 16) = 0;
          *(_QWORD *)(v54 + 16) = v57;
          *(__m128i *)(v54 + 24) = v58;
          v59 = *(_QWORD *)(v52 + 40);
          v60 = _mm_loadu_si128((const __m128i *)(v52 + 48));
          *(_QWORD *)(v52 + 32) = 0;
          *(_QWORD *)(v54 + 40) = v59;
          v61 = *(_QWORD *)(v52 + 64);
          *(__m128i *)(v54 + 48) = v60;
          v62 = _mm_loadu_si128((const __m128i *)(v52 + 88));
          *(_QWORD *)(v54 + 64) = v61;
          LOBYTE(v61) = *(_BYTE *)(v52 + 72);
          *(__m128i *)(v54 + 88) = v62;
          *(_BYTE *)(v54 + 72) = v61;
          *(_QWORD *)(v54 + 80) = *(_QWORD *)(v52 + 80);
          v63 = *(_QWORD *)(v52 + 16);
          if ( v63 )
          {
            *(_QWORD *)(v52 + 24) = 0;
            qfree(v63);
          }
          v52 += 104;
          v54 += 104;
          v41 = v55-- == 0;
        }
        while ( !v41 );
        v13 = v95;
        v50 = v56;
        v52 = v95[48];
      }
      v95 = v50;
      qfree(v52);
      v64 = v94;
      v22 = v95;
      v13[48] = v17;
      v13[50] = v64;
      v24 = (__int64)v22 + v17;
      v19 = v13[49];
    }
    else
    {
      v24 = v20;
    }
    v25 = _mm_loadl_epi64((const __m128i *)n);
    si128 = _mm_unpacklo_epi64(v25, v25);
    v27 = (__m128i)_mm_loadh_ps((const double *)&v93.m128i_i64[1]);
    v28 = v17 + 104 * v19;
    v29 = 104 * v19 - (_QWORD)v22;
    v30 = v24 + v29 + 104;
    v31 = 0x4EC4EC4EC4EC4EC5LL * (v29 >> 3) - 1;
    if ( v31 >= 0 )
    {
      *(__m128i *)n = si128;
      v32 = v24;
      v92 = v27;
      do
      {
        v33 = _mm_loadu_si128((const __m128i *)(v28 - 104));
        v28 -= 104;
        v30 -= 104;
        *(__m128i *)v30 = v33;
        v34 = *(_QWORD *)(v28 + 16);
        v35 = _mm_loadu_si128((const __m128i *)(v28 + 24));
        *(_QWORD *)(v28 + 16) = 0;
        *(_QWORD *)(v30 + 16) = v34;
        *(__m128i *)(v30 + 24) = v35;
        v36 = *(_QWORD *)(v28 + 40);
        v37 = _mm_loadu_si128((const __m128i *)(v28 + 48));
        *(_QWORD *)(v28 + 32) = 0;
        *(_QWORD *)(v30 + 40) = v36;
        v38 = *(_QWORD *)(v28 + 64);
        *(__m128i *)(v30 + 48) = v37;
        v39 = _mm_loadu_si128((const __m128i *)(v28 + 88));
        *(_QWORD *)(v30 + 64) = v38;
        LOBYTE(v38) = *(_BYTE *)(v28 + 72);
        *(__m128i *)(v30 + 88) = v39;
        *(_BYTE *)(v30 + 72) = v38;
        *(_QWORD *)(v30 + 80) = *(_QWORD *)(v28 + 80);
        v40 = *(_QWORD *)(v28 + 16);
        if ( v40 )
        {
          *(_QWORD *)(v28 + 24) = 0;
          qfree(v40);
        }
        v41 = v31-- == 0;
      }
      while ( !v41 );
      si128 = _mm_load_si128((const __m128i *)n);
      v27 = _mm_load_si128(&v92);
      v24 = v32;
    }
    v42 = v93.m128i_i64[0];
    *(__m128i *)(v24 + 24) = si128;
    *(__m128i *)v24 = v27;
    *(_QWORD *)(v24 + 16) = v42;
    v43 = _mm_load_si128(&v107);
    *(_QWORD *)(v24 + 40) = a8;
    v44 = v108;
    *(__m128i *)(v24 + 48) = v43;
    v45 = _mm_loadu_si128(&v109);
    *(_QWORD *)(v24 + 64) = v44;
    *(__m128i *)(v24 + 88) = v45;
    *(_BYTE *)(v24 + 72) = v90;
    *(_QWORD *)(v24 + 80) = a10;
    ++v13[49];
  }
  else
  {
    n[0] = v98;
    v92.m128i_i64[0] = v99;
    v93.m128i_i64[0] = v101[0];
    if ( v101[0] )
    {
      v76 = v101[0];
      a4 = (void *)qalloc_or_throw(v101[0]);
      memcpy(a4, v100, v76);
      a8 = v102;
      v90 = v105;
      a10 = v106[0].m128i_i64[0];
    }
    v66 = *(_QWORD *)(a1 + 400);
    v67 = _mm_load_si128(&v103);
    v108 = v104;
    v68 = *(_QWORD *)(a1 + 392);
    v107 = v67;
    v109 = _mm_loadu_si128((const __m128i *)&v106[0].m128i_u64[1]);
    if ( v66 < v68 + 1 )
    {
      v69 = qvector_reserve(a1 + 384, 0, v68 + 1, 104);
      v77 = *(_QWORD *)(a1 + 400);
      *(_QWORD *)(a1 + 400) = v66;
      v78 = *(_QWORD *)(a1 + 392);
      v79 = *(_QWORD *)(a1 + 384);
      v93.m128i_i64[1] = v77;
      v80 = v78 - 1;
      if ( v80 >= 0 )
      {
        v81 = v69;
        do
        {
          *(__m128i *)v81 = _mm_loadu_si128((const __m128i *)v79);
          v82 = *(_QWORD *)(v79 + 16);
          v83 = _mm_loadu_si128((const __m128i *)(v79 + 24));
          *(_QWORD *)(v79 + 16) = 0;
          *(_QWORD *)(v81 + 16) = v82;
          *(__m128i *)(v81 + 24) = v83;
          v84 = *(_QWORD *)(v79 + 40);
          v85 = _mm_loadu_si128((const __m128i *)(v79 + 48));
          *(_QWORD *)(v79 + 32) = 0;
          *(_QWORD *)(v81 + 40) = v84;
          v86 = *(_QWORD *)(v79 + 64);
          *(__m128i *)(v81 + 48) = v85;
          v87 = _mm_loadu_si128((const __m128i *)(v79 + 88));
          *(_QWORD *)(v81 + 64) = v86;
          LOBYTE(v86) = *(_BYTE *)(v79 + 72);
          *(__m128i *)(v81 + 88) = v87;
          *(_BYTE *)(v81 + 72) = v86;
          *(_QWORD *)(v81 + 80) = *(_QWORD *)(v79 + 80);
          v88 = *(_QWORD *)(v79 + 16);
          if ( v88 )
          {
            *(_QWORD *)(v79 + 24) = 0;
            qfree(v88);
          }
          v79 += 104;
          v81 += 104;
          v41 = v80-- == 0;
        }
        while ( !v41 );
        v79 = v13[48];
      }
      qfree(v79);
      v89 = v93.m128i_i64[1];
      v13[48] = v69;
      v13[50] = v89;
      v68 = v13[49];
    }
    else
    {
      v69 = *(_QWORD *)(a1 + 384);
    }
    v70 = v69 + 104 * v68;
    *(__m128 *)v70 = _mm_loadh_ps((const double *)v92.m128i_i64);
    v71 = _mm_loadl_epi64(&v93);
    *(_QWORD *)(v70 + 16) = a4;
    *(_QWORD *)(v70 + 40) = a8;
    *(__m128i *)(v70 + 24) = _mm_unpacklo_epi64(v71, v71);
    v72 = v108;
    v73 = _mm_load_si128(&v107);
    *(_BYTE *)(v70 + 72) = v90;
    *(__m128i *)(v70 + 48) = v73;
    v74 = _mm_loadu_si128(&v109);
    *(_QWORD *)(v70 + 64) = v72;
    *(_QWORD *)(v70 + 80) = a10;
    *(__m128i *)(v70 + 88) = v74;
    v75 = v13[49] + 1LL;
    v13[49] = v75;
    v20 = v13[48] + 104 * v75 - 104;
  }
  if ( v100 )
  {
    v101[0] = 0;
    qfree(v100);
  }
  return v20;
}
