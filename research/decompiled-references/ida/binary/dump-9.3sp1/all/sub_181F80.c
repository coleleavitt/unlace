__int64 __fastcall sub_181F80(
        __int64 *a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rdi
  _QWORD *exception; // rdi
  __int64 *v8; // rdi
  int *v9; // rdx
  int v10; // eax
  int v11; // esi
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int64 (__fastcall *v14)(__int64); // rdx
  int v15; // eax
  unsigned __int64 v16; // r14
  __int64 (__fastcall *v17)(__int64); // rdx
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 *v22; // rbx
  __int64 v23; // r15
  unsigned __int64 *v24; // r13
  bool v25; // zf
  char v26; // al
  int v27; // edx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 *v30; // rdx
  unsigned int *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r12
  unsigned int *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  __int64 *v43; // r12
  int v44; // r8d
  int v45; // r9d
  unsigned __int64 *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  int v50; // r8d
  int v51; // eax
  __int8 v52; // cl
  bool v53; // cc
  unsigned __int64 v54; // rdx
  char v55; // dl
  unsigned __int64 *v56; // rax
  unsigned __int64 v57; // rdx
  __int64 *v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  __int64 v63; // rax
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  unsigned __int64 *v66; // rdx
  unsigned __int64 *v67; // rax
  unsigned __int64 *v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  __m128i v72; // xmm1
  char v73; // di
  bool v74; // cc
  unsigned __int64 v75; // rcx
  char v76; // dl
  unsigned __int64 *v77; // rsi
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rax
  __m128i v82; // xmm1
  unsigned __int64 v83; // r13
  _QWORD *v84; // r12
  __int64 v85; // r15
  _BYTE *v86; // rdi
  _BYTE *v87; // rdi
  __int64 v88; // r15
  _BYTE *v89; // rdi
  _BYTE *v90; // rdi
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // r13
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rdi
  __int64 v100; // rdi
  __int64 v101; // rdi
  char v102; // [rsp+Fh] [rbp-221h]
  __m128i v103; // [rsp+20h] [rbp-210h] BYREF
  __int64 *v104; // [rsp+30h] [rbp-200h]
  __int64 *v105; // [rsp+38h] [rbp-1F8h]
  int ***v106; // [rsp+40h] [rbp-1F0h]
  __int64 v107; // [rsp+48h] [rbp-1E8h]
  __m128i *v108; // [rsp+50h] [rbp-1E0h]
  unsigned __int64 **v109; // [rsp+58h] [rbp-1D8h]
  int i; // [rsp+60h] [rbp-1D0h]
  int v111; // [rsp+64h] [rbp-1CCh]
  int **v112; // [rsp+68h] [rbp-1C8h]
  unsigned __int64 *v113; // [rsp+70h] [rbp-1C0h]
  _QWORD *v114; // [rsp+78h] [rbp-1B8h]
  __int64 *v115; // [rsp+80h] [rbp-1B0h]
  unsigned int *v116; // [rsp+88h] [rbp-1A8h]
  __int64 v117; // [rsp+90h] [rbp-1A0h]
  __int64 v118; // [rsp+98h] [rbp-198h]
  int v119; // [rsp+A0h] [rbp-190h]
  int v120; // [rsp+A4h] [rbp-18Ch]
  __int64 *v121; // [rsp+A8h] [rbp-188h]
  char v122; // [rsp+B3h] [rbp-17Dh] BYREF
  int v123; // [rsp+B4h] [rbp-17Ch] BYREF
  int **v124; // [rsp+B8h] [rbp-178h] BYREF
  __m128i v125; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v126[2]; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v127; // [rsp+E0h] [rbp-150h] BYREF
  __int128 v128; // [rsp+E8h] [rbp-148h]
  __int64 v129[2]; // [rsp+100h] [rbp-130h] BYREF
  void *v130; // [rsp+110h] [rbp-120h] BYREF
  __int128 v131; // [rsp+118h] [rbp-118h]
  __int64 v132; // [rsp+130h] [rbp-100h] BYREF
  __int64 v133; // [rsp+140h] [rbp-F0h] BYREF
  __m128i v134; // [rsp+148h] [rbp-E8h]
  __int64 v135[2]; // [rsp+160h] [rbp-D0h] BYREF
  __int64 v136; // [rsp+170h] [rbp-C0h] BYREF
  __int128 v137; // [rsp+178h] [rbp-B8h]
  _DWORD *v138[2]; // [rsp+190h] [rbp-A0h] BYREF
  __int64 v139; // [rsp+1A0h] [rbp-90h] BYREF
  __m128i v140; // [rsp+1A8h] [rbp-88h] BYREF
  __int64 (__fastcall **v141)(); // [rsp+1C0h] [rbp-70h] BYREF
  __int128 v142; // [rsp+1C8h] [rbp-68h]
  __int64 v143; // [rsp+1D8h] [rbp-58h]
  __int128 v144; // [rsp+1E0h] [rbp-50h]
  unsigned __int64 v145; // [rsp+1F8h] [rbp-38h]

  v121 = a1;
  v102 = (char)a2;
  v145 = __readfsqword(0x28u);
  for ( i = 0; ; i = 0 )
  {
    while ( 1 )
    {
      v8 = (__int64 *)v121[5];
      if ( v102 )
      {
        if ( (unsigned int)sub_144130(v8, nullptr, 0, a4, a5, a6) )
        {
          if ( !under_debugger )
            sub_383060(50551);
          goto LABEL_209;
        }
      }
      else
      {
        sub_139B90((__int64)v8, (__int64)a2, a3, a4, a5, a6);
      }
      v9 = (int *)v121[5];
      v10 = *v9;
      v119 = *v9 & 0x1000;
      if ( v119 )
      {
        v119 = 0;
        if ( (v10 & 0x2000) == 0 )
        {
          BYTE1(v10) |= 0x20u;
          *v9 = v10;
          v142 = 0u;
          v80 = v121[5];
          v143 = 0;
          *(_QWORD *)&v144 = 0;
          v141 = &off_4DE040;
          v119 = sub_11F9E0(v80, (__int64 *)&v141) != 0;
        }
      }
      v117 = sub_110340((__int64)v121, v119);
      if ( !v117 )
      {
        if ( !under_debugger )
          sub_383060(50446);
        goto LABEL_209;
      }
      v11 = v119;
      v12 = v121;
      ++*(_DWORD *)(v117 + 24);
      v114 = (_QWORD *)sub_1108E0((__int64)v12, v11);
      if ( !v114 )
      {
        if ( !under_debugger )
          sub_383060(50446);
        goto LABEL_209;
      }
      v13 = v121;
      ++*((_DWORD *)v114 + 6);
      nullsub_39();
      a2 = (__int64 (__fastcall *)(__int64))&v141;
      v122 = 0;
      v141 = nullptr;
      v143 = 0;
      v142 = 0;
      v144 = 0;
      sub_6DBE0(v13, (__int64 *)&v141);
      v14 = *(__int64 (__fastcall **)(__int64))(*v13 + 64);
      v15 = v14 == sub_1341E0 ? (*(__int64 (__fastcall **)(__int64 *))(*v13 + 56))(v13) : v14((__int64)v121);
      if ( v15 <= 0 )
        break;
      v16 = 0;
      v107 = v15;
      while ( 2 )
      {
        while ( 1 )
        {
          if ( v16 < (unsigned __int64)v142 )
          {
            v120 = *((_DWORD *)v141 + v16);
            if ( v120 != -1 )
            {
              a2 = sub_134210;
              v17 = *(__int64 (__fastcall **)(__int64))(*v121 + 88);
              v18 = v17 == sub_134210 ? (*(__int64 (**)(void))(*v121 + 56))() - 1 : v17((__int64)v121);
              if ( v120 != v18 )
              {
                v19 = v120;
                v118 = *(_QWORD *)(*(_QWORD *)(v121[5] + 528) + 8LL * v120);
                v20 = v118;
                v116 = (unsigned int *)(v118 + 120);
                if ( !(unsigned __int8)sub_64880((_QWORD *)(v118 + 120)) || *(_QWORD *)(v20 + 144) )
                  break;
              }
            }
          }
LABEL_14:
          if ( v107 == ++v16 )
            goto LABEL_141;
        }
        if ( !*(_QWORD *)(v118 + 48) )
        {
          if ( i <= 0 )
          {
            if ( !under_debugger )
              sub_383060(50552);
            goto LABEL_209;
          }
          goto LABEL_14;
        }
        v21 = *(_QWORD *)v117 + 24 * v19;
        v22 = *(unsigned __int64 **)v21;
        v109 = (unsigned __int64 **)v21;
        if ( v22 )
        {
          v23 = *(_QWORD *)(v21 + 8);
          if ( v23 )
          {
            v24 = (unsigned __int64 *)v22[1];
            v23 = 0;
            v25 = v22 == v24;
            v22 = nullptr;
            if ( !v25 )
            {
              v115 = v135;
              while ( 1 )
              {
                v26 = sub_174A50(v121[5], (__int64)(v24 + 3), v118);
                if ( v26 )
                  break;
LABEL_32:
                if ( (*v24 & 2) == 0 )
                {
                  v30 = (unsigned __int64 *)v24[2];
                  if ( (*(_BYTE *)v30 & 2) != 0 )
                  {
                    v68 = (unsigned __int64 *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
                    v69 = *v68;
                    if ( (*v68 & 2) == 0 )
                    {
                      while ( (unsigned __int64 *)v68[2] == v24 )
                      {
                        v24 = v68;
                        v70 = v69 & 0xFFFFFFFFFFFFFFFCLL;
                        v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v69 & 2) != 0 )
                        {
                          v24 = (unsigned __int64 *)v70;
                          goto LABEL_35;
                        }
                        v68 = (unsigned __int64 *)v70;
                      }
                    }
                    v24 = v68;
                  }
                  else
                  {
                    do
                    {
                      v24 = v30;
                      v30 = (unsigned __int64 *)v30[1];
                    }
                    while ( (*(_BYTE *)v30 & 2) == 0 );
                  }
                }
LABEL_35:
                if ( *v109 == v24 )
                  goto LABEL_36;
              }
              v27 = *(_DWORD *)v24[3];
              v138[0] = v115;
              LODWORD(v135[0]) = v27;
              if ( v22 )
              {
                if ( v23 )
                {
                  v29 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (*(_BYTE *)v29 & 2) != 0 )
                  {
                    v29 = (unsigned __int64)v22;
                    v76 = 1;
                  }
                  else
                  {
                    v73 = v26;
                    v74 = v27 <= *(_DWORD *)(v29 + 24);
                    if ( v27 >= *(_DWORD *)(v29 + 24) )
                      goto LABEL_121;
LABEL_119:
                    v75 = *(_QWORD *)(v29 + 8);
                    v73 = v26;
                    if ( (*(_BYTE *)v75 & 2) == 0 )
                    {
                      while ( 1 )
                      {
                        v29 = v75;
                        v74 = v27 <= *(_DWORD *)(v75 + 24);
                        if ( v27 < *(_DWORD *)(v75 + 24) )
                          goto LABEL_119;
LABEL_121:
                        if ( v74 )
                          break;
                        v75 = *(_QWORD *)(v29 + 16);
                        v73 = 0;
                        if ( (*(_BYTE *)v75 & 2) != 0 )
                          goto LABEL_123;
                      }
                      if ( v29 )
                      {
LABEL_31:
                        sub_103D60((__int64)(v24 + 3), v121[5], v29 + 32);
                        goto LABEL_32;
                      }
                    }
LABEL_123:
                    v76 = v73;
                  }
                  v125.m128i_i64[0] = (__int64)v22;
                  v125.m128i_i64[1] = v23;
                  v108 = &v125;
                  v79 = sub_148FF0(&v125, (unsigned __int64 *)v29, v76, v138);
                  v23 = v125.m128i_i64[1];
                  v22 = (unsigned __int64 *)v125.m128i_i64[0];
                  v29 = v79;
                  goto LABEL_31;
                }
              }
              else
              {
                v81 = qalloc();
                v22 = (unsigned __int64 *)v81;
                v82 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v81, (__m128i)(unsigned __int64)v81);
                if ( !v81 )
                {
                  exception = __cxa_allocate_exception(8u);
                  *exception = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                *(_QWORD *)(v81 + 64) = 0;
                *(_OWORD *)(v81 + 16) = 0;
                *(_OWORD *)(v81 + 32) = 0;
                *(_OWORD *)(v81 + 48) = 0;
                *(__m128i *)(v81 + 8) = v82;
                *(_QWORD *)v81 = v81 & 0xFFFFFFFFFFFFFFFCLL | 2;
              }
              v125.m128i_i64[0] = (__int64)v22;
              v125.m128i_i64[1] = v23;
              v108 = &v125;
              v28 = sub_148FF0(&v125, v22, 1, v138);
              v23 = v125.m128i_i64[1];
              v22 = (unsigned __int64 *)v125.m128i_i64[0];
              v29 = v28;
              goto LABEL_31;
            }
          }
          else
          {
            v22 = nullptr;
          }
        }
        else
        {
          v23 = 0;
        }
LABEL_36:
        v31 = v116;
        v126[0] = 0;
        v104 = v129;
        v126[1] = 0;
        v127 = 0;
        v128 = 0;
        sub_64000(v129, (__int64)v116);
        v130 = nullptr;
        v131 = 0;
        v34 = *(_QWORD *)(v118 + 144);
        if ( v34 )
        {
          v130 = (void *)qalloc_or_throw(16 * v34, (__int64)v31, v32, v33);
          *((_QWORD *)&v131 + 1) = v34;
          memcpy(v130, *(const void **)(v118 + 136), 16 * v34);
          *(_QWORD *)&v131 = v34;
        }
        v111 = 0;
        v105 = &v132;
        v35 = *(unsigned int **)(v118 + 48);
        v106 = &v124;
        v116 = v35;
        if ( !v35 )
          goto LABEL_45;
        while ( (!(unsigned __int8)sub_64880(v104) || (_QWORD)v131) && !v122 )
        {
          sub_124680((__int64)v105, v118, (__int64)v116, 0);
          v43 = v105;
          sub_64700(v105, v104);
          sub_3180C0(&v133, &v130);
          if ( (unsigned __int8)sub_64880(v43) && !v134.m128i_i64[0] )
          {
            v112 = v138;
            goto LABEL_85;
          }
          v46 = *v109;
          if ( !*v109 )
            goto LABEL_84;
          if ( !v109[1] )
            goto LABEL_84;
          v113 = (unsigned __int64 *)v46[1];
          if ( v46 == v113 )
            goto LABEL_84;
          while ( 2 )
          {
            v47 = v121[5];
            v112 = (int **)(v113 + 3);
            v103.m128i_i8[0] = sub_174A50(v47, (__int64)(v113 + 3), v118);
            if ( !v103.m128i_i8[0] )
              goto LABEL_100;
            v135[0] = 0;
            v48 = v121[5];
            v115 = v135;
            v135[1] = 0;
            v136 = 0;
            v137 = 0;
            sub_103D60((__int64)v112, v48, (__int64)v135);
            if ( !(unsigned __int8)sub_64780(v105, v115) && !(unsigned __int8)sub_318470(&v133, &v136) )
            {
              if ( v136 )
              {
                *(_QWORD *)&v137 = 0;
                qfree(v136);
              }
              goto LABEL_99;
            }
            v123 = **v112;
            v112 = (int **)&v123;
            while ( 2 )
            {
              v124 = v112;
              if ( !v22 )
              {
                v71 = qalloc();
                v22 = (unsigned __int64 *)v71;
                v72 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)v71);
                if ( !v71 )
                {
                  v6 = __cxa_allocate_exception(8u);
                  *v6 = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    v6,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                *(_QWORD *)(v71 + 64) = 0;
                *(_OWORD *)(v71 + 16) = 0;
                *(_OWORD *)(v71 + 32) = 0;
                *(_OWORD *)(v71 + 48) = 0;
                *(__m128i *)(v71 + 8) = v72;
                *(_QWORD *)v71 = v71 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_68:
                v125.m128i_i64[0] = (__int64)v22;
                v125.m128i_i64[1] = v23;
                v108 = &v125;
                v49 = sub_148FF0(&v125, v22, 1, (_DWORD **)v106);
LABEL_69:
                v23 = v125.m128i_i64[1];
                v22 = (unsigned __int64 *)v125.m128i_i64[0];
                v50 = v123;
                goto LABEL_70;
              }
              if ( !v23 )
                goto LABEL_68;
              v49 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (*(_BYTE *)v49 & 2) != 0 )
              {
                v49 = (unsigned __int64)v22;
                v55 = 1;
LABEL_105:
                v125.m128i_i64[0] = (__int64)v22;
                v125.m128i_i64[1] = v23;
                v108 = &v125;
                v49 = sub_148FF0(&v125, (unsigned __int64 *)v49, v55, (_DWORD **)&v124);
                goto LABEL_69;
              }
              v50 = v123;
              v52 = v103.m128i_i8[0];
              v53 = v123 <= *(_DWORD *)(v49 + 24);
              if ( v123 < *(_DWORD *)(v49 + 24) )
                goto LABEL_76;
              while ( !v53 )
              {
                v54 = *(_QWORD *)(v49 + 16);
                v52 = 0;
                if ( (*(_BYTE *)v54 & 2) != 0 )
                  goto LABEL_80;
                while ( 1 )
                {
                  v49 = v54;
                  v53 = v123 <= *(_DWORD *)(v54 + 24);
                  if ( v123 >= *(_DWORD *)(v54 + 24) )
                    break;
LABEL_76:
                  v54 = *(_QWORD *)(v49 + 8);
                  v52 = v103.m128i_i8[0];
                  if ( (*(_BYTE *)v54 & 2) != 0 )
                    goto LABEL_80;
                }
              }
              if ( !v49 )
              {
LABEL_80:
                v55 = v52;
                goto LABEL_105;
              }
LABEL_70:
              v51 = sub_1808B0(v121, (size_t)v115, v120, v116, v50, v114, v117, v49 + 32, v126, v119, &v122);
              if ( v51 == -2 )
              {
                ++v111;
                continue;
              }
              break;
            }
            v111 += v51;
            if ( v51 <= 0 )
              goto LABEL_97;
            v112 = v138;
            sub_124680((__int64)v138, v118, (__int64)v116, 0);
            sub_648D0(v105, (__int64 *)v112);
            v63 = v139;
            v139 = 0;
            v64 = _mm_loadu_si128(&v140);
            v140 = 0;
            if ( v133 )
            {
              v108 = (__m128i *)v63;
              v103 = v64;
              v134.m128i_i64[0] = 0;
              qfree(v133);
              v65 = _mm_load_si128(&v103);
              v133 = (__int64)v108;
              v134 = v65;
              if ( v139 )
              {
                v140.m128i_i64[0] = 0;
                qfree(v139);
              }
            }
            else
            {
              v133 = v63;
              v134 = v64;
            }
            qfree((__int64)v138[0]);
            sub_64700(v105, v104);
            sub_3180C0(&v133, &v130);
            if ( !(unsigned __int8)sub_64880(v105) || v134.m128i_i64[0] )
            {
LABEL_97:
              if ( v136 )
              {
                *(_QWORD *)&v137 = 0;
                qfree(v136);
              }
LABEL_99:
              qfree(v135[0]);
LABEL_100:
              if ( (*v113 & 2) == 0 )
              {
                v66 = (unsigned __int64 *)v113[2];
                if ( (*(_BYTE *)v66 & 2) != 0 )
                {
                  v56 = (unsigned __int64 *)(*v113 & 0xFFFFFFFFFFFFFFFCLL);
                  v57 = *v56;
                  if ( (*v56 & 2) == 0 )
                  {
                    v77 = v113;
                    while ( (unsigned __int64 *)v56[2] == v77 )
                    {
                      v77 = v56;
                      v78 = v57 & 0xFFFFFFFFFFFFFFFCLL;
                      v57 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v57 & 2) != 0 )
                      {
                        v113 = (unsigned __int64 *)v78;
                        goto LABEL_83;
                      }
                      v56 = (unsigned __int64 *)v78;
                    }
                  }
                  v113 = v56;
                }
                else
                {
                  do
                  {
                    v67 = v66;
                    v66 = (unsigned __int64 *)v66[1];
                  }
                  while ( (*(_BYTE *)v66 & 2) == 0 );
                  v113 = v67;
                }
              }
LABEL_83:
              if ( *v109 == v113 )
              {
LABEL_84:
                v112 = v138;
                goto LABEL_85;
              }
              continue;
            }
            break;
          }
          if ( v136 )
          {
            *(_QWORD *)&v137 = 0;
            qfree(v136);
          }
          qfree(v135[0]);
LABEL_85:
          v58 = (__int64 *)v112;
          sub_127A20((__int64)v112, v118, (__int64)v116, 1, v44, v45);
          v112 = (int **)v58;
          sub_64640(v104, v58, v59, v60, v61, v62);
          sub_317C60(&v130, &v139);
          sub_64280(v126, (__int64 *)v112);
          sub_316CB0(&v127, &v139);
          if ( v139 )
          {
            v140.m128i_i64[0] = 0;
            qfree(v139);
          }
          qfree((__int64)v138[0]);
          if ( v133 )
          {
            v134.m128i_i64[0] = 0;
            qfree(v133);
          }
          qfree(v132);
          v116 = *((unsigned int **)v116 + 1);
          if ( v116 )
            continue;
          break;
        }
        if ( v111 )
        {
          v39 = v118;
          v40 = *(_DWORD *)(v118 + 24);
          v120 = v40;
          BYTE1(v40) &= ~2u;
          LOBYTE(v40) = v40 | 0x80;
          *(_DWORD *)(v118 + 24) = v40;
          v41 = v121[5];
          if ( (*(_BYTE *)(v41 + 1) & 8) != 0 && *(char *)(*(_QWORD *)(v39 + 48) + 4LL) >= 0 && *(int *)(v39 + 352) > 0 )
          {
            v91 = 0;
            while ( 1 )
            {
              v92 = *(unsigned int *)(*(_QWORD *)(v118 + 344) + 4 * v91);
              if ( (unsigned int)v92 >= *(_DWORD *)(v41 + 64) )
                break;
              v93 = *(_QWORD *)(v41 + 528);
              v94 = *(_QWORD **)(v93 + 8 * v92);
              v95 = v94[7];
              v96 = sub_13B260(v94, v95, v93, v36, v37, v38);
              if ( v118 == v96 )
                sub_13B6E0(v94, v95, v97, v36, v37, v38);
              if ( *(_DWORD *)(v118 + 352) <= (int)++v91 )
                goto LABEL_44;
              v41 = v121[5];
            }
            if ( !under_debugger )
              sub_383060(52719);
LABEL_209:
            BUG();
          }
LABEL_44:
          sub_A2520(v118, (__int64)"global propagate result");
        }
LABEL_45:
        a2 = (__int64 (__fastcall *)(__int64))v117;
        v42 = sub_194A80(v118, v117, v114);
        i += v111 + v42;
        if ( v130 )
        {
          *(_QWORD *)&v131 = 0;
          qfree((__int64)v130);
        }
        qfree(v129[0]);
        if ( v127 )
        {
          *(_QWORD *)&v128 = 0;
          qfree(v127);
        }
        qfree(v126[0]);
        if ( v22 )
        {
          if ( v23 )
          {
            v83 = *v22;
            v84 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (*(_BYTE *)v84 & 2) == 0 )
            {
              v85 = v84[1];
              if ( (*(_BYTE *)v85 & 2) != 0 )
              {
                v88 = v84[2];
                if ( (*(_BYTE *)v88 & 2) == 0 )
                  goto LABEL_165;
LABEL_183:
                v98 = v84[6];
                if ( v98 )
                {
                  v84[7] = 0;
                  qfree(v98);
                }
                qfree(v84[4]);
                *v84 |= 2uLL;
                goto LABEL_172;
              }
              v86 = *(_BYTE **)(v85 + 8);
              if ( (*v86 & 2) != 0 )
              {
                v87 = *(_BYTE **)(v85 + 16);
                if ( (*v87 & 2) == 0 )
                {
LABEL_160:
                  sub_174000((__int64)v87);
                  goto LABEL_161;
                }
LABEL_192:
                v100 = *(_QWORD *)(v85 + 48);
                if ( v100 )
                {
                  *(_QWORD *)(v85 + 56) = 0;
                  qfree(v100);
                }
                qfree(*(_QWORD *)(v85 + 32));
                *(_QWORD *)v85 |= 2uLL;
                goto LABEL_162;
              }
              sub_174000((__int64)v86);
              v87 = *(_BYTE **)(v85 + 16);
              if ( (*v87 & 2) == 0 )
                goto LABEL_160;
LABEL_161:
              if ( (*(_BYTE *)v85 & 2) == 0 )
                goto LABEL_192;
LABEL_162:
              if ( v85 )
                qfree(v85);
              v88 = v84[2];
              if ( (*(_BYTE *)v88 & 2) == 0 )
              {
LABEL_165:
                v89 = *(_BYTE **)(v88 + 8);
                if ( (*v89 & 2) != 0 )
                {
                  v90 = *(_BYTE **)(v88 + 16);
                  if ( (*v90 & 2) == 0 )
                  {
LABEL_167:
                    sub_174000((__int64)v90);
                    goto LABEL_168;
                  }
LABEL_196:
                  v101 = *(_QWORD *)(v88 + 48);
                  if ( v101 )
                  {
                    *(_QWORD *)(v88 + 56) = 0;
                    qfree(v101);
                  }
                  qfree(*(_QWORD *)(v88 + 32));
                  *(_QWORD *)v88 |= 2uLL;
                  goto LABEL_169;
                }
                sub_174000((__int64)v89);
                v90 = *(_BYTE **)(v88 + 16);
                if ( (*v90 & 2) == 0 )
                  goto LABEL_167;
LABEL_168:
                if ( (*(_BYTE *)v88 & 2) == 0 )
                  goto LABEL_196;
LABEL_169:
                if ( v88 )
                  qfree(v88);
              }
              if ( (*(_BYTE *)v84 & 2) == 0 )
                goto LABEL_183;
LABEL_172:
              if ( v83 > 3 )
                qfree((__int64)v84);
            }
          }
          qfree((__int64)v22);
        }
        if ( v107 != ++v16 )
        {
          if ( v122 )
            goto LABEL_54;
          continue;
        }
        break;
      }
      if ( !v122 )
        break;
LABEL_54:
      if ( v143 )
      {
        *(_QWORD *)&v144 = 0;
        qfree(v143);
      }
      if ( v141 )
      {
        *(_QWORD *)&v142 = 0;
        qfree((__int64)v141);
      }
      sub_104E10((__int64)v114);
      sub_104E10(v117);
    }
LABEL_141:
    if ( i || !(_BYTE)v119 )
      break;
    if ( v143 )
    {
      *(_QWORD *)&v144 = 0;
      qfree(v143);
    }
    if ( v141 )
    {
      *(_QWORD *)&v142 = 0;
      qfree((__int64)v141);
    }
    sub_104E10((__int64)v114);
    sub_104E10(v117);
  }
  if ( v143 )
  {
    *(_QWORD *)&v144 = 0;
    qfree(v143);
  }
  if ( v141 )
  {
    *(_QWORD *)&v142 = 0;
    qfree((__int64)v141);
  }
  sub_104E10((__int64)v114);
  sub_104E10(v117);
  return (unsigned int)i;
}
