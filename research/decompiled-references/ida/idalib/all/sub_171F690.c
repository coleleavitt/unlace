void __fastcall sub_171F690(__int64 *a1, __int64 a2, char a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ebp
  unsigned int v12; // r12d
  __int64 v13; // rbx
  int v14; // r15d
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rdi
  int v19; // r15d
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64); // rdx
  __int64 (*v24)(void); // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // r8
  _QWORD *v31; // rsi
  _QWORD *v32; // rdx
  _QWORD *v33; // rbp
  __int64 v34; // rax
  __int64 *v35; // rbx
  unsigned __int64 v36; // rax
  unsigned __int32 v37; // eax
  __int64 v38; // r15
  __int64 v39; // rbp
  __int64 v40; // r13
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __m128i v50; // xmm1
  __int64 v51; // rax
  unsigned int *v52; // r14
  unsigned int *v53; // rax
  __int64 v54; // rdx
  char *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int32 v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  char *v65; // rbp
  char *v66; // r8
  signed __int64 v67; // r13
  __int64 v68; // rax
  char *v69; // rax
  char *v70; // r15
  __m128i v71; // xmm0
  _BYTE *v72; // rsi
  signed __int64 v73; // r13
  char *v74; // r14
  _BYTE *v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // r15
  _QWORD *v78; // rbp
  _QWORD *v79; // rdi
  _QWORD *v80; // r15
  _QWORD *v81; // rbp
  _QWORD *v82; // rdi
  unsigned int *v83; // rbx
  unsigned __int64 v84; // rax
  __int64 v85; // rbx
  unsigned __int64 v86; // rbp
  _QWORD *v87; // rdx
  _QWORD *v88; // r14
  _QWORD *v89; // r13
  unsigned __int64 v90; // rbx
  size_t v91; // rax
  unsigned int *v92; // rcx
  size_t v93; // rdx
  _QWORD *v94; // r15
  __m128i v95; // xmm3
  __m128 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  char *v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rax
  int v108; // edx
  __int64 v109; // rsi
  __m128i src; // [rsp+8h] [rbp-3C0h] BYREF
  __int64 v111; // [rsp+18h] [rbp-3B0h]
  int *v112; // [rsp+20h] [rbp-3A8h]
  __int64 v113; // [rsp+28h] [rbp-3A0h]
  __int64 v114; // [rsp+30h] [rbp-398h]
  __int64 *v115; // [rsp+38h] [rbp-390h]
  __m128 *v116; // [rsp+40h] [rbp-388h]
  unsigned __int64 v117; // [rsp+48h] [rbp-380h]
  _QWORD *v118; // [rsp+50h] [rbp-378h]
  unsigned __int64 v119; // [rsp+58h] [rbp-370h]
  __int64 v120; // [rsp+60h] [rbp-368h]
  __int64 v121; // [rsp+68h] [rbp-360h]
  void **v122; // [rsp+70h] [rbp-358h]
  char v123; // [rsp+7Ah] [rbp-34Eh]
  char v124; // [rsp+7Bh] [rbp-34Dh]
  int v125; // [rsp+7Ch] [rbp-34Ch]
  __m128 v126; // [rsp+80h] [rbp-348h] BYREF
  __m128i si128; // [rsp+90h] [rbp-338h]
  int v128; // [rsp+A0h] [rbp-328h]
  void *v129[2]; // [rsp+A8h] [rbp-320h] BYREF
  __int64 v130; // [rsp+B8h] [rbp-310h]
  char v131; // [rsp+C0h] [rbp-308h]
  __int64 v132; // [rsp+C8h] [rbp-300h]
  __int64 v133; // [rsp+D0h] [rbp-2F8h]
  __int64 v134; // [rsp+D8h] [rbp-2F0h]
  __m128 v135; // [rsp+E0h] [rbp-2E8h] BYREF
  unsigned __int64 v136; // [rsp+F0h] [rbp-2D8h]
  __int64 v137; // [rsp+F8h] [rbp-2D0h]
  __int64 v138; // [rsp+100h] [rbp-2C8h]
  void *v139[2]; // [rsp+108h] [rbp-2C0h]
  __int64 v140; // [rsp+118h] [rbp-2B0h]
  char v141; // [rsp+120h] [rbp-2A8h] BYREF
  __int64 v142; // [rsp+128h] [rbp-2A0h]
  __int64 v143; // [rsp+130h] [rbp-298h]
  __int64 v144; // [rsp+138h] [rbp-290h]
  __int64 *v145; // [rsp+140h] [rbp-288h]
  __int64 v146; // [rsp+148h] [rbp-280h]
  int v147; // [rsp+150h] [rbp-278h]
  char v148; // [rsp+154h] [rbp-274h]
  __int64 v149; // [rsp+158h] [rbp-270h] BYREF
  void *ptr; // [rsp+160h] [rbp-268h]
  __int64 v151; // [rsp+168h] [rbp-260h]
  _BYTE v152[48]; // [rsp+170h] [rbp-258h] BYREF
  __int64 v153; // [rsp+1A0h] [rbp-228h] BYREF
  __int64 v154; // [rsp+1A8h] [rbp-220h]
  __m128i v155[2]; // [rsp+258h] [rbp-170h] BYREF
  unsigned __int64 v156; // [rsp+280h] [rbp-148h]
  __int64 v157; // [rsp+290h] [rbp-138h]

  v115 = a1;
  v125 = a4;
  v114 = a7;
  v124 = a3;
  v121 = a8;
  v9 = *a1;
  v123 = a4;
  v10 = *(_QWORD *)(v9 + 552);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
    if ( v11 )
    {
      v12 = 0;
      src.m128i_i64[0] = a5;
      while ( 1 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*v115 + 552) + 24LL))(
                *(_QWORD *)(*v115 + 552),
                v12);
        if ( !v17 )
          goto LABEL_5;
        v18 = *(_QWORD *)(*v115 + 736);
        v19 = *(_DWORD *)(v18 + 80);
        if ( v19 )
        {
          v13 = *(_QWORD *)(v18 + 64);
          v14 = v19 - 1;
          v15 = v14 & sub_FDE780(v17);
          v16 = *(_QWORD *)(v13 + 40LL * v15);
          if ( v17 != v16 )
          {
            if ( v16 == -1 )
            {
LABEL_117:
              sub_18953D0(*(_QWORD *)(*v115 + 736), v17);
              goto LABEL_9;
            }
            v108 = 1;
            while ( 1 )
            {
              v15 = v14 & (v108 + v15);
              v109 = *(_QWORD *)(v13 + 40LL * v15);
              if ( v17 == v109 )
                break;
              ++v108;
              if ( v109 == -1 )
                goto LABEL_117;
            }
          }
LABEL_5:
          if ( v11 == ++v12 )
            goto LABEL_10;
        }
        else
        {
          sub_18953D0(v18, v17);
LABEL_9:
          if ( v11 == ++v12 )
          {
LABEL_10:
            a5 = src.m128i_i64[0];
            break;
          }
        }
      }
    }
  }
  v135.m128_i32[0] = 0;
  v135.m128_i8[4] = 0;
  v145 = &v149;
  v135.m128_u64[1] = 0;
  v20 = (__int64 *)v115[1];
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v21 = *v20;
  v22 = (__int64)(v20 + 3);
  LOBYTE(v144) = 0;
  v23 = *(__int64 (__fastcall **)(__int64))(v21 + 48);
  v148 = 1;
  v146 = 8;
  v147 = 0;
  if ( v23 != sub_15A1860 )
  {
    v22 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(__int64), __int64))v23)(
            v20,
            sub_15A1860,
            v23,
            v22);
    v20 = (__int64 *)v115[1];
    v21 = *v20;
  }
  v24 = *(__int64 (**)(void))(v21 + 40);
  if ( (char *)v24 == (char *)sub_15A1850 )
  {
    v25 = v20[6];
  }
  else
  {
    src.m128i_i64[0] = v22;
    v107 = v24();
    v22 = src.m128i_i64[0];
    v25 = v107;
  }
  v112 = (int *)&v153;
  sub_16FF270((__int64)&v153, *v115, v25, v22, (unsigned int *)&v135, a6, 0);
  sub_17038E0((__int64)&v135);
  if ( a5 )
  {
    v135.m128_u64[0] = sub_1E5F010(a5, 0);
    v28 = sub_C1BEF0((__int64)&v135, 0, v26, v27);
    v156 = *(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v28) & 7;
  }
  sub_16FF160((__int64)(v112 + 58), (std::__detail::_List_node_base *)(v112 + 58));
  v29 = *(_QWORD *)(*v115 + 736);
  if ( *(_DWORD *)(v29 + 72) )
  {
    v31 = *(_QWORD **)(v29 + 64);
    v30 = 0;
    v32 = &v31[5 * *(unsigned int *)(v29 + 80)];
  }
  else
  {
    v30 = 1;
    v31 = (_QWORD *)(*(_QWORD *)(v29 + 64) + 40LL * *(unsigned int *)(v29 + 80));
    v32 = v31;
  }
  sub_171EC50(&v135, v31, v32, v29 + 64, v30);
  v117 = v135.m128_u64[1];
  v33 = (_QWORD *)v135.m128_u64[0];
  v34 = *(_QWORD *)(*v115 + 736);
  sub_171EC50(
    &v135,
    (_QWORD *)(*(_QWORD *)(v34 + 64) + 40LL * *(unsigned int *)(v34 + 80)),
    (_QWORD *)(*(_QWORD *)(v34 + 64) + 40LL * *(unsigned int *)(v34 + 80)),
    v34 + 64,
    1);
  src.m128i_i32[3] = v121;
  v111 = (unsigned int)(v121 - 1);
  v119 = v135.m128_u64[0];
  v120 = 8 * v111;
  if ( v33 != (_QWORD *)v135.m128_u64[0] )
  {
    v116 = &v126;
    v122 = v129;
    do
    {
      v35 = v33 + 3;
      if ( v124 )
        v35 = v33 + 1;
      if ( v35 )
      {
        v36 = *v35 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v36 )
        {
          v118 = v33;
          while ( 1 )
          {
            v135.m128_u64[0] = *(_QWORD *)(v36 + 40);
            v37 = sub_FDE930((__int64 *)&v135);
            if ( src.m128i_i32[3] <= v37 )
            {
              if ( src.m128i_i32[3] )
              {
                v38 = 0;
                v39 = v114;
                while ( 1 )
                {
                  v40 = *(_QWORD *)(v39 + 8 * v38);
                  if ( v40 != sub_FDE960((__int64 *)&v135, v38) )
                    goto LABEL_32;
                  if ( v111 == v38 )
                    break;
                  ++v38;
                }
                if ( !v123 )
                {
LABEL_59:
                  v60 = sub_16FE9F0((__int64)v112, *v35 & 0xFFFFFFFFFFFFFFF8LL);
                  v61 = *v35;
                  si128.m128i_i32[0] = v60;
                  *(_OWORD *)v129 = 0;
                  v126.m128_u64[0] = v61 & 0xFFFFFFFFFFFFFFF8LL;
                  *(__int64 *)((char *)si128.m128i_i64 + 4) = 0;
                  v131 = v131 & 0x80 | 0x40;
                  v128 = 0;
                  v130 = 0;
                  v132 = 0;
                  v133 = 0;
                  v134 = 0;
                  sub_15A3440((unsigned int *)v116, 1, v61 & 0xFFFFFFFFFFFFFFF8LL, v62, v63, v64);
                  v65 = (char *)v129[1];
                  v66 = (char *)v129[0];
                  si128.m128i_i32[1] = src.m128i_i32[3];
                  v131 = v131 & 0xCF | 0x20;
                  v67 = (char *)v129[1] - (char *)v129[0];
                  v68 = *(_QWORD *)(*v115 + 544);
                  v139[0] = nullptr;
                  v113 = v68;
                  v139[1] = nullptr;
                  v135 = v126;
                  v140 = 0;
                  v136 = __PAIR64__(src.m128i_u32[3], si128.m128i_u32[0]);
                  v137 = si128.m128i_i64[1];
                  LODWORD(v138) = v128;
                  if ( ((char *)v129[1] - (char *)v129[0]) >> 6 )
                  {
                    if ( (unsigned __int64)(((char *)v129[1] - (char *)v129[0]) >> 6) > 0x3FFFFFFFFFFFFFFLL )
                      std::__throw_bad_alloc();
                    v69 = (char *)operator new((char *)v129[1] - (char *)v129[0]);
                    v65 = (char *)v129[1];
                    v66 = (char *)v129[0];
                    v70 = v69;
                  }
                  else
                  {
                    v70 = nullptr;
                  }
                  src.m128i_i64[0] = (__int64)v70;
                  v71 = _mm_loadl_epi64(&src);
                  v140 = (__int64)&v70[v67];
                  *(__m128i *)v139 = _mm_unpacklo_epi64(v71, v71);
                  if ( v66 != v65 )
                  {
                    *(_QWORD *)v70 = *(_QWORD *)v66;
                    *((_DWORD *)v70 + 2) = *((_DWORD *)v66 + 2);
                    *(_QWORD *)(v70 + 12) = *(_QWORD *)(v66 + 12);
                    *((_DWORD *)v70 + 5) = *((_DWORD *)v66 + 5);
                    *((_QWORD *)v70 + 3) = v70 + 40;
                    v72 = *((_BYTE **)v66 + 3);
                    v73 = *((_QWORD *)v66 + 4);
                    if ( &v72[v73] && !v72 )
LABEL_72:
                      std::__throw_logic_error("basic_string::_M_construct null not valid");
                    v74 = v66 + 64;
                    while ( 2 )
                    {
                      if ( (unsigned __int64)v73 <= 0xF )
                      {
                        v75 = *((_BYTE **)v70 + 3);
                        if ( v73 == 1 )
                        {
                          *v75 = *v72;
                          v75 = *((_BYTE **)v70 + 3);
                          goto LABEL_69;
                        }
                        if ( v73 )
                        {
LABEL_77:
                          memcpy(v75, v72, v73);
                          v75 = *((_BYTE **)v70 + 3);
                        }
LABEL_69:
                        *((_QWORD *)v70 + 4) = v73;
                        v70 += 64;
                        v75[v73] = 0;
                        *(v70 - 8) = *(v74 - 8);
                        if ( v65 == v74 )
                          goto LABEL_78;
                        v76 = *(_QWORD *)v74;
                        v74 += 64;
                        *(_QWORD *)v70 = v76;
                        *((_DWORD *)v70 + 2) = *((_DWORD *)v74 - 14);
                        *(_QWORD *)(v70 + 12) = *(_QWORD *)(v74 - 52);
                        *((_DWORD *)v70 + 5) = *((_DWORD *)v74 - 11);
                        *((_QWORD *)v70 + 3) = v70 + 40;
                        v72 = *((_BYTE **)v74 - 5);
                        v73 = *((_QWORD *)v74 - 4);
                        if ( &v72[v73] && !v72 )
                          goto LABEL_72;
                        continue;
                      }
                      break;
                    }
                    if ( v73 < 0 )
                      std::__throw_length_error("basic_string::_M_create");
                    src.m128i_i64[0] = (__int64)v72;
                    v75 = (_BYTE *)operator new(v73 + 1);
                    *((_QWORD *)v70 + 5) = v73;
                    v72 = (_BYTE *)src.m128i_i64[0];
                    *((_QWORD *)v70 + 3) = v75;
                    goto LABEL_77;
                  }
LABEL_78:
                  v139[1] = v70;
                  v141 = v131 & 0x7F | v141 & 0x80;
                  v142 = v132;
                  v143 = v133;
                  v144 = v134;
                  sub_17143A0(v112, &v135, v113);
                  v77 = v139[1];
                  v78 = v139[0];
                  if ( v139[1] != v139[0] )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v79 = (_QWORD *)v78[3];
                        if ( v79 == v78 + 5 )
                          break;
                        operator delete(v79);
                        v78 += 8;
                        if ( v77 == v78 )
                          goto LABEL_81;
                      }
                      v78 += 8;
                    }
                    while ( v77 != v78 );
LABEL_81:
                    v78 = v139[0];
                  }
                  if ( v78 )
                    operator delete(v78);
                  v80 = v129[1];
                  v81 = v129[0];
                  if ( v129[1] != v129[0] )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v82 = (_QWORD *)v81[3];
                        if ( v82 == v81 + 5 )
                          break;
                        operator delete(v82);
                        v81 += 8;
                        if ( v81 == v80 )
                          goto LABEL_87;
                      }
                      v81 += 8;
                    }
                    while ( v80 != v81 );
LABEL_87:
                    v81 = v129[0];
                  }
                  if ( v81 )
                    operator delete(v81);
                  goto LABEL_32;
                }
                v47 = *v35 & 0xFFFFFFFFFFFFFFF8LL;
                if ( *(_DWORD *)(v47 + 104) >= src.m128i_i32[3] )
                {
                  v48 = *(_QWORD *)(*(_QWORD *)(v47 + 96) + v120);
                  v49 = *(_QWORD *)(v48 + 40);
                  if ( (v49 & 7) == 0 && (v49 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                  {
                    v50 = _mm_loadu_si128(v155);
                    v136 = 0;
                    v139[1] = &v141;
                    v140 = 0x400000000LL;
                    v135 = (__m128)v50;
                    v138 = 0;
                    v139[0] = nullptr;
                    v151 = 0x200000000LL;
                    v51 = *(_QWORD *)(v48 + 40);
                    v137 = 0;
                    ptr = v152;
                    if ( (v51 & 7) != 0 )
                      BUG();
                    v52 = (unsigned int *)v116;
                    v53 = *(unsigned int **)((v51 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                    v54 = *v53;
                    LOWORD(v128) = 261;
                    v126.m128_u64[0] = (unsigned __int64)(v53 + 4);
                    v126.m128_u64[1] = v54;
                    v55 = sub_15A4EB0((char **)v155[0].m128i_i64[0], (const void ***)v116, v54, v120, v41, v42);
                    sub_15A2F70((__int64)&v135, (__int64)v55);
                    v126.m128_u64[1] = sub_15A5CA0((__int64)&v135, (__int64)v55, v56, v57, v58, v59);
                    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
                    *(_OWORD *)v129 = 0;
                    v126.m128_u64[0] = 0;
                    v131 = v131 & 0x80 | 0x40;
                    v128 = 0;
                    v130 = 0;
                    v132 = 0;
                    v133 = 0;
                    v134 = 0;
                    sub_1706C30((__int64)v112, (__int64)v52);
                    sub_1705410((__int64)v122);
                    if ( ptr != v152 )
                      free(ptr);
                    if ( v139[1] != &v141 )
                      free(v139[1]);
                  }
                }
              }
              else if ( !v123 )
              {
                goto LABEL_59;
              }
            }
LABEL_32:
            v43 = (__int64 *)(v35[1] & 0xFFFFFFFFFFFFFFF8LL);
            v35 = v43;
            if ( v43 )
            {
              v36 = *v43 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v36 )
                continue;
            }
            v33 = v118;
            break;
          }
        }
      }
      if ( v33 + 5 != (_QWORD *)v117 )
      {
        if ( v33[5] < 0xFFFFFFFFFFFFFFFELL )
        {
          v33 += 5;
          continue;
        }
        v44 = v33 + 10;
        while ( 1 )
        {
          v33 = v44;
          if ( v44 == (_QWORD *)v117 )
            break;
          v44 += 5;
          if ( *v33 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_41;
        }
      }
      v33 = (_QWORD *)v117;
LABEL_41:
      ;
    }
    while ( (_QWORD *)v119 != v33 );
  }
  sub_16FF8C0((__int64)(v112 + 58), v157);
  if ( (_BYTE)v125 != 1 )
  {
    if ( v121 )
    {
      v83 = *(unsigned int **)(*(_QWORD *)v114 + 16LL);
      v84 = j__strlen("init");
      if ( v84 <= *v83 && (!v84 || !memcmp(v83 + 4, "init", v84)) )
      {
        v85 = *(_QWORD *)(*v115 + 240);
        v86 = sub_145EC70(v85, 1);
        v88 = v87;
        v89 = (_QWORD *)v86;
        v90 = sub_145F720(v85, 1);
        if ( v86 != v90 )
        {
          src.m128i_i64[0] = (__int64)v129;
          do
          {
            while ( 1 )
            {
              v91 = j__strlen("NS_DESIGNATED_INITIALIZER");
              v92 = *(unsigned int **)(*v89 + 16LL);
              v93 = *v92;
              if ( v93 == v91 && (!*v92 || !memcmp(v92 + 4, "NS_DESIGNATED_INITIALIZER", v93)) )
              {
                v94 = v112 + 58;
                sub_16FF160((__int64)(v112 + 58), (std::__detail::_List_node_base *)(v112 + 58));
                v95 = _mm_loadu_si128(v155);
                v139[1] = &v141;
                v140 = 0x400000000LL;
                v135 = (__m128)v95;
                v136 = 0;
                v139[0] = nullptr;
                v138 = 0;
                ptr = v152;
                v151 = 0x200000000LL;
                v137 = 0;
                v96.m128_u64[0] = *(_QWORD *)(*v89 + 16LL);
                v96.m128_u64[1] = *(unsigned int *)v96.m128_u64[0];
                v96.m128_u64[0] += 16LL;
                LOWORD(v128) = 261;
                v126 = v96;
                v99 = sub_15A4EB0((char **)v155[0].m128i_i64[0], (const void ***)&v126, v96.m128_i64[1], 261, v97, v98);
                sub_15A2F70((__int64)&v135, (__int64)v99);
                v126.m128_u64[1] = sub_15A5CA0((__int64)&v135, (__int64)v99, v100, v101, v102, v103);
                si128 = _mm_load_si128((const __m128i *)&xmmword_23AA9E0);
                *(_OWORD *)v129 = 0;
                v126.m128_u64[0] = 0;
                v131 = v131 & 0x80 | 0x40;
                v128 = 0;
                v130 = 0;
                v132 = 0;
                v133 = 0;
                v134 = 0;
                sub_1706C30((__int64)v112, (__int64)&v126);
                sub_1705410(src.m128i_i64[0]);
                sub_16FF8C0((__int64)v94, v157);
                sub_1704B40(&v135);
              }
              if ( v89 + 2 != v88 )
                break;
LABEL_118:
              v89 = v88;
              if ( (_QWORD *)v90 == v88 )
                goto LABEL_44;
            }
            v104 = v89[2];
            if ( v104 == -8192 || v104 == -4096 )
            {
              v105 = v89 + 4;
              while ( 1 )
              {
                v89 = v105;
                if ( v105 == v88 )
                  goto LABEL_118;
                v106 = *v105;
                v105 += 2;
                if ( v106 != -4096 && v106 != -8192 )
                  goto LABEL_113;
              }
            }
            v89 += 2;
LABEL_113:
            ;
          }
          while ( (_QWORD *)v90 != v89 );
        }
      }
    }
  }
LABEL_44:
  v45 = 0;
  v46 = v115[1];
  if ( v153 != v154 )
    v45 = v153;
  if ( v46 )
    sub_1700D50(*v115, v46, v112 + 76, v45, -1431655765 * ((v154 - v153) >> 5));
  sub_1700A70((__int64)v112);
}
