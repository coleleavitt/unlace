__int64 __fastcall sub_292E80(__int64 a1, __int64 *a2, __int64 a3, signed int a4, double a5, __m128i a6)
{
  __int64 v7; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v12)(__int64); // rax
  signed int v13; // eax
  int *v14; // r13
  int v15; // eax
  _QWORD *v16; // rdi
  __int64 (__fastcall *v17)(__int64, int); // rax
  int v18; // eax
  double v19; // xmm0_8
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, int, int); // rax
  int v23; // r14d
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // r15d
  unsigned int v28; // ebp
  __int64 v29; // rax
  unsigned __int64 v30; // xmm3_8
  int v31; // edx
  __int64 v32; // rax
  int v33; // ecx
  __m128i v34; // xmm0
  int v35; // eax
  signed int v36; // r14d
  __m128i v37; // xmm2
  int v38; // eax
  unsigned __int64 v39; // rbp
  _DWORD *v40; // r12
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rsi
  const char *v47; // rsi
  signed int v48; // eax
  __int64 v50; // r14
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rsi
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // edx
  __int64 v58; // rsi
  int v59; // ecx
  int v60; // eax
  __int64 v61; // rdx
  int v62; // edx
  unsigned __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdi
  _DWORD *v67; // rsi
  _DWORD *v68; // rdx
  int v69; // ecx
  __int64 v70; // rax
  int v71; // r14d
  __int64 i; // rdx
  __int64 v73; // rcx
  __int64 v74; // r15
  __int64 v75; // rcx
  __int64 v76; // rax
  const char *v77; // rsi
  __int64 *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  bool v82; // cf
  __int64 v83; // rsi
  int v84; // edx
  __int64 v85; // rax
  __int64 v86; // rax
  const char *v87; // rsi
  int v88; // edx
  signed int v89; // eax
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  const char *v92; // rsi
  __int64 *v93; // rdi
  __int64 v94; // rax
  _DWORD *v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  const char *v98; // rsi
  __int64 *v99; // rdi
  __int64 v100; // rax
  _DWORD *v101; // rdx
  __int64 v102; // rcx
  unsigned int v103; // [rsp+0h] [rbp-C8h]
  __int64 v104; // [rsp+8h] [rbp-C0h]
  __m128i v105; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v106; // [rsp+20h] [rbp-A8h]
  __int64 v107; // [rsp+28h] [rbp-A0h]
  signed int v108; // [rsp+30h] [rbp-98h]
  signed int v109; // [rsp+34h] [rbp-94h]
  unsigned __int64 v110; // [rsp+38h] [rbp-90h]
  __int64 v111; // [rsp+40h] [rbp-88h]
  __int64 v112; // [rsp+48h] [rbp-80h]
  __int64 v113; // [rsp+50h] [rbp-78h] BYREF
  __int128 v114; // [rsp+58h] [rbp-70h]
  __int64 v115; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v116; // [rsp+78h] [rbp-50h]
  unsigned __int64 v117; // [rsp+88h] [rbp-40h]

  v7 = a3 >> 32;
  v9 = *a2;
  v111 = a3;
  v108 = a4;
  v117 = __readfsqword(0x28u);
  v10 = *(_QWORD *)v9;
  v109 = a3;
  v110 = a3;
  v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(v10 + 152);
  v107 = v7;
  if ( v11 == interactive_graph_t__::vfunc_19 )
  {
    v12 = *(__int64 (__fastcall **)(__int64))(v10 + 56);
    if ( v12 == interactive_graph_t__::vfunc_7 )
      v13 = *(_DWORD *)(v9 + 184);
    else
      v13 = v12(v9);
    if ( v108 >= v13 )
      sub_16B930((__int64)"nrect(%d) failed", v108);
    v14 = (int *)(*(_QWORD *)(v9 + 224) + 16LL * v108);
  }
  else
  {
    v14 = (int *)v11(v9, v108);
  }
  v15 = v14[3] + v107 + 30 - v14[1];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v16 = (_QWORD *)*a2;
  LODWORD(v112) = v15;
  v17 = *(__int64 (__fastcall **)(__int64, int))(*v16 + 96LL);
  if ( v17 == interactive_graph_t__::vfunc_12 )
    v18 = *(_DWORD *)(v16[22] + 24LL * v108 + 8);
  else
    v18 = v17((__int64)v16, v108);
  v113 = 0;
  v19 = 0.0;
  v104 = v18;
  v114 = 0;
  if ( !v18 )
  {
    v25 = v14[2];
    goto LABEL_86;
  }
  v20 = 0;
  v106 = 24LL * v108;
  do
  {
    v21 = *a2;
    v22 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)*a2 + 112LL);
    if ( v22 == interactive_graph_t__::vfunc_14 )
      v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 176) + v106) + 4LL * (int)v20);
    else
      v103 = v22(v21, v108, v20);
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2[1] + 8LL))(
                      a2[1],
                      (unsigned int)v108,
                      v103) != 1 )
      goto LABEL_13;
    v50 = (v112 << 32) | (unsigned int)v110;
    sub_292E80(&v115, a2, v50, v103);
    v51 = v116;
    v52 = *(_QWORD *)(a1 + 8);
    if ( v116 <= v52 )
      LODWORD(v52) = v116;
    if ( (_DWORD)v52 )
    {
      if ( (int)v52 <= 0 )
      {
        v57 = -2147483637;
      }
      else
      {
        v53 = (unsigned int)(v52 - 1);
        v54 = 0x7FFFFFFF;
        v55 = 0;
        do
        {
          if ( v54 > *(_DWORD *)(v115 + 8 * v55) - *(_DWORD *)(*(_QWORD *)a1 + 8 * v55 + 4) )
            v54 = *(_DWORD *)(v115 + 8 * v55) - *(_DWORD *)(*(_QWORD *)a1 + 8 * v55 + 4);
          v56 = v55++;
        }
        while ( v53 != v56 );
        v57 = 10 - v54;
        if ( v54 == 10 )
          goto LABEL_48;
      }
    }
    else
    {
      v57 = 10;
    }
    a6.m128i_i64[0] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v57), 224).m128i_u64[0];
    v105.m128i_i64[0] = a6.m128i_i64[0];
    sub_292980(a2, v103, v57);
    if ( !v116 )
      goto LABEL_80;
    a6 = _mm_loadl_epi64(&v105);
    v84 = 0;
    v85 = 0;
    do
    {
      ++v84;
      *(_QWORD *)&v19 = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(v115 + 8 * v85)), a6).m128i_u64[0];
      *(double *)(v115 + 8 * v85) = v19;
      v51 = v116;
      v85 = v84;
    }
    while ( v84 < v116 );
LABEL_48:
    if ( v51 )
    {
      v58 = v115;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      do
      {
        v62 = *(_DWORD *)(v115 + 8 * v61 + 4);
        if ( v60 < v62 )
          v60 = v62;
        v61 = ++v59;
      }
      while ( v59 < v51 );
      v110 = (unsigned int)(v60 + 10) | v50 & 0xFFFFFFFF00000000LL;
      v63 = *(_QWORD *)(a1 + 8);
      if ( v51 <= v63 )
        LODWORD(v63) = v51;
      if ( (int)v63 > 0 )
      {
        v64 = (unsigned int)(v63 - 1);
        v65 = 0;
        v66 = 8 * v64;
        while ( 1 )
        {
          v67 = (_DWORD *)(v65 + v58);
          v68 = (_DWORD *)(v65 + *(_QWORD *)a1);
          if ( *v68 > *v67 )
            *v68 = *v67;
          v69 = v67[1];
          if ( v68[1] < v69 )
            v68[1] = v69;
          if ( v65 == v66 )
            break;
          v58 = v115;
          v65 += 8;
        }
      }
      v70 = *(_QWORD *)(a1 + 8);
      v71 = v70;
      for ( i = (int)v70; v71 < v116; *(_QWORD *)(a1 + 8) = v70 )
      {
        v74 = *(_QWORD *)(v115 + 8 * i);
        if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v70 + 1) )
        {
          v73 = *(_QWORD *)a1;
        }
        else
        {
          v105.m128i_i64[0] = *(_QWORD *)(a1 + 16);
          v75 = qvector_reserve(a1, 0, v70 + 1, 8);
          v76 = *(_QWORD *)(a1 + 8);
          v77 = *(const char **)(a1 + 16);
          v78 = *(__int64 **)a1;
          *(_QWORD *)(a1 + 16) = v105.m128i_i64[0];
          v79 = v76 - 1;
          if ( v79 >= 0 )
          {
            v80 = v75;
            do
            {
              v81 = *v78;
              v80 += 8;
              ++v78;
              *(_QWORD *)(v80 - 8) = v81;
              v82 = v79-- == 0;
            }
            while ( !v82 );
            v78 = *(__int64 **)a1;
          }
          v105.m128i_i64[1] = v75;
          v105.m128i_i64[0] = (__int64)v77;
          v19 = qfree(v78, v77);
          v73 = v105.m128i_i64[1];
          v83 = v105.m128i_i64[0];
          v70 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v105.m128i_i64[1];
          *(_QWORD *)(a1 + 16) = v83;
        }
        *(_QWORD *)(v73 + 8 * v70) = v74;
        i = ++v71;
        v70 = *(_QWORD *)(a1 + 8) + 1LL;
      }
      goto LABEL_81;
    }
LABEL_80:
    v110 = v50 & 0xFFFFFFFF00000000LL | 0xA;
LABEL_81:
    v86 = v114;
    v87 = (const char *)v113;
    if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)(v114 + 1) )
    {
      v113 = qvector_reserve(&v113, v113, v114 + 1, 4);
      v87 = (const char *)v113;
      v86 = v114;
    }
    *(_DWORD *)&v87[4 * v86] = v103;
    *(_QWORD *)&v114 = v114 + 1;
    if ( v115 )
    {
      v116 = 0;
      v19 = qfree(v115, v87);
    }
LABEL_13:
    ++v20;
  }
  while ( v104 != v20 );
  v23 = v14[2];
  v24 = *v14;
  v25 = v23;
  if ( !(_QWORD)v114 )
  {
LABEL_86:
    v88 = v14[1];
    v89 = v111 + v25 - *v14;
    *(_QWORD *)v14 = v111;
    v14[2] = v89;
    v36 = v89;
    v38 = v14[3] + v107 - v88;
    goto LABEL_22;
  }
  v26 = **(_DWORD **)a1 + (v24 + *(_DWORD *)(*(_QWORD *)a1 + 4LL) - **(_DWORD **)a1 - v23) / 2;
  if ( v26 >= (int)v111 )
  {
    v109 = **(_DWORD **)a1 + (v24 + *(_DWORD *)(*(_QWORD *)a1 + 4LL) - **(_DWORD **)a1 - v23) / 2;
  }
  else
  {
    v27 = 0;
    v28 = v111 - v26;
    v29 = 0;
    v30 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v28), 224).m128i_u64[0];
    do
    {
      sub_292980(a2, *(_DWORD *)(v113 + 4 * v29), v28);
      v29 = ++v27;
    }
    while ( v27 < (unsigned __int64)v114 );
    v31 = 0;
    v32 = 0;
    for ( a6.m128i_i64[0] = v30; (unsigned __int64)v31 < *(_QWORD *)(a1 + 8); v32 = v31 )
    {
      ++v31;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v32) = _mm_add_epi32(
                                               _mm_loadl_epi64((const __m128i *)(*(_QWORD *)a1 + 8 * v32)),
                                               (__m128i)v30).m128i_u64[0];
    }
    v23 = v14[2];
    v24 = *v14;
  }
  v33 = v14[1];
  v34 = _mm_cvtsi32_si128(v109);
  v35 = v107;
  v36 = v109 + v23 - v24;
  v37 = _mm_cvtsi32_si128(v107);
  v14[2] = v36;
  *(_QWORD *)&v19 = _mm_unpacklo_epi32(v34, v37).m128i_u64[0];
  v38 = v14[3] + v35 - v33;
  *(double *)v14 = v19;
LABEL_22:
  v14[3] = v38;
  v39 = *(_QWORD *)(a1 + 8);
  v40 = *(_DWORD **)a1;
  v41 = (int)v39 + 1;
  if ( v39 != v41 )
  {
    v115 = 0;
    if ( v41 >= v39 )
    {
      v42 = *(_QWORD *)(a1 + 16);
      if ( &v115 < (__int64 *)v40 || &v115 >= (__int64 *)&v40[2 * v42] )
      {
        v43 = v39;
        if ( v42 < v41 )
        {
          v40 = (_DWORD *)qvector_reserve(a1, 0, (int)v39 + 1, 8);
          v91 = *(_QWORD *)(a1 + 8);
          v92 = *(const char **)(a1 + 16);
          *(_QWORD *)(a1 + 16) = v42;
          v93 = *(__int64 **)a1;
          v94 = v91 - 1;
          if ( v94 >= 0 )
          {
            v95 = v40;
            do
            {
              v96 = *v93;
              v95 += 2;
              ++v93;
              *((_QWORD *)v95 - 1) = v96;
              v82 = v94-- == 0;
            }
            while ( !v82 );
            v93 = *(__int64 **)a1;
          }
          v19 = qfree(v93, v92, v19, *(double *)a6.m128i_i64);
          v43 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v40;
          *(_QWORD *)(a1 + 16) = v92;
        }
        if ( v43 < v41 )
        {
          do
          {
            *(_QWORD *)&v40[2 * v43++] = v115;
            v40 = *(_DWORD **)a1;
          }
          while ( v41 != v43 );
        }
      }
      else
      {
        v90 = v39;
        if ( v42 < v41 )
        {
          v40 = (_DWORD *)qvector_reserve(a1, 0, (int)v39 + 1, 8);
          v97 = *(_QWORD *)(a1 + 8);
          v98 = *(const char **)(a1 + 16);
          *(_QWORD *)(a1 + 16) = v42;
          v99 = *(__int64 **)a1;
          v100 = v97 - 1;
          if ( v100 >= 0 )
          {
            v101 = v40;
            do
            {
              v102 = *v99;
              v101 += 2;
              ++v99;
              *((_QWORD *)v101 - 1) = v102;
              v82 = v100-- == 0;
            }
            while ( !v82 );
            v99 = *(__int64 **)a1;
          }
          v19 = qfree(v99, v98, v19, *(double *)a6.m128i_i64);
          v90 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v40;
          *(_QWORD *)(a1 + 16) = v98;
        }
        if ( v90 < v41 )
        {
          do
          {
            *(_QWORD *)&v40[2 * v90++] = 0;
            v40 = *(_DWORD **)a1;
          }
          while ( v41 != v90 );
        }
      }
    }
    *(_QWORD *)(a1 + 8) = v41;
  }
  v44 = (unsigned int)(v39 - 1);
  if ( (int)v39 - 1 >= 0 )
  {
    v45 = v39;
    v44 = 8LL * (int)v44;
    do
    {
      v46 = *(_QWORD *)((char *)v40 + v44);
      v44 -= 8;
      *(_QWORD *)&v40[2 * v45] = v46;
      v40 = *(_DWORD **)a1;
      --v45;
    }
    while ( v45 );
  }
  v47 = (const char *)(unsigned int)v109;
  v48 = v109;
  if ( v36 <= v109 )
    v48 = v36;
  if ( v36 < v109 )
    v36 = v109;
  *v40 = v48;
  v40[1] = v36;
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113, v47, v44, v19, *(double *)a6.m128i_i64);
  }
  return a1;
}
