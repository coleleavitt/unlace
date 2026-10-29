void __fastcall sub_172AF50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  _QWORD *v8; // rdi
  int v9; // eax
  void *v10; // rdx
  __int64 v11; // rax
  __int64 (*v12)(void); // rdx
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned int v19; // r13d
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 *v25; // rdi
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  char v31; // r9
  __int64 *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  bool v36; // r13
  int v37; // edx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  int v43; // eax
  __int64 v44; // rdx
  _QWORD *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  __int64 v52; // r14
  __int64 v53; // r9
  __int64 *v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // r13
  __m128i v64; // xmm1
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rax
  _WORD *v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 *v73; // rbx
  char *v74; // r15
  unsigned __int64 v75; // rax
  char v76; // si
  char v77; // dl
  bool v78; // zf
  char v79; // al
  unsigned __int8 v80; // cl
  unsigned __int8 v81; // dl
  char v82; // al
  int v83; // ecx
  char v84; // al
  char v85; // dl
  unsigned __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rcx
  __int64 v90; // r14
  __int64 v91; // rdx
  size_t v92; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  size_t v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  char *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  char *v105; // rax
  __int64 v106; // [rsp-10h] [rbp-438h]
  __int64 v107; // [rsp-8h] [rbp-430h]
  __int64 *v109; // [rsp+18h] [rbp-410h]
  __int64 v110; // [rsp+18h] [rbp-410h]
  __int64 v111; // [rsp+18h] [rbp-410h]
  unsigned __int64 *v112; // [rsp+30h] [rbp-3F8h]
  unsigned __int64 v113; // [rsp+58h] [rbp-3D0h] BYREF
  __m128i v114; // [rsp+60h] [rbp-3C8h] BYREF
  __m128i v115; // [rsp+70h] [rbp-3B8h] BYREF
  __m128i v116; // [rsp+80h] [rbp-3A8h] BYREF
  _BYTE v117[16]; // [rsp+90h] [rbp-398h] BYREF
  _QWORD v118[5]; // [rsp+A0h] [rbp-388h] BYREF
  __int64 v119; // [rsp+C8h] [rbp-360h] BYREF
  __m128i v120[2]; // [rsp+E0h] [rbp-348h] BYREF
  int v121; // [rsp+100h] [rbp-328h]
  __int128 v122; // [rsp+108h] [rbp-320h] BYREF
  __int64 v123; // [rsp+118h] [rbp-310h]
  char v124; // [rsp+120h] [rbp-308h]
  __int64 v125; // [rsp+128h] [rbp-300h]
  __int64 v126; // [rsp+130h] [rbp-2F8h]
  __int64 v127; // [rsp+138h] [rbp-2F0h]
  void *ptr[2]; // [rsp+140h] [rbp-2E8h] BYREF
  __int64 v129; // [rsp+150h] [rbp-2D8h]
  __int64 v130; // [rsp+158h] [rbp-2D0h] BYREF
  __int64 v131; // [rsp+160h] [rbp-2C8h]
  __int64 v132; // [rsp+168h] [rbp-2C0h]
  __int64 *v133; // [rsp+170h] [rbp-2B8h]
  __int64 v134; // [rsp+178h] [rbp-2B0h]
  __int64 v135; // [rsp+180h] [rbp-2A8h] BYREF
  __int64 v136; // [rsp+198h] [rbp-290h]
  char *v137; // [rsp+1A0h] [rbp-288h]
  __int64 v138; // [rsp+1A8h] [rbp-280h]
  int v139; // [rsp+1B0h] [rbp-278h]
  char v140; // [rsp+1B4h] [rbp-274h]
  char v141; // [rsp+1B8h] [rbp-270h] BYREF
  __int64 *v142; // [rsp+1C0h] [rbp-268h]
  __int64 v143; // [rsp+1C8h] [rbp-260h]
  __int64 v144; // [rsp+1D0h] [rbp-258h] BYREF
  __int64 v145; // [rsp+200h] [rbp-228h] BYREF
  __int64 v146; // [rsp+208h] [rbp-220h]
  _QWORD *v147; // [rsp+218h] [rbp-210h] BYREF
  unsigned int v148; // [rsp+220h] [rbp-208h]
  unsigned int v149; // [rsp+224h] [rbp-204h]
  char v150; // [rsp+22Ch] [rbp-1FCh]
  __int64 v151; // [rsp+2B0h] [rbp-178h]
  __m128i v152; // [rsp+2B8h] [rbp-170h] BYREF
  void *v153; // [rsp+2C8h] [rbp-160h]
  __int64 v154; // [rsp+2D0h] [rbp-158h]
  unsigned __int64 v155; // [rsp+2E0h] [rbp-148h]
  __int64 v156; // [rsp+2E8h] [rbp-140h] BYREF
  __int64 *v157; // [rsp+2F0h] [rbp-138h]
  int v158[62]; // [rsp+330h] [rbp-F8h] BYREF

  v6 = a1;
  v8 = (_QWORD *)a1[1];
  v9 = -(*(_BYTE *)(a3 + 10) == 0);
  v10 = *(void **)a3;
  BYTE4(ptr[0]) = 0;
  v129 = 0;
  ptr[1] = v10;
  LODWORD(ptr[0]) = (v9 & 0xFFFFFFEB) + 29;
  v130 = 0;
  v131 = 0;
  v137 = &v141;
  v11 = *v8;
  v12 = *(__int64 (**)(void))(*v8 + 48LL);
  LOBYTE(v136) = 0;
  v138 = 8;
  v139 = 0;
  v140 = 1;
  if ( (char *)v12 == (char *)sub_15A1860 )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(v11 + 40);
    v14 = (__int64)(v8 + 3);
    if ( v13 == sub_15A1850 )
    {
LABEL_3:
      v15 = v8[6];
      goto LABEL_4;
    }
  }
  else
  {
    v69 = v12();
    v8 = (_QWORD *)v6[1];
    v14 = v69;
    v13 = *(__int64 (__fastcall **)(__int64))(*v8 + 40LL);
    if ( v13 == sub_15A1850 )
      goto LABEL_3;
  }
  v111 = v14;
  v70 = ((__int64 (*)(void))v13)();
  v14 = v111;
  v15 = v70;
LABEL_4:
  sub_16FF270((__int64)&v145, *v6, v15, v14, (unsigned int *)ptr, a6, 0);
  sub_17038E0((__int64)ptr);
  v17 = v106;
  v18 = v107;
  v19 = *(_BYTE *)(a3 + 10) == 0 ? 7 : 13;
  if ( *(_BYTE *)(a3 + 9) )
  {
    v154 = 0;
    v153 = sub_17137E0;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 8) )
    {
      v154 = 0;
      v153 = sub_1714000;
      if ( (*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_7;
LABEL_43:
      v41 = sub_C1BEF0(a3, v18, v16, v17);
      v155 = *(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
           | ((unsigned __int8)*(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v41) & 7;
      goto LABEL_7;
    }
    v18 = sub_168B6E0((__int64)v6);
    if ( sub_16FE8E0(v19, v18) )
    {
      v154 = 0;
      v153 = sub_16FFBF0;
    }
    else
    {
      v154 = 0;
      v153 = sub_1713700;
    }
  }
  if ( (*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    goto LABEL_43;
LABEL_7:
  v20 = *(_DWORD *)(a3 + 24);
  if ( !v20 )
    goto LABEL_25;
  v109 = v6;
  v21 = 8LL * (unsigned int)(v20 - 1) + 8;
  v22 = 0;
  do
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a3 + 16) + v22) + 32LL))(
            *(_QWORD *)(*(_QWORD *)(a3 + 16) + v22),
            v18);
    if ( !v150 )
      goto LABEL_39;
    v24 = v147;
    v18 = 8LL * v149;
    v25 = (_QWORD *)((char *)v147 + v18);
    if ( v147 != (_QWORD *)((char *)v147 + v18) )
    {
      v26 = v147;
      if ( v23 == *v147 )
        goto LABEL_17;
      do
      {
        if ( v25 == ++v26 )
          break;
      }
      while ( v23 != *v26 );
    }
    if ( v149 < v148 )
    {
      ++v149;
      *v25 = v23;
      v24 = v147;
      v26 = (_QWORD *)((char *)v147 + v18);
    }
    else
    {
LABEL_39:
      v18 = v23;
      v40 = sub_2236760(&v147, v23);
      v24 = v147;
      v26 = (_QWORD *)v40;
      if ( !v150 )
      {
        v27 = &v147[v148];
        goto LABEL_18;
      }
    }
LABEL_17:
    v27 = &v24[v149];
LABEL_18:
    if ( v27 != v26 && *v26 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v28 = v26 + 1;
      do
      {
        v29 = v28;
        if ( v28 == v27 )
          break;
        ++v28;
      }
      while ( *v29 >= 0xFFFFFFFFFFFFFFFELL );
    }
    v22 += 8;
  }
  while ( v21 != v22 );
  v6 = v109;
LABEL_25:
  v30 = *v6;
  *(_OWORD *)ptr = 0;
  v129 = 0;
  sub_16FF1B0(v118, (__int64)&v145, *(_QWORD *)(v30 + 544), 0, (__int64 *)ptr);
  sub_1705410((__int64)ptr);
  v31 = *(_DWORD *)(v6[1] + 8);
  sub_1A65F80(*v6, a2, 0, v118, (v31 & 4) != 0, (v31 & 0x20) != 0);
  sub_16FF160((__int64)&v156, (std::__detail::_List_node_base *)&v156);
  sub_17253B0(v19, a2, *v6, &v145);
  v32 = v157;
  sub_16FF8C0((__int64)&v156, (__int64)v157);
  if ( (*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v36 = 1;
    v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v43 = *(unsigned __int8 *)(v42 + 16);
    if ( (_BYTE)v43 != 42 )
    {
      v44 = (unsigned int)(v43 - 33);
      v36 = (_BYTE)v43 == 11 || (unsigned __int8)(v43 - 33) <= 1u;
      if ( (_BYTE)v43 == 47 )
      {
        LOBYTE(v44) = 0;
        v45 = sub_F60F10(v42, (__int64)v32, v44, v33, v34, v35);
        v50 = sub_B7E870((__int64)v45, (__int64)v32, v46, v47, v48, v49);
        BYTE4(v129) = 1;
        v51 = v50;
        v136 = 0;
        ptr[1] = byte_8;
        if ( !v50 )
          v51 = v45;
        LODWORD(v129) = 0;
        ptr[0] = &v130;
        v110 = (__int64)v51;
        v52 = *(_QWORD *)(*v6 + 544);
        v32 = (__int64 *)sub_168B6C0((__int64)v6);
        sub_1716A00(&v145, v32, v110, v52, (__int64)ptr, v53);
        if ( !BYTE4(v129) )
          free(ptr[0]);
      }
    }
  }
  else
  {
    v36 = 0;
  }
  if ( *(_QWORD *)(a2 + 24) && !*(_BYTE *)(a3 + 9) && !*(_BYTE *)(a3 + 8) )
  {
    v71 = (_WORD *)sub_168B6E0((__int64)v6);
    v32 = &v145;
    sub_17105A0(v71, &v145);
  }
  v37 = *(_DWORD *)(v6[1] + 8);
  if ( (v37 & 1) != 0 )
  {
    v32 = &v145;
    sub_1722040(*(_QWORD **)(*v6 + 240), &v145, (v37 & 0x20) != 0, 0, v36);
  }
  if ( (*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (*(_BYTE *)(sub_168B6E0((__int64)v6) + 1) & 0x10) != 0 )
  {
    v54 = (__int64 *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL);
    v55 = sub_F6A860(*v54);
    if ( v55 )
    {
      if ( *(_DWORD *)(v55 + 20) == 1 )
      {
        v56 = *(_DWORD *)(v55 + 48) & 0x7FFFFFFF;
        if ( (_DWORD)v56 == 1 )
        {
          v59 = *(_QWORD *)(v55 + 56) & 0xFFFFFFFFFFFFFFF0LL;
          v60 = *(_QWORD *)v59;
          if ( *(_BYTE *)(*(_QWORD *)v59 + 16LL) == 26 )
            goto LABEL_55;
          goto LABEL_67;
        }
      }
    }
    else
    {
      v60 = *v54;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
        v60 = *(_QWORD *)(sub_F68450(v60, (__int64)v32, v56, v57, v58) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v60 + 16) == 26 )
        goto LABEL_55;
LABEL_67:
      v60 = sub_16FF100(v60, (__int64)v32, v56, v57);
      if ( v60 )
      {
LABEL_55:
        v61 = sub_168B6E0((__int64)v6);
        v62 = *(_QWORD *)(*(_QWORD *)(v151 + 656) + 8LL);
        if ( v62 && (*(_BYTE *)(v62 + 8) & 2) != 0 )
        {
          v63 = 8LL * *(unsigned __int16 *)(v60 + 22);
          v64 = _mm_loadu_si128(&v152);
          v129 = 0;
          *(__m128i *)ptr = v64;
          v133 = &v135;
          v134 = 0x400000000LL;
          v142 = &v144;
          v143 = 0x200000000LL;
          v130 = 0;
          v131 = 0;
          v132 = 0;
          sub_15A3210((__int64)ptr, 9, (char *)&byte_22F0C30);
          sub_15A3090((__int64)ptr, (__int64)"=");
          sub_15A3210((__int64)ptr, 10, (char *)&byte_22F0C30);
          if ( v63 )
          {
            sub_15A3210((__int64)ptr, 7, (char *)&byte_22F0C30);
            v112 = (unsigned __int64 *)(v60 + 48 + v63);
            if ( (unsigned __int64 *)(v60 + 48) != v112 )
            {
              v72 = *(_QWORD *)(v60 + 48);
              v73 = (unsigned __int64 *)(v60 + 56);
              v113 = v72;
              v74 = (char *)v61;
              while ( 1 )
              {
                v116.m128i_i64[0] = (__int64)v117;
                sub_1700210(&v116, "!#!NAME_GOES_HERE!#!", (__int64)"");
                v76 = *v74;
                v77 = ((unsigned __int8)v74[1] >> 2) & 2;
                v120[0].m128i_i8[1] = v77 | v120[0].m128i_i8[1] & 0xFD;
                v78 = (*(_WORD *)v74 & 0x1008) == 0;
                v120[0].m128i_i8[2] = ((unsigned __int8)v74[3] >> 2 << 7) | v120[0].m128i_i8[2] & 0x7F;
                v79 = ((unsigned __int8)v74[1] >> 1) & 8
                    | (4 * (*v74 & 1))
                    | v77 & 0xF3
                    | !v78
                    | v120[0].m128i_i8[3] & 0xF0;
                v80 = v74[1];
                v81 = v80 >> 4;
                v82 = (32 * (((v80 >> 3) ^ 1) & 1)) | (8 * v76) & 0x10 | v79 & 0xCF;
                v83 = *(_DWORD *)v74 & 0x10000080;
                v120[0].m128i_i8[3] = (((v81 ^ 1) & 1) << 6) | v82 & 0xBF;
                v84 = ((unsigned __int8)v74[3] >> 2) & 2 | v120[0].m128i_i8[4] & 0xF9;
                v85 = v74[89];
                v120[0].m128i_i64[1] = 0;
                v120[0].m128i_i8[4] = (4 * (v83 == 128)) | v84;
                v120[0].m128i_i8[5] = (v85 << 7) | v120[0].m128i_i8[5] & 0x7F;
                v120[0].m128i_i64[0] = v120[0].m128i_i64[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
                sub_F78380(&v113, (__int64)&v116, v120);
                v114 = 0u;
                v120[0] = v116;
                v115 = 0u;
                v86 = sub_2246AB0(v120, "!#!NAME_GOES_HERE!#!", 20, 0);
                if ( v86 == -1 )
                {
                  v90 = v120[0].m128i_i64[1];
                  v89 = v120[0].m128i_i64[0];
                  v88 = 0;
                  v91 = 0;
                }
                else
                {
                  v87 = v86 + 20;
                  if ( v86 + 20 > v120[0].m128i_i64[1] )
                  {
                    v87 = v120[0].m128i_i64[1];
                    v88 = 0;
                  }
                  else
                  {
                    v88 = v120[0].m128i_i64[1] - v87;
                  }
                  v90 = v120[0].m128i_i64[1];
                  v89 = v120[0].m128i_i64[0];
                  v91 = v120[0].m128i_i64[0] + v87;
                  if ( v86 <= v120[0].m128i_i64[1] )
                    v90 = v86;
                }
                v114.m128i_i64[0] = v89;
                v115.m128i_i64[0] = v91;
                v115.m128i_i64[1] = v88;
                v114.m128i_i64[1] = v90;
                v92 = j__strlen(asc_22E1692);
                v93 = sub_2247130(&v114, asc_22E1692, v92, -1) + 1;
                if ( v93 > v114.m128i_i64[1] )
                  v93 = v114.m128i_u64[1];
                v94 = v114.m128i_i64[1] - v90 + v93;
                if ( v94 > v114.m128i_i64[1] )
                  v94 = v114.m128i_u64[1];
                v114.m128i_i64[1] = v94;
                v95 = j__strlen(asc_22E1692);
                v96 = sub_2246FB0(&v115, asc_22E1692, v95, 0);
                v99 = v115.m128i_i64[1];
                v100 = 0;
                if ( v96 < v115.m128i_i64[1] )
                {
                  v99 = v96;
                  v100 = v115.m128i_i64[1] - v96;
                }
                v115.m128i_i64[1] = v100;
                LOWORD(v121) = 261;
                v115.m128i_i64[0] += v99;
                v120[0] = v114;
                v101 = sub_15A4EB0((char **)ptr[0], (const void ***)v120, v99, v100, v97, v98);
                sub_15A2FD0((__int64)ptr, (__int64)v101);
                sub_15A3210((__int64)ptr, 19, (char *)&byte_22F0C30);
                sub_15A3090((__int64)ptr, (__int64)"parameter");
                LOWORD(v121) = 261;
                v120[0] = v115;
                v105 = sub_15A4EB0((char **)ptr[0], (const void ***)v120, 261, v102, v103, v104);
                sub_15A2FD0((__int64)ptr, (__int64)v105);
                if ( (_BYTE *)v116.m128i_i64[0] == v117 )
                {
                  if ( v112 == v73 )
                    break;
                }
                else
                {
                  operator delete((void *)v116.m128i_i64[0]);
                  if ( v112 == v73 )
                    break;
                }
                v75 = *v73++;
                v113 = v75;
                sub_15A3210((__int64)ptr, 15, (char *)&byte_22F0C30);
              }
            }
            sub_15A3210((__int64)ptr, 8, (char *)&byte_22F0C30);
          }
          sub_15A3210((__int64)ptr, 19, (char *)&byte_22F0C30);
          sub_15A3210((__int64)ptr, 11, (char *)&byte_22F0C30);
          sub_15A3210((__int64)ptr, 19, (char *)&byte_22F0C30);
          sub_15A3090((__int64)ptr, (__int64)"body");
          sub_15A3210((__int64)ptr, 19, (char *)&byte_22F0C30);
          sub_15A3210((__int64)ptr, 12, (char *)&byte_22F0C30);
          v120[0].m128i_i64[1] = sub_15A5CA0((__int64)ptr, 12, v65, v66, v67, v68);
          v120[1] = _mm_load_si128((const __m128i *)&xmmword_23AA960);
          v122 = 0;
          v120[0].m128i_i64[0] = 0;
          v124 = v124 & 0x80 | 0x40;
          v121 = 0;
          v123 = 0;
          v125 = 0;
          v126 = 0;
          v127 = 0;
          sub_1706C30((__int64)&v145, (__int64)v120);
          sub_1705410((__int64)&v122);
          sub_1704B40(ptr);
        }
      }
    }
  }
  v38 = v6[1];
  v39 = 0;
  if ( v145 != v146 )
    v39 = v145;
  if ( v38 )
    sub_1700D50(*v6, v38, v158, v39, -1431655765 * ((v146 - v145) >> 5));
  v118[0] = &off_2C4EFD0;
  sub_1705410((__int64)&v119);
  nullsub_1203(v118);
  sub_1700A70((__int64)&v145);
}
