__int64 __fastcall sub_C84C0(__int64 a1, _QWORD *a2, __m128i a3, double a4, __m128i a5, double a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r12d
  unsigned int v11; // r15d
  _QWORD *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned int v19; // r12d
  __int64 v20; // r13
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r11
  _QWORD *v24; // r9
  __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // rax
  int v28; // r10d
  __int64 v29; // rsi
  __int64 v30; // r14
  _DWORD *v31; // r10
  __int64 v32; // r14
  _DWORD *v33; // rsi
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r12
  int v37; // r14d
  _QWORD *v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 *v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // r14
  unsigned int v50; // ecx
  _DWORD *v51; // rax
  _DWORD *v52; // rdx
  char *v53; // rdi
  int v54; // eax
  int v55; // r12d
  __int64 v56; // r15
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // edi
  __int64 v60; // rax
  __int64 v61; // rcx
  double v62; // xmm4_8
  __m128 v63; // xmm5
  __int64 v64; // rax
  __int64 *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // r13d
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // r9d
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // r9d
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  _QWORD *v87; // r13
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rcx
  int v90; // r8d
  int v91; // r9d
  __int64 v92; // rdi
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  int v95; // r8d
  int v96; // r9d
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // r15
  __int64 v100; // r11
  _DWORD *v101; // r10
  _DWORD *v102; // rdi
  __int64 v103; // r12
  _DWORD *v104; // rcx
  char v105; // al
  __int64 v106; // rdi
  unsigned int i; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // edx
  __int64 v111; // rdi
  unsigned __int64 v112; // [rsp-10h] [rbp-F0h]
  int v113; // [rsp+0h] [rbp-E0h]
  __int64 v114; // [rsp+8h] [rbp-D8h]
  char v115; // [rsp+8h] [rbp-D8h]
  __int64 v116; // [rsp+8h] [rbp-D8h]
  __int64 v117; // [rsp+10h] [rbp-D0h]
  __int64 v118; // [rsp+18h] [rbp-C8h]
  __int64 v119; // [rsp+20h] [rbp-C0h]
  unsigned __int64 v120; // [rsp+20h] [rbp-C0h]
  __int64 *v121; // [rsp+20h] [rbp-C0h]
  __int64 v122; // [rsp+28h] [rbp-B8h]
  int v123; // [rsp+30h] [rbp-B0h]
  int v124; // [rsp+38h] [rbp-A8h]
  char v125; // [rsp+3Fh] [rbp-A1h] BYREF
  __int64 v126; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v127; // [rsp+48h] [rbp-98h]
  __int64 v128; // [rsp+50h] [rbp-90h] BYREF
  __int128 v129; // [rsp+58h] [rbp-88h]
  int v130; // [rsp+68h] [rbp-78h]
  __int64 (__fastcall **v131)(); // [rsp+70h] [rbp-70h] BYREF
  __int64 v132; // [rsp+78h] [rbp-68h]
  __int64 v133; // [rsp+80h] [rbp-60h] BYREF
  __int128 v134; // [rsp+88h] [rbp-58h]
  __int64 v135; // [rsp+98h] [rbp-48h]
  unsigned __int64 v136; // [rsp+A8h] [rbp-38h]

  v7 = a2[8];
  v8 = *(_QWORD *)(a1 + 320);
  v136 = __readfsqword(0x28u);
  v9 = 0;
  *(_QWORD *)(a1 + 328) = v7;
  if ( *(_QWORD *)(v8 + 1880) )
  {
    v10 = 0;
    while ( (unsigned __int8)sub_C3360(v7, *(_QWORD *)(v8 + 1872) + 40 * v9 + 16, nullptr) )
    {
      v8 = *(_QWORD *)(a1 + 320);
      v9 = ++v10;
      if ( (unsigned __int64)v10 >= *(_QWORD *)(v8 + 1880) )
      {
        v13 = a2;
        goto LABEL_9;
      }
      v7 = *(_QWORD *)(a1 + 328);
    }
    return 0;
  }
  v13 = a2;
LABEL_9:
  v14 = 0;
  HIBYTE(v118) = sub_B76A0((__int64 *)a1, 0, v13);
  if ( !HIBYTE(v118) )
    return 0;
  v15 = *(int *)(a1 + 224);
  v16 = *(_QWORD *)(a1 + 16);
  v17 = v13[8];
  v18 = *(unsigned int *)(v16 + 4 * v15);
  v19 = *(_DWORD *)(v17 + 64);
  LODWORD(v118) = v18;
  if ( (unsigned int)v18 >= v19 )
LABEL_131:
    sub_B36E0(v18);
  v20 = *(_QWORD *)(v17 + 528);
  v21 = *(_QWORD *)(a1 + 320);
  v117 = *(_QWORD *)(v20 + 8LL * (unsigned int)v18);
  v22 = *(_DWORD *)(v21 + 64);
  if ( v22 != 1 )
  {
    if ( v22 > 0 )
    {
      v113 = *(_DWORD *)(a1 + 224);
      v23 = 0;
      v114 = v22;
      v24 = v13;
      while ( 1 )
      {
        v25 = *(unsigned int *)(v16 + 4 * v23);
        if ( (_DWORD)v25 == -1 )
          return 0;
        v26 = *(_QWORD *)(v21 + 528);
        v27 = *(_QWORD *)(v26 + 8 * v23);
        if ( (unsigned int)v25 >= v19 )
          goto LABEL_131;
        v28 = *(_DWORD *)(v27 + 72);
        v29 = *(_QWORD *)(v20 + 8 * v25);
        v30 = *(_QWORD *)(v27 + 352);
        if ( v28 )
        {
          v18 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v27 + 64) + 64LL) - 1);
          if ( (v28 != (_DWORD)v18 || *(_QWORD *)(v27 + 48)) && *(_DWORD *)(v29 + 352) != (_DWORD)v30 )
            return 0;
        }
        if ( (int)v30 > 0 )
        {
          v31 = *(_DWORD **)(v29 + 344);
          v18 = *(_QWORD *)(v27 + 344);
          HIDWORD(v122) = HIDWORD(v24);
          v32 = v18 + 4LL * (unsigned int)(v30 - 1) + 4;
          v33 = &v31[*(_QWORD *)(v29 + 352)];
          while ( v31 != v33 )
          {
            v34 = v31;
            while ( *(_DWORD *)(v16 + 4LL * *(int *)v18) != *v34 )
            {
              if ( v33 == ++v34 )
                return 0;
            }
            v18 += 4LL;
            if ( v32 == v18 )
              goto LABEL_26;
          }
          return 0;
        }
LABEL_26:
        if ( v114 == ++v23 )
        {
          v22 = *(_DWORD *)(v21 + 64);
          v15 = *(int *)(a1 + 224);
          v13 = v24;
          goto LABEL_28;
        }
      }
    }
    v26 = *(_QWORD *)(v21 + 528);
LABEL_28:
    v35 = *(_QWORD *)(v26 + 8 * v15);
    v14 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v35 + 64) + 64LL) - 1);
    if ( (_DWORD)v14 == *(_DWORD *)(v35 + 72) )
    {
      v100 = *(_QWORD *)(v35 + 376);
      if ( (int)v100 > 0 )
      {
        v101 = *(_DWORD **)(v117 + 368);
        v102 = &v101[*(_QWORD *)(v117 + 376)];
        v14 = *(_QWORD *)(v35 + 368);
        v103 = v14 + 4LL * (unsigned int)(v100 - 1) + 4;
        while ( v101 != v102 )
        {
          v104 = *(_DWORD **)(v117 + 368);
          while ( *(_DWORD *)(v16 + 4LL * *(int *)v14) != *v104 )
          {
            if ( v102 == ++v104 )
              return 0;
          }
          v14 += 4;
          if ( v103 == v14 )
            goto LABEL_29;
        }
        return 0;
      }
    }
LABEL_29:
    if ( (*(_BYTE *)(v21 + 1512) & 1) == 0 )
    {
      v36 = 0;
      if ( v22 <= 0 )
        goto LABEL_54;
      goto LABEL_33;
    }
    goto LABEL_106;
  }
  v36 = 0;
  if ( (*(_BYTE *)(v21 + 1512) & 1) != 0 )
  {
LABEL_106:
    v14 = (__int64)&v131;
    v132 = 0;
    v133 = 0;
    v134 = 0u;
    v131 = &off_4AEBB0;
    v135 = a1;
    if ( (unsigned int)sub_11B370(v13, &v131) )
    {
      LODWORD(v122) = -1;
      v55 = -1;
      HIBYTE(v118) = 0;
      goto LABEL_84;
    }
    return 0;
  }
  do
  {
LABEL_33:
    v37 = 0;
    v38 = *(_QWORD **)(*(_QWORD *)(v21 + 528) + 8 * v36);
    v39 = 0;
    if ( v38[89] )
    {
      do
      {
        a3 = _mm_cvtsi32_si128(*(_DWORD *)(v38[88] + 4 * v39));
        v41 = *(_QWORD *)(a1 + 160);
        *(_QWORD *)&a4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), a3).m128i_u64[0];
        if ( v41 == *(_QWORD *)(a1 + 176) - 12LL )
        {
          v42 = *(_QWORD *)(a1 + 184);
          if ( 0xAAAAAAAAAAAAAAABLL
             * (((v41 - *(_QWORD *)(a1 + 168)) >> 2) + ((__int64)(*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 128)) >> 2))
             + 42 * ((v42 == 0) + ((v42 - *(_QWORD *)(a1 + 152)) >> 3) - 1) == 0xAAAAAAAAAAAAAAALL )
            std::__throw_length_error("cannot create std::deque larger than max_size()");
          if ( (unsigned __int64)(*(_QWORD *)(a1 + 120) - ((v42 - *(_QWORD *)(a1 + 112)) >> 3)) <= 1 )
          {
            v14 = 1;
            sub_C0FA0(a1 + 112, 1u, 0);
            v42 = *(_QWORD *)(a1 + 184);
          }
          *(_QWORD *)(v42 + 8) = operator new(0x1F8u);
          v43 = *(_QWORD *)(a1 + 160);
          *(_DWORD *)(v43 + 8) = -1;
          *(double *)v43 = a4;
          v44 = (__int64 *)(*(_QWORD *)(a1 + 184) + 8LL);
          *(_QWORD *)(a1 + 184) = v44;
          v40 = *v44;
          a5 = (__m128i)(unsigned __int64)(*v44 + 504);
          a3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v44, a5);
          *(__m128i *)(a1 + 168) = a3;
        }
        else
        {
          *(_DWORD *)(v41 + 8) = -1;
          *(double *)v41 = a4;
          v40 = *(_QWORD *)(a1 + 160) + 12LL;
        }
        ++v37;
        *(_QWORD *)(a1 + 160) = v40;
        v39 = v37;
      }
      while ( (unsigned __int64)v37 < v38[89] );
    }
    v45 = sub_32BA00(v38);
    if ( v38[73] )
    {
      v46 = v38[72];
      v47 = 24LL * v45;
      v48 = *(_QWORD *)(v46 + v47 + 8);
      if ( (int)v48 > 0 )
      {
        v49 = 0;
        v119 = 4LL * (unsigned int)(v48 - 1);
        while ( 1 )
        {
          v50 = *(_DWORD *)(*(_QWORD *)(v46 + v47) + v49);
          v51 = (_DWORD *)v38[88];
          v52 = &v51[v38[89]];
          if ( v51 == v52 )
            goto LABEL_52;
          while ( v50 != *v51 )
          {
            if ( v52 == ++v51 )
              goto LABEL_52;
          }
          if ( v51 == v52 )
          {
LABEL_52:
            v14 = (unsigned int)v36;
            sub_C1190((_QWORD *)a1, v36, v50);
            if ( v49 == v119 )
              break;
          }
          else if ( v49 == v119 )
          {
            break;
          }
          v46 = v38[72];
          v49 += 4;
        }
      }
    }
    v21 = *(_QWORD *)(a1 + 320);
    ++v36;
  }
  while ( *(_DWORD *)(v21 + 64) > (int)v36 );
LABEL_54:
  v53 = *(char **)(a1 + 160);
  if ( v53 == *(char **)(a1 + 128) )
  {
    LODWORD(v122) = -1;
    v55 = -1;
    HIBYTE(v118) = 0;
  }
  else
  {
    v115 = 0;
    do
    {
      if ( v53 == *(char **)(a1 + 168) )
      {
        v64 = *(_QWORD *)(*(_QWORD *)(a1 + 184) - 8LL);
        v55 = *(_DWORD *)(v64 + 492);
        LODWORD(v122) = *(_DWORD *)(v64 + 496);
        operator delete(v53, 0x1F8u);
        v65 = (__int64 *)(*(_QWORD *)(a1 + 184) - 8LL);
        *(_QWORD *)(a1 + 184) = v65;
        v66 = *v65;
        v67 = *v65 + 504;
        *(_QWORD *)(a1 + 168) = v66;
        *(_QWORD *)(a1 + 176) = v67;
        *(_QWORD *)(a1 + 160) = v66 + 492;
      }
      else
      {
        v54 = *((_DWORD *)v53 - 2);
        v55 = *((_DWORD *)v53 - 3);
        *(_QWORD *)(a1 + 160) = v53 - 12;
        LODWORD(v122) = v54;
      }
      v14 = (v122 << 32) | (unsigned int)v55;
      if ( !(unsigned __int8)sub_C81C0((__m128i *)a1, v14, *(double *)a3.m128i_i64, a4, *(double *)a5.m128i_i64, a6) )
      {
        v14 = (unsigned int)v122;
        v56 = sub_32BA80(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + 8LL * v55), (unsigned int)v122);
        if ( (*(_BYTE *)(v56 + 4) & 4) == 0 )
        {
          if ( *(_DWORD *)(a1 + 224) != v55 )
            return 0;
          v18 = (int)v122;
          if ( (int)v122 != sub_32BA00(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + 8LL * v55)) - 1
            || *(_QWORD *)(a1 + 160) != *(_QWORD *)(a1 + 128)
            || *(_DWORD *)(*(_QWORD *)(a1 + 320) + 64LL) == 1 )
          {
            return 0;
          }
          v57 = *(_QWORD *)(a1 + 328);
          v58 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * v55);
          if ( (unsigned int)v58 >= *(_DWORD *)(v57 + 64) )
            goto LABEL_131;
          v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 528) + 8 * v58) + 48LL);
          v59 = v122 - 1;
          if ( (int)v122 - 1 >= 0 )
          {
            v60 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL * v55) + 8LL * (int)v59;
            v61 = v60 - 8 - 8LL * v59;
            while ( !*(_QWORD *)v60 )
            {
              v60 -= 8;
              if ( v60 == v61 )
                goto LABEL_71;
            }
            v14 = *(_QWORD *)(*(_QWORD *)v60 + 8LL);
          }
LABEL_71:
          if ( !v14 )
            goto LABEL_79;
          v120 = v14;
          if ( (unsigned __int8)sub_B9480(a1, (_DWORD *)v14, (unsigned int *)v56) )
          {
            v14 = (v122 << 32) | (unsigned int)v55;
            sub_C7A40((__m128i *)a1, v14, v120, *(double *)a3.m128i_i64, a4, *(double *)a5.m128i_i64, a6, v62, v63);
          }
          else
          {
            v115 = HIBYTE(v118);
          }
        }
      }
      v53 = *(char **)(a1 + 160);
    }
    while ( v53 != *(char **)(a1 + 128) );
    HIBYTE(v118) = v115;
  }
LABEL_79:
  if ( *(_QWORD *)(a1 + 376) )
  {
    v68 = 0;
    v69 = 0;
    do
    {
      v14 = *(unsigned int *)(*(_QWORD *)(a1 + 368) + 4 * v69);
      if ( (unsigned __int8)sub_B7A00(a1, v14) )
        return 0;
      v69 = ++v68;
    }
    while ( (unsigned __int64)v68 < *(_QWORD *)(a1 + 376) );
  }
LABEL_84:
  if ( !(unsigned __int8)sub_C36F0((_QWORD *)a1) || !(unsigned __int8)sub_B9380(a1, v14, v70, v71, v72, v73) )
    return 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v11 = sub_BA780(a1, (__int64)&v126);
  if ( (_BYTE)v11 )
  {
    v74 = *(_QWORD *)(a1 + 216);
    v131 = nullptr;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    sub_32AAA0(v74, &v131, v117, 1);
    v121 = &v126;
    sub_602C0(&v126, (__int64 *)&v131, v75, v76, v77, v78);
    sub_312B60(&v128, &v133);
    v116 = *(_QWORD *)(a1 + 216);
    sub_602C0(&v126, (__int64 *)(v116 + 96), v116, v79, v80, v81);
    sub_312B60(&v128, v116 + 112);
    v82 = *(_QWORD *)(a1 + 320);
    v125 = 0;
    if ( *(int *)(v82 + 64) <= 1 )
    {
      v87 = nullptr;
    }
    else
    {
      if ( HIBYTE(v118) )
      {
        v83 = (unsigned int)v122;
        LODWORD(v122) = v55;
        v116 = v83;
        v84 = sub_B9000(a1, (unsigned int)v55 | (unsigned __int64)(v83 << 32));
        v85 = (unsigned int)v55;
        v86 = v116;
        v87 = (_QWORD *)v84;
        if ( !v84 )
          goto LABEL_98;
      }
      else
      {
        v86 = (unsigned int)v122;
        v87 = nullptr;
        v85 = (unsigned int)v55;
      }
      if ( !(unsigned __int8)sub_C1FA0((__m128i *)a1, (v86 << 32) | v85, (__int64)&v126, v87, &v125) )
      {
        sub_B3DE0(
          (unsigned __int64 **)(a1 + 352),
          *(_QWORD *)(a1 + 328),
          v88,
          v89,
          v90,
          v91,
          v113,
          v116,
          v117,
          v118,
          (__int64)&v126,
          v122,
          v123,
          v124,
          v126,
          v127,
          v128,
          v129,
          SDWORD2(v129),
          v130,
          (int)v131,
          v132,
          v133);
        if ( HIBYTE(v118) )
        {
          if ( v87 )
          {
            sub_78950((__int64)v87);
            j__qfree(v87);
          }
          goto LABEL_98;
        }
      }
    }
    v92 = a1;
    if ( !(unsigned __int8)sub_B9180((_QWORD **)a1, v117, v121, (__int64)v87) )
    {
      v92 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 784LL);
      v105 = sub_178020(v92, (_DWORD)v121, v118, -1, 0, 0, 2, 1);
      v94 = v112;
      if ( !v105 )
      {
        v106 = a1 + 336;
        for ( i = sub_605E0((_QWORD *)(a1 + 336), 0); i != *(_DWORD *)(a1 + 344); i = sub_605E0(
                                                                                        (_QWORD *)(a1 + 336),
                                                                                        i + 1) )
        {
          v108 = *(_QWORD *)(a1 + 328);
          if ( i >= *(_DWORD *)(v108 + 64) )
            sub_B36E0(v106);
          v106 = a1 + 336;
          v109 = *(_QWORD *)(*(_QWORD *)(v108 + 528) + 8LL * i);
          v110 = *(_DWORD *)(v109 + 24);
          BYTE1(v110) &= ~2u;
          LOBYTE(v110) = v110 | 0x80;
          *(_DWORD *)(v109 + 24) = v110;
        }
        v111 = *(_QWORD *)(a1 + 192);
        if ( v111 )
        {
          *(_QWORD *)(a1 + 200) = 0;
          qfree(v111);
          *(_QWORD *)(a1 + 192) = 0;
          *(_QWORD *)(a1 + 208) = 0;
        }
        goto LABEL_99;
      }
    }
    v97 = *(_QWORD *)(a1 + 328);
    if ( v87 )
    {
      v98 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * v55);
      if ( (unsigned int)v98 >= *(_DWORD *)(v97 + 64) )
        sub_B36E0(v92);
      v99 = *(_QWORD *)(*(_QWORD *)(v97 + 528) + 8 * v98);
      sub_9EFC0(v99, (__int64)v87);
      if ( v125 )
        sub_65B40(*(_QWORD *)(a1 + 328), v99);
      v97 = *(_QWORD *)(a1 + 328);
    }
    sub_B3DE0(
      (unsigned __int64 **)(a1 + 352),
      v97,
      v93,
      v94,
      v95,
      v96,
      v113,
      v116,
      v117,
      v118,
      (__int64)v121,
      v122,
      v123,
      v124,
      v126,
      v127,
      v128,
      v129,
      SDWORD2(v129),
      v130,
      (int)v131,
      v132,
      v133);
LABEL_98:
    v11 = 0;
LABEL_99:
    if ( v133 )
    {
      *(_QWORD *)&v134 = 0;
      qfree(v133);
    }
    qfree(v131);
  }
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree(v128);
  }
  qfree(v126);
  return v11;
}
