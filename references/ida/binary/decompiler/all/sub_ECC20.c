__int64 __fastcall sub_ECC20(_QWORD *a1, __m128i *a2, __int64 a3, unsigned __int8 a4, _QWORD *a5)
{
  __int64 v6; // r13
  const char *v9; // rdx
  int v10; // r12d
  int v11; // eax
  const char *v13; // rdx
  int v14; // r14d
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // r15d
  int v18; // eax
  unsigned __int64 v19; // rax
  int v20; // r14d
  int v21; // r15d
  int v22; // esi
  __int64 v23; // rsi
  char v24; // al
  int v25; // edx
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned int v28; // edx
  int v29; // r12d
  char v30; // al
  __int64 v31; // r12
  unsigned int v32; // r8d
  int v33; // edx
  int v34; // eax
  char v35; // al
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // r15
  _QWORD *v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // r14
  int v42; // eax
  char v43; // al
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r15
  __m128i v48; // xmm5
  __m128i v49; // xmm4
  __m128i v50; // xmm6
  __m128i v51; // xmm3
  __m128i v52; // xmm2
  __m128i v53; // xmm1
  __m128i v54; // xmm6
  __m128i v55; // xmm0
  __m128i v56; // xmm6
  __m128i v57; // xmm6
  __m128i v58; // xmm6
  unsigned __int64 v59; // r14
  int v60; // r15d
  unsigned int *i; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // r9d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // r9d
  unsigned int v70; // edx
  const char *v71; // rdx
  char v72; // r14
  __int64 v73; // r13
  __int64 v74; // r12
  unsigned __int64 v75; // r14
  __int64 v76; // r12
  char *v77; // rax
  int v78; // [rsp+Ch] [rbp-314h]
  unsigned int v79; // [rsp+Ch] [rbp-314h]
  unsigned int v80; // [rsp+10h] [rbp-310h]
  int v81; // [rsp+10h] [rbp-310h]
  unsigned int v82; // [rsp+10h] [rbp-310h]
  unsigned int v83; // [rsp+10h] [rbp-310h]
  int v84; // [rsp+20h] [rbp-300h]
  unsigned __int8 v85; // [rsp+33h] [rbp-2EDh]
  int v86; // [rsp+34h] [rbp-2ECh]
  char v87; // [rsp+38h] [rbp-2E8h]
  __int64 v89; // [rsp+48h] [rbp-2D8h]
  int tinfo_size; // [rsp+48h] [rbp-2D8h]
  __int64 v91; // [rsp+48h] [rbp-2D8h]
  __int64 v92; // [rsp+48h] [rbp-2D8h]
  __int64 v93; // [rsp+48h] [rbp-2D8h]
  __int64 v95; // [rsp+58h] [rbp-2C8h]
  int v96; // [rsp+60h] [rbp-2C0h]
  unsigned __int8 v97; // [rsp+67h] [rbp-2B9h]
  int v98; // [rsp+68h] [rbp-2B8h]
  unsigned __int64 v99; // [rsp+68h] [rbp-2B8h]
  int v100; // [rsp+68h] [rbp-2B8h]
  unsigned int *v101; // [rsp+68h] [rbp-2B8h]
  int v102; // [rsp+68h] [rbp-2B8h]
  int v103; // [rsp+78h] [rbp-2A8h] BYREF
  int v104; // [rsp+7Ch] [rbp-2A4h] BYREF
  char *v105; // [rsp+80h] [rbp-2A0h] BYREF
  __int128 v106; // [rsp+88h] [rbp-298h]
  const char *v107; // [rsp+A0h] [rbp-280h] BYREF
  __int128 v108; // [rsp+A8h] [rbp-278h]
  unsigned __int64 v109; // [rsp+C0h] [rbp-260h] BYREF
  __int128 v110; // [rsp+C8h] [rbp-258h]
  __int64 v111[2]; // [rsp+E0h] [rbp-240h] BYREF
  __int64 v112; // [rsp+F0h] [rbp-230h] BYREF
  __int128 v113; // [rsp+F8h] [rbp-228h]
  __int64 v114[2]; // [rsp+110h] [rbp-210h] BYREF
  __int64 v115; // [rsp+120h] [rbp-200h] BYREF
  __int128 v116; // [rsp+128h] [rbp-1F8h]
  _QWORD v117[2]; // [rsp+140h] [rbp-1E0h] BYREF
  __m128i si128; // [rsp+150h] [rbp-1D0h]
  __int64 v119; // [rsp+160h] [rbp-1C0h]
  __int128 v120; // [rsp+168h] [rbp-1B8h]
  __int64 v121; // [rsp+178h] [rbp-1A8h]
  __int64 v122; // [rsp+180h] [rbp-1A0h]
  int v123; // [rsp+188h] [rbp-198h]
  __m128i v124; // [rsp+190h] [rbp-190h] BYREF
  __m128i v125; // [rsp+1A0h] [rbp-180h] BYREF
  __m128i v126; // [rsp+1B0h] [rbp-170h] BYREF
  __m128i v127; // [rsp+1C0h] [rbp-160h] BYREF
  __m128i v128; // [rsp+1D0h] [rbp-150h] BYREF
  __m128i v129; // [rsp+1E0h] [rbp-140h] BYREF
  __int64 v130; // [rsp+1F0h] [rbp-130h] BYREF
  __int128 v131; // [rsp+1F8h] [rbp-128h] BYREF
  __int128 v132; // [rsp+208h] [rbp-118h]
  __int64 v133; // [rsp+218h] [rbp-108h]
  __int64 v134; // [rsp+248h] [rbp-D8h]
  __int64 v135; // [rsp+250h] [rbp-D0h]
  __int64 v136; // [rsp+260h] [rbp-C0h]
  __int64 v137; // [rsp+268h] [rbp-B8h]
  __m128i v138; // [rsp+280h] [rbp-A0h]
  __m128i v139; // [rsp+290h] [rbp-90h]
  __m128i v140; // [rsp+2A0h] [rbp-80h]
  __m128i v141; // [rsp+2B0h] [rbp-70h]
  __m128i v142; // [rsp+2C0h] [rbp-60h]
  __m128i v143; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v144; // [rsp+2E8h] [rbp-38h]

  v144 = __readfsqword(0x28u);
  v97 = *((_BYTE *)a1 + 365);
  if ( v97 )
    return 0;
  if ( *(_BYTE *)(a1[2] + 712LL) )
  {
    v6 = a1[39];
    if ( v6 == -1 )
      v6 = a1[40];
    v106 = 0;
    v105 = 0;
    sub_1CFF30(&v105, v6, 0, 0);
    v9 = s1;
    if ( (_QWORD)v106 )
      v9 = v105;
    v10 = sub_CEE40((unsigned int *)&v104, &v103, v9, a1 + 6, *((_DWORD *)a1 + 87));
    if ( v10 )
    {
      v87 = 1;
    }
    else
    {
      if ( *(_BYTE *)(a1[2] + 712LL) == 1 )
      {
LABEL_20:
        if ( v105 )
        {
          *(_QWORD *)&v106 = 0;
          qfree();
        }
        return v97;
      }
      v11 = *((_DWORD *)a1 + 87);
      v87 = 0;
      v104 = 0;
      v103 = v11 - 1;
    }
    v117[1] = 0;
    v117[0] = 0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
    v119 = 0;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v120 = 0;
    if ( !a5 )
    {
      a5 = v117;
      if ( !(unsigned __int8)sub_D34C0(
                               (__int64)v117,
                               *a1,
                               a2->m128i_i64[0] + 80LL * v103,
                               a1[41],
                               *((_DWORD *)a1 + 90),
                               0) )
      {
        v97 = 0;
LABEL_17:
        cleanup_argloc();
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree();
        }
        clear_tinfo_t();
        sub_11A960(v117);
        goto LABEL_20;
      }
    }
    v107 = 0;
    v108 = 0;
    if ( (unsigned int)sub_E2360(a1, (__int64)&v107, a3, (__int64)a5, v87 & 1) != 1 )
    {
LABEL_15:
      if ( v107 )
      {
        *(_QWORD *)&v108 = 0;
        qfree();
      }
      goto LABEL_17;
    }
    v109 = 0;
    v13 = s1;
    v14 = v104;
    v110 = 0;
    if ( (_QWORD)v108 )
      v13 = v107;
    v85 = sub_D0980(a1[2], &v109, v13, v104);
    if ( !v85 )
      goto LABEL_92;
    v15 = a1[2];
    v96 = *(_DWORD *)(*(_QWORD *)(v15 + 112) + 80LL);
    if ( a4 | ((_QWORD)v110 != 0) )
    {
      if ( !(v10 | v14) && v6 == -1 )
      {
        v71 = s1;
        if ( (_QWORD)v108 )
          v71 = v107;
        v130 = 0;
        v131 = 0;
        v72 = sub_D0980(v15, (unsigned __int64 *)&v130, v71, 1);
        if ( v130 )
        {
          v73 = v131;
          if ( (_QWORD)v131 )
          {
            v74 = 0;
            do
            {
              ++v74;
              clear_tinfo_t();
            }
            while ( v73 != v74 );
          }
          *(_QWORD *)&v131 = 0;
          qfree();
        }
        if ( v72 )
        {
          v75 = v109;
          v76 = v109 + 8 * v110;
          if ( v109 != v76 )
          {
            while ( (get_tinfo_property() & 0xF) != 9 && v96 >= (unsigned __int64)get_tinfo_size() )
            {
              v75 += 8LL;
              if ( v76 == v75 )
                goto LABEL_28;
            }
            goto LABEL_92;
          }
        }
      }
LABEL_28:
      sub_E8860((__int64)&v124, (__int64)a2);
      if ( a4 )
        copy_tinfo_t();
    }
    else
    {
      if ( (v10 & 0xFFFFFEFF) == 0 )
        goto LABEL_198;
      if ( v10 == 512 )
      {
        if ( v14 )
          goto LABEL_198;
        v77 = &byte_4ED770;
        if ( (_QWORD)v106 )
          v77 = v105;
        if ( *v77 == 115 )
        {
LABEL_198:
          v97 = 0;
          if ( !v109 )
            goto LABEL_15;
LABEL_96:
          *(_QWORD *)&v110 = 0;
          qfree();
          goto LABEL_15;
        }
      }
      sub_E8860((__int64)&v124, (__int64)a2);
    }
    sub_EC590(v124.m128i_i64, v110 + *((int *)a1 + 87));
    v16 = 0;
    if ( (_QWORD)v110 )
    {
      do
      {
        v17 = v16;
        copy_tinfo_t();
        v16 = v17 + 1;
      }
      while ( v17 + 1 < (unsigned __int64)v110 );
    }
    v18 = v129.m128i_i8[8] & 0xF0;
    if ( (v129.m128i_i8[8] & 0xF0) == 0xC0 )
      v18 = v125.m128i_i32[3];
    if ( (unsigned int)(v18 - 208) <= 0x2F || !(unsigned __int8)calc_varglocs() )
    {
      if ( !(unsigned __int8)getinf_flag() )
      {
        v70 = v129.m128i_i8[8] & 0xF0;
        if ( (v129.m128i_i8[8] & 0xF0) == 0xC0 )
          v70 = v125.m128i_u32[3];
        sub_D6330((__int64)&v130, a1[2], v70);
        if ( (_DWORD)v130 )
        {
          if ( v136 )
          {
            v137 = 0;
            qfree();
          }
          if ( v134 )
          {
            v135 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v132 + 1) )
          {
            v133 = 0;
            qfree();
          }
          if ( (_QWORD)v131 )
          {
            *((_QWORD *)&v131 + 1) = 0;
            qfree();
          }
LABEL_81:
          if ( v128.m128i_i64[0] )
          {
            v128.m128i_i64[1] = 0;
            qfree();
          }
          cleanup_argloc();
          clear_tinfo_t();
          v36 = v124.m128i_i64[0];
          if ( v124.m128i_i64[0] )
          {
            v37 = v124.m128i_i64[1];
            if ( v124.m128i_i64[1] )
            {
              v38 = 0;
              do
              {
                v39 = (_QWORD *)(v36 + 80 * v38);
                clear_tinfo_t();
                if ( v39[5] )
                {
                  v39[6] = 0;
                  qfree();
                }
                if ( v39[2] )
                {
                  v39[3] = 0;
                  qfree();
                }
                cleanup_argloc();
                v36 = v124.m128i_i64[0];
                ++v38;
              }
              while ( v37 != v38 );
            }
            v124.m128i_i64[1] = 0;
            qfree();
          }
LABEL_92:
          if ( !v109 )
            goto LABEL_15;
          if ( (_QWORD)v110 )
          {
            v40 = 0;
            v41 = v110;
            do
            {
              ++v40;
              clear_tinfo_t();
            }
            while ( v41 != v40 );
          }
          goto LABEL_96;
        }
        if ( v136 )
        {
          v137 = 0;
          qfree();
        }
        if ( v134 )
        {
          v135 = 0;
          qfree();
        }
        if ( *((_QWORD *)&v132 + 1) )
        {
          v133 = 0;
          qfree();
        }
        if ( (_QWORD)v131 )
        {
          *((_QWORD *)&v131 + 1) = 0;
          qfree();
        }
      }
      v95 = v127.m128i_i64[1];
      v19 = *((int *)a1 + 87);
      v20 = *((_DWORD *)a1 + 87);
      if ( v19 < v124.m128i_i64[1] )
      {
        v21 = 2 * v96;
        v22 = v96;
        if ( v96 > 2 * v96 )
          v22 = 2 * v96;
        v84 = v22;
        while ( 1 )
        {
          v23 = *(_QWORD *)(v124.m128i_i64[0] + 80 * v19 + 64);
          v31 = v124.m128i_i64[0] + 80 * v19;
          tinfo_size = get_tinfo_size();
          v32 = *((_DWORD *)a1 + 90);
          v33 = v130 - 1;
          v98 = v130;
          if ( (((_DWORD)v130 - 1) & (unsigned int)v130) != 0 )
            sub_CE830(&v130, v23);
          if ( (int)v130 <= v21 )
            break;
          if ( v32 <= 0x10 )
          {
            v78 = v130 - 1;
            v80 = *((_DWORD *)a1 + 90);
            v34 = getinf();
            if ( v34 == 176 || v34 == 256 )
            {
              if ( v96 > v21 )
                goto LABEL_124;
LABEL_127:
              v98 = 2 * v96;
LABEL_128:
              v32 = getinf();
LABEL_109:
              if ( v32 == 176 || v32 == 256 )
              {
                v25 = v96 - 1;
                v98 = v96;
                goto LABEL_48;
              }
              goto LABEL_111;
            }
            v32 = v80;
            v33 = v78;
          }
          else if ( v32 == 176 || v32 == 256 )
          {
            v98 = v84;
            v25 = v84 - 1;
            goto LABEL_48;
          }
          v23 = 512;
          v81 = v33;
          v79 = v32;
          v35 = getinf_flag();
          v25 = v81;
          if ( v35 )
            goto LABEL_48;
          if ( v96 > v21 )
          {
            if ( v79 > 0x10 )
            {
              v98 = 2 * v96;
LABEL_45:
              v23 = 2;
              v24 = getinf_flag();
              goto LABEL_46;
            }
LABEL_124:
            v98 = 2 * v96;
LABEL_125:
            v32 = getinf();
LABEL_43:
            if ( v32 == 176 || v32 == 256 )
            {
              v25 = v98 - 1;
              goto LABEL_48;
            }
            goto LABEL_45;
          }
          if ( v79 <= 0x10 )
            goto LABEL_127;
          v98 = 2 * v96;
LABEL_111:
          v23 = 4;
          v24 = getinf_flag();
LABEL_46:
          v25 = v98 - 1;
          if ( !v24 )
          {
            v98 = v96;
            v25 = v96 - 1;
          }
LABEL_48:
          v26 = v31;
          v99 = -v98 & (unsigned __int64)(v95 + v25);
          cleanup_argloc();
          *(_DWORD *)v31 = 1;
          v27 = tinfo_size;
          *(_QWORD *)(v31 + 8) = v99;
          v28 = *((_DWORD *)a1 + 90);
          v29 = v130 - 1;
          v100 = v130;
          if ( (((_DWORD)v130 - 1) & (unsigned int)v130) != 0 )
            sub_CE830(v26, v23);
          if ( (int)v130 > v21 )
          {
            if ( v28 <= 0x10 )
            {
              v82 = *((_DWORD *)a1 + 90);
              v42 = getinf();
              v27 = tinfo_size;
              if ( v42 != 176 && v42 != 256 )
              {
                v28 = v82;
                goto LABEL_104;
              }
              if ( v96 > v21 )
                goto LABEL_122;
            }
            else
            {
              if ( v28 == 256 || v28 == 176 )
              {
                v100 = v84;
                v29 = v84 - 1;
                goto LABEL_56;
              }
LABEL_104:
              v91 = v27;
              v83 = v28;
              v43 = getinf_flag();
              v27 = v91;
              if ( v43 )
                goto LABEL_56;
              if ( v96 > v21 )
              {
                if ( v83 > 0x10 )
                {
                  v100 = 2 * v96;
                  goto LABEL_54;
                }
LABEL_122:
                v100 = 2 * v96;
LABEL_123:
                v92 = v27;
                v44 = getinf();
                v27 = v92;
                v28 = v44;
LABEL_52:
                if ( v28 != 176 && v28 != 256 )
                  goto LABEL_54;
                v29 = v100 - 1;
                goto LABEL_56;
              }
              if ( v83 > 0x10 )
              {
                v100 = 2 * v96;
LABEL_54:
                v89 = v27;
                v30 = getinf_flag();
                v29 = v100 - 1;
                v27 = v89;
                if ( !v30 )
                {
                  v100 = v96;
                  v29 = v96 - 1;
                }
                goto LABEL_56;
              }
            }
            v100 = 2 * v96;
LABEL_131:
            v93 = v27;
            v45 = getinf();
            v27 = v93;
            v28 = v45;
            goto LABEL_113;
          }
          if ( (int)v130 < v96 )
          {
            if ( v28 <= 0x10 )
              goto LABEL_123;
            goto LABEL_52;
          }
          if ( v28 <= 0x10 )
            goto LABEL_131;
LABEL_113:
          if ( v28 != 176 && v28 != 256 )
            goto LABEL_54;
          v29 = v96 - 1;
          v100 = v96;
LABEL_56:
          ++v20;
          v95 += -v100 & (unsigned __int64)(v27 + v29);
          v19 = v20;
          if ( (unsigned __int64)v20 >= v124.m128i_i64[1] )
            goto LABEL_132;
        }
        if ( (int)v130 < v96 )
        {
          if ( v32 <= 0x10 )
            goto LABEL_125;
          goto LABEL_43;
        }
        if ( v32 <= 0x10 )
          goto LABEL_128;
        goto LABEL_109;
      }
LABEL_132:
      v127.m128i_i64[1] = v95;
    }
    if ( v87 || (v86 = *((_DWORD *)a1 + 87), v46 = v86, (unsigned __int64)v86 >= v124.m128i_i64[1]) )
    {
LABEL_137:
      v48 = _mm_loadu_si128(a2);
      *a2 = _mm_load_si128(&v124);
      v49 = _mm_loadu_si128(a2 + 1);
      v50 = _mm_load_si128(&v125);
      v51 = _mm_loadu_si128(a2 + 2);
      v52 = _mm_loadu_si128(a2 + 3);
      v53 = _mm_loadu_si128(a2 + 4);
      v138 = v48;
      a2[1] = v50;
      v54 = _mm_load_si128(&v126);
      v55 = _mm_loadu_si128(a2 + 5);
      v139 = v49;
      a2[2] = v54;
      v56 = _mm_load_si128(&v127);
      v140 = v51;
      a2[3] = v56;
      v57 = _mm_load_si128(&v128);
      v141 = v52;
      a2[4] = v57;
      v58 = _mm_load_si128(&v129);
      v142 = v53;
      a2[5] = v58;
      v143 = v55;
      v124 = v48;
      v125 = v49;
      v126 = v51;
      v127 = v52;
      v128 = v53;
      v129 = v55;
      *((_DWORD *)a1 + 88) |= 0x100u;
      v97 = v85;
    }
    else
    {
      while ( 1 )
      {
        v47 = v124.m128i_i64[0] + 80 * v46;
        if ( (unsigned int)(*(_DWORD *)v47 - 3) <= 1 )
          break;
LABEL_136:
        v46 = ++v86;
        if ( (unsigned __int64)v86 >= v124.m128i_i64[1] )
          goto LABEL_137;
      }
      v59 = get_tinfo_size();
      v111[0] = 0;
      v111[1] = 0;
      v112 = 0;
      v114[0] = 0;
      v114[1] = 0;
      v115 = 0;
      v113 = 0;
      v116 = 0;
      if ( *(_DWORD *)v47 == 4 )
      {
        v59 >>= 1;
        v102 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
                 *(_QWORD *)(a1[2] + 112LL),
                 *(unsigned __int16 *)(v47 + 10));
        v130 = 0;
        *(_QWORD *)&v131 = 0;
        sub_63580(&v130, v102, v59);
        *((_QWORD *)&v131 + 1) = 0;
        v132 = 0;
        sub_63980(v111, &v130);
        sub_313730(&v112, (char *)&v131 + 8);
        if ( *((_QWORD *)&v131 + 1) )
        {
          *(_QWORD *)&v132 = 0;
          qfree();
        }
        qfree();
        v130 = 0;
        *(_QWORD *)&v131 = 0;
        sub_63580(&v130, v102, v96);
        *((_QWORD *)&v131 + 1) = 0;
        v132 = 0;
        sub_63980(v114, &v130);
        sub_313730(&v115, (char *)&v131 + 8);
        if ( *((_QWORD *)&v131 + 1) )
        {
          *(_QWORD *)&v132 = 0;
          qfree();
        }
        qfree();
      }
      v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
              *(_QWORD *)(a1[2] + 112LL),
              *(unsigned __int16 *)(v47 + 8));
      v130 = 0;
      *(_QWORD *)&v131 = 0;
      sub_63580(&v130, v60, v59);
      *((_QWORD *)&v131 + 1) = 0;
      v132 = 0;
      sub_63980(v111, &v130);
      sub_313730(&v112, (char *)&v131 + 8);
      if ( *((_QWORD *)&v131 + 1) )
      {
        *(_QWORD *)&v132 = 0;
        qfree();
      }
      qfree();
      v130 = 0;
      *(_QWORD *)&v131 = 0;
      sub_63580(&v130, v60, (v96 - 1 + v59) & -v96);
      *((_QWORD *)&v131 + 1) = 0;
      v132 = 0;
      sub_63980(v114, &v130);
      sub_313730(&v115, (char *)&v131 + 8);
      if ( *((_QWORD *)&v131 + 1) )
      {
        *(_QWORD *)&v132 = 0;
        qfree();
      }
      qfree();
      for ( i = (unsigned int *)a3; ; i = v101 )
      {
        if ( (unsigned __int8)sub_63F80(v111) && !(_QWORD)v113 )
          goto LABEL_146;
        v101 = (unsigned int *)sub_126C30(*a1, (unsigned int)v111, *((_QWORD *)i + 2), 0, 0, 0, 257);
        if ( !v101 )
          break;
        if ( !(unsigned __int8)sub_11C460(*v101) )
          goto LABEL_76;
        sub_125510(&v130, *a1, v101, 1);
        if ( !(unsigned __int8)sub_63F20(&v130, v114) || !(unsigned __int8)sub_3149F0(&v115, (char *)&v131 + 8) )
        {
          if ( *((_QWORD *)&v131 + 1) )
          {
            *(_QWORD *)&v132 = 0;
            qfree();
          }
          qfree();
          goto LABEL_76;
        }
        sub_63D40(v111, &v130, v62, v63, v64, v65);
        sub_314710(&v112, (char *)&v131 + 8);
        sub_63D40(v114, &v130, v66, v67, v68, v69);
        sub_314710(&v115, (char *)&v131 + 8);
        if ( *((_QWORD *)&v131 + 1) )
        {
          *(_QWORD *)&v132 = 0;
          qfree();
        }
        qfree();
      }
      if ( i == (unsigned int *)a3 )
      {
LABEL_146:
        if ( v115 )
        {
          *(_QWORD *)&v116 = 0;
          qfree();
        }
        qfree();
        if ( v112 )
        {
          *(_QWORD *)&v113 = 0;
          qfree();
        }
        qfree();
        goto LABEL_136;
      }
LABEL_76:
      if ( v115 )
      {
        *(_QWORD *)&v116 = 0;
        qfree();
      }
      qfree();
      if ( v112 )
      {
        *(_QWORD *)&v113 = 0;
        qfree();
      }
      qfree();
    }
    goto LABEL_81;
  }
  return v97;
}
