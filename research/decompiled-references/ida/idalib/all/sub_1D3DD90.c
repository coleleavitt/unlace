__int64 __fastcall sub_1D3DD90(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __m128 si128,
        __m128 a8,
        __m128 *a9)
{
  __int64 v10; // r15
  int v11; // r9d
  int v15; // ebp
  char v16; // dl
  __int32 v17; // edx
  __int64 v18; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int32 *v22; // rax
  _QWORD *v23; // rdi
  __int32 *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  __int64 *v37; // rax
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned int *v41; // rax
  _BYTE *v42; // rsi
  unsigned int *v43; // rcx
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 (__fastcall *v46)(__int64); // rax
  __int64 v47; // rax
  __m128i *v48; // rcx
  const __m128i *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // r13d
  int v53; // eax
  char v54; // al
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r11
  unsigned __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r11
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r13
  int v75; // eax
  char v76; // al
  unsigned __int64 v77; // rsi
  int v78; // r11d
  __int32 v79; // ecx
  void *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  int v84; // r15d
  const __m128i *v85; // r13
  int v86; // ebx
  __m128i v87; // xmm1
  __int64 v88; // rax
  __int64 v89; // rax
  char v90; // dl
  unsigned __int64 v91; // rax
  char v92; // dl
  unsigned __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // r12
  __int64 v96; // r14
  __int64 v97; // rax
  __int64 v98; // r13
  __int64 v99; // r14
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rdi
  unsigned __int64 *v103; // rax
  __int64 *v104; // rdx
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  __m128 *v108; // r14
  __int64 v109; // rbx
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __int64 *v112; // rax
  __int64 v113; // rcx
  unsigned __int64 v114; // [rsp+8h] [rbp-470h] BYREF
  __int64 *v115; // [rsp+10h] [rbp-468h]
  unsigned int v116; // [rsp+1Ch] [rbp-45Ch]
  _BYTE *v117; // [rsp+20h] [rbp-458h]
  void **v118; // [rsp+28h] [rbp-450h]
  __int64 v119; // [rsp+30h] [rbp-448h]
  __int64 v120; // [rsp+38h] [rbp-440h]
  void **v121; // [rsp+40h] [rbp-438h]
  __int128 *v122; // [rsp+48h] [rbp-430h]
  void **v123; // [rsp+50h] [rbp-428h]
  char v124; // [rsp+5Ah] [rbp-41Eh]
  char v125; // [rsp+5Bh] [rbp-41Dh]
  int v126; // [rsp+5Ch] [rbp-41Ch]
  __m128 *v127; // [rsp+60h] [rbp-418h]
  void **v128; // [rsp+68h] [rbp-410h]
  __int32 *v129; // [rsp+70h] [rbp-408h]
  __int64 v130; // [rsp+78h] [rbp-400h]
  __int64 v131; // [rsp+80h] [rbp-3F8h]
  int v132; // [rsp+88h] [rbp-3F0h]
  int v133; // [rsp+8Ch] [rbp-3ECh]
  const __m128i *v134; // [rsp+90h] [rbp-3E8h]
  _BYTE *v135; // [rsp+98h] [rbp-3E0h]
  __int64 v136; // [rsp+A0h] [rbp-3D8h] BYREF
  __int64 v137; // [rsp+A8h] [rbp-3D0h] BYREF
  _BYTE v138[16]; // [rsp+B0h] [rbp-3C8h] BYREF
  __int64 v139[7]; // [rsp+C0h] [rbp-3B8h] BYREF
  __int64 v140; // [rsp+F8h] [rbp-380h]
  void *v141; // [rsp+110h] [rbp-368h] BYREF
  __m128 v142; // [rsp+118h] [rbp-360h]
  char v143; // [rsp+128h] [rbp-350h] BYREF
  char v144; // [rsp+138h] [rbp-340h]
  void *ptr[2]; // [rsp+140h] [rbp-338h] BYREF
  _BYTE v146[96]; // [rsp+150h] [rbp-328h] BYREF
  void *v147; // [rsp+1B0h] [rbp-2C8h] BYREF
  __int64 v148; // [rsp+1B8h] [rbp-2C0h]
  _BYTE v149[96]; // [rsp+1C0h] [rbp-2B8h] BYREF
  int v150; // [rsp+220h] [rbp-258h]
  char v151; // [rsp+224h] [rbp-254h]
  __int128 v152; // [rsp+230h] [rbp-248h] BYREF
  __int64 v153; // [rsp+240h] [rbp-238h]
  char v154; // [rsp+248h] [rbp-230h]
  void *v155; // [rsp+278h] [rbp-200h]
  __int128 v156; // [rsp+2C0h] [rbp-1B8h] BYREF
  __int64 v157; // [rsp+2D0h] [rbp-1A8h]
  __int64 v158; // [rsp+310h] [rbp-168h]
  __int64 v159; // [rsp+318h] [rbp-160h]
  __int64 v160; // [rsp+328h] [rbp-150h]
  __int16 v161; // [rsp+330h] [rbp-148h]
  char v162; // [rsp+332h] [rbp-146h]
  __int64 v163; // [rsp+338h] [rbp-140h]
  void *v164; // [rsp+350h] [rbp-128h] BYREF
  __int64 v165; // [rsp+358h] [rbp-120h]
  char v166; // [rsp+360h] [rbp-118h] BYREF
  void *v167; // [rsp+3C0h] [rbp-B8h]
  __int64 v168; // [rsp+3C8h] [rbp-B0h]
  char v169; // [rsp+3D0h] [rbp-A8h] BYREF
  __int16 v170; // [rsp+430h] [rbp-48h]
  char v171; // [rsp+432h] [rbp-46h]

  v10 = a2[6];
  v115 = a6;
  v11 = *(_DWORD *)(a3 + 8);
  v119 = a4;
  if ( v11 )
  {
    v120 = a2[7];
    sub_18C74E0(a1, 0, 0, 4);
    v116 = *(_DWORD *)(a1 + 11200);
    v124 = *(_BYTE *)(a1 + 12592);
    v125 = *(_BYTE *)(a1 + 11248);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    sub_1DBADC0(a1);
    if ( !v16 )
      *(_BYTE *)(a1 + 12592) = 1;
    v118 = ptr;
    ptr[1] = (void *)0x400000000LL;
    *(_BYTE *)(a1 + 11248) = 0;
    v17 = a9[1].m128_i32[0];
    ptr[0] = v146;
    v117 = v138;
    sub_1DC39D0((unsigned int)v138, a1, v17, (_DWORD)a2, (unsigned int)v146, 0, 3, (__int64)a9, 0);
    LODWORD(v114) = 2;
    if ( v138[8] )
      goto LABEL_5;
    si128 = 0;
    v170 = 0;
    v164 = &v166;
    v165 = 0x400000000LL;
    v168 = 0x400000000LL;
    v121 = &v164;
    v167 = &v169;
    v171 = 0;
    v156 = 0;
    v157 = 0;
    v122 = &v156;
    if ( (unsigned __int8)sub_1CCEE60(
                            a1,
                            (__int64)a2,
                            0,
                            a3,
                            (__int64)&v156,
                            1,
                            (__m128)0LL,
                            a8,
                            (__int64)&v164,
                            0,
                            nullptr)
      || *(_DWORD *)(a1 + 11200) > v116 )
    {
      LODWORD(v114) = 7;
      if ( (*(_DWORD *)(v120 + 20) & 0x1FFFFFFFu) > (unsigned int)v165 )
      {
        v89 = *(_QWORD *)(v120 + 8LL * (unsigned int)v165 + 24);
        v90 = *(_BYTE *)(v89 + 28);
        v91 = v89 & 0xFFFFFFFFFFFFFFF9LL;
        v92 = v90 & 0x7F;
        if ( v92 != 67 )
        {
          v93 = v91;
          v91 |= 4u;
          v94 = v93 | 2;
          if ( v92 == 47 )
            v91 = v94;
        }
        LODWORD(v114) = 13;
        a9[11].m128_u64[0] = v91;
      }
      goto LABEL_59;
    }
    v22 = sub_BC1D90(*(_QWORD **)(a1 + 248), (const __m128i *)v164, (unsigned int)v165, (unsigned int)v165, v20, v21);
    v23 = *(_QWORD **)(a1 + 248);
    v24 = v22;
    v129 = v22;
    v123 = (void **)v22;
    v114 = (unsigned __int64)sub_BC1D90(v23, (const __m128i *)v167, (unsigned int)v168, v25, v26, v27);
    *a9 = _mm_loadh_ps((const double *)&v114);
    a9[1].m128_i32[3] = *v24;
    v28 = a2[6];
    v29 = *(_QWORD *)(a1 + 544);
    v30 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = 0;
    v31 = *(unsigned int *)(a1 + 2632);
    if ( v28 )
      v28 += 72;
    v130 = v29;
    v32 = *(unsigned int *)(a1 + 80);
    v33 = *(_QWORD *)(a1 + 9944);
    v131 = v30;
    *(_QWORD *)(a1 + 544) = v28;
    v34 = *(_DWORD *)(a1 + 40);
    v140 = v33;
    *(_DWORD *)(a1 + 80) = v34;
    v35 = *(_DWORD *)(a1 + 3688);
    v132 = v32;
    *(_DWORD *)(a1 + 2632) = v35;
    v36 = v165;
    v133 = v31;
    *(_QWORD *)(a1 + 9944) = 0;
    if ( v36
      && (v31 = 3LL * v36, v32 = (__int64)v164 + 24 * v36 - 24, v33 = *(_DWORD *)v32 & 0x7FFFFFFF, (_DWORD)v33 == 9)
      && ((v114 = (unsigned __int64)v164 + 24 * v36 - 24,
           v99 = *(_QWORD *)(v120 + 8LL * (v36 - 1) + 24),
           v100 = sub_1D39EE0(v99),
           v32 = v114,
           v31 = *(unsigned int *)(v114 + 4),
           !v100)
       || (unsigned int)v31 < v100 - 1) )
    {
      v101 = *(_QWORD *)(v114 + 8);
      v32 = v99;
      v102 = *(_QWORD *)(a1 + 11280);
      v126 = v165 - 1;
      sub_1DBAFA0(v102, v99, v101, v31);
    }
    else
    {
      v126 = -1;
    }
    v37 = (__int64 *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v38 = *v37;
    if ( *(_BYTE *)(*v37 + 16) != 26 )
      v38 = sub_1D37970(*v37, v32, v33, v31);
    v39 = (__int64)v122;
    *(_QWORD *)&v156 = a1;
    sub_1D37A00((_QWORD *)v122 + 1);
    v162 = 0;
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
    v161 = 256;
    v158 = v39 + 96;
    v159 = 0x100000000LL;
    v40 = *(_QWORD *)(a1 + 11280);
    v163 = 0;
    v160 = v40;
    v128 = &v141;
    v141 = &v143;
    v41 = (unsigned int *)v129;
    *(_QWORD *)(a1 + 11280) = v39;
    v42 = v149;
    v144 = 0;
    v43 = v41 + 2;
    v44 = *v41;
    v123 = &v147;
    v148 = 0x400000000LL;
    v45 = *a2;
    v142 = si128;
    v46 = *(__int64 (__fastcall **)(__int64))(v45 + 32);
    v134 = (const __m128i *)v43;
    v147 = v149;
    v150 = 0;
    v151 = 0;
    if ( v46 == sub_6EE8E0 )
    {
      v47 = a2[9];
      v153 = v44;
      *((_QWORD *)&v152 + 1) = v43;
      v48 = (__m128i *)v149;
      *(_QWORD *)&v152 = v47 | 4;
      v127 = (__m128 *)&v152;
      v49 = (const __m128i *)&v152;
    }
    else
    {
      v135 = v149;
      v114 = v44;
      v110 = v46((__int64)a2);
      v44 = v114;
      *(_QWORD *)&v152 = v110 | 4;
      v111 = (unsigned int)v148 + 1LL;
      v48 = (__m128i *)((char *)v147 + 24 * (unsigned int)v148);
      v153 = v114;
      v42 = v135;
      *((_QWORD *)&v152 + 1) = v134;
      v127 = (__m128 *)&v152;
      v49 = (const __m128i *)&v152;
      if ( v111 > HIDWORD(v148) )
      {
        if ( v147 > &v152 || v48 <= (__m128i *)&v152 )
        {
          sub_2237220(v123, v135, v111, 24);
          v48 = (__m128i *)((char *)v147 + 24 * (unsigned int)v148);
        }
        else
        {
          v114 = (unsigned __int64)v147;
          sub_2237220(v123, v135, v111, 24);
          v49 = (const __m128i *)((char *)&v152 + (_QWORD)v147 - v114);
          v48 = (__m128i *)((char *)v147 + 24 * (unsigned int)v148);
        }
      }
    }
    *v48 = _mm_loadu_si128(v49);
    v50 = v49[1].m128i_i64[0];
    LODWORD(v148) = v148 + 1;
    v48[1].m128i_i64[0] = v50;
    v51 = *(_QWORD *)(v38 + 16);
    if ( (v51 & 0x100000000LL) == 0
      || ((v51 & 0x20000000) == 0 ? (v52 = 0) : (v52 = sub_1D384A0(v38)),
          v114 = *(_QWORD *)(v10 + 120),
          v53 = sub_B76070(v10, (__int64)v42, v114, (__int64)v48),
          v54 = sub_1DE7190(a1, *(_DWORD *)(v10 + 24), v114, v53, v52, (_DWORD)v123, a5, 0, (__int64)v128),
          LODWORD(v114) = 7,
          !v54) )
    {
      v55 = 0;
      v56 = 0;
      v57 = (*(_BYTE *)(v10 + 28) & 0x7Fu) - 35;
      if ( (unsigned int)v57 <= 3 )
      {
        v58 = sub_B72690(v10 + 72);
        if ( v58 )
          v58 -= 64LL;
        v114 = v58;
        v60 = sub_1703690(v10, v57, v58, v59);
        v56 = v114;
        v55 = v60;
      }
      sub_19A2CD0((__int64)v139, a1, v56, v55, (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0, v44);
      v114 = *(_QWORD *)(v10 + 40);
      v61 = sub_B72FF0(v10);
      v66 = sub_1DD1D30(a1, *(_QWORD *)(v38 + 24), v123, v61, v114, 0);
      v67 = v66 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v66 & 0xFFFFFFFFFFFFFFF0LL) != 0 && *(_DWORD *)(a1 + 11200) <= v116 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0 || (*(_BYTE *)(v10 + 29) & 1) == 0 )
          goto LABEL_35;
        v135 = (_BYTE *)v66;
        v114 = v66 & 0xFFFFFFFFFFFFFFF0LL;
        v103 = sub_B8C3D0(v10, v67, v62, v63, v64, v65);
        v67 = v114;
        v66 = (__int64)v135;
        v104 = (__int64 *)*v103;
        v105 = *v103 + 8LL * *((unsigned int *)v103 + 2);
        if ( *v103 >= v105 )
        {
          if ( v104 == (__int64 *)v105 )
            goto LABEL_35;
          if ( *(_WORD *)(*(_QWORD *)v105 + 36LL) != 163 )
          {
            v112 = (__int64 *)(v105 + 8);
            while ( v104 != v112 )
            {
              v113 = *v112++;
              if ( *(_WORD *)(v113 + 36) == 163 )
                goto LABEL_86;
            }
            goto LABEL_35;
          }
        }
        else
        {
          v106 = *v103;
          while ( *(_WORD *)(*(_QWORD *)v106 + 36LL) != 163 )
          {
            v106 += 8LL;
            if ( v105 == v106 )
              goto LABEL_35;
          }
          if ( v105 == v106 )
            goto LABEL_35;
        }
LABEL_86:
        v107 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v114 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v107 + 16) == 13 && ((*(_WORD *)(v107 + 18) >> 3) & 0x1FF) == 0x1B3 )
        {
LABEL_35:
          v114 = v66;
          sub_19A2DA0(v139);
          v70 = *(_QWORD *)(v38 + 16);
          v71 = v114;
          if ( (v70 & 0x100000000LL) == 0 )
          {
            if ( (v70 & 0x20000000) != 0 )
            {
              v72 = sub_1D384A0(v38);
              v71 = v114;
              v73 = v72;
            }
            else
            {
              v73 = 0;
            }
            v135 = (_BYTE *)v71;
            v74 = *(_QWORD *)(v10 + 120);
            v114 = v73;
            v75 = sub_B76070(v10, v67, v68, v69);
            v76 = sub_1DE7190(a1, *(_DWORD *)(v10 + 24), v74, v75, v114, (_DWORD)v123, a5, 0, (__int64)v128);
            v71 = (__int64)v135;
            if ( v76 )
              goto LABEL_96;
          }
          if ( !v115 )
            goto LABEL_47;
          v114 = v71;
          sub_A5E110(v127, v38);
          v77 = *(unsigned int *)(a5 + 8);
          v78 = v114;
          if ( v144 )
          {
            v79 = v142.m128_i32[0];
            if ( v77 != v142.m128_u64[0] )
            {
              if ( v77 < v142.m128_u64[0] )
              {
                v142.m128_u64[0] = *(unsigned int *)(a5 + 8);
                v79 = v77;
              }
              else
              {
                sub_1D37460(v128, v77);
                v79 = *(_DWORD *)(a5 + 8);
                v78 = v114;
              }
            }
            v80 = v141;
          }
          else
          {
            v79 = *(_DWORD *)(a5 + 8);
            v80 = nullptr;
          }
          v81 = *(_QWORD *)a5;
          v155 = v80;
          v82 = sub_1E6A200(a1, v78, v81, v79, *(_DWORD *)(v10 + 24), *(_QWORD *)(v10 + 40), (__int64)v127);
          *v115 = v82;
          if ( (v82 & 0xFFFFFFFFFFFFFFF0LL) == 0 || *(_DWORD *)(a1 + 11200) > v116 )
          {
LABEL_96:
            LODWORD(v114) = 7;
          }
          else
          {
LABEL_47:
            v83 = *(_DWORD *)(v120 + 20) & 0x1FFFFFFF;
            if ( v83 > *(unsigned int *)(v119 + 12) )
              sub_2237220(v119, v119 + 16, v83, 32);
            v84 = 0;
            v85 = v134;
            v86 = *v129;
            if ( *v129 )
            {
              do
              {
                while ( v126 != v84 )
                {
                  v87 = _mm_loadu_si128(v85);
                  ++v84;
                  v85 = (const __m128i *)((char *)v85 + 24);
                  v152 = (__int128)v87;
                  v88 = v85[-1].m128i_i64[1];
                  v154 = 0;
                  v153 = v88;
                  sub_1D3C370(v119, (const __m128i *)v127);
                  if ( v86 == v84 )
                    goto LABEL_52;
                }
                v85 = (const __m128i *)((char *)v85 + 24);
                v154 = 0;
                v152 = 0xFFFFFFFE00000000LL & (unsigned __int64)v152;
                sub_1D3C370(v119, (const __m128i *)v127);
                v84 = v126 + 1;
              }
              while ( v86 != v126 + 1 );
            }
LABEL_52:
            LODWORD(v114) = 0;
          }
          goto LABEL_53;
        }
        v108 = v127;
        sub_168B9F0((__int64)v127, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0xFF5u, 0);
        v136 = *(_QWORD *)(v10 + 48);
        v109 = sub_162B6D0((__int64)v108, &v136);
        v137 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        sub_1587DB0(v109, &v137);
        sub_15F7200(v108);
      }
      sub_19A2DA0(v139);
      LODWORD(v114) = 7;
    }
LABEL_53:
    if ( v147 != v123 + 2 )
      free(v147);
    if ( v141 != v128 + 3 )
      free(v141);
    sub_1CB3BA0((__int64)v122);
    if ( v130 )
    {
      *(_QWORD *)(a1 + 544) = v130;
      *(_QWORD *)(a1 + 512) = v131;
      *(_QWORD *)(a1 + 9944) = v140;
      *(_DWORD *)(a1 + 80) = v132;
      *(_DWORD *)(a1 + 2632) = v133;
    }
LABEL_59:
    if ( v167 != v121 + 16 )
      free(v167);
    if ( v164 != v121 + 2 )
      free(v164);
LABEL_5:
    sub_1DBADA0(v117);
    if ( ptr[0] != v118 + 2 )
      free(ptr[0]);
    *(_DWORD *)(a1 + 11200) = v116;
    *(_BYTE *)(a1 + 12592) = v124;
    *(_BYTE *)(a1 + 11248) = v125;
    v18 = *(_QWORD *)(a1 + 264);
    if ( *(_DWORD *)(v18 + 204) == 5 )
      *(_BYTE *)(v18 + 194) = 1;
    if ( v15 )
      v15 = 3;
    *(_DWORD *)(v18 + 204) = v15;
    sub_190D5E0(a1, si128);
    return (unsigned int)v114;
  }
  v95 = *(_QWORD *)(v10 + 120);
  v96 = v95 + 8LL * (unsigned int)sub_B76070(v10, (__int64)a2, a3, a4);
  if ( v95 != v96 )
  {
    v97 = *(unsigned int *)(a5 + 8);
    do
    {
      v98 = *(_QWORD *)(*(_QWORD *)v95 + 48LL);
      if ( v97 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        sub_2237220(a5, a5 + 16, v97 + 1, 8);
        *(_QWORD *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8)) = v98;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)a5 + 8 * v97) = v98;
      }
      v95 += 8;
      v97 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
      *(_DWORD *)(a5 + 8) = v97;
    }
    while ( v96 != v95 );
  }
  if ( v115 )
    *v115 = *(_QWORD *)(v10 + 48);
  LODWORD(v114) = 0;
  return (unsigned int)v114;
}
