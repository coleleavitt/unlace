__int64 __fastcall sub_397990(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 strlist_api; // r14
  __int64 v13; // r12
  _QWORD *v14; // rbp
  __int16 v15; // ax
  __int64 v16; // r10
  int v17; // r8d
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  int v20; // edi
  _BYTE *v21; // rax
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  unsigned __int64 v27; // rbx
  __m128i si128; // xmm0
  __int64 v29; // rsi
  double v30; // xmm0_8
  __int64 v31; // r15
  unsigned __int64 v32; // rdx
  const char *v33; // rsi
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  size_t v38; // r9
  __int64 v39; // r8
  size_t v40; // r10
  __int64 v41; // rsi
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rsi
  __m128i v49; // xmm0
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  size_t v52; // r9
  __int64 v53; // r8
  size_t v54; // r10
  __int64 v55; // rsi
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  const char *v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // r8
  __int64 v66; // r15
  __m128i v67; // xmm0
  __int64 v68; // rbx
  __m128 v69; // xmm0
  int v70; // edi
  unsigned int v71; // ebx
  __int64 v73; // r8
  unsigned __int64 v74; // rdx
  __int64 v75; // rsi
  char v76; // al
  unsigned __int64 v77; // rbx
  int v78; // r13d
  _BYTE *v79; // rsi
  char v80; // r15
  __int64 v81; // rax
  double v82; // xmm0_8
  const char *v83; // rdx
  const char *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __m128 v89; // xmm4
  __m128 v90; // xmm5
  void *v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rax
  char v97; // [rsp+0h] [rbp-F8h]
  char v98; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v99; // [rsp+8h] [rbp-F0h]
  __int64 v100; // [rsp+8h] [rbp-F0h]
  __int64 v101; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v102; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v103; // [rsp+8h] [rbp-F0h]
  __int64 v104; // [rsp+8h] [rbp-F0h]
  __int64 v105; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v106; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v107; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v108; // [rsp+8h] [rbp-F0h]
  __int64 v109; // [rsp+10h] [rbp-E8h]
  __int64 v110; // [rsp+10h] [rbp-E8h]
  __int64 v111; // [rsp+10h] [rbp-E8h]
  __int64 v112; // [rsp+10h] [rbp-E8h]
  __int64 v113; // [rsp+10h] [rbp-E8h]
  __int64 v114; // [rsp+10h] [rbp-E8h]
  size_t v115; // [rsp+10h] [rbp-E8h]
  size_t v116; // [rsp+10h] [rbp-E8h]
  __int64 v117; // [rsp+18h] [rbp-E0h]
  __int64 v118; // [rsp+18h] [rbp-E0h]
  __int64 v119; // [rsp+18h] [rbp-E0h]
  __int64 v120; // [rsp+18h] [rbp-E0h]
  size_t v121; // [rsp+18h] [rbp-E0h]
  size_t v122; // [rsp+28h] [rbp-D0h]
  __int64 v123; // [rsp+28h] [rbp-D0h]
  __int16 v124; // [rsp+3Ch] [rbp-BCh] BYREF
  unsigned __int16 v125; // [rsp+3Eh] [rbp-BAh] BYREF
  const char *v126; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v127; // [rsp+48h] [rbp-B0h]
  __int64 v128; // [rsp+60h] [rbp-98h] BYREF
  __int128 v129; // [rsp+68h] [rbp-90h]
  void *v130; // [rsp+80h] [rbp-78h] BYREF
  __int128 v131; // [rsp+88h] [rbp-70h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v133; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v134; // [rsp+B8h] [rbp-40h]

  v134 = __readfsqword(0x28u);
  strlist_api = get_strlist_api(a1, a2, a3, a4);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)strlist_api + 24LL))(strlist_api);
  v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)strlist_api + 16LL))(strlist_api);
  v15 = *(_BYTE *)(v13 + 32) != 0;
  if ( *(_BYTE *)(v13 + 34) )
    v15 |= 2u;
  if ( *(_BYTE *)(v13 + 33) )
    v15 |= 4u;
  v16 = v14[1];
  v124 = v15;
  if ( v16 )
  {
    v17 = 0;
    v18 = 0;
    v19 = (_BYTE *)(*(_QWORD *)v13 + *(_QWORD *)(v13 + 8));
    do
    {
      v20 = 1 << v18;
      if ( *(_BYTE **)v13 == v19 )
        goto LABEL_69;
      v21 = *(_BYTE **)v13;
      while ( *(_BYTE *)(*v14 + v18) != *v21 )
      {
        if ( v19 == ++v21 )
          goto LABEL_69;
      }
      if ( v19 == v21 )
LABEL_69:
        v17 &= ~v20;
      else
        v17 |= v20;
      ++v18;
    }
    while ( v18 != v16 );
  }
  else
  {
    LOWORD(v17) = 0;
  }
  v22 = *(_DWORD *)(v13 + 24);
  v125 = v17;
  v126 = nullptr;
  v127 = 0;
  sub_169A50((__int64 *)&v126, (__int64)"%d", v22);
  v129 = 0;
  v128 = 0;
  v23 = qvector_reserve(&v128, 0, 153, 1);
  v128 = v23;
  v27 = 0;
  *(_QWORD *)&v129 = 153;
  *(__m128i *)v23 = _mm_load_si128((const __m128i *)&xmmword_5DD410);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD420);
  v29 = v128;
  *(_QWORD *)(v23 + 144) = 0xA3E3E433A73676ELL;
  *(__m128i *)(v23 + 16) = si128;
  *(__m128i *)(v23 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DD430);
  *(__m128i *)(v23 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DD440);
  *(__m128i *)(v23 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DD450);
  *(__m128i *)(v23 + 80) = _mm_load_si128((const __m128i *)&xmmword_5DD460);
  *(__m128i *)(v23 + 96) = _mm_load_si128((const __m128i *)&xmmword_5DD470);
  *(__m128i *)(v23 + 112) = _mm_load_si128((const __m128i *)&xmmword_5DD480);
  *(__m128i *)(v23 + 128) = _mm_load_si128((const __m128i *)&xmmword_5DD490);
  *(_BYTE *)(v29 + 152) = 0;
  if ( v14[1] )
  {
    while ( 1 )
    {
      v31 = v129;
      v32 = 2;
      if ( (_QWORD)v129 )
      {
        v32 = v129 + 1;
        v31 = v129 - 1;
      }
      if ( *((_QWORD *)&v129 + 1) < v32 )
      {
        v99 = v32;
        v128 = qvector_reserve(&v128, v29, v32, 1);
        v32 = v99;
        v29 = v128;
      }
      *(_QWORD *)&v129 = v32;
      v30 = 0.0;
      *(_BYTE *)(v29 + v31) = 60;
      *(_BYTE *)(v128 + v31 + 1) = 0;
      v130 = nullptr;
      src = nullptr;
      v131 = 0;
      v133 = 0;
      v33 = (const char *)*(unsigned __int8 *)(*v14 + v27);
      if ( !(unsigned __int8)print_strlit_type(&v130, v33, &src, 0) )
      {
        if ( src )
        {
          *(_QWORD *)&v133 = 0;
          v30 = qfree(src, v33);
        }
        if ( v130 )
        {
          *(_QWORD *)&v131 = 0;
          qfree(v130, v33, v30);
        }
        goto LABEL_20;
      }
      v34 = v129;
      v35 = 2;
      if ( (_QWORD)v129 )
      {
        v35 = v129 + 1;
        v34 = v129 - 1;
      }
      v36 = v128;
      if ( *((_QWORD *)&v129 + 1) < v35 )
      {
        v111 = v34;
        v102 = v35;
        v128 = qvector_reserve(&v128, v128, v35, 1);
        v34 = v111;
        v36 = v128;
        v35 = v102;
      }
      *(_QWORD *)&v129 = v35;
      *(_BYTE *)(v36 + v34) = 35;
      *(_BYTE *)(v128 + v34 + 1) = 0;
      v37 = v133;
      if ( (_QWORD)v133 )
      {
        v38 = v133 - 1;
        if ( (_QWORD)v133 != 1 )
        {
          v39 = v129;
          v40 = v133 - 1;
          if ( (_QWORD)v129 )
          {
            v39 = v129 - 1;
            v40 = v38 + v129 - 1;
            v37 = v133 + v129 - 1;
          }
          v41 = v128;
          if ( *((_QWORD *)&v129 + 1) < v37 )
          {
            v123 = v39;
            v121 = v133 - 1;
            v116 = v40;
            v108 = v37;
            v128 = qvector_reserve(&v128, v128, v37, 1);
            v39 = v123;
            v41 = v128;
            v38 = v121;
            v40 = v116;
            v37 = v108;
          }
          *(_QWORD *)&v129 = v37;
          *(_BYTE *)(v41 + v40) = 0;
          memcpy((void *)(v39 + v128), src, v38);
        }
      }
      v42 = v129;
      v43 = 2;
      if ( (_QWORD)v129 )
      {
        v43 = v129 + 1;
        v42 = v129 - 1;
      }
      v44 = v128;
      if ( *((_QWORD *)&v129 + 1) < v43 )
      {
        v112 = v42;
        v103 = v43;
        v128 = qvector_reserve(&v128, v128, v43, 1);
        v42 = v112;
        v44 = v128;
        v43 = v103;
      }
      *(_QWORD *)&v129 = v43;
      *(_BYTE *)(v44 + v42) = 35;
      *(_BYTE *)(v128 + v42 + 1) = 0;
      if ( !v27 )
        break;
LABEL_45:
      v51 = v131;
      if ( (_QWORD)v131 )
      {
        v52 = v131 - 1;
        if ( (_QWORD)v131 != 1 )
        {
          v53 = v129;
          v54 = v131 - 1;
          if ( (_QWORD)v129 )
          {
            v53 = v129 - 1;
            v54 = v52 + v129 - 1;
            v51 = v131 + v129 - 1;
          }
          v55 = v128;
          if ( *((_QWORD *)&v129 + 1) < v51 )
          {
            v122 = v54;
            v120 = v53;
            v115 = v131 - 1;
            v107 = v51;
            v128 = qvector_reserve(&v128, v128, v51, 1);
            v54 = v122;
            v55 = v128;
            v53 = v120;
            v52 = v115;
            v51 = v107;
          }
          *(_QWORD *)&v129 = v51;
          *(_BYTE *)(v55 + v54) = 0;
          memcpy((void *)(v53 + v128), v130, v52);
        }
      }
      v56 = v129;
      if ( (_QWORD)v129 )
      {
        v57 = v129 + 1;
        v58 = v129 + 2;
        v59 = v128;
        v56 = v129 - 1;
        if ( *((_QWORD *)&v129 + 1) >= (unsigned __int64)(v129 + 2) )
          goto LABEL_54;
      }
      else
      {
        v59 = v128;
        v58 = 3;
        v57 = 2;
        if ( *((_QWORD *)&v129 + 1) >= 3u )
          goto LABEL_54;
      }
      v118 = v57;
      v110 = v56;
      v101 = v58;
      v128 = qvector_reserve(&v128, v59, v58, 1);
      v57 = v118;
      v59 = v128;
      v56 = v110;
      v58 = v101;
LABEL_54:
      *(_QWORD *)&v129 = v58;
      *(_BYTE *)(v59 + v57) = 0;
      *(_WORD *)(v128 + v56) = 17210;
      if ( v14[1] - 1LL == v27 )
      {
        v73 = v129;
        v74 = 2;
        if ( (_QWORD)v129 )
        {
          v74 = v129 + 1;
          v73 = v129 - 1;
        }
        v75 = v128;
        if ( *((_QWORD *)&v129 + 1) < v74 )
        {
          v114 = v73;
          v106 = v74;
          v128 = qvector_reserve(&v128, v128, v74, 1);
          v73 = v114;
          v75 = v128;
          v74 = v106;
        }
        *(_QWORD *)&v129 = v74;
        *(_BYTE *)(v75 + v73) = 62;
        *(_BYTE *)(v128 + v73 + 1) = 0;
      }
      v60 = v129;
      if ( (_QWORD)v129 )
      {
        v61 = v129 + 1;
        v62 = v129 + 2;
        v63 = (const char *)v128;
        v60 = v129 - 1;
        if ( *((_QWORD *)&v129 + 1) < (unsigned __int64)(v129 + 2) )
          goto LABEL_71;
      }
      else
      {
        v63 = (const char *)v128;
        v62 = 3;
        v61 = 2;
        if ( *((_QWORD *)&v129 + 1) < 3u )
        {
LABEL_71:
          v117 = v61;
          v109 = v60;
          v100 = v62;
          v128 = qvector_reserve(&v128, v63, v62, 1);
          v61 = v117;
          v63 = (const char *)v128;
          v60 = v109;
          v62 = v100;
        }
      }
      *(_QWORD *)&v129 = v62;
      v63[v61] = 0;
      v24 = 2622;
      *(_WORD *)(v128 + v60) = 2622;
      if ( src )
      {
        *(_QWORD *)&v133 = 0;
        qfree(src, v63);
      }
      if ( v130 )
      {
        *(_QWORD *)&v131 = 0;
        ++v27;
        qfree(v130, v63);
        v29 = v128;
        if ( v27 >= v14[1] )
          goto LABEL_61;
      }
      else
      {
LABEL_20:
        v29 = v128;
        if ( ++v27 >= v14[1] )
          goto LABEL_61;
      }
    }
    v45 = v129;
    if ( (_QWORD)v129 )
    {
      v46 = v129 + 20;
      v47 = v129 + 21;
      v48 = v128;
      v45 = v129 - 1;
      if ( *((_QWORD *)&v129 + 1) >= (unsigned __int64)(v129 + 21) )
      {
LABEL_44:
        v49 = _mm_load_si128((const __m128i *)&xmmword_5DD4A0);
        *(_QWORD *)&v129 = v47;
        *(_BYTE *)(v48 + v46) = 0;
        v50 = v128 + v45;
        *(__m128i *)v50 = v49;
        *(_QWORD *)(v50 + 13) = 0x2373657079742067LL;
        goto LABEL_45;
      }
    }
    else
    {
      v48 = v128;
      v47 = 22;
      v46 = 21;
      if ( *((_QWORD *)&v129 + 1) >= 0x16u )
        goto LABEL_44;
    }
    v119 = v46;
    v113 = v45;
    v104 = v47;
    v128 = qvector_reserve(&v128, v48, v47, 1);
    v46 = v119;
    v48 = v128;
    v45 = v113;
    v47 = v104;
    goto LABEL_44;
  }
LABEL_61:
  v64 = v129;
  if ( (_QWORD)v129 )
  {
    v65 = v129 + 31;
    v66 = v129 + 32;
    v64 = v129 - 1;
    if ( *((_QWORD *)&v129 + 1) >= (unsigned __int64)(v129 + 32) )
      goto LABEL_63;
  }
  else
  {
    v66 = 33;
    v65 = 32;
    if ( *((_QWORD *)&v129 + 1) >= 0x21u )
      goto LABEL_63;
  }
  v105 = v65;
  v128 = qvector_reserve(&v128, v29, v66, 1);
  v65 = v105;
  v29 = v128;
LABEL_63:
  v67 = _mm_load_si128((const __m128i *)&xmmword_5DD4B0);
  *(_QWORD *)&v129 = v66;
  *(_BYTE *)(v29 + v65) = 0;
  v68 = v128 + v64;
  *(__m128i *)v68 = v67;
  v69 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD4C0);
  v70 = v128;
  *(__m128 *)(v68 + 16) = v69;
  v71 = sub_1697D0(
          v70,
          (__int64)&v124,
          (__int64)&v125,
          (__int64)&v126,
          v65,
          v24,
          v69,
          a6,
          a7,
          a8,
          v25,
          v26,
          a11,
          a12,
          v97);
  if ( !v71 )
  {
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      *(double *)v69.m128_u64 = qfree(v128, (const char *)&v124);
    }
    if ( v126 )
    {
      *(_QWORD *)&v127 = 0;
      qfree(v126, (const char *)&v124, *(double *)v69.m128_u64);
    }
    return v71;
  }
  v76 = v124;
  v77 = 0;
  v78 = v125;
  *(_QWORD *)(v13 + 8) = 0;
  *(_BYTE *)(v13 + 32) = v76 & 1;
  *(_BYTE *)(v13 + 33) = (v76 & 4) != 0;
  for ( *(_BYTE *)(v13 + 34) = (v76 & 2) != 0; v77 < v14[1]; ++*(_QWORD *)(v13 + 8) )
  {
    while ( !_bittest(&v78, v77) )
    {
      if ( ++v77 >= v14[1] )
        goto LABEL_90;
    }
    v79 = *(_BYTE **)v13;
    v80 = *(_BYTE *)(*v14 + v77);
    v81 = *(_QWORD *)(v13 + 8);
    if ( *(_QWORD *)(v13 + 16) < (unsigned __int64)(v81 + 1) )
    {
      v96 = qvector_reserve(v13, v79, v81 + 1, 1);
      *(_QWORD *)v13 = v96;
      v79 = (_BYTE *)v96;
      v81 = *(_QWORD *)(v13 + 8);
    }
    v79[v81] = v80;
    ++v77;
  }
LABEL_90:
  v82 = 0.0;
  src = nullptr;
  v83 = &s1;
  v133 = 0;
  if ( (_QWORD)v127 )
    v83 = v126;
  v84 = (const char *)xmmword_8CC810;
  if ( (unsigned __int8)eval_expr_long(&v130, xmmword_8CC810, v83, &src) )
  {
    v91 = v130;
    if ( (__int64)v130 > 0 )
      goto LABEL_97;
    sub_169630(
      (int)"The minimal string length is set to 1",
      (__int64)v84,
      v85,
      v86,
      v87,
      v88,
      (__m128)0LL,
      a6,
      a7,
      a8,
      v89,
      v90,
      a11,
      a12,
      v98);
  }
  else
  {
    v84 = &s1;
    if ( (_QWORD)v133 )
      v84 = (const char *)src;
    sub_169630((int)"%s", (__int64)v84, v85, v86, v87, v88, (__m128)0LL, a6, a7, a8, v89, v90, a11, a12, v98);
  }
  v130 = &dword_0 + 1;
  v91 = &dword_0 + 1;
LABEL_97:
  if ( src )
  {
    *(_QWORD *)&v133 = 0;
    v82 = qfree(src, v84);
  }
  *(_QWORD *)(v13 + 24) = v91;
  (*(void (__fastcall **)(__int64, double))(*(_QWORD *)strlist_api + 32LL))(strlist_api, v82);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    v82 = qfree(v128, v84);
  }
  v94 = (__int64)v126;
  if ( v126 )
  {
    *(_QWORD *)&v127 = 0;
    v82 = qfree(v126, v84, v82);
  }
  v95 = get_strlist_api(v94, v84, v92, v93);
  v71 = 1;
  (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v95 + 88LL))(v95, v82);
  sub_5110E0(16, 0, 0);
  return v71;
}
