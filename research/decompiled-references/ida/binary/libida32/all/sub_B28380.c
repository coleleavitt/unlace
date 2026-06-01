__int64 __fastcall sub_B28380(__int64 a1)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rdi
  _BYTE *v4; // r13
  char v5; // al
  _BOOL8 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rbp
  unsigned __int8 *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  const __m128i *v17; // rcx
  __int32 v18; // eax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rcx
  char **v21; // rdx
  __m128i *v22; // rdx
  __int64 v23; // rdx
  char v24; // r10
  __m128i *v25; // rax
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned int v33; // eax
  const __m128i *v34; // r13
  __int64 v35; // r15
  const __m128i *v36; // rcx
  __int32 v37; // edx
  __m128i v38; // xmm0
  __int64 v39; // rcx
  bool v40; // r14
  _UNKNOWN **v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rdx
  unsigned int v45; // r9d
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rdi
  const __m128i *v50; // r11
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  __m128i *v53; // rcx
  char *v54; // r13
  __int64 v55; // rdx
  char *v56; // r11
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rsi
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  __m128i v61; // xmm1
  __int32 v62; // r15d
  __int64 v63; // r15
  __int64 v64; // rax
  const __m128i *v65; // r13
  unsigned __int64 v66; // rdx
  __m128i *v67; // rax
  __int64 v68; // r15
  unsigned int v69; // edx
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // eax
  int v73; // r11d
  const __m128i *v74; // r15
  const __m128i *v75; // rdx
  __int32 v76; // ecx
  __m128i v77; // xmm0
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rsi
  __m128i v83; // xmm0
  __int64 v84; // rsi
  char *v85; // rax
  __int64 v86; // rcx
  signed __int64 v87; // r15
  __int64 v88; // rcx
  unsigned __int64 v89; // rdi
  unsigned __int64 v90; // rdx
  __int64 v91; // rdi
  __int8 *v92; // r13
  __int64 v93; // rdx
  __int8 *v94; // rsi
  __int64 v95; // rdx
  __int8 *v96; // rdi
  __int8 *v97; // r13
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // [rsp+0h] [rbp-278h]
  __int64 v102; // [rsp+8h] [rbp-270h]
  int v103; // [rsp+10h] [rbp-268h]
  unsigned __int8 *v104; // [rsp+10h] [rbp-268h]
  unsigned __int8 *v105; // [rsp+10h] [rbp-268h]
  unsigned __int8 *v106; // [rsp+10h] [rbp-268h]
  int v107; // [rsp+18h] [rbp-260h]
  unsigned int v108; // [rsp+18h] [rbp-260h]
  unsigned int v109; // [rsp+18h] [rbp-260h]
  int v110; // [rsp+18h] [rbp-260h]
  unsigned int v111; // [rsp+18h] [rbp-260h]
  int v112; // [rsp+18h] [rbp-260h]
  int v113; // [rsp+1Ch] [rbp-25Ch]
  __int8 *v114; // [rsp+20h] [rbp-258h]
  unsigned __int8 *v115; // [rsp+20h] [rbp-258h]
  unsigned __int8 *v116; // [rsp+20h] [rbp-258h]
  unsigned __int8 *v117; // [rsp+20h] [rbp-258h]
  __m128i *v118; // [rsp+28h] [rbp-250h]
  __m128i *v119; // [rsp+28h] [rbp-250h]
  __int8 *v120; // [rsp+28h] [rbp-250h]
  unsigned __int8 *v121; // [rsp+28h] [rbp-250h]
  __int64 v122; // [rsp+28h] [rbp-250h]
  unsigned __int8 *v123; // [rsp+30h] [rbp-248h]
  unsigned __int8 *v124; // [rsp+30h] [rbp-248h]
  __int64 v125; // [rsp+30h] [rbp-248h]
  __m128i *v126; // [rsp+30h] [rbp-248h]
  __m128i *v127; // [rsp+38h] [rbp-240h]
  __int64 v128; // [rsp+38h] [rbp-240h]
  __m128i *v129; // [rsp+38h] [rbp-240h]
  char v130; // [rsp+40h] [rbp-238h]
  __m128i *v131; // [rsp+40h] [rbp-238h]
  char v132; // [rsp+40h] [rbp-238h]
  char *v133; // [rsp+48h] [rbp-230h]
  char v134; // [rsp+48h] [rbp-230h]
  const __m128i *v135; // [rsp+48h] [rbp-230h]
  _DWORD v136[3]; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v137; // [rsp+5Ch] [rbp-21Ch]
  __int64 v138; // [rsp+60h] [rbp-218h]
  char **v139; // [rsp+70h] [rbp-208h] BYREF
  __m128i *v140; // [rsp+78h] [rbp-200h]
  char v141; // [rsp+80h] [rbp-1F8h]
  void *ptr; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 v143; // [rsp+90h] [rbp-1E8h]
  _BYTE v144[384]; // [rsp+98h] [rbp-1E0h] BYREF
  __m128i *v145; // [rsp+218h] [rbp-60h]
  unsigned __int64 v146; // [rsp+220h] [rbp-58h]
  unsigned __int8 *v147; // [rsp+228h] [rbp-50h]
  __int64 v148; // [rsp+230h] [rbp-48h]

  v2 = sub_B1A550(*(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  v5 = *((_BYTE *)v2 + 19);
  v6 = *(_DWORD *)(a1 + 52) != 4;
  v7 = *(unsigned int *)(a1 + 56);
  if ( (v5 & 0x10) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 60);
    v9 = *(unsigned int *)(a1 + 48);
    v10 = v8 + (unsigned int)v9 - 1;
    if ( v8 <= 1 )
      v10 = (unsigned int)v9;
    v11 = 0;
    v102 = 0;
    v13 = sub_B31790(v3, v9, v10, v7, v6);
LABEL_5:
    v16 = *(unsigned int *)(a1 + 80);
    if ( (_DWORD)v16 )
      goto LABEL_6;
    goto LABEL_42;
  }
  v45 = *(_DWORD *)(a1 + 60);
  v9 = *(unsigned int *)(a1 + 48);
  v46 = v45 + (unsigned int)v9 - 1;
  if ( v45 <= 1 )
    v46 = (unsigned int)v9;
  if ( (v5 & 0x20) == 0 )
  {
    v11 = 0;
    v13 = 0;
    v102 = sub_B2FEE0(v3, v9, v46, v7, v6);
    goto LABEL_5;
  }
  v47 = sub_B30F90(v3, v9, v46, v7, v6);
  v16 = *(unsigned int *)(a1 + 80);
  v13 = 0;
  v102 = 0;
  v11 = v47;
  if ( (_DWORD)v16 )
  {
LABEL_6:
    v17 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * (unsigned int)v16 - 24);
    v18 = v17->m128i_i32[1];
    v19 = _mm_loadu_si128(v17);
    v20 = v17[1].m128i_u64[0];
    *(_DWORD *)(a1 + 80) = v16 - 1;
    *(__m128i *)(a1 + 48) = v19;
    *(_QWORD *)(a1 + 64) = v20;
    if ( (unsigned int)(v18 - 4) > 1 )
      goto LABEL_7;
    goto LABEL_43;
  }
LABEL_42:
  v9 = a1 + 48;
  sub_B1F6B0(*(_QWORD *)a1, a1 + 48, v16, v12, v14, (_BYTE *)v15, v101);
  v18 = *(_DWORD *)(a1 + 52);
  if ( (unsigned int)(v18 - 4) > 1 )
    goto LABEL_7;
LABEL_43:
  v9 = *(unsigned int *)(a1 + 56);
  if ( (*((_BYTE *)sub_B1A550(*(_QWORD *)(a1 + 40), v9) + 19) & 2) != 0 )
  {
    v29 = sub_B30AC0(*(_QWORD *)(a1 + 8), 0, 0);
    v30 = *(_QWORD *)(a1 + 8);
    if ( !v13 )
    {
      v31 = v29;
      if ( v11 )
        goto LABEL_26;
LABEL_53:
      v13 = v102;
      sub_B3A680(v30, v102, v31);
      return v13;
    }
    goto LABEL_30;
  }
  v18 = *(_DWORD *)(a1 + 52);
LABEL_7:
  v11 |= v13;
  if ( !v11 && (v4[18] & 0xF0) == 0 )
    goto LABEL_22;
  v21 = *(char ***)(a1 + 16);
  v140 = (__m128i *)a1;
  v141 = 0;
  v139 = v21;
  v22 = (__m128i *)v144;
  ptr = v144;
  v143 = 0x1000000000LL;
  v148 = 0;
  if ( v18 != 1 )
  {
    if ( v18 != 2 )
    {
      v141 = 1;
      goto LABEL_12;
    }
    v74 = (const __m128i *)(a1 + 48);
    goto LABEL_73;
  }
  v72 = *(_DWORD *)(a1 + 80);
  v73 = *(_DWORD *)(a1 + 48);
  v74 = (const __m128i *)(a1 + 48);
  v14 = *(unsigned __int8 **)(a1 + 64);
  v15 = *(_QWORD *)(a1 + 56);
  if ( v72 )
  {
    v75 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v72 - 24);
    v76 = v75->m128i_i32[1];
    v77 = _mm_loadu_si128(v75);
    v78 = v75[1].m128i_i64[0];
    *(_DWORD *)(a1 + 80) = v72 - 1;
    v79 = a1;
    *(__m128i *)(a1 + 48) = v77;
    *(_QWORD *)(a1 + 64) = v78;
  }
  else
  {
    v119 = *(__m128i **)(a1 + 56);
    v115 = *(unsigned __int8 **)(a1 + 64);
    v110 = *(_DWORD *)(a1 + 48);
    sub_B1F6B0(*(_QWORD *)a1, a1 + 48, (__int64)v144, v20, v14, (_BYTE *)v15, v101);
    v79 = (__int64)v140;
    v73 = v110;
    v14 = v115;
    v15 = (__int64)v119;
    v76 = v140[3].m128i_i32[1];
    v74 = v140 + 3;
  }
  if ( v76 == 2 )
  {
    v14 = (unsigned __int8 *)((unsigned int)v143 + 1LL);
    v22 = (__m128i *)((char *)ptr + 24 * (unsigned int)v143);
    if ( (unsigned __int64)v14 > HIDWORD(v143) )
    {
      if ( ptr > v74 || v22 <= v74 )
      {
        sub_22134E0(&ptr, v144, (unsigned int)v143 + 1LL, 24);
        v22 = (__m128i *)((char *)ptr + 24 * (unsigned int)v143);
      }
      else
      {
        v87 = (char *)v74 - (_BYTE *)ptr;
        sub_22134E0(&ptr, v144, (unsigned int)v143 + 1LL, 24);
        v74 = (const __m128i *)((char *)ptr + v87);
        v22 = (__m128i *)((char *)ptr + 24 * (unsigned int)v143);
      }
    }
LABEL_73:
    *v22 = _mm_loadu_si128(v74);
    v22[1].m128i_i64[0] = v74[1].m128i_i64[0];
    v22 = v140;
    v80 = v140[5].m128i_u32[0];
    v81 = v143 + 1;
    LODWORD(v143) = v143 + 1;
    if ( (_DWORD)v80 )
    {
      v82 = (unsigned int)v80;
      v20 = (unsigned int)(v80 - 1);
      v83 = _mm_loadu_si128((const __m128i *)(v140[4].m128i_i64[1] + 24 * v82 - 24));
      v84 = *(_QWORD *)(v140[4].m128i_i64[1] + 24 * v82 - 24 + 16);
      v140[5].m128i_i32[0] = v20;
      v22[4].m128i_i64[0] = v84;
      v22[3] = v83;
    }
    else
    {
      sub_B1F6B0(v140->m128i_i64[0], (__int64)v140[3].m128i_i64, (__int64)v140, v80, v14, (_BYTE *)v15, v101);
      v81 = v143;
    }
    if ( v81 == 1 )
    {
      v85 = (char *)ptr + 24 * HIDWORD(v148);
      v22 = *((__m128i **)v85 + 2);
      v145 = v22;
      v86 = *((unsigned int *)v85 + 2);
      v147 = (unsigned __int8 *)v22;
      v20 = (unsigned __int64)v22->m128i_u64 + v86;
      v146 = v20;
      LODWORD(v148) = *(_DWORD *)v85;
    }
    goto LABEL_12;
  }
  v88 = *(unsigned int *)(v79 + 80);
  v89 = *(_QWORD *)(v79 + 72);
  v90 = v88 + 1;
  v20 = v89 + 24 * v88;
  if ( v90 > *(unsigned int *)(v79 + 84) )
  {
    v99 = v79 + 88;
    v126 = (__m128i *)v15;
    v122 = v79;
    v117 = v14;
    v112 = v73;
    if ( v89 > (unsigned __int64)v74 || v20 <= (unsigned __int64)v74 )
    {
      sub_22134E0(v79 + 72, v99, v90, 24);
      v79 = v122;
      v15 = (__int64)v126;
      v14 = v117;
      v73 = v112;
      v20 = *(_QWORD *)(v122 + 72) + 24LL * *(unsigned int *)(v122 + 80);
    }
    else
    {
      sub_22134E0(v79 + 72, v99, v90, 24);
      v79 = v122;
      v73 = v112;
      v14 = v117;
      v15 = (__int64)v126;
      v100 = *(_QWORD *)(v122 + 72);
      v74 = (const __m128i *)((char *)v74 + v100 - v89);
      v20 = v100 + 24LL * *(unsigned int *)(v122 + 80);
    }
  }
  *(__m128i *)v20 = _mm_loadu_si128(v74);
  v22 = (__m128i *)v74[1].m128i_i64[0];
  *(_QWORD *)(v20 + 16) = v22;
  *(_DWORD *)(v79 + 48) = v73;
  ++*(_DWORD *)(v79 + 80);
  *(_DWORD *)(v79 + 52) = 1;
  *(_QWORD *)(v79 + 56) = v15;
  *(_QWORD *)(v79 + 64) = v14;
  v141 = 1;
LABEL_12:
  if ( v13 )
  {
    v9 = v13;
    sub_B22300(a1, v13, &v139, v20, (unsigned __int64)v14, (__m128i *)v15);
  }
  else if ( v11 )
  {
    v9 = (unsigned __int64)v136;
    v136[0] = 0;
    if ( (unsigned __int8)sub_B219C0(&v139, (__int64)v136, (__int64)v22, v20, (__int64)v14) )
    {
      v9 = v11;
      v48 = v137 + v136[0] - 1;
      if ( v137 <= 1 )
        v48 = v136[0];
      sub_B3A740(*(_QWORD *)(a1 + 8), v11, v136[0], v48, v138, v136[2]);
    }
  }
  else
  {
    v68 = *(_QWORD *)(a1 + 8);
    v69 = v4[18] >> 4;
    if ( (v4[19] & 0x40) != 0 )
    {
      v70 = sub_B1FBF0(a1, &v139, v69, v20, v14, v15);
    }
    else if ( (v4[20] & 2) != 0 )
    {
      v70 = sub_B20DD0(a1, &v139, v69, v20, (__int64)v14, v15);
    }
    else
    {
      v70 = sub_B24C40(a1, &v139, v69, v20, (__int64)v14, v15);
    }
    v9 = v102;
    sub_B29640(v68, v102, v70, v71);
  }
  v23 = HIDWORD(v148);
  v20 = (unsigned int)v143;
  if ( HIDWORD(v148) >= (unsigned int)v143 )
    goto LABEL_19;
  v14 = v147;
  v9 = (unsigned __int64)v145;
  if ( v147 == (unsigned __int8 *)v145 )
  {
    v14 = nullptr;
    v107 = 0;
    v24 = 0;
  }
  else
  {
    v23 = (unsigned int)(HIDWORD(v148) + 1);
    v24 = 1;
    ++HIDWORD(v148);
    v9 = v147 - (unsigned __int8 *)v145;
    v103 = v146 - (_DWORD)v147;
    v113 = v146 - (_DWORD)v147;
    v107 = (_DWORD)v147 - (_DWORD)v145 + v148;
  }
  v25 = v140;
  v15 = (__int64)ptr;
  v26 = 24 * v23;
  v27 = 24LL * (unsigned int)v143 - 24 * v23;
  if ( v27 )
  {
    v49 = v140[4].m128i_u64[1];
    v50 = v140 + 3;
    v114 = &v140[4].m128i_i8[8];
    v51 = v140[5].m128i_u32[0];
    v52 = v51 + 1;
    v53 = (__m128i *)(v49 + 24 * v51);
    if ( v52 > v140[5].m128i_u32[1] )
    {
      v94 = &v140[5].m128i_i8[8];
      if ( v49 > (unsigned __int64)v50 || v53 <= v50 )
      {
        v135 = v140 + 3;
        v132 = v24;
        v129 = (__m128i *)ptr;
        v125 = (__int64)v140;
        v121 = v14;
        sub_22134E0(v114, v94, v52, 24);
        v25 = (__m128i *)v125;
        v50 = v135;
        v24 = v132;
        v15 = (__int64)v129;
        v14 = v121;
        v53 = (__m128i *)(*(_QWORD *)(v125 + 72) + 24LL * *(unsigned int *)(v125 + 80));
      }
      else
      {
        v134 = v24;
        v131 = (__m128i *)ptr;
        v128 = (__int64)v140;
        v124 = v14;
        v120 = &v50->m128i_i8[-v49];
        sub_22134E0(v114, v94, v52, 24);
        v25 = (__m128i *)v128;
        v14 = v124;
        v15 = (__int64)v131;
        v95 = *(_QWORD *)(v128 + 72);
        v24 = v134;
        v50 = (const __m128i *)&v120[v95];
        v53 = (__m128i *)(v95 + 24LL * *(unsigned int *)(v128 + 80));
      }
    }
    v15 += v26;
    v54 = (char *)(v15 + v27);
    *v53 = _mm_loadu_si128(v50);
    v55 = v50[1].m128i_i64[0];
    v56 = (char *)(v15 + 24);
    v53[1].m128i_i64[0] = v55;
    v57 = 0xAAAAAAAAAAAAAAABLL * ((v27 - 24) >> 3);
    v58 = v25[5].m128i_u32[1];
    v59 = (unsigned int)(v25[5].m128i_i32[0] + 1);
    v25[5].m128i_i32[0] = v59;
    if ( v57 + v59 > v58 )
    {
      v133 = (char *)(v15 + 24);
      v130 = v24;
      v127 = (__m128i *)v15;
      v123 = v14;
      v118 = v25;
      sub_22134E0(v114, &v25[5].m128i_u64[1], v57 + v59, 24);
      v25 = v118;
      v56 = v133;
      v24 = v130;
      v15 = (__int64)v127;
      v59 = v118[5].m128i_u32[0];
      v14 = v123;
    }
    v9 = v25[4].m128i_u64[1];
    v60 = v9 + 24 * v59;
    if ( v56 != v54 )
    {
      do
      {
        v61 = _mm_loadu_si128((const __m128i *)(v54 - 24));
        v54 -= 24;
        v60 += 24LL;
        *(__m128i *)(v60 - 24) = v61;
        *(_QWORD *)(v60 - 8) = *((_QWORD *)v54 + 2);
      }
      while ( v56 != v54 );
      LODWORD(v59) = v25[5].m128i_i32[0];
    }
    v62 = v59 + v57;
    v20 = (unsigned int)v143;
    v25[5].m128i_i32[0] = v62;
    v25[3] = _mm_loadu_si128((const __m128i *)v15);
    v25[4].m128i_i64[0] = *(_QWORD *)(v15 + 16);
    HIDWORD(v148) = v20;
    if ( !v24 )
      goto LABEL_19;
    goto LABEL_63;
  }
  HIDWORD(v148) = v143;
  if ( v24 )
  {
LABEL_63:
    v63 = (__int64)v140;
    v64 = v140[5].m128i_u32[0];
    v20 = v140[4].m128i_u64[1];
    v65 = v140 + 3;
    v9 = v140[5].m128i_u32[1];
    v66 = v64 + 1;
    v67 = (__m128i *)(v20 + 24 * v64);
    if ( v66 > v9 )
    {
      v96 = &v140[4].m128i_i8[8];
      v9 = (unsigned __int64)&v140[5].m128i_u64[1];
      v116 = v14;
      if ( v20 > (unsigned __int64)v65 || v67 <= v65 )
      {
        sub_22134E0(v96, v9, v66, 24);
        v14 = v116;
        v67 = (__m128i *)(*(_QWORD *)(v63 + 72) + 24LL * *(unsigned int *)(v63 + 80));
      }
      else
      {
        v97 = &v65->m128i_i8[-v20];
        sub_22134E0(v96, v9, v66, 24);
        v98 = *(_QWORD *)(v63 + 72);
        v14 = v116;
        v65 = (const __m128i *)&v97[v98];
        v67 = (__m128i *)(v98 + 24LL * *(unsigned int *)(v63 + 80));
      }
    }
    *v67 = _mm_loadu_si128(v65);
    v67[1].m128i_i64[0] = v65[1].m128i_i64[0];
    ++*(_DWORD *)(v63 + 80);
    *(_DWORD *)(v63 + 48) = v107;
    *(_DWORD *)(v63 + 52) = 2;
    *(_DWORD *)(v63 + 56) = v103;
    *(_QWORD *)(v63 + 64) = v14;
    *(_DWORD *)(v63 + 60) = v113;
  }
LABEL_19:
  if ( ptr != v144 )
    free(ptr);
  v18 = *(_DWORD *)(a1 + 52);
LABEL_22:
  v28 = (unsigned int)(v18 - 4);
  if ( (unsigned int)v28 <= 1 )
  {
    v9 = *(unsigned int *)(a1 + 56);
    if ( (*((_BYTE *)sub_B1A550(*(_QWORD *)(a1 + 40), v9) + 19) & 2) != 0 )
      goto LABEL_29;
    if ( *(_DWORD *)(a1 + 52) != 1 )
    {
LABEL_24:
      v29 = sub_B27310(a1, v9, v28, v20, v14, (_BYTE *)v15);
      v30 = *(_QWORD *)(a1 + 8);
      if ( !v13 )
        goto LABEL_25;
LABEL_30:
      sub_B2A360(v30, v13, v29);
      return v13;
    }
  }
  else if ( v18 != 1 )
  {
    goto LABEL_24;
  }
  v33 = *(_DWORD *)(a1 + 80);
  v15 = *(unsigned int *)(a1 + 48);
  v34 = (const __m128i *)(a1 + 48);
  v35 = *(_QWORD *)(a1 + 64);
  v14 = *(unsigned __int8 **)(a1 + 56);
  if ( v33 )
  {
    v36 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v33 - 24);
    v37 = v36->m128i_i32[1];
    v38 = _mm_loadu_si128(v36);
    v39 = v36[1].m128i_i64[0];
    *(_DWORD *)(a1 + 80) = v33 - 1;
    *(__m128i *)(a1 + 48) = v38;
    *(_QWORD *)(a1 + 64) = v39;
  }
  else
  {
    v105 = *(unsigned __int8 **)(a1 + 56);
    v109 = *(_DWORD *)(a1 + 48);
    sub_B1F6B0(*(_QWORD *)a1, a1 + 48, v28, v20, v14, (_BYTE *)v15, v101);
    v37 = *(_DWORD *)(a1 + 52);
    v15 = v109;
    v14 = v105;
  }
  v40 = 0;
  if ( (unsigned int)(v37 - 4) <= 1 )
  {
    v104 = v14;
    v108 = v15;
    v41 = sub_B1A550(*(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 56));
    v14 = v104;
    v15 = v108;
    v40 = (*((_BYTE *)v41 + 19) & 2) != 0;
  }
  v42 = *(unsigned int *)(a1 + 80);
  v43 = *(_QWORD *)(a1 + 72);
  v9 = *(unsigned int *)(a1 + 84);
  v44 = v42 + 1;
  v20 = v43 + 24 * v42;
  if ( v44 > v9 )
  {
    v91 = a1 + 72;
    v9 = a1 + 88;
    v106 = v14;
    v111 = v15;
    if ( v43 > (unsigned __int64)v34 || v20 <= (unsigned __int64)v34 )
    {
      sub_22134E0(v91, v9, v44, 24);
      v14 = v106;
      v15 = v111;
      v20 = *(_QWORD *)(a1 + 72) + 24LL * *(unsigned int *)(a1 + 80);
    }
    else
    {
      v92 = &v34->m128i_i8[-v43];
      sub_22134E0(v91, v9, v44, 24);
      v93 = *(_QWORD *)(a1 + 72);
      v15 = v111;
      v14 = v106;
      v34 = (const __m128i *)&v92[v93];
      v20 = v93 + 24LL * *(unsigned int *)(a1 + 80);
    }
  }
  *(__m128i *)v20 = _mm_loadu_si128(v34);
  v28 = v34[1].m128i_i64[0];
  *(_QWORD *)(v20 + 16) = v28;
  *(_DWORD *)(a1 + 48) = v15;
  ++*(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 52) = 1;
  *(_QWORD *)(a1 + 56) = v14;
  *(_QWORD *)(a1 + 64) = v35;
  if ( !v40 )
    goto LABEL_24;
LABEL_29:
  v29 = sub_B30AC0(*(_QWORD *)(a1 + 8), 0, 0);
  v30 = *(_QWORD *)(a1 + 8);
  if ( v13 )
    goto LABEL_30;
LABEL_25:
  v31 = v29;
  if ( !v11 )
    goto LABEL_53;
LABEL_26:
  v13 = v11;
  sub_B2A340(v30, v11, v31);
  return v13;
}

