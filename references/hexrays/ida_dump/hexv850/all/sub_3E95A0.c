__int64 __fastcall sub_3E95A0(__int64 *a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  __int16 v5; // ax
  unsigned int v6; // r15d
  const char *v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 *v12; // rax
  __m128i *v13; // rax
  __m128i si128; // xmm1
  __m128i v15; // xmm0
  int v16; // eax
  __int64 v17; // r9
  unsigned __int16 v18; // ax
  int v19; // r15d
  unsigned int v20; // r14d
  int v21; // r8d
  const char *v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rax
  int v25; // esi
  int v26; // ecx
  int v27; // eax
  _QWORD *v28; // rdi
  _QWORD *v29; // rsi
  _QWORD *v30; // r14
  unsigned __int64 v31; // rdx
  _QWORD *v32; // r13
  _QWORD *v33; // r15
  unsigned __int64 v34; // rcx
  _QWORD *v35; // rax
  bool v36; // al
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // r14d
  __int64 v40; // r8
  __int64 v41; // r15
  __int64 v42; // r8
  char *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // r15
  __int64 v46; // rax
  __m128i v47; // xmm1
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r13
  __int64 v54; // r8
  _QWORD *v55; // rcx
  __int64 v56; // rbx
  size_t v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // r13d
  __int16 v61; // ax
  __int64 v62; // rcx
  __int64 v63; // rcx
  int tinfo_size; // eax
  _BYTE *v65; // rsi
  _BYTE *v66; // rsi
  _BYTE *v67; // rsi
  unsigned __int16 v68; // ax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r15
  int v73; // eax
  _BYTE *v74; // rsi
  int v75; // eax
  _BYTE *v76; // rsi
  int v77; // eax
  _BYTE *v78; // rsi
  int v79; // eax
  _BYTE *v80; // rsi
  unsigned __int16 v81; // ax
  _BYTE *v82; // rsi
  __int64 v83; // rdx
  _BYTE *v84; // rsi
  char *v85; // r13
  int v86; // r8d
  int v87; // eax
  int v88; // eax
  unsigned __int16 v89; // ax
  _BYTE *v90; // rsi
  __int64 v91; // rdx
  _BYTE *v92; // rsi
  int v93; // r8d
  _BYTE *v94; // rsi
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // r13
  __int64 *v101; // [rsp+0h] [rbp-250h]
  unsigned int v102; // [rsp+14h] [rbp-23Ch]
  int v103; // [rsp+14h] [rbp-23Ch]
  int v104; // [rsp+14h] [rbp-23Ch]
  __int64 v105; // [rsp+18h] [rbp-238h]
  int v106; // [rsp+18h] [rbp-238h]
  int v107; // [rsp+18h] [rbp-238h]
  size_t na; // [rsp+38h] [rbp-218h]
  size_t n; // [rsp+38h] [rbp-218h]
  __int64 v112; // [rsp+48h] [rbp-208h] BYREF
  __int64 v113; // [rsp+50h] [rbp-200h] BYREF
  __int64 v114; // [rsp+58h] [rbp-1F8h] BYREF
  unsigned __int8 v115[16]; // [rsp+60h] [rbp-1F0h] BYREF
  __int64 v116; // [rsp+70h] [rbp-1E0h] BYREF
  __int128 v117; // [rsp+78h] [rbp-1D8h]
  __int64 v118[2]; // [rsp+90h] [rbp-1C0h] BYREF
  __int64 *v119; // [rsp+A0h] [rbp-1B0h] BYREF
  __int128 v120; // [rsp+A8h] [rbp-1A8h]
  __int64 v121; // [rsp+C0h] [rbp-190h]
  __int64 v122; // [rsp+C8h] [rbp-188h]
  __int64 *v123; // [rsp+D0h] [rbp-180h] BYREF
  __int128 v124; // [rsp+D8h] [rbp-178h]
  __int64 v125; // [rsp+F0h] [rbp-160h] BYREF
  __int64 v126; // [rsp+F8h] [rbp-158h]
  __int64 v127; // [rsp+100h] [rbp-150h]
  __m128i v128; // [rsp+108h] [rbp-148h] BYREF
  _BYTE v129[24]; // [rsp+120h] [rbp-130h] BYREF
  char v130[8]; // [rsp+138h] [rbp-118h] BYREF
  _BYTE *v131; // [rsp+140h] [rbp-110h] BYREF
  __int64 v132; // [rsp+148h] [rbp-108h]
  unsigned __int64 v133; // [rsp+150h] [rbp-100h]
  _BYTE v134[24]; // [rsp+170h] [rbp-E0h] BYREF
  char v135[8]; // [rsp+188h] [rbp-C8h] BYREF
  _BYTE *v136; // [rsp+190h] [rbp-C0h] BYREF
  __int64 v137; // [rsp+198h] [rbp-B8h]
  unsigned __int64 v138; // [rsp+1A0h] [rbp-B0h]
  char v139; // [rsp+1C0h] [rbp-90h] BYREF
  char v140; // [rsp+210h] [rbp-40h] BYREF
  unsigned __int64 v141; // [rsp+218h] [rbp-38h]

  v5 = *((_WORD *)a1 + 24);
  v141 = __readfsqword(0x28u);
  v6 = 0;
  if ( *(_WORD *)(a2 + 8) != v5 )
    return v6;
  v8 = *(const char **)a2;
  v9 = (__int64)a1;
  v10 = a2;
  v116 = 0;
  v117 = 0;
  if ( v8 )
  {
    na = strlen(v8);
    v12 = (__int64 *)qvector_reserve(&v116, 0, na + 1, 1);
    *(_QWORD *)&v117 = na + 1;
    a1 = v12;
    a2 = (__int64)v8;
    v116 = (__int64)v12;
    memmove(v12, v8, na);
    *(_BYTE *)(v116 + na) = 0;
  }
  if ( *(_WORD *)(v9 + 842) != 4 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCE5Cu, a2, 0.0);
    goto LABEL_203;
  }
  v13 = (__m128i *)v129;
  v112 = 36;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400170);
  v113 = 20;
  v15.m128i_i64[0] = 0;
  v114 = 1;
  do
  {
    v13->m128i_i32[1] = -1;
    v13 += 5;
    v13[-5].m128i_i16[0] = 0;
    v13[-5].m128i_i16[1] = 0;
    v13[-5].m128i_i64[1] = 0;
    v13[-4] = si128;
    v13[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v13[-3] + 8) = 0;
    v13[-2].m128i_i32[2] = 0;
    v13[-1].m128i_i64[0] = 0;
    v13[-1].m128i_i32[2] = 0;
  }
  while ( v13 != (__m128i *)&v140 );
  v16 = *(_DWORD *)(v10 + 12);
  v118[0] = 0;
  v118[1] = 0;
  v119 = nullptr;
  v121 = 0;
  v122 = 0;
  v123 = nullptr;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v120 = 0;
  v124 = 0;
  v128 = 0;
  if ( (v16 & 0x20) != 0 && **(_DWORD **)(*(_QWORD *)(v9 + 832) + 528LL) == a3 )
  {
    v17 = a3;
LABEL_11:
    a2 = 3;
    sub_1D14D0(v9, 3u, 4, 0, 0x3BEA45E214ADDC55LL, v17, 4);
    a1 = v101;
    goto LABEL_12;
  }
  if ( (v16 & 0x40) != 0 )
  {
    a2 = (unsigned int)a4;
    if ( **(_DWORD **)(*(_QWORD *)(v9 + 832) + 528LL) == a4 )
    {
      v17 = a4;
      goto LABEL_11;
    }
  }
  if ( (v16 & 0x80u) != 0 )
  {
    a2 = a5;
    v17 = (int)a5;
    if ( **(_DWORD **)(*(_QWORD *)(v9 + 832) + 528LL) == a5 )
      goto LABEL_11;
  }
LABEL_12:
  v18 = *(_WORD *)(v9 + 48);
  if ( v18 > 0x6Cu )
  {
    if ( v18 == 224 )
    {
      sub_11BE50((__int64)v129, *(_QWORD *)(v9 + 832), *(_QWORD *)(v9 + 72), 4, -1, 0);
      v94 = v131;
      if ( v133 <= 3 )
      {
        v131 = (_BYTE *)qvector_reserve(&v131, v131, 4, 1);
        v94 = v131;
      }
      v132 = 4;
      *(_WORD *)v94 = 24948;
      v94[2] = 103;
      v131[3] = 0;
      copy_tinfo_t(v130, &v112);
      v19 = 0;
      v20 = -1;
      v21 = 1;
    }
    else if ( v18 <= 0xE0u )
    {
      if ( v18 != 222 )
        goto LABEL_21;
      sub_11BE50((__int64)v129, *(_QWORD *)(v9 + 832), *(unsigned __int16 *)(v9 + 88), 4, -1, 0);
      v66 = v131;
      if ( v133 <= 6 )
      {
        v131 = (_BYTE *)qvector_reserve(&v131, v131, 7, 1);
        v66 = v131;
      }
      v132 = 7;
      *(_DWORD *)v66 = 1231512946;
      *((_WORD *)v66 + 2) = 12612;
      v131[6] = 0;
      copy_tinfo_t(v130, &v112);
      sub_11BE50((__int64)v134, *(_QWORD *)(v9 + 832), *(unsigned __int16 *)(v9 + 90), 4, -1, 0);
      v67 = v136;
      if ( v138 <= 6 )
      {
        v136 = (_BYTE *)qvector_reserve(&v136, v136, 7, 1);
        v67 = v136;
      }
      v137 = 7;
      *(_DWORD *)v67 = 1231512946;
      *((_WORD *)v67 + 2) = 12868;
      v136[6] = 0;
      copy_tinfo_t(v135, &v112);
      v19 = 0;
      v20 = -1;
      v21 = 2;
    }
    else
    {
      if ( (unsigned __int16)(v18 - 255) > 3u )
        goto LABEL_21;
      v58 = *(_QWORD *)(v9 + 832);
      v59 = *(_QWORD *)(v58 + 584);
      if ( !v59 )
        sub_3E4140(0.0, (__int64)a1, a2);
      v60 = *(_DWORD *)(*(_QWORD *)(v58 + 576) + 4 * v59 - 4);
      *(_QWORD *)(v58 + 584) = v59 - 1;
      v61 = *(_WORD *)(v9 + 48);
      if ( ((v61 - 255) & 0xFFFD) != 0 )
      {
        v95 = 0xFFFF;
        if ( v61 == 256 )
          v95 = 255;
        sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), v95, 0x3BEA45E214ADDC55LL, v60, 0);
        sub_3E8420(v9, 0x24u, *(unsigned __int16 *)(v9 + 842), a3, v60, 3, 0);
        copy_tinfo_t(&v114, &v112);
      }
      else
      {
        v62 = 0x7FFF;
        if ( v61 == 255 )
          v62 = 127;
        sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), v62, 0x3BEA45E214ADDC55LL, v60, 0);
        sub_3E8420(v9, 0x26u, *(unsigned __int16 *)(v9 + 842), a3, v60, 3, 0);
        v63 = -32768;
        if ( *(_WORD *)(v9 + 48) == 255 )
          v63 = -128;
        sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), v63, 0x3BEA45E214ADDC55LL, v60, 0);
        sub_3E8420(v9, 0x28u, *(unsigned __int16 *)(v9 + 842), a3, v60, 0, 0);
        sub_3E8420(v9, 0x13u, 1, 3, 0, 3, 0);
        copy_tinfo_t(&v114, &v113);
      }
      sub_3E62F0(*(_QWORD *)(v9 + 832), v60);
      sub_1D14D0(v9, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 0, 0);
      tinfo_size = get_tinfo_size(0, v114, 0);
      sub_329650((__int64)v129, a3, tinfo_size, (__int64)&v114);
      v65 = v131;
      if ( v133 <= 1 )
      {
        v131 = (_BYTE *)qvector_reserve(&v131, v131, 2, 1);
        v65 = v131;
      }
      v20 = a4;
      v19 = 0;
      v21 = 1;
      v132 = 2;
      *v65 = 97;
      v131[1] = 0;
    }
LABEL_22:
    v22 = s1;
    if ( (_QWORD)v117 )
      v22 = (const char *)v116;
    v23 = sub_32FDB0(
            *(_QWORD *)(v9 + 8),
            *(_QWORD *)(v9 + 40),
            (__int64)v22,
            &v114,
            v21,
            (__int64)v129,
            (*(_BYTE *)(v10 + 12) & 0x10) == 0);
    v24 = *(_QWORD *)(v23 + 72);
    v25 = *(_DWORD *)(v24 + 280);
    *(_DWORD *)(v24 + 284) = v19;
    *(_DWORD *)(v24 + 280) = v25 | 4;
    v26 = *(_DWORD *)(v10 + 12);
    if ( (v26 & 2) != 0 )
    {
      *(_DWORD *)(v24 + 280) = v25 | 0xC;
      v26 = *(_DWORD *)(v10 + 12);
    }
    if ( (v26 & 1) != 0 )
      *(_DWORD *)(v24 + 280) |= 0x10u;
    if ( !(unsigned __int8)sub_5FE00(v118) || (_QWORD)v120 )
    {
      if ( !(unsigned __int8)sub_5FE00(&v125) || v128.m128i_i64[0] )
        **(_DWORD **)(v9 + 8) |= 0x40u;
      v45 = *(_QWORD *)(v23 + 72);
      sub_5F800((__int64 *)(v45 + 136), v118);
      sub_3113F0((__int64 *)(v45 + 152), &v119);
      sub_3113F0((__int64 *)(*(_QWORD *)(v23 + 72) + 216LL), &v119);
      v46 = *(_QWORD *)(v23 + 72);
      v47 = _mm_loadu_si128(&v128);
      v48 = *(_QWORD *)(v46 + 176);
      *(_QWORD *)(v46 + 176) = v125;
      v49 = v126;
      v15 = _mm_loadu_si128((const __m128i *)(v46 + 200));
      *(__m128i *)(v46 + 200) = v47;
      v125 = v48;
      v50 = *(_QWORD *)(v46 + 184);
      *(_QWORD *)(v46 + 184) = v49;
      v126 = v50;
      v51 = *(_QWORD *)(v46 + 192);
      v128 = v15;
      *(_QWORD *)(v46 + 192) = v127;
      v127 = v51;
    }
    sub_3113F0((__int64 *)(*(_QWORD *)(v23 + 72) + 216LL), &v123);
    v27 = *(_DWORD *)(v10 + 12);
    if ( (v27 & 4) != 0 )
    {
      *(_DWORD *)(v23 + 4) |= 0x80000u;
      v27 = *(_DWORD *)(v10 + 12);
    }
    if ( (v27 & 0x10) == 0 )
    {
      v15 = _mm_cvtsi32_si128(*(_DWORD *)(v23 + 68));
      *(_DWORD *)v115 = 1;
      v15.m128i_i64[0] = _mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(v20)).m128i_u64[0];
      *(_QWORD *)&v115[4] = v15.m128i_i64[0];
      v23 = (__int64)sub_1206A0(v23, v115);
      sub_1181E0((__int64)v115);
      v27 = *(_DWORD *)(v10 + 12);
    }
    if ( (v27 & 8) != 0 )
      *(_DWORD *)(v23 + 4) |= 0x20000u;
    v28 = *(_QWORD **)(v9 + 16);
    v29 = (_QWORD *)v23;
    sub_B06D0(v28, v23);
    v30 = *(_QWORD **)(v9 + 8);
    v31 = *(_QWORD *)(v9 + 40);
    v32 = v30 + 126;
    v33 = v30 + 126;
    if ( v30[127] )
    {
      v29 = (_QWORD *)v30[127];
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = v29[4];
          if ( v34 >= v31 )
            break;
          v29 = (_QWORD *)v29[3];
          if ( !v29 )
            goto LABEL_42;
        }
        v35 = (_QWORD *)v29[2];
        if ( v31 >= v34 )
          break;
        v33 = v29;
        v29 = (_QWORD *)v29[2];
        if ( !v35 )
        {
LABEL_42:
          v36 = v32 == v33;
          goto LABEL_43;
        }
      }
      v55 = (_QWORD *)v29[3];
      while ( v55 )
      {
        v28 = (_QWORD *)v55[2];
        if ( v31 < v55[4] )
        {
          v33 = v55;
          v55 = (_QWORD *)v55[2];
        }
        else
        {
          v55 = (_QWORD *)v55[3];
        }
      }
      if ( v35 )
      {
        v28 = v29;
        do
        {
          if ( v35[4] >= v31 )
          {
            v28 = v35;
            v35 = (_QWORD *)v35[2];
          }
          else
          {
            v35 = (_QWORD *)v35[3];
          }
        }
        while ( v35 );
        v29 = v28;
      }
      if ( (_QWORD *)v30[128] != v29 || v32 != v33 )
      {
        if ( v29 != v33 )
        {
          n = (size_t)v29;
          v105 = v10;
          v56 = *(_QWORD *)(v9 + 8);
          do
          {
            v57 = n;
            n = std::_Rb_tree_increment(n);
            v29 = &qword_28;
            v28 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v57, v32);
            operator delete(v28, 0x28u);
            --*(_QWORD *)(v56 + 1040);
          }
          while ( (_QWORD *)n != v33 );
          v10 = v105;
        }
        goto LABEL_46;
      }
    }
    else
    {
      v36 = 1;
LABEL_43:
      if ( (_QWORD *)v30[128] != v33 || !v36 )
        goto LABEL_46;
    }
    v28 = (_QWORD *)v30[127];
    sub_3E54D0(v28);
    v30[128] = v32;
    v30[127] = 0;
    v30[129] = v32;
    v30[130] = 0;
LABEL_46:
    if ( (unsigned __int16)(*(_WORD *)(v9 + 48) - 92) > 2u )
    {
      if ( (*(_BYTE *)(v9 + 844) & 0x10) != 0 )
      {
        v52 = a4;
        if ( *(_BYTE *)(v9 + 145) )
          v52 = a5;
        v53 = v52;
        sub_3E8420(v9, 0x21u, *(unsigned __int16 *)(v9 + 842), v52, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), 1, 0);
        sub_3E8420(v9, 0x1Du, *(unsigned __int16 *)(v9 + 842), v53, 0x3BEA45E214ADDC55LL, 2, 0);
        if ( (*(_BYTE *)(v10 + 13) & 1) != 0 )
        {
          v54 = **(int **)(*(_QWORD *)(v9 + 832) + 512LL);
          sub_3E8420(v9, 0x13u, 1, 3, v54, v54, 0);
        }
      }
      goto LABEL_55;
    }
    if ( *(_WORD *)(v9 + 842) == 4 )
    {
      v37 = *(_QWORD *)(v9 + 832);
      v38 = *(_QWORD *)(v37 + 584);
      if ( !v38 )
        sub_3E4140(*(double *)v15.m128i_i64, (__int64)v28, (__int64)v29);
      v39 = *(_DWORD *)(*(_QWORD *)(v37 + 576) + 4 * v38 - 4);
      *(_QWORD *)(v37 + 584) = v38 - 1;
      v40 = **(int **)(*(_QWORD *)(v9 + 832) + 528LL);
      if ( (unsigned __int16)(*(_WORD *)(v9 + 48) - 92) <= 1u )
      {
        sub_3E8420(v9, 0x21u, 1, a4, v40, 0, 0);
        v41 = v39;
        sub_3E8420(v9, 0x21u, 1, a4 + 1, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), v39, 0);
        sub_3E8420(v9, 0x13u, 1, v39, 0, 0, 0);
        if ( *(_WORD *)(v9 + 48) != 92 )
          goto LABEL_52;
        sub_3E8420(v9, 0x21u, 1, a4 + 2, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), v39, 0);
        sub_3E8420(v9, 0x13u, 1, v39, 0, 0, 0);
        sub_3E8420(v9, 0x21u, 1, a4 + 3, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), v39, 0);
      }
      else
      {
        sub_3E8420(v9, 0x21u, 2, a4, v40, 0, 0);
        v41 = v39;
        sub_3E8420(v9, 0x21u, 2, a4 + 2, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), v39, 0);
      }
      sub_3E8420(v9, 0x13u, 1, v41, 0, 0, 0);
LABEL_52:
      sub_3E62F0(*(_QWORD *)(v9 + 832), v39);
      sub_1D14D0(v9, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 3, 0);
      v42 = **(int **)(*(_QWORD *)(v9 + 832) + 528LL);
      if ( *(_WORD *)(v9 + 48) == 93 )
        sub_3E8420(v9, 0x21u, 2, a4, v42, 1, 0);
      else
        sub_3E8420(v9, 0x21u, *(unsigned __int16 *)(v9 + 842), a4, v42, 1, 0);
      sub_3E8420(v9, 0x1Du, *(unsigned __int16 *)(v9 + 842), a4, 0x3BEA45E214ADDC55LL, 2, 0);
      goto LABEL_55;
    }
    if ( !under_debugger )
      sub_37CFE0(0, (__int64)v29, *(double *)v15.m128i_i64);
LABEL_203:
    BUG();
  }
  if ( v18 <= 0x16u )
  {
    if ( v18 == 9 )
    {
      v89 = *(_WORD *)(v9 + 70);
      if ( (unsigned __int16)(v89 - 32) > 0x1Fu )
      {
LABEL_167:
        v6 = 0;
        goto LABEL_56;
      }
      if ( a3 == -1 )
      {
        if ( v89 == 37 && !*(_QWORD *)(v9 + 152) )
        {
          if ( *((_QWORD *)&v117 + 1) <= 7u )
            v116 = qvector_reserve(&v116, v116, 8, 1);
          v96 = v116;
          v19 = 16;
          v93 = 0;
          *(_QWORD *)&v117 = 8;
          *(_DWORD *)v116 = 1701273439;
          *(_DWORD *)(v96 + 3) = 1920169061;
          *(_BYTE *)(v116 + 7) = 0;
          goto LABEL_163;
        }
      }
      else if ( !*(_QWORD *)(v9 + 152) )
      {
        goto LABEL_189;
      }
      sub_11BE50((__int64)v129, *(_QWORD *)(v9 + 832), v89 - 32, 4, -1, 0);
      v90 = v131;
      if ( v133 <= 5 )
      {
        v131 = (_BYTE *)qvector_reserve(&v131, v131, 6, 1);
        v90 = v131;
      }
      v132 = 6;
      *(_DWORD *)v90 = 1231512946;
      v90[4] = 68;
      v131[5] = 0;
      copy_tinfo_t(v130, &v112);
      v91 = *(_QWORD *)(v9 + 152);
      if ( v91 )
      {
        sub_11BE50((__int64)v134, *(_QWORD *)(v9 + 832), v91, 4, -1, 0);
        v92 = v136;
        if ( v138 <= 5 )
        {
          v136 = (_BYTE *)qvector_reserve(&v136, v136, 6, 1);
          v92 = v136;
        }
        v137 = 6;
        *(_DWORD *)v92 = 1231840627;
        v92[4] = 68;
        v136[5] = 0;
        copy_tinfo_t(v135, &v112);
        sub_3E47E0((__int64)&v116, "$", "_rh");
        v19 = 0;
        v93 = 2;
      }
      else
      {
        sub_3E47E0((__int64)&v116, "$", (const char *)&unk_3F5793);
        v19 = 0;
        v93 = 1;
      }
LABEL_163:
      v107 = v93;
      copy_tinfo_t(&v114, &v112);
      v21 = v107;
      v20 = a4;
      goto LABEL_22;
    }
LABEL_21:
    v19 = 0;
    v20 = -1;
    v21 = 0;
    goto LABEL_22;
  }
  switch ( *(_WORD *)(v9 + 48) )
  {
    case 0x17:
      v88 = a4;
      a4 = a3;
      a5 = v88;
      a3 = v88;
      goto LABEL_151;
    case 0x18:
    case 0x19:
    case 0x1A:
      if ( v18 == 26 )
      {
        sub_3E8420(v9, 0x19u, *(unsigned __int16 *)(v9 + 842), a4, a3, 0, 0);
        sub_3E8420(v9, 0x1Au, *(unsigned __int16 *)(v9 + 842), a4, a3, 3, 0);
      }
      else
      {
LABEL_151:
        sub_3E8420(v9, 0x23u, *(unsigned __int16 *)(v9 + 842), a4, a3, 0, 0);
        sub_3E8420(v9, 0x1Eu, *(unsigned __int16 *)(v9 + 842), a4, a3, 3, 0);
      }
      v75 = get_tinfo_size(0, v113, 0);
      sub_329650((__int64)v129, a4, v75, (__int64)&v113);
      v76 = v131;
      if ( v133 <= 1 )
      {
        v131 = (_BYTE *)qvector_reserve(&v131, v131, 2, 1);
        v76 = v131;
      }
      v132 = 2;
      *v76 = 97;
      v131[1] = 0;
      v77 = get_tinfo_size(0, v113, 0);
      sub_329650((__int64)v134, a3, v77, (__int64)&v113);
      v78 = v136;
      if ( v138 <= 1 )
      {
        v136 = (_BYTE *)qvector_reserve(&v136, v136, 2, 1);
        v78 = v136;
      }
      v137 = 2;
      *v78 = 98;
      v136[1] = 0;
      copy_tinfo_t(&v114, &v113);
      v20 = a5;
      v19 = 0;
      v21 = 2;
      goto LABEL_22;
    case 0x27:
      v81 = *(_WORD *)(v9 + 110);
      if ( (unsigned __int16)(v81 - 32) > 0x1Fu )
        goto LABEL_167;
      if ( a4 == -1 )
      {
        if ( v81 == 37 && !*(_QWORD *)(v9 + 152) )
        {
          if ( *((_QWORD *)&v117 + 1) <= 7u )
          {
            a2 = v116;
            a1 = &v116;
            v116 = qvector_reserve(&v116, v116, 8, 1);
          }
          v97 = v116;
          *(_QWORD *)&v117 = 8;
          *(_DWORD *)v116 = 1702059871;
          *(_DWORD *)(v97 + 3) = 1920169061;
          *(_BYTE *)(v116 + 7) = 0;
          if ( (*(_BYTE *)(*(_QWORD *)(v9 + 800) + 606LL) & 0x20) != 0 )
          {
            if ( *(_WORD *)(v9 + 842) != 4 )
            {
              if ( !under_debugger )
                sub_37CFE0(0, a2, 0.0);
              goto LABEL_203;
            }
            v98 = *(_QWORD *)(v9 + 832);
            v99 = *(_QWORD *)(v98 + 584);
            if ( !v99 )
              sub_3E4140(0.0, (__int64)a1, a2);
            v100 = *(int *)(*(_QWORD *)(v98 + 576) + 4 * v99 - 4);
            *(_QWORD *)(v98 + 584) = v99 - 1;
            sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), 1, 0x3BEA45E214ADDC55LL, v100, 0);
            sub_3E8420(v9, 0x14u, *(unsigned __int16 *)(v9 + 842), a3, v100, v100, 0);
            sub_3E8420(v9, 0x21u, 1, v100, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), 1, 0);
            sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), 2, 0x3BEA45E214ADDC55LL, v100, 0);
            sub_3E8420(v9, 0x14u, *(unsigned __int16 *)(v9 + 842), a3, v100, v100, 0);
            sub_3E8420(v9, 0x21u, 1, v100, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), 2, 0);
            sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), 4, 0x3BEA45E214ADDC55LL, v100, 0);
            sub_3E8420(v9, 0x14u, *(unsigned __int16 *)(v9 + 842), a3, v100, v100, 0);
            sub_3E8420(v9, 0x21u, 1, v100, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), 3, 0);
            sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), 8, 0x3BEA45E214ADDC55LL, v100, 0);
            sub_3E8420(v9, 0x14u, *(unsigned __int16 *)(v9 + 842), a3, v100, v100, 0);
            sub_3E8420(v9, 0x21u, 1, v100, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), 0, 0);
            v103 = **(_DWORD **)(*(_QWORD *)(v9 + 832) + 512LL);
            sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), 16, 0x3BEA45E214ADDC55LL, v100, 0);
            sub_3E8420(v9, 0x14u, *(unsigned __int16 *)(v9 + 842), a3, v100, v100, 0);
            sub_3E8420(v9, 0x21u, 1, v100, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), v103, 0);
            v104 = *(_DWORD *)(*(_QWORD *)(v9 + 832) + 520LL);
            sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), 32, 0x3BEA45E214ADDC55LL, v100, 0);
            sub_3E8420(v9, 0x14u, *(unsigned __int16 *)(v9 + 842), a3, v100, v100, 0);
            sub_3E8420(v9, 0x21u, 1, v100, **(int **)(*(_QWORD *)(v9 + 832) + 528LL), v104, 0);
            sub_3E62F0(*(_QWORD *)(v9 + 832), v100);
          }
          else
          {
            sub_3E6000(v118, 1, 5);
            sub_3E6000(v118, *(_DWORD *)(*(_QWORD *)(v9 + 832) + 520LL), 1);
          }
          v85 = v129;
          v86 = 1;
          goto LABEL_148;
        }
LABEL_142:
        sub_11BE50((__int64)v129, *(_QWORD *)(v9 + 832), v81 - 32, 4, -1, 0);
        copy_tinfo_t(v130, &v112);
        v82 = v131;
        if ( v133 <= 5 )
        {
          v131 = (_BYTE *)qvector_reserve(&v131, v131, 6, 1);
          v82 = v131;
        }
        v132 = 6;
        *(_DWORD *)v82 = 1231512946;
        v82[4] = 68;
        v131[5] = 0;
        v83 = *(_QWORD *)(v9 + 152);
        if ( v83 )
        {
          sub_11BE50((__int64)v134, *(_QWORD *)(v9 + 832), v83, 4, -1, 0);
          v84 = v136;
          if ( v138 <= 5 )
          {
            v136 = (_BYTE *)qvector_reserve(&v136, v136, 6, 1);
            v84 = v136;
          }
          v137 = 6;
          *(_DWORD *)v84 = 1231840627;
          v84[4] = 68;
          v136[5] = 0;
          copy_tinfo_t(v135, &v112);
          sub_3E47E0((__int64)&v116, "$", "_rh");
          v85 = &v139;
          v86 = 3;
        }
        else
        {
          sub_3E47E0((__int64)&v116, "$", (const char *)&unk_3F5793);
          v85 = v134;
          v86 = 2;
        }
LABEL_148:
        v106 = v86;
        v87 = get_tinfo_size(0, v112, 0);
        sub_329650((__int64)v85, a3, v87, (__int64)&v112);
        v21 = v106;
        v19 = 0;
        v20 = -1;
        goto LABEL_22;
      }
      if ( *(_QWORD *)(v9 + 152) )
        goto LABEL_142;
      break;
    case 0x2F:
      sub_1D14D0(v9, 3u, 1, 0, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(v9 + 832) + 520LL), 0);
      goto LABEL_21;
    case 0x31:
      sub_1D14D0(v9, 3u, 1, 1, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(v9 + 832) + 520LL), 0);
      goto LABEL_21;
    case 0x5C:
    case 0x5D:
      v19 = 12;
      goto LABEL_136;
    case 0x5E:
      v19 = 0;
LABEL_136:
      v79 = get_tinfo_size(0, v112, 0);
      sub_329650((__int64)v129, a3, v79, (__int64)&v112);
      v80 = v131;
      if ( v133 <= 1 )
      {
        v131 = (_BYTE *)qvector_reserve(&v131, v131, 2, 1);
        v80 = v131;
      }
      v132 = 2;
      *v80 = 97;
      v131[1] = 0;
      copy_tinfo_t(&v114, &v112);
      v20 = a4;
      v21 = 1;
      goto LABEL_22;
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
      if ( *(_WORD *)(v9 + 842) != 4 )
      {
        if ( !under_debugger )
          sub_37CFE0(0, a2, 0.0);
        goto LABEL_203;
      }
      v68 = v18 - 106;
      if ( v68 > 2u )
      {
        v102 = -2;
        v69 = 0xFFFFFFFFLL;
      }
      else
      {
        v69 = dword_40DB18[v68];
        v102 = dword_40DB08[v68];
      }
      v70 = *(_QWORD *)(v9 + 832);
      v71 = *(_QWORD *)(v70 + 584);
      if ( !v71 )
        sub_3E4140(0.0, (__int64)a1, a2);
      v72 = *(int *)(*(_QWORD *)(v70 + 576) + 4 * v71 - 4);
      *(_QWORD *)(v70 + 584) = v71 - 1;
      sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), v69, 0x3BEA45E214ADDC55LL, v72, 0);
      sub_3E8420(v9, 0x21u, *(unsigned __int16 *)(v9 + 842), a3, v72, 1, 0);
      sub_1D14D0(v9, 3u, *(unsigned __int16 *)(v9 + 842), v102, 0x3BEA45E214ADDC55LL, v72, 0);
      sub_3E8420(v9, 0x21u, *(unsigned __int16 *)(v9 + 842), a3, v72, 0, 0);
      sub_1D14D0(v9, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 3, 0);
      sub_1D14D0(v9, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 2, 0);
      sub_3E62F0(*(_QWORD *)(v9 + 832), v72);
      v73 = get_tinfo_size(0, v112, 0);
      sub_329650((__int64)v129, a3, v73, (__int64)&v112);
      v74 = v131;
      if ( v133 <= 1 )
      {
        v131 = (_BYTE *)qvector_reserve(&v131, v131, 2, 1);
        v74 = v131;
      }
      v132 = 2;
      *v74 = 97;
      v131[1] = 0;
      copy_tinfo_t(&v114, &v112);
      v20 = a4;
      v19 = 0;
      v21 = 1;
      goto LABEL_22;
    default:
      goto LABEL_21;
  }
LABEL_189:
  sub_3E8420(v9, 4u, *(unsigned __int16 *)(v9 + 842), a3, 0x3BEA45E214ADDC55LL, a4, 0);
LABEL_55:
  v6 = 1;
LABEL_56:
  if ( v127 )
  {
    v128.m128i_i64[0] = 0;
    qfree(v127);
  }
  qfree(v125);
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree(v123);
  }
  qfree(v121);
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119);
  }
  qfree(v118[0]);
  v43 = &v140;
  do
  {
    v43 -= 80;
    cleanup_argloc(v43 + 56);
    v44 = *((_QWORD *)v43 + 4);
    if ( v44 )
    {
      *((_QWORD *)v43 + 5) = 0;
      qfree(v44);
    }
    clear_tinfo_t(v43 + 24);
    sub_1181E0((__int64)v43);
  }
  while ( v43 != v129 );
  clear_tinfo_t(&v114);
  clear_tinfo_t(&v113);
  clear_tinfo_t(&v112);
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    qfree(v116);
  }
  return v6;
}
