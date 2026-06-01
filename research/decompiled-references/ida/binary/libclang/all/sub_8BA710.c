__int64 __fastcall sub_8BA710(const __m128i *a1, __int64 a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v8; // r15
  __int16 v9; // ax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // r15d
  __int64 v13; // rsi
  char v14; // bp
  __m128i v16; // xmm0
  __int64 v17; // rsi
  bool v18; // al
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int8 **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 **v27; // rbp
  void *v28; // rax
  unsigned __int32 v29; // eax
  bool v30; // al
  __int64 v31; // rdx
  __m128i *v32; // rcx
  __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // r12
  char v39; // al
  unsigned int v40; // edx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  _QWORD *v45; // rdx
  __m128i v46; // xmm0
  __int64 v47; // rsi
  __m128i *v48; // rdi
  void *v49; // rdx
  __int64 v50; // rsi
  __int8 v51; // al
  __int64 v52; // rax
  __int64 v53; // rsi
  void *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  char v58; // dl
  int v59; // r8d
  int v60; // eax
  int v61; // edx
  __int64 v62; // rsi
  unsigned __int64 v63; // rdx
  unsigned int v64; // eax
  void *v65; // r12
  void *v66; // r14
  __int64 v67; // rax
  __int64 v68; // rax
  char v69; // r13
  __int64 v70; // rdx
  char v71; // r12
  __int64 v72; // rax
  _QWORD *v73; // r12
  unsigned __int64 v74; // r13
  unsigned __int64 v75; // rax
  __int64 v76; // rdi
  unsigned __int8 **v77; // rax
  unsigned __int8 **v78; // rbp
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r12
  __int64 v85; // rbp
  __int64 v86; // rdi
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rbp
  __int64 v94; // r12
  __int64 v95; // rax
  __int64 v96; // r13
  __int64 v97; // rbx
  _QWORD *v98; // r14
  int v99; // eax
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // r14
  unsigned __int64 v106; // rax
  __int64 v107; // rdi
  __int64 v108; // r8
  char v109; // al
  int v110; // eax
  int v111; // edx
  unsigned __int8 **v112; // rax
  unsigned __int8 **v113; // rbp
  unsigned __int8 **v114; // rax
  bool v115; // al
  _DWORD *v116; // rax
  unsigned __int8 **v117; // rax
  unsigned __int8 **v118; // rbp
  unsigned __int64 v119; // rax
  _DWORD *v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // rbp
  unsigned __int64 v123; // rbp
  bool v124; // al
  _DWORD *v125; // rax
  __int64 v126; // rsi
  unsigned __int8 **v127; // rdi
  unsigned __int64 v128; // [rsp+0h] [rbp-138h]
  __int64 v129; // [rsp+0h] [rbp-138h]
  _DWORD *v130; // [rsp+8h] [rbp-130h]
  __m128i v131; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v132[2]; // [rsp+20h] [rbp-118h] BYREF
  void *v133[2]; // [rsp+30h] [rbp-108h] BYREF
  __int8 v134; // [rsp+40h] [rbp-F8h]
  __m128i v135; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v136; // [rsp+80h] [rbp-B8h]
  char v137; // [rsp+88h] [rbp-B0h]
  __int64 v138; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h]
  __int64 v140; // [rsp+A8h] [rbp-90h]
  _BYTE v141[65]; // [rsp+B0h] [rbp-88h] BYREF
  char v142; // [rsp+F1h] [rbp-47h]

  v8 = *(_QWORD *)(a2 + 16);
  v9 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  switch ( (char)v9 )
  {
    case 1:
    case 40:
    case 41:
    case 42:
    case 63:
      v13 = *(_QWORD *)(a2 + 16);
      v14 = sub_871080((__int64)a1, v13, (__int64 *)(unsigned __int8)v9, a4, a5, a6);
      if ( !v14 )
        return 0;
      v69 = sub_B0DD50(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      if ( v69 )
        goto LABEL_107;
      v70 = a1->m128i_i64[1];
      v71 = *(_BYTE *)(v70 + 128) & 1;
      if ( (*(_BYTE *)(v70 + 128) & 2) != 0 || (*(_BYTE *)(v70 + 24) & 1) != 0 )
      {
        if ( !v71 )
          goto LABEL_101;
      }
      else
      {
        v72 = a1->m128i_i64[0];
        if ( v71 )
        {
LABEL_113:
          v84 = *(_QWORD *)(v72 + 32);
          v85 = v72 + 56;
          if ( v84 != v72 + 56 )
          {
            while ( 1 )
            {
              v86 = *(_QWORD *)(v84 + 24);
              if ( v86 )
              {
                if ( (*(_BYTE *)(v86 + 28) & 0x7Fu) - 33 <= 3 )
                {
                  v87 = *(_QWORD *)(v86 + 40);
                  if ( (v87 & 7) == 0 )
                  {
                    v88 = v87 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v88 )
                    {
                      v89 = *(_QWORD *)(v88 + 16);
                      if ( *(_DWORD *)v89 == 8 && *(_QWORD *)(v89 + 16) == 0x657461636F6C6C61LL )
                      {
                        v90 = *(_QWORD *)(sub_79A2E0(v86 + 72) + 16);
                        v91 = (_QWORD *)(v90 & 0xFFFFFFFFFFFFFFF8LL);
                        if ( (v90 & 4) != 0 )
                          v91 = (_QWORD *)*v91;
                        if ( !v91 )
                          BUG();
                        if ( (*((_BYTE *)v91 - 36) & 0x7Fu) - 58 <= 1 )
                        {
                          v92 = *(v91 - 3);
                          if ( (v92 & 7) != 0 )
                          {
                            sub_79C450((__int64)(v91 - 8));
                          }
                          else
                          {
                            v128 = v92 & 0xFFFFFFFFFFFFFFF8LL;
                            v130 = (_DWORD *)v91[13];
                            v115 = sub_79C450((__int64)(v91 - 8));
                            if ( v128 )
                            {
                              if ( v115 )
                              {
                                v116 = *(_DWORD **)(v128 + 16);
                                if ( *v116 == 9
                                  && !memcmp(v116 + 4, "allocator", 9u)
                                  && *v130
                                  && (v130[2] & 0x7FFFFFFF) == 1 )
                                {
                                  if ( !*(_DWORD *)(v84 + 176) )
                                  {
LABEL_127:
                                    v72 = a1->m128i_i64[0];
                                    break;
                                  }
LABEL_107:
                                  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 0x3F )
                                    return 1;
                                  v48 = (__m128i *)a1->m128i_i64[1];
                                  if ( (v48[8].m128i_i8[0] & 1) == 0 )
                                    return 1;
                                  goto LABEL_52;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v84 = *(_QWORD *)(v84 + 16);
              if ( v84 == v85 )
                goto LABEL_127;
            }
          }
          v93 = v72;
          v94 = *(_QWORD *)(*(_QWORD *)(v72 + 32) + 24LL);
          if ( v94 )
          {
            v95 = *(_QWORD *)(v94 + 40);
            if ( (v95 & 7) == 0 )
            {
              v119 = v95 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v119 )
              {
                v120 = *(_DWORD **)(v119 + 16);
                if ( *v120 == 7 && !memcmp(v120 + 4, "current", 7u) )
                {
                  v121 = sub_79A330(v94 + 72);
                  if ( (*(_BYTE *)(v121 + 8) & 0x7Fu) - 56 <= 3 )
                  {
                    v122 = *(_QWORD *)(v121 - 24);
                    if ( (v122 & 7) != 0 )
                    {
                      sub_79C450(v121 - 64);
                    }
                    else
                    {
                      v123 = v122 & 0xFFFFFFFFFFFFFFF8LL;
                      v124 = sub_79C450(v121 - 64);
                      if ( v123 )
                      {
                        if ( v124 )
                        {
                          v125 = *(_DWORD **)(v123 + 16);
                          if ( *v125 == 15 && !memcmp(v125 + 4, "source_location", 0xFu) )
                            goto LABEL_107;
                        }
                      }
                    }
                  }
                  v93 = a1->m128i_i64[0];
                }
              }
            }
          }
          if ( (*(_BYTE *)(sub_A2CB40(v93) + 2) & 2) != 0 )
            goto LABEL_107;
          v71 = v69;
LABEL_101:
          if ( (unsigned __int8)sub_B0DD50(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL))
            && (*(_BYTE *)(sub_A2CB40(a1->m128i_i64[0]) + 1) & 8) != 0 )
          {
            v76 = a1->m128i_i64[0];
            if ( v71 )
            {
              v77 = (unsigned __int8 **)sub_A2E240(v76, a2, 2219, 0);
              v78 = v77;
              if ( v77 )
              {
                sub_8356A0(v77, *(_QWORD *)(v8 + 8), 8u);
                v79 = sub_A2CB40(a1->m128i_i64[0]);
                sub_8356A0(v78, (*(_BYTE *)(v79 + 2) & 2) != 0, 3u);
                v80 = sub_81FA40(a1->m128i_i64[1] + 24, *(_QWORD *)(a1->m128i_i64[0] + 16));
                v81 = *(_QWORD *)&byte_8[v80 & 0xFFFFFFFFFFFFFFF0LL] | v80 & 7;
                sub_8356A0(v78, v81, 8u);
                v82 = sub_B167E0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v81);
                sub_8356A0(v78, v82, 8u);
              }
              else
              {
                sub_A2CB40(a1->m128i_i64[0]);
                v126 = *(_QWORD *)(a1->m128i_i64[0] + 16);
                sub_81FA40(a1->m128i_i64[1] + 24, v126);
                sub_B167E0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v126);
              }
            }
            else
            {
              v117 = (unsigned __int8 **)sub_A2E240(v76, a2, 2215, 0);
              v118 = v117;
              if ( v117 )
              {
                sub_823450(v117, 3);
                sub_8356A0(v118, *(_QWORD *)(v8 + 8), 8u);
              }
            }
          }
          else
          {
            v112 = (unsigned __int8 **)sub_A2E240(a1->m128i_i64[0], a2, 2215, 0);
            v113 = v112;
            if ( v112 )
            {
              sub_823450(v112, 2);
              sub_8356A0(
                v113,
                (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2160LL) + 1LL) & 8) != 0,
                3u);
            }
          }
          v83 = a1->m128i_i64[1];
          *(_BYTE *)(v83 + 24) |= 1u;
          *(_DWORD *)(v83 + 56) = 0;
          goto LABEL_107;
        }
        v73 = *(_QWORD **)(v72 + 16);
        v74 = sub_B167E0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v13);
        v75 = sub_81FA40(a1->m128i_i64[1] + 24, *(_QWORD *)(a1->m128i_i64[0] + 16));
        v69 = sub_6DA930(v73, v75, v74);
        if ( !v69 )
        {
          v71 = v14;
          goto LABEL_101;
        }
      }
      v72 = a1->m128i_i64[0];
      goto LABEL_113;
    case 4:
      v49 = (void *)a1->m128i_i64[0];
      v50 = *(_QWORD *)(a2 + 16);
      v133[1] = &v135;
      v137 |= 1u;
      v140 = 0x800000000LL;
      v51 = a1[1].m128i_i8[0];
      v135 = 0u;
      v136 = 0;
      v138 = 0;
      ptr = v141;
      v142 = 0;
      v133[0] = v49;
      v134 = v51;
      v12 = sub_869D30((__m128i *)v133, v50);
      if ( !(_BYTE)v12 )
        goto LABEL_55;
      v68 = *(_QWORD *)(a2 + 16);
      BYTE4(v133[0]) &= ~1u;
      LODWORD(v133[0]) = 0;
      if ( (unsigned __int8)sub_85F440(
                              a1->m128i_i64[0],
                              (_DWORD *)a2,
                              *(_QWORD *)(v68 + 8),
                              (__int64)&v135,
                              (__int64)v133,
                              0) )
        goto LABEL_68;
      if ( !a1[1].m128i_i8[0] )
        goto LABEL_94;
      v96 = a1->m128i_i64[1];
      v97 = a1->m128i_i64[0];
      v131 = _mm_load_si128(&v135);
      if ( sub_69F600(&v131) )
        goto LABEL_94;
      if ( !v131.m128i_i64[0] )
        goto LABEL_94;
      if ( (v131.m128i_i8[0] & 3) != 0 )
        goto LABEL_94;
      v98 = (_QWORD *)(v131.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
      v99 = *(_BYTE *)((v131.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7F;
      if ( (unsigned int)(v99 - 38) > 6 || v99 != 44 && v99 != 38 )
        goto LABEL_94;
      v100 = v98[2] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v98[2] & 4) != 0 )
        v100 = *(_QWORD *)(v100 + 8);
      if ( !v100 )
        goto LABEL_94;
      v101 = *(_BYTE *)(sub_79C2A0(v100) + 8) & 0x7F;
      if ( (unsigned __int8)v101 > 0x10u )
      {
        if ( (((_BYTE)v101 + 96) & 0x7Fu) > 5 )
          goto LABEL_94;
      }
      else
      {
        v102 = 65922;
        if ( !_bittest64(&v102, v101) )
          goto LABEL_94;
      }
      v103 = v98[6];
      if ( (v103 & 1) != 0 || (byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      {
        v104 = sub_77BD20(v98, v132);
        if ( v104 )
        {
          if ( (*(_QWORD *)(v104 + 8) & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
          {
            v105 = sub_80F230(v104);
            if ( sub_8216C0(v105) )
            {
              sub_69F1F0((__int64)v132, v105, 0, 0);
              sub_823790(v96, v132[0], v132[1], 1);
              v106 = *(_QWORD *)(v105 + 8) & 0xFFFFFFFFFFFFFFF0LL;
              v107 = *(_QWORD *)v106;
              if ( *(_BYTE *)(*(_QWORD *)v106 + 16LL) != 41 )
                v107 = sub_B0D320(v107);
              v108 = *(_QWORD *)(v107 + 32);
              if ( *(_DWORD *)(v96 + 56) )
              {
                sub_A2E240(v97, v105, 2297, 0);
                *(_BYTE *)(v96 + 24) |= 1u;
                *(_DWORD *)(v96 + 56) = 0;
              }
              else
              {
                v109 = *(_BYTE *)(v96 + 24);
                if ( (v109 & 1) == 0 )
                {
                  if ( (v109 & 2) != 0
                    || (v109 & 8) != 0
                    && *(_QWORD *)(*(_QWORD *)(v96 + 48) + 8LL * ((*(_DWORD *)(v96 + 24) >> 4) - 1)) == *(_QWORD *)(v96 + 32) )
                  {
                    v127 = (unsigned __int8 **)sub_A2E240(v97, v105, 2264, 0);
                    if ( v127 )
                      sub_823450(v127, 3);
                    *(_BYTE *)(v96 + 24) |= 1u;
                    *(_DWORD *)(v96 + 56) = 0;
                  }
                  else
                  {
                    *(_BYTE *)(v96 + 24) |= 4u;
                    if ( !*(_DWORD *)(v96 + 60) )
                    {
                      v129 = v108;
                      sub_25D6060(v96 + 48, v96 + 64, 1, 8);
                      v108 = v129;
                    }
                    *(_QWORD *)(*(_QWORD *)(v96 + 48) + 8LL * *(unsigned int *)(v96 + 56)) = 0;
                    v110 = *(_DWORD *)(v96 + 56);
                    v111 = *(_DWORD *)(v96 + 24);
                    *(_QWORD *)(v96 + 40) = v108;
                    ++v110;
                    *(_QWORD *)(v96 + 32) = 0x7FFFFFFFFFFFFFFFLL;
                    *(_DWORD *)(v96 + 56) = v110;
                    *(_DWORD *)(v96 + 24) = v111 & 7 | (16 * v110) | 8;
                  }
                }
              }
              goto LABEL_69;
            }
          }
        }
      }
LABEL_94:
      v12 = 0;
      goto LABEL_69;
    case 6:
      if ( !(unsigned __int8)sub_871080((__int64)a1, *(_QWORD *)(a2 + 16), (__int64 *)(unsigned __int8)v9, a4, a5, a6) )
        return 0;
      v30 = sub_69F610((_QWORD *)a1->m128i_i64[1]);
      v31 = a1->m128i_i64[1];
      if ( !v30 && !*(_QWORD *)(v31 + 16) )
        return 1;
      return sub_84BEB0(a1->m128i_i64[0], a2, v31);
    case 7:
    case 8:
      v16 = _mm_loadu_si128(a1);
      v17 = *(_QWORD *)(a2 + 16);
      LOBYTE(v136) = a1[1].m128i_i8[0];
      v135 = v16;
      if ( !(unsigned __int8)sub_871080((__int64)&v135, v17, (__int64 *)(unsigned __int8)v9, a4, a5, a6) )
        return 0;
      v18 = sub_69F610((_QWORD *)a1->m128i_i64[1]);
      v19 = a1->m128i_i64[1];
      if ( !v18 && !*(_QWORD *)(v19 + 16) )
        return 1;
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v21 = *(_QWORD *)v20;
      if ( *(_BYTE *)(*(_QWORD *)v20 + 16LL) != 41 )
        v21 = sub_B0D320(v21);
      return sub_82E0E0(a1->m128i_i64[0], a2, *(_QWORD *)(v21 + 32), v19);
    case 9:
      if ( !(unsigned __int8)sub_871080((__int64)a1, *(_QWORD *)(a2 + 16), (__int64 *)(unsigned __int8)v9, a4, a5, a6) )
        return 0;
      return sub_8538A0((__int64 *)a1->m128i_i64[0], a2, (__m128i *)a1->m128i_i64[1]);
    case 11:
      v32 = (__m128i *)a1->m128i_i64[1];
      if ( (*(_BYTE *)(v8 + 1) & 6) != 0 )
      {
        v33 = *(_QWORD *)(a2 + 16);
        v34 = _mm_unpacklo_epi64(_mm_loadl_epi64(a1), (__m128i)(unsigned __int64)v32);
        LOBYTE(v136) = a1[1].m128i_i8[0];
        v135 = v34;
        if ( !(unsigned __int8)sub_869D30(&v135, v33) )
          return 0;
LABEL_38:
        v35 = sub_6D9A50(*(_QWORD **)(a1->m128i_i64[0] + 16), *(_QWORD *)(v8 + 8));
        v36 = a1->m128i_i64[1];
        v37 = a1->m128i_i64[0];
        v38 = v35;
        if ( (unsigned int)*(unsigned __int8 *)(v35 + 16) - 2 > 1 )
        {
          v56 = *(unsigned int *)(v36 + 56);
          v57 = *(_QWORD *)(v38 + 32);
          if ( (_DWORD)v56 )
          {
            sub_A2E240(v37, a2, 2297, 0);
            *(_BYTE *)(v36 + 24) |= 1u;
            *(_DWORD *)(v36 + 56) = 0;
          }
          else
          {
            v58 = *(_BYTE *)(v36 + 24);
            if ( (v58 & 1) == 0 )
            {
              if ( (v58 & 2) == 0
                && ((*(_BYTE *)(v36 + 24) & 8) == 0
                 || *(_QWORD *)(*(_QWORD *)(v36 + 48) + 8LL * ((*(_DWORD *)(v36 + 24) >> 4) - 1)) != *(_QWORD *)(v36 + 32)) )
              {
                v59 = *(_DWORD *)(v36 + 60);
                *(_BYTE *)(v36 + 24) |= 4u;
                if ( !v59 )
                {
                  sub_25D6060(v36 + 48, v36 + 64, 1, 8);
                  v56 = *(unsigned int *)(v36 + 56);
                }
                *(_QWORD *)(*(_QWORD *)(v36 + 48) + 8 * v56) = 0;
                v60 = *(_DWORD *)(v36 + 56);
                v61 = *(_DWORD *)(v36 + 24);
                *(_QWORD *)(v36 + 40) = v57;
                ++v60;
                *(_QWORD *)(v36 + 32) = 0x7FFFFFFFFFFFFFFFLL;
                *(_DWORD *)(v36 + 56) = v60;
                *(_DWORD *)(v36 + 24) = v61 & 7 | (16 * v60) | 8;
                return 1;
              }
              goto LABEL_162;
            }
          }
        }
        else
        {
          v39 = *(_BYTE *)(v36 + 24);
          if ( (v39 & 1) == 0 )
          {
            if ( (v39 & 2) == 0 )
            {
              if ( (v40 = *(_DWORD *)(v36 + 56), v40 == 1) && (v39 & 4) != 0
                || (v39 & 8) == 0
                || *(_QWORD *)(*(_QWORD *)(v36 + 48) + 8LL * ((*(_DWORD *)(v36 + 24) >> 4) - 1)) != *(_QWORD *)(v36 + 32) )
              {
                v41 = v40;
                v42 = v40 + 1LL;
                if ( *(unsigned int *)(v36 + 60) < v42 )
                {
                  sub_25D6060(v36 + 48, v36 + 64, v42, 8);
                  v41 = *(unsigned int *)(v36 + 56);
                }
                *(_QWORD *)(*(_QWORD *)(v36 + 48) + 8 * v41) = 0;
                v43 = *(_DWORD *)(v36 + 56) + 1;
                *(_DWORD *)(v36 + 56) = v43;
                v44 = *(_QWORD *)(v38 + 32);
                *(_BYTE *)(v36 + 24) |= 8u;
                *(_QWORD *)(v36 + 40) = v44;
                v45 = *(_QWORD **)(v38 + 40);
                if ( (*(_BYTE *)(v38 + 19) & 2) != 0 )
                {
                  if ( *((_DWORD *)v45 + 2) <= 0x40u )
                    v45 = (_QWORD *)*v45;
                  else
                    v45 = *(_QWORD **)*v45;
                }
                *(_QWORD *)(v36 + 32) = v45;
                *(_DWORD *)(v36 + 24) = *(_DWORD *)(v36 + 24) & 0xF | (16 * v43);
                return 1;
              }
            }
LABEL_162:
            v114 = (unsigned __int8 **)sub_A2E240(v37, a2, 2264, 0);
            if ( v114 )
              sub_823450(v114, 3);
            *(_BYTE *)(v36 + 24) |= 1u;
            *(_DWORD *)(v36 + 56) = 0;
          }
        }
        return 1;
      }
      v52 = sub_823B90(*(_QWORD *)(a1->m128i_i64[0] + 32), *(_QWORD *)(a2 + 16), *(_QWORD *)(v8 + 8), v32);
      if ( (unsigned __int8)sub_88A010(v52, a1->m128i_i64[0], (const __m128i *)a1->m128i_i64[1], v8, 0) )
        goto LABEL_38;
      return 0;
    case 12:
      v46 = _mm_loadu_si128(a1);
      v47 = *(_QWORD *)(a2 + 16);
      LOBYTE(v136) = a1[1].m128i_i8[0];
      v135 = v46;
      return (unsigned int)sub_869D30(&v135, v47);
    case 13:
      sub_857160(a1->m128i_i64[0], *(_QWORD *)(a2 + 16));
      v48 = (__m128i *)a1->m128i_i64[1];
LABEL_52:
      sub_823870(v48, *(_QWORD *)(a1->m128i_i64[0] + 16), *(_QWORD *)(a2 + 8));
      return 1;
    case 21:
      v22 = (unsigned __int8 **)sub_A2E240(a1->m128i_i64[0], a2, 2215, 0);
      v27 = v22;
      if ( v22 )
      {
        sub_823450(v22, 2);
        sub_8356A0(v27, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2160LL) + 1LL) & 8) != 0, 3u);
      }
      v28 = (void *)a1->m128i_i64[0];
      v135.m128i_i8[4] &= ~1u;
      v135.m128i_i32[0] = 0;
      v133[0] = v28;
      v133[1] = &v135;
      v12 = sub_87BEE0((__int64 *)v133, v8, v23, v24, v25, v26);
      v29 = v135.m128i_i32[0];
      if ( (_BYTE)v12 )
      {
        if ( v135.m128i_i32[0] == 2 )
        {
          v64 = sub_6F6DE0(*(_QWORD *)(a1->m128i_i64[0] + 16), *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
          sub_831A90((__int64)v133, (__int64)&v135.m128i_i64[1], v64);
          v65 = v133[0];
          if ( LODWORD(v133[1]) > 0x40 )
          {
            v66 = *(void **)v133[0];
            if ( v133[0] )
              operator delete[](v133[0]);
            v65 = v66;
          }
          sub_69F1F0((__int64)v133, 0, 0, 0);
          *(__m128i *)a1->m128i_i64[1] = _mm_load_si128((const __m128i *)v133);
          *(_BYTE *)(a1->m128i_i64[1] + 128) &= ~2u;
          *(_QWORD *)(a1->m128i_i64[1] + 16) = v65;
          v67 = a1->m128i_i64[1];
          *(_BYTE *)(v67 + 24) |= 1u;
          *(_DWORD *)(v67 + 56) = 0;
          *(_BYTE *)(a1->m128i_i64[1] + 128) &= ~1u;
          v29 = v135.m128i_i32[0];
        }
        else if ( v135.m128i_i32[0] == 7 )
        {
          sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v135);
          v29 = v135.m128i_i32[0];
        }
        else
        {
          v12 = 0;
        }
        if ( v29 <= 1 )
          return v12;
LABEL_31:
        sub_69F740((__int64)&v135);
        return v12;
      }
      if ( v135.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v135);
      v9 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
      if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x13 )
        goto LABEL_85;
      if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) > 0x13 )
      {
        if ( (_BYTE)v9 == 58 )
        {
          v8 = *(_QWORD *)(a2 + 16);
LABEL_80:
          v135.m128i_i8[4] &= ~1u;
          v62 = a1->m128i_i64[0];
          v63 = v8;
          v135.m128i_i32[0] = 0;
        }
        else
        {
          if ( (_BYTE)v9 != 63 )
          {
LABEL_58:
            sub_827AF0(a1->m128i_i64[0], a2, 110);
            return 0;
          }
          v63 = *(_QWORD *)(a2 + 16);
          v62 = a1->m128i_i64[0];
          v135.m128i_i32[0] = 0;
          v135.m128i_i8[4] &= ~1u;
        }
        v12 = sub_856400((__int64)&v135, v62, v63);
        if ( (_BYTE)v12 )
          sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v135);
        if ( v135.m128i_i32[0] <= 1u )
          return v12;
        goto LABEL_31;
      }
      if ( (_BYTE)v9 == 4 )
      {
        v53 = *(_QWORD *)(a2 + 16);
        v133[1] = &v135;
        v134 = 0;
        v140 = 0x800000000LL;
        v54 = (void *)a1->m128i_i64[0];
        v137 |= 1u;
        v135 = 0u;
        v136 = 0;
        v138 = 0;
        ptr = v141;
        v142 = 0;
        v133[0] = v54;
        v12 = sub_869D30((__m128i *)v133, v53);
        if ( !(_BYTE)v12 )
        {
LABEL_55:
          if ( ptr != v141 )
            free(ptr);
          return v12;
        }
        v55 = *(_QWORD *)(a2 + 16);
        BYTE4(v133[0]) &= ~1u;
        LODWORD(v133[0]) = 0;
        v12 = sub_85F440(a1->m128i_i64[0], (_DWORD *)a2, *(_QWORD *)(v55 + 8), (__int64)&v135, (__int64)v133, 0);
        if ( (_BYTE)v12 )
LABEL_68:
          sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)v133);
LABEL_69:
        if ( LODWORD(v133[0]) > 1 )
          sub_69F740((__int64)v133);
        goto LABEL_55;
      }
LABEL_4:
      if ( (_BYTE)v9 != 5 )
      {
        if ( (_BYTE)v9 == 3 )
        {
          v10 = *(_QWORD *)(a2 + 16);
          v11 = a1->m128i_i64[0];
          LODWORD(v133[0]) = 0;
          BYTE4(v133[0]) &= ~1u;
          v135.m128i_i8[4] &= ~1u;
          v135.m128i_i32[0] = 0;
          if ( (unsigned __int8)sub_856400((__int64)&v135, v11, v10)
            && (v12 = sub_867E00(a1->m128i_i64[0], (__int64)v133, (__int64)&v135, a2), (_BYTE)v12) )
          {
            sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)v133);
          }
          else
          {
            v12 = 0;
          }
          if ( v135.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v135);
          if ( LODWORD(v133[0]) > 1 )
            sub_69F740((__int64)v133);
          return v12;
        }
        goto LABEL_58;
      }
LABEL_85:
      v8 = *(_QWORD *)(a2 + 16);
      return sub_871080((__int64)a1, v8, a3, a4, a5, a6);
    default:
      if ( (_BYTE)v9 == 19 )
        return sub_871080((__int64)a1, v8, a3, a4, a5, a6);
      if ( (unsigned __int8)v9 <= 0x13u )
        goto LABEL_4;
      if ( (_BYTE)v9 != 58 )
        goto LABEL_58;
      goto LABEL_80;
  }
}

