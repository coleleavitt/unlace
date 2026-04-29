__int64 __fastcall sub_E7800(_QWORD *a1, __m128i *a2, __int64 a3, unsigned __int8 a4, _QWORD *a5)
{
  __int64 v6; // r13
  const char *v9; // rdx
  int v10; // r12d
  int v11; // eax
  const char *v13; // rdx
  int v14; // r14d
  __int64 v15; // rdi
  int v16; // ecx
  unsigned __int64 i; // rax
  int v18; // r15d
  int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // r14d
  int v22; // r15d
  int v23; // esi
  __int64 v24; // rsi
  char v25; // al
  int v26; // edx
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r12d
  char v32; // al
  __int64 v33; // r12
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  int v37; // eax
  char v38; // al
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 v41; // r15
  _QWORD *v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // r14
  __int64 v48; // rdi
  int v49; // eax
  char v50; // al
  int v51; // eax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r15
  __m128i v55; // xmm5
  __m128i v56; // xmm4
  __m128i v57; // xmm6
  __m128i v58; // xmm3
  __m128i v59; // xmm2
  __m128i v60; // xmm1
  __m128i v61; // xmm6
  __m128i v62; // xmm0
  __m128i v63; // xmm6
  __m128i v64; // xmm6
  __m128i v65; // xmm6
  unsigned __int64 v66; // r14
  int v67; // r15d
  unsigned int *j; // r14
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  int v76; // r9d
  unsigned int v77; // edx
  const char *v78; // rdx
  char v79; // al
  __int64 v80; // rdi
  char v81; // r14
  __int64 v82; // r13
  __int64 v83; // r12
  __int64 v84; // rdi
  _QWORD *v85; // r14
  _QWORD *v86; // r12
  char *v87; // rax
  int v88; // [rsp+Ch] [rbp-314h]
  unsigned int v89; // [rsp+Ch] [rbp-314h]
  int v90; // [rsp+10h] [rbp-310h]
  int v91; // [rsp+10h] [rbp-310h]
  int v92; // [rsp+10h] [rbp-310h]
  unsigned int v93; // [rsp+10h] [rbp-310h]
  int v94; // [rsp+20h] [rbp-300h]
  unsigned __int8 v95; // [rsp+33h] [rbp-2EDh]
  int v96; // [rsp+34h] [rbp-2ECh]
  char v97; // [rsp+38h] [rbp-2E8h]
  __int64 v99; // [rsp+48h] [rbp-2D8h]
  int tinfo_size; // [rsp+48h] [rbp-2D8h]
  __int64 v101; // [rsp+48h] [rbp-2D8h]
  __int64 v102; // [rsp+48h] [rbp-2D8h]
  __int64 v103; // [rsp+48h] [rbp-2D8h]
  __int64 v105; // [rsp+58h] [rbp-2C8h]
  int v106; // [rsp+60h] [rbp-2C0h]
  unsigned __int8 v107; // [rsp+67h] [rbp-2B9h]
  int v108; // [rsp+68h] [rbp-2B8h]
  unsigned __int64 v109; // [rsp+68h] [rbp-2B8h]
  int v110; // [rsp+68h] [rbp-2B8h]
  unsigned int *v111; // [rsp+68h] [rbp-2B8h]
  int v112; // [rsp+68h] [rbp-2B8h]
  int v113; // [rsp+78h] [rbp-2A8h] BYREF
  int v114; // [rsp+7Ch] [rbp-2A4h] BYREF
  char *v115; // [rsp+80h] [rbp-2A0h] BYREF
  __int128 v116; // [rsp+88h] [rbp-298h]
  const char *v117; // [rsp+A0h] [rbp-280h] BYREF
  __int128 v118; // [rsp+A8h] [rbp-278h]
  _QWORD *v119; // [rsp+C0h] [rbp-260h] BYREF
  __int128 v120; // [rsp+C8h] [rbp-258h]
  __int64 v121[2]; // [rsp+E0h] [rbp-240h] BYREF
  __int64 v122; // [rsp+F0h] [rbp-230h] BYREF
  __int128 v123; // [rsp+F8h] [rbp-228h]
  __int64 v124[2]; // [rsp+110h] [rbp-210h] BYREF
  __int64 v125; // [rsp+120h] [rbp-200h] BYREF
  __int128 v126; // [rsp+128h] [rbp-1F8h]
  _QWORD v127[2]; // [rsp+140h] [rbp-1E0h] BYREF
  __m128i si128; // [rsp+150h] [rbp-1D0h] BYREF
  __int64 v129; // [rsp+160h] [rbp-1C0h]
  __int128 v130; // [rsp+168h] [rbp-1B8h]
  _QWORD v131[2]; // [rsp+178h] [rbp-1A8h] BYREF
  int v132; // [rsp+188h] [rbp-198h]
  __m128i v133; // [rsp+190h] [rbp-190h] BYREF
  __m128i v134; // [rsp+1A0h] [rbp-180h] BYREF
  __m128i v135; // [rsp+1B0h] [rbp-170h] BYREF
  __m128i v136; // [rsp+1C0h] [rbp-160h] BYREF
  __m128i v137; // [rsp+1D0h] [rbp-150h] BYREF
  __m128i v138; // [rsp+1E0h] [rbp-140h] BYREF
  __int64 v139; // [rsp+1F0h] [rbp-130h] BYREF
  __int128 v140; // [rsp+1F8h] [rbp-128h] BYREF
  __int128 v141; // [rsp+208h] [rbp-118h]
  __int64 v142; // [rsp+218h] [rbp-108h]
  __int64 v143; // [rsp+248h] [rbp-D8h]
  __int64 v144; // [rsp+250h] [rbp-D0h]
  __int64 v145; // [rsp+260h] [rbp-C0h]
  __int64 v146; // [rsp+268h] [rbp-B8h]
  __m128i v147; // [rsp+280h] [rbp-A0h]
  __m128i v148; // [rsp+290h] [rbp-90h]
  __m128i v149; // [rsp+2A0h] [rbp-80h]
  __m128i v150; // [rsp+2B0h] [rbp-70h]
  __m128i v151; // [rsp+2C0h] [rbp-60h]
  __m128i v152; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v153; // [rsp+2E8h] [rbp-38h]

  v153 = __readfsqword(0x28u);
  v107 = *((_BYTE *)a1 + 365);
  if ( v107 )
    return 0;
  if ( *(_BYTE *)(a1[2] + 712LL) )
  {
    v6 = a1[39];
    if ( v6 == -1 )
      v6 = a1[40];
    v116 = 0;
    v115 = nullptr;
    sub_1CF070(&v115, v6, 0, 0);
    v9 = s1;
    if ( (_QWORD)v116 )
      v9 = v115;
    v10 = sub_E3B50((unsigned int *)&v114, &v113, v9, a1 + 6, *((_DWORD *)a1 + 87));
    if ( v10 )
    {
      v97 = 1;
    }
    else
    {
      if ( *(_BYTE *)(a1[2] + 712LL) == 1 )
      {
LABEL_20:
        if ( v115 )
        {
          *(_QWORD *)&v116 = 0;
          qfree(v115);
        }
        return v107;
      }
      v11 = *((_DWORD *)a1 + 87);
      v97 = 0;
      v114 = 0;
      v113 = v11 - 1;
    }
    v127[1] = 0;
    v127[0] = 0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
    v129 = 0;
    v131[0] = 0;
    v131[1] = 0;
    v132 = 0;
    v130 = 0;
    if ( !a5 )
    {
      a5 = v127;
      if ( !(unsigned __int8)sub_E15E0(
                               (__int64)v127,
                               *a1,
                               a2->m128i_i64[0] + 80LL * v113,
                               a1[41],
                               *((_DWORD *)a1 + 90),
                               0) )
      {
        v107 = 0;
LABEL_17:
        cleanup_argloc(v131);
        if ( v129 )
        {
          *(_QWORD *)&v130 = 0;
          qfree(v129);
        }
        clear_tinfo_t(&si128.m128i_u64[1]);
        sub_119360(v127);
        goto LABEL_20;
      }
    }
    v117 = nullptr;
    v118 = 0;
    if ( (unsigned int)sub_E45E0(a1, (__int64 *)&v117, a3, (__int64)a5, v97 & 1) != 1 )
    {
LABEL_15:
      if ( v117 )
      {
        *(_QWORD *)&v118 = 0;
        qfree(v117);
      }
      goto LABEL_17;
    }
    v119 = nullptr;
    v13 = s1;
    v14 = v114;
    v120 = 0;
    if ( (_QWORD)v118 )
      v13 = v117;
    v95 = sub_E0720(a1[2], (__int64 *)&v119, v13, v114);
    if ( !v95 )
      goto LABEL_93;
    v15 = a1[2];
    v106 = *(_DWORD *)(*(_QWORD *)(v15 + 112) + 80LL);
    if ( a4 | ((_QWORD)v120 != 0) )
    {
      if ( !(v10 | v14) && v6 == -1 )
      {
        v78 = s1;
        if ( (_QWORD)v118 )
          v78 = v117;
        v139 = 0;
        v140 = 0;
        v79 = sub_E0720(v15, &v139, v78, 1);
        v80 = v139;
        v81 = v79;
        if ( v139 )
        {
          v82 = v140;
          if ( (_QWORD)v140 )
          {
            v83 = 0;
            do
            {
              v84 = v80 + 8 * v83++;
              clear_tinfo_t(v84);
              v80 = v139;
            }
            while ( v82 != v83 );
          }
          *(_QWORD *)&v140 = 0;
          qfree(v80);
        }
        if ( v81 )
        {
          v85 = v119;
          v86 = &v119[v120];
          if ( v119 != v86 )
          {
            while ( (get_tinfo_property(*v85, 2) & 0xF) != 9 && v106 >= (unsigned __int64)get_tinfo_size(0, *v85, 0) )
            {
              if ( v86 == ++v85 )
                goto LABEL_28;
            }
            goto LABEL_93;
          }
        }
      }
LABEL_28:
      sub_E4AC0((__int64)&v133, (__int64)a2);
      if ( a4 )
        copy_tinfo_t(v133.m128i_i64[0] + 80LL * v113 + 64, a1[2] + 208LL);
    }
    else
    {
      if ( (v10 & 0xFFFFFEFF) == 0 )
        goto LABEL_199;
      if ( v10 == 512 )
      {
        if ( v14 )
          goto LABEL_199;
        v87 = &byte_4DB9B0;
        if ( (_QWORD)v116 )
          v87 = v115;
        if ( *v87 == 115 )
        {
LABEL_199:
          v45 = (__int64)v119;
          v107 = 0;
          if ( !v119 )
            goto LABEL_15;
LABEL_97:
          *(_QWORD *)&v120 = 0;
          qfree(v45);
          goto LABEL_15;
        }
      }
      sub_E4AC0((__int64)&v133, (__int64)a2);
    }
    sub_E7170(&v133, v120 + *((int *)a1 + 87));
    v16 = 0;
    for ( i = 0; i < (unsigned __int64)v120; i = v18 + 1 )
    {
      v18 = v16;
      copy_tinfo_t(v133.m128i_i64[0] + 80LL * (v16 + *((_DWORD *)a1 + 87)) + 64, &v119[i]);
      v16 = v18 + 1;
    }
    v19 = v138.m128i_i8[8] & 0xF0;
    if ( (v138.m128i_i8[8] & 0xF0) == 0xC0 )
      v19 = v134.m128i_i32[3];
    if ( (unsigned int)(v19 - 208) <= 0x2F || !(unsigned __int8)calc_varglocs(&v133, 0, 0, *((unsigned int *)a1 + 87)) )
    {
      if ( !(unsigned __int8)getinf_flag(67, 16) )
      {
        v77 = v138.m128i_i8[8] & 0xF0;
        if ( (v138.m128i_i8[8] & 0xF0) == 0xC0 )
          v77 = v134.m128i_u32[3];
        sub_CD670((__int64)&v139, a1[2], v77);
        if ( (_DWORD)v139 )
        {
          if ( v145 )
          {
            v146 = 0;
            qfree(v145);
          }
          if ( v143 )
          {
            v144 = 0;
            qfree(v143);
          }
          if ( *((_QWORD *)&v141 + 1) )
          {
            v142 = 0;
            qfree(*((_QWORD *)&v141 + 1));
          }
          if ( (_QWORD)v140 )
          {
            *((_QWORD *)&v140 + 1) = 0;
            qfree(v140);
          }
LABEL_82:
          if ( v137.m128i_i64[0] )
          {
            v137.m128i_i64[1] = 0;
            qfree(v137.m128i_i64[0]);
          }
          cleanup_argloc(&v135.m128i_u64[1]);
          clear_tinfo_t(&v135);
          v39 = v133.m128i_i64[0];
          if ( v133.m128i_i64[0] )
          {
            v40 = v133.m128i_i64[1];
            if ( v133.m128i_i64[1] )
            {
              v41 = 0;
              do
              {
                v42 = (_QWORD *)(v39 + 80 * v41);
                clear_tinfo_t(v42 + 8);
                v43 = v42[5];
                if ( v43 )
                {
                  v42[6] = 0;
                  qfree(v43);
                }
                v44 = v42[2];
                if ( v44 )
                {
                  v42[3] = 0;
                  qfree(v44);
                }
                cleanup_argloc(v42);
                v39 = v133.m128i_i64[0];
                ++v41;
              }
              while ( v40 != v41 );
            }
            v133.m128i_i64[1] = 0;
            qfree(v39);
          }
LABEL_93:
          v45 = (__int64)v119;
          if ( !v119 )
            goto LABEL_15;
          if ( (_QWORD)v120 )
          {
            v46 = 0;
            v47 = v120;
            do
            {
              v48 = v45 + 8 * v46++;
              clear_tinfo_t(v48);
              v45 = (__int64)v119;
            }
            while ( v47 != v46 );
          }
          goto LABEL_97;
        }
        if ( v145 )
        {
          v146 = 0;
          qfree(v145);
        }
        if ( v143 )
        {
          v144 = 0;
          qfree(v143);
        }
        if ( *((_QWORD *)&v141 + 1) )
        {
          v142 = 0;
          qfree(*((_QWORD *)&v141 + 1));
        }
        if ( (_QWORD)v140 )
        {
          *((_QWORD *)&v140 + 1) = 0;
          qfree(v140);
        }
      }
      v105 = v136.m128i_i64[1];
      v20 = *((int *)a1 + 87);
      v21 = *((_DWORD *)a1 + 87);
      if ( v20 < v133.m128i_i64[1] )
      {
        v22 = 2 * v106;
        v23 = v106;
        if ( v106 > 2 * v106 )
          v23 = 2 * v106;
        v94 = v23;
        while ( 1 )
        {
          v24 = *(_QWORD *)(v133.m128i_i64[0] + 80 * v20 + 64);
          v33 = v133.m128i_i64[0] + 80 * v20;
          tinfo_size = get_tinfo_size(&v139, v24, 0);
          v35 = *((unsigned int *)a1 + 90);
          v36 = (unsigned int)(v139 - 1);
          v108 = v139;
          if ( ((unsigned int)v36 & (unsigned int)v139) != 0 )
            sub_DFFC0((__int64)&v139, v24, v36, v34, v35);
          if ( (int)v139 <= v22 )
            break;
          if ( (unsigned int)v35 <= 0x10 )
          {
            v88 = v139 - 1;
            v90 = *((_DWORD *)a1 + 90);
            v37 = getinf(99);
            if ( v37 == 176 || v37 == 256 )
            {
              if ( v106 > v22 )
                goto LABEL_125;
LABEL_128:
              v108 = 2 * v106;
LABEL_129:
              LODWORD(v35) = getinf(99);
LABEL_110:
              if ( (_DWORD)v35 == 176 || (_DWORD)v35 == 256 )
              {
                v26 = v106 - 1;
                v108 = v106;
                goto LABEL_48;
              }
              goto LABEL_112;
            }
            LODWORD(v35) = v90;
            LODWORD(v36) = v88;
          }
          else if ( (_DWORD)v35 == 176 || (_DWORD)v35 == 256 )
          {
            v108 = v94;
            v26 = v94 - 1;
            goto LABEL_48;
          }
          v24 = 512;
          v91 = v36;
          v89 = v35;
          v38 = getinf_flag(67, 512);
          v26 = v91;
          if ( v38 )
            goto LABEL_48;
          if ( v106 > v22 )
          {
            if ( v89 > 0x10 )
            {
              v108 = 2 * v106;
LABEL_45:
              v24 = 2;
              v25 = getinf_flag(67, 2);
              goto LABEL_46;
            }
LABEL_125:
            v108 = 2 * v106;
LABEL_126:
            LODWORD(v35) = getinf(99);
LABEL_43:
            if ( (_DWORD)v35 == 176 || (_DWORD)v35 == 256 )
            {
              v26 = v108 - 1;
              goto LABEL_48;
            }
            goto LABEL_45;
          }
          if ( v89 <= 0x10 )
            goto LABEL_128;
          v108 = 2 * v106;
LABEL_112:
          v24 = 4;
          v25 = getinf_flag(67, 4);
LABEL_46:
          v26 = v108 - 1;
          if ( !v25 )
          {
            v108 = v106;
            v26 = v106 - 1;
          }
LABEL_48:
          v27 = v33;
          v109 = -v108 & (unsigned __int64)(v105 + v26);
          cleanup_argloc(v33);
          *(_DWORD *)v33 = 1;
          v29 = tinfo_size;
          *(_QWORD *)(v33 + 8) = v109;
          v30 = *((unsigned int *)a1 + 90);
          v31 = v139 - 1;
          v110 = v139;
          if ( (((_DWORD)v139 - 1) & (unsigned int)v139) != 0 )
            sub_DFFC0(v27, v24, v30, tinfo_size, v28);
          if ( (int)v139 > v22 )
          {
            if ( (unsigned int)v30 <= 0x10 )
            {
              v92 = *((_DWORD *)a1 + 90);
              v49 = getinf(99);
              v29 = tinfo_size;
              if ( v49 != 176 && v49 != 256 )
              {
                LODWORD(v30) = v92;
                goto LABEL_105;
              }
              if ( v106 > v22 )
                goto LABEL_123;
            }
            else
            {
              if ( (_DWORD)v30 == 256 || (_DWORD)v30 == 176 )
              {
                v110 = v94;
                v31 = v94 - 1;
                goto LABEL_57;
              }
LABEL_105:
              v101 = v29;
              v93 = v30;
              v50 = getinf_flag(67, 512);
              v29 = v101;
              if ( v50 )
                goto LABEL_57;
              if ( v106 > v22 )
              {
                if ( v93 > 0x10 )
                {
                  v110 = 2 * v106;
LABEL_54:
                  v99 = v29;
                  v32 = getinf_flag(67, 2);
                  goto LABEL_55;
                }
LABEL_123:
                v110 = 2 * v106;
LABEL_124:
                v102 = v29;
                v51 = getinf(99);
                v29 = v102;
                LODWORD(v30) = v51;
LABEL_52:
                if ( (_DWORD)v30 != 176 && (_DWORD)v30 != 256 )
                  goto LABEL_54;
                v31 = v110 - 1;
                goto LABEL_57;
              }
              if ( v93 > 0x10 )
              {
                v110 = 2 * v106;
LABEL_116:
                v99 = v29;
                v32 = getinf_flag(67, 4);
LABEL_55:
                v31 = v110 - 1;
                v29 = v99;
                if ( !v32 )
                {
                  v110 = v106;
                  v31 = v106 - 1;
                }
                goto LABEL_57;
              }
            }
            v110 = 2 * v106;
LABEL_132:
            v103 = v29;
            v52 = getinf(99);
            v29 = v103;
            LODWORD(v30) = v52;
            goto LABEL_114;
          }
          if ( (int)v139 < v106 )
          {
            if ( (unsigned int)v30 <= 0x10 )
              goto LABEL_124;
            goto LABEL_52;
          }
          if ( (unsigned int)v30 <= 0x10 )
            goto LABEL_132;
LABEL_114:
          if ( (_DWORD)v30 != 176 && (_DWORD)v30 != 256 )
            goto LABEL_116;
          v31 = v106 - 1;
          v110 = v106;
LABEL_57:
          ++v21;
          v105 += -v110 & (unsigned __int64)(v29 + v31);
          v20 = v21;
          if ( (unsigned __int64)v21 >= v133.m128i_i64[1] )
            goto LABEL_133;
        }
        if ( (int)v139 < v106 )
        {
          if ( (unsigned int)v35 <= 0x10 )
            goto LABEL_126;
          goto LABEL_43;
        }
        if ( (unsigned int)v35 <= 0x10 )
          goto LABEL_129;
        goto LABEL_110;
      }
LABEL_133:
      v136.m128i_i64[1] = v105;
    }
    if ( v97 || (v96 = *((_DWORD *)a1 + 87), v53 = v96, (unsigned __int64)v96 >= v133.m128i_i64[1]) )
    {
LABEL_138:
      v55 = _mm_loadu_si128(a2);
      *a2 = _mm_load_si128(&v133);
      v56 = _mm_loadu_si128(a2 + 1);
      v57 = _mm_load_si128(&v134);
      v58 = _mm_loadu_si128(a2 + 2);
      v59 = _mm_loadu_si128(a2 + 3);
      v60 = _mm_loadu_si128(a2 + 4);
      v147 = v55;
      a2[1] = v57;
      v61 = _mm_load_si128(&v135);
      v62 = _mm_loadu_si128(a2 + 5);
      v148 = v56;
      a2[2] = v61;
      v63 = _mm_load_si128(&v136);
      v149 = v58;
      a2[3] = v63;
      v64 = _mm_load_si128(&v137);
      v150 = v59;
      a2[4] = v64;
      v65 = _mm_load_si128(&v138);
      v151 = v60;
      a2[5] = v65;
      v152 = v62;
      v133 = v55;
      v134 = v56;
      v135 = v58;
      v136 = v59;
      v137 = v60;
      v138 = v62;
      *((_DWORD *)a1 + 88) |= 0x100u;
      v107 = v95;
    }
    else
    {
      while ( 1 )
      {
        v54 = v133.m128i_i64[0] + 80 * v53;
        if ( (unsigned int)(*(_DWORD *)v54 - 3) <= 1 )
          break;
LABEL_137:
        v53 = ++v96;
        if ( (unsigned __int64)v96 >= v133.m128i_i64[1] )
          goto LABEL_138;
      }
      v66 = get_tinfo_size(0, *(_QWORD *)(v54 + 64), 0);
      v121[0] = 0;
      v121[1] = 0;
      v122 = 0;
      v124[0] = 0;
      v124[1] = 0;
      v125 = 0;
      v123 = 0;
      v126 = 0;
      if ( *(_DWORD *)v54 == 4 )
      {
        v66 >>= 1;
        v112 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
                 *(_QWORD *)(a1[2] + 112LL),
                 *(unsigned __int16 *)(v54 + 10));
        v139 = 0;
        *(_QWORD *)&v140 = 0;
        sub_60440(&v139, v112, v66);
        *((_QWORD *)&v140 + 1) = 0;
        v141 = 0;
        sub_60840(v121, &v139);
        sub_312B30(&v122, (char *)&v140 + 8);
        if ( *((_QWORD *)&v140 + 1) )
        {
          *(_QWORD *)&v141 = 0;
          qfree(*((_QWORD *)&v140 + 1));
        }
        qfree(v139);
        v139 = 0;
        *(_QWORD *)&v140 = 0;
        sub_60440(&v139, v112, v106);
        *((_QWORD *)&v140 + 1) = 0;
        v141 = 0;
        sub_60840(v124, &v139);
        sub_312B30(&v125, (char *)&v140 + 8);
        if ( *((_QWORD *)&v140 + 1) )
        {
          *(_QWORD *)&v141 = 0;
          qfree(*((_QWORD *)&v140 + 1));
        }
        qfree(v139);
      }
      v67 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
              *(_QWORD *)(a1[2] + 112LL),
              *(unsigned __int16 *)(v54 + 8));
      v139 = 0;
      *(_QWORD *)&v140 = 0;
      sub_60440(&v139, v67, v66);
      *((_QWORD *)&v140 + 1) = 0;
      v141 = 0;
      sub_60840(v121, &v139);
      sub_312B30(&v122, (char *)&v140 + 8);
      if ( *((_QWORD *)&v140 + 1) )
      {
        *(_QWORD *)&v141 = 0;
        qfree(*((_QWORD *)&v140 + 1));
      }
      qfree(v139);
      v139 = 0;
      *(_QWORD *)&v140 = 0;
      sub_60440(&v139, v67, (v106 - 1 + v66) & -v106);
      *((_QWORD *)&v140 + 1) = 0;
      v141 = 0;
      sub_60840(v124, &v139);
      sub_312B30(&v125, (char *)&v140 + 8);
      if ( *((_QWORD *)&v140 + 1) )
      {
        *(_QWORD *)&v141 = 0;
        qfree(*((_QWORD *)&v140 + 1));
      }
      qfree(v139);
      for ( j = (unsigned int *)a3; ; j = v111 )
      {
        if ( (unsigned __int8)sub_60E40(v121) && !(_QWORD)v123 )
          goto LABEL_147;
        v111 = (unsigned int *)sub_125710(*a1, (unsigned int)v121, *((_QWORD *)j + 2), 0, 0, 0, 257);
        if ( !v111 )
          break;
        if ( !(unsigned __int8)sub_11AE60(*v111) )
          goto LABEL_77;
        sub_123FE0(&v139, *a1, v111, 1);
        if ( !(unsigned __int8)sub_60DE0(&v139, v124) || !(unsigned __int8)sub_313DC0(&v125, (char *)&v140 + 8) )
        {
          if ( *((_QWORD *)&v140 + 1) )
          {
            *(_QWORD *)&v141 = 0;
            qfree(*((_QWORD *)&v140 + 1));
          }
          qfree(v139);
          goto LABEL_77;
        }
        sub_60C00(v121, &v139, v69, v70, v71, v72);
        sub_313AE0(&v122, (char *)&v140 + 8);
        sub_60C00(v124, &v139, v73, v74, v75, v76);
        sub_313AE0(&v125, (char *)&v140 + 8);
        if ( *((_QWORD *)&v140 + 1) )
        {
          *(_QWORD *)&v141 = 0;
          qfree(*((_QWORD *)&v140 + 1));
        }
        qfree(v139);
      }
      if ( j == (unsigned int *)a3 )
      {
LABEL_147:
        if ( v125 )
        {
          *(_QWORD *)&v126 = 0;
          qfree(v125);
        }
        qfree(v124[0]);
        if ( v122 )
        {
          *(_QWORD *)&v123 = 0;
          qfree(v122);
        }
        qfree(v121[0]);
        goto LABEL_137;
      }
LABEL_77:
      if ( v125 )
      {
        *(_QWORD *)&v126 = 0;
        qfree(v125);
      }
      qfree(v124[0]);
      if ( v122 )
      {
        *(_QWORD *)&v123 = 0;
        qfree(v122);
      }
      qfree(v121[0]);
    }
    goto LABEL_82;
  }
  return v107;
}
