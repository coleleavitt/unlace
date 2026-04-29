__int64 __fastcall sub_203AA0(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // r15d
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r12
  char v11; // al
  int v12; // eax
  int v14; // edx
  unsigned int v15; // eax
  __m128i v16; // xmm2
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  char v19; // al
  __int64 v20; // rdx
  int v21; // r13d
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int8 v24; // r13
  __int64 v25; // rax
  __int32 v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  unsigned __int8 *v33; // rdi
  unsigned int v34; // esi
  __int64 v35; // rcx
  signed int v36; // r8d
  signed int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // edx
  __int32 v41; // eax
  int v42; // r8d
  int v43; // ecx
  int v44; // ecx
  int v45; // r8d
  __int32 v46; // eax
  int v47; // edx
  __int64 v48; // rax
  char v49; // al
  unsigned __int64 v50; // rdx
  __int32 v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // r13d
  _QWORD *v58; // rdx
  __m128i *v59; // r14
  _QWORD *v60; // rax
  int v61; // eax
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // r13
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __m128i v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // r8d
  int v73; // r9d
  __int64 v74; // rdi
  __int64 v75; // [rsp-10h] [rbp-170h]
  char v76; // [rsp+Fh] [rbp-151h]
  int v77; // [rsp+10h] [rbp-150h]
  char v78; // [rsp+10h] [rbp-150h]
  __int64 v79; // [rsp+18h] [rbp-148h]
  unsigned __int64 v80; // [rsp+18h] [rbp-148h]
  int v81; // [rsp+20h] [rbp-140h]
  unsigned int v82; // [rsp+20h] [rbp-140h]
  unsigned int v83; // [rsp+28h] [rbp-138h]
  int v84; // [rsp+28h] [rbp-138h]
  __int32 v85; // [rsp+28h] [rbp-138h]
  char v86; // [rsp+30h] [rbp-130h]
  signed int v87; // [rsp+30h] [rbp-130h]
  int v88; // [rsp+30h] [rbp-130h]
  int v89; // [rsp+30h] [rbp-130h]
  __int64 v90; // [rsp+30h] [rbp-130h]
  __int64 *v91; // [rsp+38h] [rbp-128h]
  signed int v92; // [rsp+38h] [rbp-128h]
  int v93; // [rsp+38h] [rbp-128h]
  unsigned int v94; // [rsp+38h] [rbp-128h]
  int v95; // [rsp+38h] [rbp-128h]
  int v96; // [rsp+38h] [rbp-128h]
  int v97; // [rsp+38h] [rbp-128h]
  unsigned int v98; // [rsp+40h] [rbp-120h]
  bool v99; // [rsp+48h] [rbp-118h]
  __int64 v100; // [rsp+48h] [rbp-118h]
  signed int v101; // [rsp+48h] [rbp-118h]
  int v102; // [rsp+48h] [rbp-118h]
  int v103; // [rsp+48h] [rbp-118h]
  __int64 v104; // [rsp+48h] [rbp-118h]
  __int64 v105; // [rsp+50h] [rbp-110h]
  __int64 v106; // [rsp+58h] [rbp-108h]
  __int64 v107; // [rsp+60h] [rbp-100h]
  __int64 v108; // [rsp+68h] [rbp-F8h]
  __m128i v109; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v110; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v111; // [rsp+88h] [rbp-D8h]
  __int64 v112; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v113; // [rsp+98h] [rbp-C8h]
  __m128i v114; // [rsp+A0h] [rbp-C0h] BYREF
  __m128i v115; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v116; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v117; // [rsp+D8h] [rbp-88h]
  __int64 v118; // [rsp+E0h] [rbp-80h] BYREF
  __int128 v119; // [rsp+E8h] [rbp-78h]
  unsigned __int64 v120; // [rsp+100h] [rbp-60h] BYREF
  __m128i v121; // [rsp+108h] [rbp-58h] BYREF
  __int128 v122; // [rsp+118h] [rbp-48h]
  unsigned __int64 v123; // [rsp+128h] [rbp-38h]

  v108 = a1;
  v123 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 56);
  if ( a2 >= *(_DWORD *)(v3 + 64) )
    sub_201740();
  v107 = *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a2);
  if ( *(_BYTE *)(a3 + 32) == 5 )
  {
    if ( (unsigned __int8)sub_1F0FD0(
                            *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a2),
                            *(_QWORD *)(a3 + 24),
                            *(int *)(a3 + 40)) )
      return 0;
    v3 = *(_QWORD *)(a1 + 56);
  }
  v6 = (_QWORD *)v107;
  v106 = *(_QWORD *)(v3 + 1504);
  v105 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  v7 = sub_203100(a1, v107, a3);
  if ( v7 )
    return (unsigned int)-36;
  v109 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v8 = *(_QWORD **)(a1 + 64);
  v9 = 13LL * *(int *)(a1 + 44);
  v10 = *v8 + 104LL * *(int *)(a1 + 44);
  if ( (*(_BYTE *)(a3 + 48) & 1) == 0 )
    goto LABEL_5;
  v24 = *(_BYTE *)(a3 + 32);
  if ( *(_DWORD *)v10 != 4 )
  {
    if ( (*(_BYTE *)(v10 + 27) & 2) != 0 )
    {
      v120 = (unsigned __int64)off_4D9518;
      if ( v24 == 1 )
      {
        v25 = *(int *)(a3 + 24);
LABEL_42:
        v121.m128i_i64[0] = v25;
        v26 = *(_DWORD *)(a3 + 40);
        v121.m128i_i8[8] = v24;
        v121.m128i_i32[3] = v26;
        for_all_arglocs(&v120, v10, *(unsigned int *)(v10 + 88), 0);
        if ( v121.m128i_i32[3] > *(_DWORD *)(a3 + 40) )
        {
          v109 = _mm_loadu_si128(&v121);
          goto LABEL_29;
        }
        goto LABEL_5;
      }
      if ( v24 == 5 )
      {
        v25 = *(_QWORD *)(a3 + 24);
        goto LABEL_42;
      }
LABEL_196:
      sub_201700(a1, v6, v9, v8);
    }
    v115 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v100 = *(_QWORD *)(a1 + 56);
    if ( v24 == 1 )
    {
      v80 = *(int *)(a3 + 24);
    }
    else
    {
      if ( v24 != 5 )
        goto LABEL_196;
      v80 = *(_QWORD *)(a3 + 24);
    }
    v93 = *(_DWORD *)(a3 + 40);
    sub_1C2B50(v10, (__int64)&v115, *(_DWORD *)(v10 + 88));
    if ( *(_DWORD *)v10 == 2 )
    {
      v62 = *(_DWORD *)(v10 + 88);
      v116 = 0;
      v98 = v62;
      v118 = 0;
      v117 = 0;
      v119 = 0;
      sub_1037A0(a3, v100, (__int64)&v116);
      v120 = 0;
      v121 = 0u;
      v122 = 0;
      sub_1C2BF0(v10, (__int64 *)&v120, v98, *(_QWORD *)(v100 + 1440), nullptr);
      v78 = sub_64220(&v120, &v116);
      if ( v78 )
        v78 = sub_318300(&v118, &v121.m128i_u64[1]);
      if ( v121.m128i_i64[1] )
      {
        *(_QWORD *)&v122 = 0;
        qfree(v121.m128i_i64[1]);
      }
      qfree(v120);
      if ( v118 )
      {
        *(_QWORD *)&v119 = 0;
        qfree(v118);
      }
      qfree(v116);
      if ( v78 )
        goto LABEL_5;
      if ( !*(_DWORD *)(v10 + 92) && *(_DWORD *)v10 != 2 )
      {
        if ( v24 != v115.m128i_i8[8] )
          goto LABEL_118;
        v55 = v115.m128i_i64[0];
        goto LABEL_115;
      }
    }
    else
    {
      if ( v24 != v115.m128i_i8[8] )
      {
        if ( *(_DWORD *)(v10 + 92) )
          goto LABEL_28;
LABEL_118:
        v120 = 0;
        v121.m128i_i64[0] = 0;
        sub_201920(*(_QWORD *)(v100 + 1504), v115.m128i_i64, a3);
        sub_32FA90(&v115, &v120);
        sub_1C7360((__int64)&v120, *(_QWORD *)(v100 + 1504), nullptr, v115.m128i_u32[3], *(_DWORD *)(v100 + 72));
        v56 = v121.m128i_i64[0];
        if ( v115.m128i_i8[8] == 1 )
        {
          if ( (_DWORD)v120 == 4 )
            v56 = v121.m128i_u16[0];
          else
            v56 = v121.m128i_i32[0];
        }
        v115.m128i_i64[0] = v56;
        cleanup_argloc(&v120);
        goto LABEL_28;
      }
      v55 = v115.m128i_i64[0];
      if ( v93 && v115.m128i_i64[0] >= v80 && v80 + v93 - 1 >= v115.m128i_i32[3] + v115.m128i_i64[0] - 1 )
        goto LABEL_5;
      if ( !*(_DWORD *)(v10 + 92) )
      {
LABEL_115:
        if ( v115.m128i_i32[3] && v80 >= v55 && v115.m128i_i32[3] + v55 - 1 >= v80 + v93 - 1 )
          goto LABEL_28;
        goto LABEL_118;
      }
    }
LABEL_28:
    v109 = _mm_load_si128(&v115);
    goto LABEL_29;
  }
  v27 = *(unsigned int *)(v10 + 8);
  v28 = *(int *)(a3 + 40);
  v29 = (unsigned int)(*(_DWORD *)(v10 + 88) / 2);
  v30 = HIWORD(*(_DWORD *)(v10 + 8));
  if ( v24 != 1 )
    sub_2016E0(v27, v107, v29, v28);
  v31 = *(int *)(a3 + 24);
  if ( !*(_DWORD *)(a3 + 40)
    || v30 < v31
    || (v32 = v28 + v31 - 1, v32 < (int)v29 + v30 - 1)
    || (v30 = (unsigned __int16)v27, (unsigned __int16)v27 < v31)
    || v32 < (int)v29 + (unsigned __int64)(unsigned __int16)v27 - 1 )
  {
    v109.m128i_i8[8] = 1;
    v109.m128i_i64[0] = v30;
    v109.m128i_i32[3] = v29;
    goto LABEL_51;
  }
  while ( 1 )
  {
LABEL_5:
    v109.m128i_i32[3] = sub_202C00(v108, a2, a3, 1, 0);
    if ( v109.m128i_i32[3] < 0 )
      return 0;
    v110 = 0;
    v11 = *(_BYTE *)(a3 + 48);
    v111 = 0;
    v12 = v11 & 1;
    v99 = v12;
    if ( !v12 )
      goto LABEL_7;
    v14 = *(_DWORD *)(v10 + 88);
    v112 = -1;
    v113 = 0;
    v91 = *(__int64 **)(v108 + 56);
    v79 = v91[188];
    v86 = sub_1C2B50(v10, (__int64)&v112, v14);
    if ( v86 )
    {
      v116 = 0;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      sub_1C2DC0(v10, (__int64)v91, &v116, 0);
      v120 = 0;
      v121 = 0u;
      v122 = 0;
      sub_1037A0(a3, (__int64)v91, (__int64)&v120);
      if ( (unsigned __int8)sub_64220(&v120, &v116) && (unsigned __int8)sub_318300(&v118, &v121.m128i_u64[1]) )
      {
        v86 = 0;
      }
      else
      {
        cleanup_argloc(&v110);
        sub_201920(v79, &v112, a3);
        sub_32FA90(&v112, &v110);
        v81 = HIDWORD(v113);
      }
      if ( v121.m128i_i64[1] )
      {
        *(_QWORD *)&v122 = 0;
        qfree(v121.m128i_i64[1]);
      }
      qfree(v120);
      if ( v118 )
      {
        *(_QWORD *)&v119 = 0;
        qfree(v118);
      }
      qfree(v116);
      if ( !v86 )
        goto LABEL_7;
      goto LABEL_20;
    }
    v77 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 == 2 )
      break;
    if ( v77 != 4 )
    {
      if ( !under_debugger )
        sub_3835A0(51992);
      goto LABEL_215;
    }
    v82 = *(_DWORD *)(v10 + 88) / 2;
    v15 = *(_DWORD *)(v10 + 8);
    v83 = (unsigned __int16)v15;
    v92 = HIWORD(v15);
    if ( *(_BYTE *)(a3 + 32) != 1 )
    {
      if ( !under_debugger )
        sub_3835A0(50998);
      goto LABEL_215;
    }
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 40));
    v17 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 24));
    memset(&v115, 0, 24);
    v18 = _mm_unpacklo_epi32(v17, v16);
    v114 = _mm_unpacklo_epi32(v18, _mm_cmpgt_epi32((__m128i)0LL, v18));
    sub_316F70(&v115, &v114);
    v116 = v83;
    v117 = v82;
    v76 = sub_317F90(&v115, &v116);
    v120 = (unsigned int)v92;
    v121.m128i_i64[0] = v82;
    v19 = sub_317F90(&v115, &v120);
    if ( !v115.m128i_i64[1] )
    {
      if ( !v76 || !v19 )
      {
        if ( !v115.m128i_i64[0] )
          goto LABEL_7;
        goto LABEL_121;
      }
      if ( v92 == v83 + v82 )
      {
        if ( !v115.m128i_i64[0] )
          goto LABEL_7;
LABEL_121:
        qfree(v115.m128i_i64[0]);
        goto LABEL_7;
      }
      v21 = *(_DWORD *)(v79 + 88);
      if ( v115.m128i_i64[0] )
        qfree(v115.m128i_i64[0]);
      v81 = v21 + 1;
      goto LABEL_20;
    }
    v34 = v92;
    v35 = v83;
    v36 = v92;
    if ( (int)v83 <= v92 )
    {
      v36 = v83;
      v92 = v83;
      v35 = v34;
      v83 = v34;
      v99 = 0;
    }
    if ( v83 < v82 + v92 )
    {
      if ( !under_debugger )
        sub_3835A0(51756);
      goto LABEL_215;
    }
    v37 = (v83 + v82 + v92) >> 1;
    if ( *(_BYTE *)(a3 + 32) != 1 )
      sub_2016E0(&v115, v83, v20, v35);
    v38 = *(_QWORD *)(a3 + 24);
    if ( v37 >= (int)v38 + *(_DWORD *)(a3 + 40) )
    {
      v121.m128i_i8[0] = 1;
      v120 = v36;
      v94 = v35;
      v121.m128i_i32[1] = v82;
      sub_201920(v79, (__int64 *)&v120, a3);
      v41 = v121.m128i_i32[1];
      v43 = v94;
      if ( v121.m128i_i8[0] != 1 )
        sub_2016E0(v79, &v120, v120, v94);
      v92 = v120;
      v42 = v120;
      if ( v83 >= v121.m128i_i32[1] + (int)v120 )
      {
        v85 = v121.m128i_i32[1];
        v89 = v120;
        v95 = v43;
        cleanup_argloc(&v110);
        v44 = v95;
        v45 = v89;
        v46 = v85;
LABEL_77:
        if ( !v99 )
        {
          v47 = v44;
          v44 = v45;
          v45 = v47;
        }
        v81 = 2 * v46;
        v92 = v44 | (v45 << 16);
        goto LABEL_80;
      }
LABEL_131:
      if ( v99 )
      {
        v81 = *(_DWORD *)(v79 + 88) + 1;
        cleanup_argloc(&v110);
      }
      else
      {
        v103 = v43 - v42 + v41;
        cleanup_argloc(&v110);
        v81 = v103;
      }
      goto LABEL_133;
    }
    if ( v37 >= (int)v38 )
    {
      v121.m128i_i8[0] = 1;
      v120 = v36;
      v121.m128i_i32[1] = v83 + v82 - v92;
      sub_201920(v79, (__int64 *)&v120, a3);
      v43 = v120;
      v41 = v121.m128i_i32[1];
      if ( v121.m128i_i8[0] != 1 )
        sub_2016E0(v79, &v120, v63, v120);
      v92 = v120;
      v42 = v120;
      v40 = v120;
    }
    else
    {
      v87 = v36;
      v121.m128i_i8[0] = 1;
      v120 = (int)v83;
      v121.m128i_i32[1] = v82;
      sub_201920(v79, (__int64 *)&v120, a3);
      v40 = v120;
      v41 = v121.m128i_i32[1];
      v42 = v87;
      if ( v121.m128i_i8[0] != 1 )
        sub_2016E0(v79, &v120, v120, v39);
      v43 = v120;
    }
    if ( v40 < v41 + v92 )
      goto LABEL_131;
    v81 = v41;
    v84 = v42;
    v88 = v43;
    cleanup_argloc(&v110);
    v44 = v88;
    v45 = v84;
    v46 = v81;
    if ( v88 != -1 )
      goto LABEL_77;
LABEL_133:
    v77 = 3;
LABEL_80:
    LODWORD(v110) = v77;
    LODWORD(v111) = v92;
    if ( v115.m128i_i64[0] )
    {
      v115.m128i_i64[1] = 0;
      qfree(v115.m128i_i64[0]);
    }
LABEL_20:
    if ( *(_DWORD *)(v106 + 88) < v81 )
    {
      *(_DWORD *)(v108 + 40) = 20;
      goto LABEL_7;
    }
    v101 = sub_11C4D0(v81);
    if ( (*(_BYTE *)(v10 + 25) & 1) != 0 )
    {
      v48 = *(_QWORD *)(v108 + 56);
      if ( *(_BYTE *)(v48 + 320)
        || (_DWORD)v110 == 1
        && (v52 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v48 + 936) + 40LL))(*(_QWORD *)(v48 + 936)),
            v52 != -1)
        && v52 > v111
        && v101 + v111 > v52 )
      {
        if ( (unsigned int)sub_1C2510((int *)&v110, (int *)v10)
          || *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v108 + 56) + 1496LL) + 130LL) != v101
          || !(unsigned __int8)sub_1F1130((int *)v10, (_QWORD *)v106) )
        {
          v7 = sub_2038C0(v108, a3, v10);
        }
        goto LABEL_7;
      }
    }
    LODWORD(v120) = 0;
    copy_argloc(&v120, v10);
    v96 = *(_DWORD *)(v10 + 24);
    v81 = sub_2037A0(v108, (int *)v10, (__int64)&v110, v101);
    if ( v81 == -1 )
      goto LABEL_110;
    v53 = *(int *)(v108 + 44);
    if ( (_DWORD)v53 == (_DWORD)v105 && (*(_BYTE *)(v10 + 25) & 4) != 0 )
      goto LABEL_142;
    v102 = v96 & 0x2000000;
    if ( !*(_DWORD *)(v10 + 92) )
    {
      v54 = *(_QWORD *)(v108 + 56);
      if ( (*(_BYTE *)(v54 + 2) & 4) != 0 )
      {
        v10 = **(_QWORD **)(v108 + 64) + 104 * v53;
        goto LABEL_108;
      }
      if ( !sub_1EF500(v54, v10, v81) )
      {
        v10 = **(_QWORD **)(v108 + 64) + 104LL * *(int *)(v108 + 44);
        goto LABEL_108;
      }
      v97 = sub_1F5940(*(_QWORD *)(v108 + 56), (int *)(v108 + 44), v81);
      v10 = **(_QWORD **)(v108 + 64) + 104LL * *(int *)(v108 + 44);
      if ( v97 < 0 )
      {
        if ( v97 != -20
          && (unsigned __int8)sub_1EF960(
                                (_DWORD *)v10,
                                *(_QWORD **)(*(_QWORD *)(v108 + 56) + 1504LL),
                                v81,
                                *(_DWORD *)(*(_QWORD *)(v108 + 56) + 72LL),
                                2) )
        {
          v7 = v97;
          goto LABEL_142;
        }
LABEL_108:
        copy_argloc(v10, &v120);
        if ( v102 )
          *(_DWORD *)(v10 + 24) |= 0x2000000u;
LABEL_110:
        *(_DWORD *)(v108 + 40) = 20;
LABEL_142:
        cleanup_argloc(&v120);
        goto LABEL_7;
      }
    }
    if ( !a2 && !sub_1EF500(*(_QWORD *)(v108 + 56), v10, v81)
      || !(unsigned __int8)sub_1EF960(
                             (_DWORD *)v10,
                             *(_QWORD **)(*(_QWORD *)(v108 + 56) + 1504LL),
                             v81,
                             *(_DWORD *)(*(_QWORD *)(v108 + 56) + 72LL),
                             2) )
    {
      goto LABEL_108;
    }
    sub_1C2B50(v10, (__int64)&v109, *(_DWORD *)(v10 + 88));
    v58 = *(_QWORD **)(v108 + 72);
    if ( *(_DWORD *)(v10 + 88) <= *(_DWORD *)(a3 + 40) )
    {
      v59 = (__m128i *)(*v58 + 24LL * *(int *)(v10 + 92));
      v60 = sub_104830((unsigned __int64 *)v59, a3);
      if ( v60 && *((_DWORD *)v60 + 10) < *(_DWORD *)(v10 + 88) )
      {
        if ( (unsigned int)sub_203060(
                             v108,
                             *(_QWORD **)(v108 + 72),
                             *(__int64 **)(v108 + 80),
                             v59,
                             (unsigned __int64)v60,
                             (__int64)&v109,
                             3) )
        {
          v7 = -36;
        }
        else
        {
          v74 = *(_QWORD *)(v108 + 56);
          if ( (*(_BYTE *)(*(_QWORD *)(v74 + 1496) + 604LL) & 0x10) != 0 )
            sub_1F0C70(v74, -1, 20, v75, v72, v73);
          else
            v7 = -20;
        }
      }
      else
      {
        v61 = *(_DWORD *)(v10 + 24);
        if ( (v61 & 0x400) != 0 )
        {
          BYTE1(v61) &= ~4u;
          *(_DWORD *)(v10 + 24) = v61;
          *(_BYTE *)(v108 + 48) = 1;
        }
      }
      goto LABEL_142;
    }
    sub_106920(*(_QWORD *)(v108 + 56), a3, (__int64)v58, *(_QWORD **)(v108 + 80));
    cleanup_argloc(&v120);
    cleanup_argloc(&v110);
LABEL_29:
    if ( *(_BYTE *)(a3 + 32) == 5 && v109.m128i_i8[8] > 4u )
    {
      if ( v109.m128i_i8[8] != 5 )
        sub_201720();
      v22 = *(_QWORD *)(a3 + 24);
      v23 = v109.m128i_i64[0] + v109.m128i_i32[3];
      if ( v23 > v22 )
      {
        if ( (unsigned __int8)sub_1F0FD0(v107, v22, v23 - v22) )
          return 0;
      }
    }
LABEL_51:
    if ( (unsigned __int8)sub_1C2B50(v10, 0, 0) )
    {
      v33 = *(unsigned __int8 **)(v108 + 56);
      if ( (v33[2] & 4) != 0 )
      {
        if ( (*(_BYTE *)(v10 + 27) & 2) == 0 && !(unsigned __int8)sub_1EEE20(v33) )
        {
          if ( (*(_BYTE *)(a3 + 48) & 4) == 0 )
          {
            if ( !under_debugger )
              sub_3835A0(52919);
            goto LABEL_215;
          }
LABEL_66:
          *(_DWORD *)(v108 + 40) = 20;
        }
      }
      else
      {
        a1 = v108;
        v6 = *(_QWORD **)(v108 + 72);
        if ( (unsigned int)sub_203060(
                             v108,
                             v6,
                             *(__int64 **)(v108 + 80),
                             *(__m128i **)(v108 + 8),
                             a3,
                             (__int64)&v109,
                             3) )
          return (unsigned int)-36;
        if ( (*(_BYTE *)(a3 + 48) & 4) != 0 )
          goto LABEL_66;
        v49 = *(_BYTE *)(a3 + 32);
        if ( v49 == 1 )
        {
          v50 = *(int *)(a3 + 24);
        }
        else
        {
          if ( v49 != 5 )
            goto LABEL_196;
          v50 = *(_QWORD *)(a3 + 24);
        }
        v121.m128i_i8[0] = *(_BYTE *)(a3 + 32);
        v51 = *(_DWORD *)(a3 + 40);
        v120 = v50;
        v121.m128i_i32[1] = v51;
        if ( !(unsigned __int8)sub_1C38B0((int *)v10, *(_DWORD *)(v10 + 88), (__int64)&v120, nullptr) )
          goto LABEL_66;
        *(_DWORD *)(v10 + 24) |= 0x2000000u;
      }
    }
    else if ( (*(_BYTE *)(v10 + 27) & 2) == 0 )
    {
      *(_DWORD *)(v108 + 40) = 26;
    }
  }
  v57 = *(_DWORD *)(v10 + 88);
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  sub_1037A0(a3, (__int64)v91, (__int64)&v116);
  v120 = 0;
  v121 = 0u;
  v122 = 0;
  sub_1C2BF0(v10, (__int64 *)&v120, v57, v91[180], nullptr);
  if ( !(unsigned __int8)sub_64220(&v116, &v120) || !(unsigned __int8)sub_318300(&v121.m128i_u64[1], &v118) )
    goto LABEL_125;
  if ( *(_DWORD *)v10 != 2 )
  {
    v99 = 0;
    goto LABEL_125;
  }
  v64 = *(__int64 **)(v10 + 8);
  v104 = *v64 + 24 * v64[1];
  if ( *v64 == v104 )
  {
LABEL_194:
    if ( !under_debugger )
      sub_3835A0(52223);
LABEL_215:
    BUG();
  }
  v65 = *v64;
  while ( 2 )
  {
    if ( (unsigned int)(*(_DWORD *)v65 - 3) > 1 )
    {
      if ( *(_DWORD *)v65 == 1 )
      {
LABEL_170:
        v69.m128i_i64[1] = *(unsigned __int16 *)(v65 + 18);
        v90 = *(_QWORD *)(v65 + 8);
        v69.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v91[187] + 24) + 16LL) & (v91[180] + v90);
        v115 = v69;
        if ( (unsigned __int8)sub_318230(&v118, &v115, 0) )
        {
          if ( *(_BYTE *)(a3 + 32) != 5 )
            sub_201700(&v118, &v115, v70, v71);
          v99 = v90 > *(_QWORD *)(a3 + 24);
          goto LABEL_125;
        }
      }
LABEL_166:
      v65 += 24;
      if ( v104 == v65 )
        goto LABEL_194;
      continue;
    }
    break;
  }
  v66 = *(unsigned __int16 *)(v65 + 8);
  if ( !(unsigned __int8)sub_64460(&v116, v66, *(unsigned __int16 *)(v65 + 18)) )
  {
    if ( *(_DWORD *)v65 == 1 )
      goto LABEL_170;
    goto LABEL_166;
  }
  if ( *(_BYTE *)(a3 + 32) != 1 )
    sub_2016E0(&v116, v66, v67, v68);
  v99 = (int)*(unsigned __int16 *)(v65 + 8) > *(_DWORD *)(a3 + 24);
LABEL_125:
  if ( v121.m128i_i64[1] )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121.m128i_i64[1]);
  }
  qfree(v120);
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree(v118);
  }
  qfree(v116);
  if ( v99 )
  {
    v81 = *(_DWORD *)(v79 + 88) + 1;
    goto LABEL_20;
  }
LABEL_7:
  cleanup_argloc(&v110);
  return v7;
}
