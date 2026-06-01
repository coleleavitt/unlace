unsigned __int64 __fastcall sub_501100(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9,
        unsigned __int64 a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v15; // r12
  void *v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm1
  void *v21; // rdi
  char v22; // al
  __int64 v24; // rbx
  void *v25; // rbp
  void *v26; // rdi
  __m128i v27; // xmm0
  __m128i *v28; // rax
  int v29; // ebx
  __int64 v30; // r13
  int v31; // r12d
  bool v32; // zf
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // r13
  int v37; // r12d
  __m128i *v38; // rsi
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rax
  char v45; // al
  __int64 v46; // rax
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // ebx
  __int64 v55; // r13
  int v56; // r12d
  __m128i *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  char v65; // dl
  unsigned __int64 v66; // rcx
  _QWORD *v67; // rax
  unsigned __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  __m128i v90; // [rsp+0h] [rbp-1D8h] BYREF
  __m128i *v91; // [rsp+10h] [rbp-1C8h]
  __int64 v92; // [rsp+18h] [rbp-1C0h]
  __m128i v93; // [rsp+20h] [rbp-1B8h] BYREF
  __m128i v94; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v95; // [rsp+40h] [rbp-198h]
  __m128i v96; // [rsp+50h] [rbp-188h] BYREF
  __int64 v97; // [rsp+60h] [rbp-178h]
  __m128i v98; // [rsp+70h] [rbp-168h] BYREF
  __int64 v99; // [rsp+80h] [rbp-158h]
  __m128i v100; // [rsp+90h] [rbp-148h] BYREF
  __int64 v101; // [rsp+A0h] [rbp-138h]
  __m128i v102; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-118h]
  __m128i v104; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v105; // [rsp+E0h] [rbp-F8h]
  __m128i v106; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v107; // [rsp+100h] [rbp-D8h]
  __m128i v108; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+120h] [rbp-B8h]
  __m128i v110; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v111; // [rsp+140h] [rbp-98h]
  __m128i v112; // [rsp+150h] [rbp-88h] BYREF
  __int64 v113; // [rsp+160h] [rbp-78h]
  __int64 src; // [rsp+170h] [rbp-68h] BYREF
  __m128i src_8; // [rsp+178h] [rbp-60h] BYREF
  char v116; // [rsp+188h] [rbp-50h]
  unsigned __int64 v117; // [rsp+198h] [rbp-40h]

  v15 = a3;
  v90.m128i_i64[0] = a12;
  v92 = a13;
  v117 = __readfsqword(0x28u);
  sub_500FC0((__int64)&src, a1, a10, a11, a4);
  v18 = *(void **)a2;
  v19 = src;
  v20 = _mm_loadu_si128(&src_8);
  src = 0;
  src_8 = 0;
  if ( v18 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v91 = (__m128i *)v19;
    v93 = v20;
    qfree(v18);
    v20 = _mm_load_si128(&v93);
    v21 = (void *)src;
    *(_QWORD *)a2 = v91;
    v91 = (__m128i *)(a2 + 8);
    v22 = v116;
    *(__m128i *)(a2 + 8) = v20;
    *(_BYTE *)(a2 + 24) = v22;
    if ( v21 )
    {
      src_8.m128i_i64[0] = 0;
      qfree(v21);
      v22 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    *(_QWORD *)a2 = v19;
    v91 = (__m128i *)(a2 + 8);
    v22 = v116;
    *(__m128i *)(a2 + 8) = v20;
    *(_BYTE *)(a2 + 24) = v22;
  }
  if ( !v22 )
  {
    if ( !under_debugger )
      interr(2897);
LABEL_182:
    BUG();
  }
  if ( (unsigned __int8)(v22 - 1) <= 1u )
    return v117 - __readfsqword(0x28u);
  if ( (unsigned __int8)(v22 - 3) <= 6u )
  {
    *(_BYTE *)(a2 + 24) = 4;
    v29 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v30 = *(_QWORD *)(a6 + 16);
    v31 = *(unsigned __int16 *)(a6 + 24);
    v32 = *(_BYTE *)(a6 + 81) == 5;
    src = -1;
    src_8.m128i_i64[0] = v30;
    src_8.m128i_i16[4] = v31;
    if ( v32 )
      v29 = *(_BYTE *)(a6 + 121) == 0;
    v33 = *(_QWORD *)a2;
    v34 = *(_QWORD *)(a2 + 16);
    src_8.m128i_i16[5] = v29;
    if ( (unsigned __int64)&src >= v33 && (unsigned __int64)&src < v33 + 24 * v34 )
    {
      if ( !v34 )
      {
        v60 = qvector_reserve(a2, v33, 1, 24);
        v61 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v60;
        v33 = v60 + 24 * v61;
      }
      *(_QWORD *)v33 = -1;
      *(_QWORD *)(v33 + 8) = v30;
      *(_DWORD *)(v33 + 16) = v31 | (v29 << 16);
    }
    else
    {
      if ( !v34 )
      {
        v52 = qvector_reserve(a2, v33, 1, 24);
        v53 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v52;
        v33 = v52 + 24 * v53;
      }
      *(__m128i *)v33 = _mm_load_si128((const __m128i *)&src);
      *(_QWORD *)(v33 + 16) = src_8.m128i_i64[1];
    }
    ++*(_QWORD *)(a2 + 8);
    return v117 - __readfsqword(0x28u);
  }
  sub_500FC0((__int64)&src, a1, a10, a11, a5);
  if ( !v116 )
  {
    if ( !under_debugger )
      interr(2898);
    goto LABEL_182;
  }
  if ( (unsigned __int8)(v116 - 1) <= 1u )
  {
    v24 = src_8.m128i_i64[0];
    v25 = nullptr;
    if ( src_8.m128i_i64[0] )
    {
      v25 = (void *)qalloc_or_throw(24 * src_8.m128i_i64[0]);
      memcpy(v25, (const void *)src, 24 * v24);
    }
    v26 = *(void **)a2;
    v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v90 = v27;
      qfree(v26);
      v27 = _mm_load_si128(&v90);
    }
    v28 = v91;
    *(_QWORD *)a2 = v25;
    *v28 = v27;
    *(_BYTE *)(a2 + 24) = v116;
LABEL_16:
    if ( src )
    {
      src_8.m128i_i64[0] = 0;
      qfree((void *)src);
    }
    return v117 - __readfsqword(0x28u);
  }
  if ( (unsigned __int8)(v116 - 3) <= 6u )
  {
    *(_BYTE *)(a2 + 24) = 4;
    v54 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v55 = *(_QWORD *)(a6 + 16);
    v56 = *(unsigned __int16 *)(a6 + 24);
    v32 = *(_BYTE *)(a6 + 81) == 5;
    v94.m128i_i64[0] = -1;
    v94.m128i_i64[1] = v55;
    LOWORD(v95) = v56;
    if ( v32 )
      v54 = *(_BYTE *)(a6 + 121) == 0;
    v57 = *(__m128i **)a2;
    WORD1(v95) = v54;
    v58 = *(_QWORD *)(a2 + 16);
    if ( &v94 < v57 || &v94 >= (__m128i *)((char *)v57 + 24 * v58) )
    {
      if ( !v58 )
      {
        v63 = qvector_reserve(a2, v57, 1, 24);
        v64 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v63;
        v57 = (__m128i *)(v63 + 24 * v64);
      }
      v59 = v95;
      *v57 = _mm_load_si128(&v94);
      v57[1].m128i_i64[0] = v59;
    }
    else
    {
      if ( !v58 )
      {
        v86 = qvector_reserve(a2, v57, 1, 24);
        v87 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v86;
        v57 = (__m128i *)(v86 + 24 * v87);
      }
      v57->m128i_i64[0] = -1;
      v57->m128i_i64[1] = v55;
      v57[1].m128i_i32[0] = v56 | (v54 << 16);
    }
    ++*(_QWORD *)(a2 + 8);
    goto LABEL_16;
  }
  if ( v90.m128i_i64[0] )
    ((void (__fastcall *)(__int64, __int64 *, __int64, __int64))v90.m128i_i64[0])(a2, &src, a6, v92);
  switch ( v15 )
  {
    case 0LL:
      sub_4F8890(a2, (__int64)&src, a6, 0.0, *(double *)v20.m128i_i64, a9);
      goto LABEL_43;
    case 1LL:
      v47 = *(_BYTE *)(a2 + 24);
      if ( (unsigned __int8)(v47 - 12) <= 1u )
      {
        if ( (unsigned __int8)(v116 - 10) > 3u )
          goto LABEL_86;
      }
      else if ( (unsigned __int8)(v47 - 10) > 1u || (unsigned __int8)(v116 - 10) > 1u )
      {
        goto LABEL_86;
      }
      if ( (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 1, a6, 0.0, *(double *)v20.m128i_i64, a9) )
      {
        if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 12) <= 1u )
        {
          v65 = 12;
          if ( (unsigned __int8)(v116 - 12) <= 1u )
            v65 = 10;
          *(_BYTE *)(a2 + 24) = v65;
        }
        goto LABEL_43;
      }
LABEL_86:
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_QWORD *)(a6 + 16);
      v37 = *(unsigned __int16 *)(a6 + 24);
      v32 = *(_BYTE *)(a6 + 81) == 5;
      v96.m128i_i64[0] = -1;
      v96.m128i_i64[1] = v36;
      LOWORD(v97) = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 121) == 0;
      v38 = *(__m128i **)a2;
      WORD1(v97) = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v96 < v38 || &v96 >= (__m128i *)((char *)v38 + 24 * v39) )
      {
        if ( !v39 )
        {
          v88 = qvector_reserve(a2, v38, 1, 24);
          v89 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v88;
          v38 = (__m128i *)(v88 + 24 * v89);
        }
        v48 = v97;
        *v38 = _mm_load_si128(&v96);
        v38[1].m128i_i64[0] = v48;
        goto LABEL_42;
      }
      goto LABEL_129;
    case 2LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v116 - 10) <= 1u
        && (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 2, a6, 0.0, *(double *)v20.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_QWORD *)(a6 + 16);
      v37 = *(unsigned __int16 *)(a6 + 24);
      v32 = *(_BYTE *)(a6 + 81) == 5;
      v98.m128i_i64[0] = -1;
      v98.m128i_i64[1] = v36;
      LOWORD(v99) = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 121) == 0;
      v38 = *(__m128i **)a2;
      WORD1(v99) = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v98 >= v38 && &v98 < (__m128i *)((char *)v38 + 24 * v39) )
        goto LABEL_129;
      if ( !v39 )
      {
        v76 = qvector_reserve(a2, v38, 1, 24);
        v77 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v76;
        v38 = (__m128i *)(v76 + 24 * v77);
      }
      v50 = v99;
      *v38 = _mm_load_si128(&v98);
      v38[1].m128i_i64[0] = v50;
      goto LABEL_42;
    case 3LL:
      v43 = *(_BYTE *)(a2 + 24);
      if ( (unsigned __int8)(v43 - 12) > 1u )
        goto LABEL_64;
      if ( (unsigned __int8)(v116 - 10) > 1u )
        goto LABEL_66;
      v68 = *(_QWORD *)src;
      if ( src_8.m128i_i64[0] == 1 )
        goto LABEL_155;
      v69 = (_QWORD *)(src + 24);
      if ( 24 * src_8.m128i_i64[0] == 24 )
        goto LABEL_155;
      while ( *v69 == v68 )
      {
        v69 += 3;
        if ( v69 == (_QWORD *)(24 * src_8.m128i_i64[0] + src) )
        {
LABEL_155:
          if ( (v68 & (v68 + 1)) == 0 && v68 <= 0x1F )
          {
            if ( (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 3, a6, 0.0, *(double *)v20.m128i_i64, a9) )
            {
              *(_BYTE *)(a2 + 24) = 10;
              goto LABEL_43;
            }
            v43 = *(_BYTE *)(a2 + 24);
LABEL_64:
            if ( (unsigned __int8)(v43 - 10) <= 1u
              && (unsigned __int8)(v116 - 10) <= 1u
              && (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 3, a6, 0.0, *(double *)v20.m128i_i64, a9) )
            {
              goto LABEL_43;
            }
          }
          break;
        }
      }
LABEL_66:
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_QWORD *)(a6 + 16);
      v37 = *(unsigned __int16 *)(a6 + 24);
      v32 = *(_BYTE *)(a6 + 81) == 5;
      v100.m128i_i64[0] = -1;
      v100.m128i_i64[1] = v36;
      LOWORD(v101) = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 121) == 0;
      v38 = *(__m128i **)a2;
      WORD1(v101) = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v100 < v38 || &v100 >= (__m128i *)((char *)v38 + 24 * v39) )
      {
        if ( !v39 )
        {
          v74 = qvector_reserve(a2, v38, 1, 24);
          v75 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v74;
          v38 = (__m128i *)(v74 + 24 * v75);
        }
        v44 = v101;
        *v38 = _mm_load_si128(&v100);
        v38[1].m128i_i64[0] = v44;
        goto LABEL_42;
      }
      goto LABEL_129;
    case 4LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v116 - 10) <= 1u
        && (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 4, a6, 0.0, *(double *)v20.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_QWORD *)(a6 + 16);
      v37 = *(unsigned __int16 *)(a6 + 24);
      v32 = *(_BYTE *)(a6 + 81) == 5;
      v102.m128i_i64[0] = -1;
      v102.m128i_i64[1] = v36;
      LOWORD(v103) = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 121) == 0;
      v38 = *(__m128i **)a2;
      WORD1(v103) = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v102 >= v38 && &v102 < (__m128i *)((char *)v38 + 24 * v39) )
        goto LABEL_129;
      if ( !v39 )
      {
        v84 = qvector_reserve(a2, v38, 1, 24);
        v85 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v84;
        v38 = (__m128i *)(v84 + 24 * v85);
      }
      v51 = v103;
      *v38 = _mm_load_si128(&v102);
      v38[1].m128i_i64[0] = v51;
      goto LABEL_42;
    case 5LL:
      v45 = *(_BYTE *)(a2 + 24);
      if ( (unsigned __int8)(v45 - 12) > 1u )
        goto LABEL_74;
      if ( (unsigned __int8)(v116 - 10) > 1u )
        goto LABEL_76;
      v66 = *(_QWORD *)src;
      if ( src_8.m128i_i64[0] == 1 )
        goto LABEL_146;
      v67 = (_QWORD *)(src + 24);
      if ( 24 * src_8.m128i_i64[0] == 24 )
        goto LABEL_146;
      break;
    case 6LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v116 - 10) <= 1u
        && (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 6, a6, 0.0, *(double *)v20.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_QWORD *)(a6 + 16);
      v37 = *(unsigned __int16 *)(a6 + 24);
      v32 = *(_BYTE *)(a6 + 81) == 5;
      v106.m128i_i64[0] = -1;
      v106.m128i_i64[1] = v36;
      LOWORD(v107) = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 121) == 0;
      v38 = *(__m128i **)a2;
      WORD1(v107) = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v106 >= v38 && &v106 < (__m128i *)((char *)v38 + 24 * v39) )
        goto LABEL_129;
      if ( !v39 )
      {
        v80 = qvector_reserve(a2, v38, 1, 24);
        v81 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v80;
        v38 = (__m128i *)(v80 + 24 * v81);
      }
      v49 = v107;
      *v38 = _mm_load_si128(&v106);
      v38[1].m128i_i64[0] = v49;
      goto LABEL_42;
    case 7LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v116 - 10) <= 1u
        && (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 7, a6, 0.0, *(double *)v20.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_QWORD *)(a6 + 16);
      v37 = *(unsigned __int16 *)(a6 + 24);
      v32 = *(_BYTE *)(a6 + 81) == 5;
      v108.m128i_i64[0] = -1;
      v108.m128i_i64[1] = v36;
      LOWORD(v109) = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 121) == 0;
      v38 = *(__m128i **)a2;
      WORD1(v109) = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v108 >= v38 && &v108 < (__m128i *)((char *)v38 + 24 * v39) )
        goto LABEL_129;
      if ( !v39 )
      {
        v70 = qvector_reserve(a2, v38, 1, 24);
        v71 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v70;
        v38 = (__m128i *)(v70 + 24 * v71);
      }
      v41 = v109;
      *v38 = _mm_load_si128(&v108);
      v38[1].m128i_i64[0] = v41;
      goto LABEL_42;
    case 8LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v116 - 10) <= 1u
        && (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 8, a6, 0.0, *(double *)v20.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_QWORD *)(a6 + 16);
      v37 = *(unsigned __int16 *)(a6 + 24);
      v32 = *(_BYTE *)(a6 + 81) == 5;
      v110.m128i_i64[0] = -1;
      v110.m128i_i64[1] = v36;
      LOWORD(v111) = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 121) == 0;
      v38 = *(__m128i **)a2;
      WORD1(v111) = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v110 >= v38 && &v110 < (__m128i *)((char *)v38 + 24 * v39) )
        goto LABEL_129;
      if ( !v39 )
      {
        v72 = qvector_reserve(a2, v38, 1, 24);
        v73 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v72;
        v38 = (__m128i *)(v72 + 24 * v73);
      }
      v40 = _mm_load_si128(&v110);
      v38[1].m128i_i64[0] = v111;
      *v38 = v40;
      goto LABEL_42;
    case 9LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v116 - 10) <= 1u
        && (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 9, a6, 0.0, *(double *)v20.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_QWORD *)(a6 + 16);
      v37 = *(unsigned __int16 *)(a6 + 24);
      v32 = *(_BYTE *)(a6 + 81) == 5;
      v112.m128i_i64[0] = -1;
      v112.m128i_i64[1] = v36;
      LOWORD(v113) = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 121) == 0;
      v38 = *(__m128i **)a2;
      WORD1(v113) = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v112 >= v38 && &v112 < (__m128i *)((char *)v38 + 24 * v39) )
        goto LABEL_129;
      if ( !v39 )
      {
        v78 = qvector_reserve(a2, v38, 1, 24);
        v79 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v78;
        v38 = (__m128i *)(v78 + 24 * v79);
      }
      v42 = v113;
      *v38 = _mm_load_si128(&v112);
      v38[1].m128i_i64[0] = v42;
      goto LABEL_42;
    default:
      if ( !under_debugger )
        interr(2870);
      goto LABEL_182;
  }
  while ( *v67 == v66 )
  {
    v67 += 3;
    if ( (_QWORD *)(24 * src_8.m128i_i64[0] + src) == v67 )
    {
LABEL_146:
      if ( (v66 & (v66 + 1)) == 0 && v66 <= 0x1F )
      {
        if ( (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 5, a6, 0.0, *(double *)v20.m128i_i64, a9) )
          goto LABEL_43;
        v45 = *(_BYTE *)(a2 + 24);
LABEL_74:
        if ( (unsigned __int8)(v45 - 10) <= 1u
          && (unsigned __int8)(v116 - 10) <= 1u
          && (unsigned __int8)sub_4F8180((__int64 *)a2, &src, 5, a6, 0.0, *(double *)v20.m128i_i64, a9) )
        {
          goto LABEL_43;
        }
      }
      break;
    }
  }
LABEL_76:
  *(_BYTE *)(a2 + 24) = 4;
  v35 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v36 = *(_QWORD *)(a6 + 16);
  v37 = *(unsigned __int16 *)(a6 + 24);
  v32 = *(_BYTE *)(a6 + 81) == 5;
  v104.m128i_i64[0] = -1;
  v104.m128i_i64[1] = v36;
  LOWORD(v105) = v37;
  if ( v32 )
    v35 = *(_BYTE *)(a6 + 121) == 0;
  v38 = *(__m128i **)a2;
  WORD1(v105) = v35;
  v39 = *(_QWORD *)(a2 + 16);
  if ( &v104 >= v38 && &v104 < (__m128i *)((char *)v38 + 24 * v39) )
  {
LABEL_129:
    if ( !v39 )
    {
      v62 = qvector_reserve(a2, v38, 1, 24);
      *(_QWORD *)a2 = v62;
      v38 = (__m128i *)(24LL * *(_QWORD *)(a2 + 8) + v62);
    }
    v38->m128i_i64[0] = -1;
    v38->m128i_i64[1] = v36;
    v38[1].m128i_i32[0] = v37 | (v35 << 16);
  }
  else
  {
    if ( !v39 )
    {
      v82 = qvector_reserve(a2, v38, 1, 24);
      v83 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v82;
      v38 = (__m128i *)(v82 + 24 * v83);
    }
    v46 = v105;
    *v38 = _mm_load_si128(&v104);
    v38[1].m128i_i64[0] = v46;
  }
LABEL_42:
  ++*(_QWORD *)(a2 + 8);
LABEL_43:
  if ( src )
  {
    src_8.m128i_i64[0] = 0;
    qfree((void *)src);
  }
  return v117 - __readfsqword(0x28u);
}
