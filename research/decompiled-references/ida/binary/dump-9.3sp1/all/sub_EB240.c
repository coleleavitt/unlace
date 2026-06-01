__int64 __fastcall sub_EB240(_QWORD *a1, __m128i *a2, __int64 a3, unsigned __int8 a4, _QWORD *a5)
{
  __int64 v6; // r13
  const char *v9; // rdx
  int v10; // r12d
  int v11; // eax
  const char *v13; // rdx
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // r15d
  int v20; // eax
  unsigned __int64 v21; // rax
  int v22; // r14d
  int v23; // r15d
  int v24; // esi
  char v25; // al
  int v26; // edx
  __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned int v29; // edx
  int v30; // r12d
  char v31; // al
  __int64 v32; // r12
  unsigned int v33; // r8d
  int v34; // edx
  int v35; // eax
  char v36; // al
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // r15
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // r14
  int v46; // eax
  char v47; // al
  unsigned int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r15
  __m128i v52; // xmm5
  __m128i v53; // xmm4
  __m128i v54; // xmm6
  __m128i v55; // xmm3
  __m128i v56; // xmm2
  __m128i v57; // xmm1
  __m128i v58; // xmm6
  __m128i v59; // xmm0
  __m128i v60; // xmm6
  __m128i v61; // xmm6
  __m128i v62; // xmm6
  unsigned __int64 v63; // r14
  int v64; // r15d
  unsigned int *i; // r14
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // r9d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  int v73; // r9d
  unsigned int v74; // edx
  const char *v75; // rdx
  char v76; // al
  __int64 v77; // rdi
  char v78; // r14
  __int64 v79; // r13
  __int64 v80; // r12
  __int64 v81; // r14
  __int64 v82; // r12
  char *v83; // rax
  int v84; // [rsp+Ch] [rbp-314h]
  unsigned int v85; // [rsp+Ch] [rbp-314h]
  unsigned int v86; // [rsp+10h] [rbp-310h]
  int v87; // [rsp+10h] [rbp-310h]
  unsigned int v88; // [rsp+10h] [rbp-310h]
  unsigned int v89; // [rsp+10h] [rbp-310h]
  unsigned __int8 v90; // [rsp+33h] [rbp-2EDh]
  int v91; // [rsp+34h] [rbp-2ECh]
  char v92; // [rsp+38h] [rbp-2E8h]
  __int64 v94; // [rsp+48h] [rbp-2D8h]
  int tinfo_size; // [rsp+48h] [rbp-2D8h]
  __int64 v96; // [rsp+48h] [rbp-2D8h]
  __int64 v97; // [rsp+48h] [rbp-2D8h]
  __int64 v98; // [rsp+48h] [rbp-2D8h]
  __int64 v100; // [rsp+58h] [rbp-2C8h]
  int v101; // [rsp+60h] [rbp-2C0h]
  unsigned __int8 v102; // [rsp+67h] [rbp-2B9h]
  int v103; // [rsp+68h] [rbp-2B8h]
  unsigned __int64 v104; // [rsp+68h] [rbp-2B8h]
  int v105; // [rsp+68h] [rbp-2B8h]
  unsigned int *v106; // [rsp+68h] [rbp-2B8h]
  int v107; // [rsp+68h] [rbp-2B8h]
  int v108; // [rsp+78h] [rbp-2A8h] BYREF
  int v109; // [rsp+7Ch] [rbp-2A4h] BYREF
  char *v110; // [rsp+80h] [rbp-2A0h] BYREF
  __int128 v111; // [rsp+88h] [rbp-298h]
  const char *v112; // [rsp+A0h] [rbp-280h] BYREF
  __int128 v113; // [rsp+A8h] [rbp-278h]
  __int64 v114; // [rsp+C0h] [rbp-260h] BYREF
  __int128 v115; // [rsp+C8h] [rbp-258h]
  __int64 v116[2]; // [rsp+E0h] [rbp-240h] BYREF
  __int64 v117; // [rsp+F0h] [rbp-230h] BYREF
  __int128 v118; // [rsp+F8h] [rbp-228h]
  __int64 v119[2]; // [rsp+110h] [rbp-210h] BYREF
  __int64 v120; // [rsp+120h] [rbp-200h] BYREF
  __int128 v121; // [rsp+128h] [rbp-1F8h]
  _QWORD v122[2]; // [rsp+140h] [rbp-1E0h] BYREF
  __m128i si128; // [rsp+150h] [rbp-1D0h]
  __int64 v124; // [rsp+160h] [rbp-1C0h]
  __int128 v125; // [rsp+168h] [rbp-1B8h]
  __int64 v126; // [rsp+178h] [rbp-1A8h]
  __int64 v127; // [rsp+180h] [rbp-1A0h]
  int v128; // [rsp+188h] [rbp-198h]
  __m128i v129; // [rsp+190h] [rbp-190h] BYREF
  __m128i v130; // [rsp+1A0h] [rbp-180h] BYREF
  __m128i v131; // [rsp+1B0h] [rbp-170h] BYREF
  __m128i v132; // [rsp+1C0h] [rbp-160h] BYREF
  __m128i v133; // [rsp+1D0h] [rbp-150h] BYREF
  __m128i v134; // [rsp+1E0h] [rbp-140h] BYREF
  __int64 v135; // [rsp+1F0h] [rbp-130h] BYREF
  __int128 v136; // [rsp+1F8h] [rbp-128h] BYREF
  __int128 v137; // [rsp+208h] [rbp-118h]
  __int64 v138; // [rsp+218h] [rbp-108h]
  __int64 v139; // [rsp+248h] [rbp-D8h]
  __int64 v140; // [rsp+250h] [rbp-D0h]
  __int64 v141; // [rsp+260h] [rbp-C0h]
  __int64 v142; // [rsp+268h] [rbp-B8h]
  __m128i v143; // [rsp+280h] [rbp-A0h]
  __m128i v144; // [rsp+290h] [rbp-90h]
  __m128i v145; // [rsp+2A0h] [rbp-80h]
  __m128i v146; // [rsp+2B0h] [rbp-70h]
  __m128i v147; // [rsp+2C0h] [rbp-60h]
  __m128i v148; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v149; // [rsp+2E8h] [rbp-38h]

  v149 = __readfsqword(0x28u);
  v102 = *((_BYTE *)a1 + 365);
  if ( v102 )
    return 0;
  if ( *(_BYTE *)(a1[2] + 712LL) )
  {
    v6 = a1[39];
    if ( v6 == -1 )
      v6 = a1[40];
    v111 = 0;
    v110 = nullptr;
    sub_1D2AB0(&v110, v6, 0, 0);
    v9 = s1;
    if ( (_QWORD)v111 )
      v9 = v110;
    v10 = sub_E7590((unsigned int *)&v109, &v108, v9, a1 + 6, *((_DWORD *)a1 + 87));
    if ( v10 )
    {
      v92 = 1;
    }
    else
    {
      if ( *(_BYTE *)(a1[2] + 712LL) == 1 )
      {
LABEL_20:
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree((__int64)v110);
        }
        return v102;
      }
      v11 = *((_DWORD *)a1 + 87);
      v92 = 0;
      v109 = 0;
      v108 = v11 - 1;
    }
    v122[1] = 0;
    v122[0] = 0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v124 = 0;
    v126 = 0;
    v127 = 0;
    v128 = 0;
    v125 = 0;
    if ( !a5 )
    {
      a5 = v122;
      if ( !(unsigned __int8)sub_E5020(
                               (__int64)v122,
                               *a1,
                               a2->m128i_i64[0] + 80LL * v108,
                               a1[41],
                               *((_DWORD *)a1 + 90),
                               0) )
      {
        v102 = 0;
LABEL_17:
        cleanup_argloc();
        if ( v124 )
        {
          *(_QWORD *)&v125 = 0;
          qfree(v124);
        }
        clear_tinfo_t();
        sub_11CDA0(v122);
        goto LABEL_20;
      }
    }
    v112 = nullptr;
    v113 = 0;
    if ( (unsigned int)sub_E8020(a1, (__int64 *)&v112, a3, (__int64)a5, v92 & 1) != 1 )
    {
LABEL_15:
      if ( v112 )
      {
        *(_QWORD *)&v113 = 0;
        qfree((__int64)v112);
      }
      goto LABEL_17;
    }
    v114 = 0;
    v13 = s1;
    v14 = v109;
    v115 = 0;
    if ( (_QWORD)v113 )
      v13 = v112;
    v90 = sub_E4160(a1[2], &v114, v13, v109);
    if ( !v90 )
      goto LABEL_91;
    v17 = a1[2];
    v101 = *(_DWORD *)(*(_QWORD *)(v17 + 112) + 80LL);
    if ( a4 | ((_QWORD)v115 != 0) )
    {
      if ( !(v10 | v14) && v6 == -1 )
      {
        v75 = s1;
        if ( (_QWORD)v113 )
          v75 = v112;
        v135 = 0;
        v136 = 0;
        v76 = sub_E4160(v17, &v135, v75, 1);
        v77 = v135;
        v78 = v76;
        if ( v135 )
        {
          v79 = v136;
          if ( (_QWORD)v136 )
          {
            v80 = 0;
            do
            {
              ++v80;
              clear_tinfo_t();
              v77 = v135;
            }
            while ( v79 != v80 );
          }
          *(_QWORD *)&v136 = 0;
          qfree(v77);
        }
        if ( v78 )
        {
          v81 = v114;
          v82 = v114 + 8 * v115;
          if ( v114 != v82 )
          {
            while ( (get_tinfo_property() & 0xF) != 9 && v101 >= (unsigned __int64)get_tinfo_size() )
            {
              v81 += 8;
              if ( v82 == v81 )
                goto LABEL_28;
            }
            goto LABEL_91;
          }
        }
      }
LABEL_28:
      sub_E8500((__int64)&v129, (__int64)a2, v15, v16);
      if ( a4 )
        copy_tinfo_t();
    }
    else
    {
      if ( (v10 & 0xFFFFFEFF) == 0 )
        goto LABEL_197;
      if ( v10 == 512 )
      {
        if ( v14 )
          goto LABEL_197;
        v83 = &byte_4EEA70;
        if ( (_QWORD)v111 )
          v83 = v110;
        if ( *v83 == 115 )
        {
LABEL_197:
          v43 = v114;
          v102 = 0;
          if ( !v114 )
            goto LABEL_15;
LABEL_95:
          *(_QWORD *)&v115 = 0;
          qfree(v43);
          goto LABEL_15;
        }
      }
      sub_E8500((__int64)&v129, (__int64)a2, v15, v16);
    }
    sub_EABB0(v129.m128i_i64, v115 + *((int *)a1 + 87));
    v18 = 0;
    if ( (_QWORD)v115 )
    {
      do
      {
        v19 = v18;
        copy_tinfo_t();
        v18 = v19 + 1;
      }
      while ( v19 + 1 < (unsigned __int64)v115 );
    }
    v20 = v134.m128i_i8[8] & 0xF0;
    if ( (v134.m128i_i8[8] & 0xF0) == 0xC0 )
      v20 = v130.m128i_i32[3];
    if ( (unsigned int)(v20 - 208) <= 0x2F || !(unsigned __int8)calc_varglocs() )
    {
      if ( !(unsigned __int8)getinf_flag() )
      {
        v74 = v134.m128i_i8[8] & 0xF0;
        if ( (v134.m128i_i8[8] & 0xF0) == 0xC0 )
          v74 = v130.m128i_u32[3];
        sub_D10B0((__int64)&v135, a1[2], v74);
        if ( (_DWORD)v135 )
        {
          if ( v141 )
          {
            v142 = 0;
            qfree(v141);
          }
          if ( v139 )
          {
            v140 = 0;
            qfree(v139);
          }
          if ( *((_QWORD *)&v137 + 1) )
          {
            v138 = 0;
            qfree(*((__int64 *)&v137 + 1));
          }
          if ( (_QWORD)v136 )
          {
            *((_QWORD *)&v136 + 1) = 0;
            qfree(v136);
          }
LABEL_80:
          if ( v133.m128i_i64[0] )
          {
            v133.m128i_i64[1] = 0;
            qfree(v133.m128i_i64[0]);
          }
          cleanup_argloc();
          clear_tinfo_t();
          v37 = v129.m128i_i64[0];
          if ( v129.m128i_i64[0] )
          {
            v38 = v129.m128i_i64[1];
            if ( v129.m128i_i64[1] )
            {
              v39 = 0;
              do
              {
                v40 = (_QWORD *)(v37 + 80 * v39);
                clear_tinfo_t();
                v41 = v40[5];
                if ( v41 )
                {
                  v40[6] = 0;
                  qfree(v41);
                }
                v42 = v40[2];
                if ( v42 )
                {
                  v40[3] = 0;
                  qfree(v42);
                }
                cleanup_argloc();
                v37 = v129.m128i_i64[0];
                ++v39;
              }
              while ( v38 != v39 );
            }
            v129.m128i_i64[1] = 0;
            qfree(v37);
          }
LABEL_91:
          v43 = v114;
          if ( !v114 )
            goto LABEL_15;
          if ( (_QWORD)v115 )
          {
            v44 = 0;
            v45 = v115;
            do
            {
              ++v44;
              clear_tinfo_t();
              v43 = v114;
            }
            while ( v45 != v44 );
          }
          goto LABEL_95;
        }
        if ( v141 )
        {
          v142 = 0;
          qfree(v141);
        }
        if ( v139 )
        {
          v140 = 0;
          qfree(v139);
        }
        if ( *((_QWORD *)&v137 + 1) )
        {
          v138 = 0;
          qfree(*((__int64 *)&v137 + 1));
        }
        if ( (_QWORD)v136 )
        {
          *((_QWORD *)&v136 + 1) = 0;
          qfree(v136);
        }
      }
      v100 = v132.m128i_i64[1];
      v21 = *((int *)a1 + 87);
      v22 = *((_DWORD *)a1 + 87);
      if ( v21 < v129.m128i_i64[1] )
      {
        v23 = 2 * v101;
        v24 = v101;
        if ( v101 > 2 * v101 )
          v24 = 2 * v101;
        while ( 1 )
        {
          v32 = v129.m128i_i64[0] + 80 * v21;
          tinfo_size = get_tinfo_size();
          v33 = *((_DWORD *)a1 + 90);
          v34 = v135 - 1;
          v103 = v135;
          if ( (((_DWORD)v135 - 1) & (unsigned int)v135) != 0 )
            sub_E3A00(&v135);
          if ( (int)v135 <= v23 )
            break;
          if ( v33 <= 0x10 )
          {
            v84 = v135 - 1;
            v86 = *((_DWORD *)a1 + 90);
            v35 = getinf();
            if ( v35 == 176 || v35 == 256 )
            {
              if ( v101 > v23 )
              {
LABEL_123:
                v103 = 2 * v101;
LABEL_124:
                v33 = getinf();
LABEL_43:
                if ( v33 == 176 || v33 == 256 )
                {
                  v26 = v103 - 1;
                  goto LABEL_47;
                }
                goto LABEL_45;
              }
              goto LABEL_126;
            }
            v33 = v86;
            v34 = v84;
          }
          else if ( v33 == 176 || v33 == 256 )
          {
            v103 = v24;
            v26 = v24 - 1;
            goto LABEL_47;
          }
          v87 = v34;
          v85 = v33;
          v36 = getinf_flag();
          v26 = v87;
          if ( v36 )
            goto LABEL_47;
          if ( v101 <= v23 )
          {
            if ( v85 > 0x10 )
            {
              v103 = 2 * v101;
              goto LABEL_45;
            }
LABEL_126:
            v103 = 2 * v101;
LABEL_127:
            v33 = getinf();
LABEL_108:
            if ( v33 == 176 || v33 == 256 )
            {
              v26 = v101 - 1;
              v103 = v101;
              goto LABEL_47;
            }
            goto LABEL_45;
          }
          if ( v85 <= 0x10 )
            goto LABEL_123;
          v103 = 2 * v101;
LABEL_45:
          v25 = getinf_flag();
          v26 = v103 - 1;
          if ( !v25 )
          {
            v103 = v101;
            v26 = v101 - 1;
          }
LABEL_47:
          v27 = v32;
          v104 = -v103 & (unsigned __int64)(v100 + v26);
          cleanup_argloc();
          *(_DWORD *)v32 = 1;
          v28 = tinfo_size;
          *(_QWORD *)(v32 + 8) = v104;
          v29 = *((_DWORD *)a1 + 90);
          v30 = v135 - 1;
          v105 = v135;
          if ( (((_DWORD)v135 - 1) & (unsigned int)v135) != 0 )
            sub_E3A00(v27);
          if ( (int)v135 > v23 )
          {
            if ( v29 <= 0x10 )
            {
              v88 = *((_DWORD *)a1 + 90);
              v46 = getinf();
              v28 = tinfo_size;
              if ( v46 != 176 && v46 != 256 )
              {
                v29 = v88;
                goto LABEL_103;
              }
              if ( v101 > v23 )
                goto LABEL_121;
            }
            else
            {
              if ( v29 == 256 || v29 == 176 )
              {
                v105 = v24;
                v30 = v24 - 1;
                goto LABEL_55;
              }
LABEL_103:
              v96 = v28;
              v89 = v29;
              v47 = getinf_flag();
              v28 = v96;
              if ( v47 )
                goto LABEL_55;
              if ( v101 > v23 )
              {
                if ( v89 > 0x10 )
                {
                  v105 = 2 * v101;
                  goto LABEL_53;
                }
LABEL_121:
                v105 = 2 * v101;
LABEL_122:
                v97 = v28;
                v48 = getinf();
                v28 = v97;
                v29 = v48;
LABEL_51:
                if ( v29 != 176 && v29 != 256 )
                  goto LABEL_53;
                v30 = v105 - 1;
                goto LABEL_55;
              }
              if ( v89 > 0x10 )
              {
                v105 = 2 * v101;
LABEL_53:
                v94 = v28;
                v31 = getinf_flag();
                v30 = v105 - 1;
                v28 = v94;
                if ( !v31 )
                {
                  v105 = v101;
                  v30 = v101 - 1;
                }
                goto LABEL_55;
              }
            }
            v105 = 2 * v101;
LABEL_130:
            v98 = v28;
            v49 = getinf();
            v28 = v98;
            v29 = v49;
            goto LABEL_112;
          }
          if ( (int)v135 < v101 )
          {
            if ( v29 <= 0x10 )
              goto LABEL_122;
            goto LABEL_51;
          }
          if ( v29 <= 0x10 )
            goto LABEL_130;
LABEL_112:
          if ( v29 != 176 && v29 != 256 )
            goto LABEL_53;
          v30 = v101 - 1;
          v105 = v101;
LABEL_55:
          ++v22;
          v100 += -v105 & (unsigned __int64)(v28 + v30);
          v21 = v22;
          if ( (unsigned __int64)v22 >= v129.m128i_i64[1] )
            goto LABEL_131;
        }
        if ( (int)v135 < v101 )
        {
          if ( v33 <= 0x10 )
            goto LABEL_124;
          goto LABEL_43;
        }
        if ( v33 <= 0x10 )
          goto LABEL_127;
        goto LABEL_108;
      }
LABEL_131:
      v132.m128i_i64[1] = v100;
    }
    if ( v92 || (v91 = *((_DWORD *)a1 + 87), v50 = v91, (unsigned __int64)v91 >= v129.m128i_i64[1]) )
    {
LABEL_136:
      v52 = _mm_loadu_si128(a2);
      *a2 = _mm_load_si128(&v129);
      v53 = _mm_loadu_si128(a2 + 1);
      v54 = _mm_load_si128(&v130);
      v55 = _mm_loadu_si128(a2 + 2);
      v56 = _mm_loadu_si128(a2 + 3);
      v57 = _mm_loadu_si128(a2 + 4);
      v143 = v52;
      a2[1] = v54;
      v58 = _mm_load_si128(&v131);
      v59 = _mm_loadu_si128(a2 + 5);
      v144 = v53;
      a2[2] = v58;
      v60 = _mm_load_si128(&v132);
      v145 = v55;
      a2[3] = v60;
      v61 = _mm_load_si128(&v133);
      v146 = v56;
      a2[4] = v61;
      v62 = _mm_load_si128(&v134);
      v147 = v57;
      a2[5] = v62;
      v148 = v59;
      v129 = v52;
      v130 = v53;
      v131 = v55;
      v132 = v56;
      v133 = v57;
      v134 = v59;
      *((_DWORD *)a1 + 88) |= 0x100u;
      v102 = v90;
    }
    else
    {
      while ( 1 )
      {
        v51 = v129.m128i_i64[0] + 80 * v50;
        if ( (unsigned int)(*(_DWORD *)v51 - 3) <= 1 )
          break;
LABEL_135:
        v50 = ++v91;
        if ( (unsigned __int64)v91 >= v129.m128i_i64[1] )
          goto LABEL_136;
      }
      v63 = get_tinfo_size();
      v116[0] = 0;
      v116[1] = 0;
      v117 = 0;
      v119[0] = 0;
      v119[1] = 0;
      v120 = 0;
      v118 = 0;
      v121 = 0;
      if ( *(_DWORD *)v51 == 4 )
      {
        v63 >>= 1;
        v107 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
                 *(_QWORD *)(a1[2] + 112LL),
                 *(unsigned __int16 *)(v51 + 10));
        v135 = 0;
        *(_QWORD *)&v136 = 0;
        sub_63E80(&v135, v107, v63);
        *((_QWORD *)&v136 + 1) = 0;
        v137 = 0;
        sub_64280(v116, &v135);
        sub_316CB0(&v117, (char *)&v136 + 8);
        if ( *((_QWORD *)&v136 + 1) )
        {
          *(_QWORD *)&v137 = 0;
          qfree(*((__int64 *)&v136 + 1));
        }
        qfree(v135);
        v135 = 0;
        *(_QWORD *)&v136 = 0;
        sub_63E80(&v135, v107, v101);
        *((_QWORD *)&v136 + 1) = 0;
        v137 = 0;
        sub_64280(v119, &v135);
        sub_316CB0(&v120, (char *)&v136 + 8);
        if ( *((_QWORD *)&v136 + 1) )
        {
          *(_QWORD *)&v137 = 0;
          qfree(*((__int64 *)&v136 + 1));
        }
        qfree(v135);
      }
      v64 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
              *(_QWORD *)(a1[2] + 112LL),
              *(unsigned __int16 *)(v51 + 8));
      v135 = 0;
      *(_QWORD *)&v136 = 0;
      sub_63E80(&v135, v64, v63);
      *((_QWORD *)&v136 + 1) = 0;
      v137 = 0;
      sub_64280(v116, &v135);
      sub_316CB0(&v117, (char *)&v136 + 8);
      if ( *((_QWORD *)&v136 + 1) )
      {
        *(_QWORD *)&v137 = 0;
        qfree(*((__int64 *)&v136 + 1));
      }
      qfree(v135);
      v135 = 0;
      *(_QWORD *)&v136 = 0;
      sub_63E80(&v135, v64, (v101 - 1 + v63) & -v101);
      *((_QWORD *)&v136 + 1) = 0;
      v137 = 0;
      sub_64280(v119, &v135);
      sub_316CB0(&v120, (char *)&v136 + 8);
      if ( *((_QWORD *)&v136 + 1) )
      {
        *(_QWORD *)&v137 = 0;
        qfree(*((__int64 *)&v136 + 1));
      }
      qfree(v135);
      for ( i = (unsigned int *)a3; ; i = v106 )
      {
        if ( (unsigned __int8)sub_64880(v116) && !(_QWORD)v118 )
          goto LABEL_145;
        v106 = (unsigned int *)sub_129150(*a1, (unsigned int)v116, *((_QWORD *)i + 2), 0, 0, 0, 257);
        if ( !v106 )
          break;
        if ( !(unsigned __int8)sub_11E8A0(*v106) )
          goto LABEL_75;
        sub_127A20(&v135, *a1, v106, 1);
        if ( !(unsigned __int8)sub_64820(&v135, v119) || !(unsigned __int8)sub_317F40(&v120, (char *)&v136 + 8) )
        {
          if ( *((_QWORD *)&v136 + 1) )
          {
            *(_QWORD *)&v137 = 0;
            qfree(*((__int64 *)&v136 + 1));
          }
          qfree(v135);
          goto LABEL_75;
        }
        sub_64640(v116, &v135, v66, v67, v68, v69);
        sub_317C60(&v117, (char *)&v136 + 8);
        sub_64640(v119, &v135, v70, v71, v72, v73);
        sub_317C60(&v120, (char *)&v136 + 8);
        if ( *((_QWORD *)&v136 + 1) )
        {
          *(_QWORD *)&v137 = 0;
          qfree(*((__int64 *)&v136 + 1));
        }
        qfree(v135);
      }
      if ( i == (unsigned int *)a3 )
      {
LABEL_145:
        if ( v120 )
        {
          *(_QWORD *)&v121 = 0;
          qfree(v120);
        }
        qfree(v119[0]);
        if ( v117 )
        {
          *(_QWORD *)&v118 = 0;
          qfree(v117);
        }
        qfree(v116[0]);
        goto LABEL_135;
      }
LABEL_75:
      if ( v120 )
      {
        *(_QWORD *)&v121 = 0;
        qfree(v120);
      }
      qfree(v119[0]);
      if ( v117 )
      {
        *(_QWORD *)&v118 = 0;
        qfree(v117);
      }
      qfree(v116[0]);
    }
    goto LABEL_80;
  }
  return v102;
}
