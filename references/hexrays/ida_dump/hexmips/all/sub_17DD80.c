__int64 __fastcall sub_17DD80(
        __int64 *a1,
        __int64 (__fastcall *a2)(__int64 a1),
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
  __int64 v31; // r12
  unsigned int *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 *v40; // r12
  unsigned __int64 *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  int v45; // r8d
  int v46; // eax
  __int8 v47; // cl
  bool v48; // cc
  unsigned __int64 v49; // rdx
  char v50; // dl
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  __int64 *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // r9d
  __m128i *v58; // rax
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  unsigned __int64 *v61; // rdx
  unsigned __int64 *v62; // rax
  unsigned __int64 *v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  __m128i v67; // xmm1
  char v68; // di
  bool v69; // cc
  unsigned __int64 v70; // rcx
  char v71; // dl
  unsigned __int64 *v72; // rsi
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  __m128i v77; // xmm1
  unsigned __int64 v78; // r13
  _QWORD *v79; // r12
  __int64 v80; // r15
  _BYTE *v81; // rdi
  _BYTE *v82; // rdi
  __int64 v83; // r15
  _BYTE *v84; // rdi
  _BYTE *v85; // rdi
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rdx
  _QWORD *v89; // r13
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rdi
  __int64 v95; // rdi
  __int64 v96; // rdi
  char v97; // [rsp+Fh] [rbp-221h]
  __m128i v98; // [rsp+20h] [rbp-210h] BYREF
  __int64 *v99; // [rsp+30h] [rbp-200h]
  __int64 *v100; // [rsp+38h] [rbp-1F8h]
  int ***v101; // [rsp+40h] [rbp-1F0h]
  __int64 v102; // [rsp+48h] [rbp-1E8h]
  __m128i *v103; // [rsp+50h] [rbp-1E0h]
  unsigned __int64 **v104; // [rsp+58h] [rbp-1D8h]
  int i; // [rsp+60h] [rbp-1D0h]
  int v106; // [rsp+64h] [rbp-1CCh]
  int **v107; // [rsp+68h] [rbp-1C8h]
  unsigned __int64 *v108; // [rsp+70h] [rbp-1C0h]
  _QWORD *v109; // [rsp+78h] [rbp-1B8h]
  _QWORD *v110; // [rsp+80h] [rbp-1B0h]
  unsigned int *v111; // [rsp+88h] [rbp-1A8h]
  __int64 v112; // [rsp+90h] [rbp-1A0h]
  __int64 v113; // [rsp+98h] [rbp-198h]
  int v114; // [rsp+A0h] [rbp-190h]
  int v115; // [rsp+A4h] [rbp-18Ch]
  __int64 *v116; // [rsp+A8h] [rbp-188h]
  char v117; // [rsp+B3h] [rbp-17Dh] BYREF
  int v118; // [rsp+B4h] [rbp-17Ch] BYREF
  int **v119; // [rsp+B8h] [rbp-178h] BYREF
  __m128i v120; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v121[2]; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v122; // [rsp+E0h] [rbp-150h] BYREF
  __int128 v123; // [rsp+E8h] [rbp-148h]
  __int64 v124[2]; // [rsp+100h] [rbp-130h] BYREF
  void *v125; // [rsp+110h] [rbp-120h] BYREF
  __int128 v126; // [rsp+118h] [rbp-118h]
  __int64 v127; // [rsp+130h] [rbp-100h] BYREF
  __m128i *v128; // [rsp+140h] [rbp-F0h] BYREF
  __m128i v129; // [rsp+148h] [rbp-E8h]
  _QWORD v130[2]; // [rsp+160h] [rbp-D0h] BYREF
  __int64 v131; // [rsp+170h] [rbp-C0h] BYREF
  __int128 v132; // [rsp+178h] [rbp-B8h]
  _DWORD *v133[2]; // [rsp+190h] [rbp-A0h] BYREF
  __m128i *v134; // [rsp+1A0h] [rbp-90h] BYREF
  __m128i v135; // [rsp+1A8h] [rbp-88h] BYREF
  __int64 (__fastcall **v136)(); // [rsp+1C0h] [rbp-70h] BYREF
  __int128 v137; // [rsp+1C8h] [rbp-68h]
  __int64 v138; // [rsp+1D8h] [rbp-58h]
  __int128 v139; // [rsp+1E0h] [rbp-50h]
  unsigned __int64 v140; // [rsp+1F8h] [rbp-38h]

  v116 = a1;
  v97 = (char)a2;
  v140 = __readfsqword(0x28u);
  for ( i = 0; ; i = 0 )
  {
    while ( 1 )
    {
      v8 = (__int64 *)v116[5];
      if ( v97 )
      {
        if ( (unsigned int)sub_13FF30(v8, nullptr, 0, a4, a5, a6) )
        {
          if ( !under_debugger )
            sub_37E160(50551);
          goto LABEL_209;
        }
      }
      else
      {
        sub_135990((__int64)v8, (__int64)a2, a3, a4, a5, a6);
      }
      v9 = (int *)v116[5];
      v10 = *v9;
      v114 = *v9 & 0x1000;
      if ( v114 )
      {
        v114 = 0;
        if ( (v10 & 0x2000) == 0 )
        {
          BYTE1(v10) |= 0x20u;
          *v9 = v10;
          v137 = 0u;
          v75 = v116[5];
          v138 = 0;
          *(_QWORD *)&v139 = 0;
          v136 = &off_4BE7C0;
          v114 = sub_11B7E0(v75, (__int64 *)&v136) != 0;
        }
      }
      v112 = sub_10C140((__int64)v116, v114);
      if ( !v112 )
      {
        if ( !under_debugger )
          sub_37E160(50446);
        goto LABEL_209;
      }
      v11 = v114;
      v12 = v116;
      ++*(_DWORD *)(v112 + 24);
      v109 = (_QWORD *)sub_10C6E0((__int64)v12, v11);
      if ( !v109 )
      {
        if ( !under_debugger )
          sub_37E160(50446);
        goto LABEL_209;
      }
      v13 = v116;
      ++*((_DWORD *)v109 + 6);
      nullsub_39();
      a2 = (__int64 (__fastcall *)(__int64))&v136;
      v117 = 0;
      v136 = nullptr;
      v138 = 0;
      v137 = 0;
      v139 = 0;
      sub_699E0(v13, (__int64 *)&v136);
      v14 = *(__int64 (__fastcall **)(__int64))(*v13 + 64);
      v15 = v14 == sub_12FFE0 ? (*(__int64 (__fastcall **)(__int64 *))(*v13 + 56))(v13) : v14((__int64)v116);
      if ( v15 <= 0 )
        break;
      v16 = 0;
      v102 = v15;
      while ( 2 )
      {
        while ( 1 )
        {
          if ( v16 < (unsigned __int64)v137 )
          {
            v115 = *((_DWORD *)v136 + v16);
            if ( v115 != -1 )
            {
              a2 = sub_130010;
              v17 = *(__int64 (__fastcall **)(__int64))(*v116 + 88);
              v18 = v17 == sub_130010 ? (*(__int64 (**)(void))(*v116 + 56))() - 1 : v17((__int64)v116);
              if ( v115 != v18 )
              {
                v19 = v115;
                v113 = *(_QWORD *)(*(_QWORD *)(v116[5] + 528) + 8LL * v115);
                v20 = v113;
                v111 = (unsigned int *)(v113 + 120);
                if ( !(unsigned __int8)sub_60680((_QWORD *)(v113 + 120)) || *(_QWORD *)(v20 + 144) )
                  break;
              }
            }
          }
LABEL_14:
          if ( v102 == ++v16 )
            goto LABEL_141;
        }
        if ( !*(_QWORD *)(v113 + 48) )
        {
          if ( i <= 0 )
          {
            if ( !under_debugger )
              sub_37E160(50552);
            goto LABEL_209;
          }
          goto LABEL_14;
        }
        v21 = *(_QWORD *)v112 + 24 * v19;
        v22 = *(unsigned __int64 **)v21;
        v104 = (unsigned __int64 **)v21;
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
              v110 = v130;
              while ( 1 )
              {
                v26 = sub_170850(v116[5], (__int64)(v24 + 3), v113);
                if ( v26 )
                  break;
LABEL_32:
                if ( (*v24 & 2) == 0 )
                {
                  v30 = (unsigned __int64 *)v24[2];
                  if ( (*(_BYTE *)v30 & 2) != 0 )
                  {
                    v63 = (unsigned __int64 *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
                    v64 = *v63;
                    if ( (*v63 & 2) == 0 )
                    {
                      while ( (unsigned __int64 *)v63[2] == v24 )
                      {
                        v24 = v63;
                        v65 = v64 & 0xFFFFFFFFFFFFFFFCLL;
                        v64 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v64 & 2) != 0 )
                        {
                          v24 = (unsigned __int64 *)v65;
                          goto LABEL_35;
                        }
                        v63 = (unsigned __int64 *)v65;
                      }
                    }
                    v24 = v63;
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
                if ( *v104 == v24 )
                  goto LABEL_36;
              }
              v27 = *(_DWORD *)v24[3];
              v133[0] = v110;
              LODWORD(v130[0]) = v27;
              if ( v22 )
              {
                if ( v23 )
                {
                  v29 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (*(_BYTE *)v29 & 2) != 0 )
                  {
                    v29 = (unsigned __int64)v22;
                    v71 = 1;
                  }
                  else
                  {
                    v68 = v26;
                    v69 = v27 <= *(_DWORD *)(v29 + 24);
                    if ( v27 >= *(_DWORD *)(v29 + 24) )
                      goto LABEL_121;
LABEL_119:
                    v70 = *(_QWORD *)(v29 + 8);
                    v68 = v26;
                    if ( (*(_BYTE *)v70 & 2) == 0 )
                    {
                      while ( 1 )
                      {
                        v29 = v70;
                        v69 = v27 <= *(_DWORD *)(v70 + 24);
                        if ( v27 < *(_DWORD *)(v70 + 24) )
                          goto LABEL_119;
LABEL_121:
                        if ( v69 )
                          break;
                        v70 = *(_QWORD *)(v29 + 16);
                        v68 = 0;
                        if ( (*(_BYTE *)v70 & 2) != 0 )
                          goto LABEL_123;
                      }
                      if ( v29 )
                      {
LABEL_31:
                        sub_FFB60((__int64)(v24 + 3), v116[5], v29 + 32);
                        goto LABEL_32;
                      }
                    }
LABEL_123:
                    v71 = v68;
                  }
                  v120.m128i_i64[0] = (__int64)v22;
                  v120.m128i_i64[1] = v23;
                  v103 = &v120;
                  v74 = sub_144DF0(&v120, (unsigned __int64 *)v29, v71, v133);
                  v23 = v120.m128i_i64[1];
                  v22 = (unsigned __int64 *)v120.m128i_i64[0];
                  v29 = v74;
                  goto LABEL_31;
                }
              }
              else
              {
                v76 = qalloc(72);
                v22 = (unsigned __int64 *)v76;
                v77 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v76, (__m128i)(unsigned __int64)v76);
                if ( !v76 )
                {
                  exception = __cxa_allocate_exception(8u);
                  *exception = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                *(_QWORD *)(v76 + 64) = 0;
                *(_OWORD *)(v76 + 16) = 0;
                *(_OWORD *)(v76 + 32) = 0;
                *(_OWORD *)(v76 + 48) = 0;
                *(__m128i *)(v76 + 8) = v77;
                *(_QWORD *)v76 = v76 & 0xFFFFFFFFFFFFFFFCLL | 2;
              }
              v120.m128i_i64[0] = (__int64)v22;
              v120.m128i_i64[1] = v23;
              v103 = &v120;
              v28 = sub_144DF0(&v120, v22, 1, v133);
              v23 = v120.m128i_i64[1];
              v22 = (unsigned __int64 *)v120.m128i_i64[0];
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
        v121[0] = 0;
        v99 = v124;
        v121[1] = 0;
        v122 = 0;
        v123 = 0;
        sub_5FE00(v124, (__int64)v111);
        v125 = nullptr;
        v126 = 0;
        v31 = *(_QWORD *)(v113 + 144);
        if ( v31 )
        {
          v125 = (void *)qalloc_or_throw(16 * v31);
          *((_QWORD *)&v126 + 1) = v31;
          memcpy(v125, *(const void **)(v113 + 136), 16 * v31);
          *(_QWORD *)&v126 = v31;
        }
        v106 = 0;
        v100 = &v127;
        v32 = *(unsigned int **)(v113 + 48);
        v101 = &v119;
        v111 = v32;
        if ( !v32 )
          goto LABEL_45;
        while ( (!(unsigned __int8)sub_60680(v99) || (_QWORD)v126) && !v117 )
        {
          sub_120480((__int64)v100, v113, (__int64)v111, 0);
          v40 = v100;
          sub_60500(v100, v99);
          sub_313340(&v128, &v125);
          if ( (unsigned __int8)sub_60680(v40) && !v129.m128i_i64[0] )
          {
            v107 = v133;
            goto LABEL_85;
          }
          v41 = *v104;
          if ( !*v104 )
            goto LABEL_84;
          if ( !v104[1] )
            goto LABEL_84;
          v108 = (unsigned __int64 *)v41[1];
          if ( v41 == v108 )
            goto LABEL_84;
          while ( 2 )
          {
            v42 = v116[5];
            v107 = (int **)(v108 + 3);
            v98.m128i_i8[0] = sub_170850(v42, (__int64)(v108 + 3), v113);
            if ( !v98.m128i_i8[0] )
              goto LABEL_100;
            v130[0] = 0;
            v43 = v116[5];
            v110 = v130;
            v130[1] = 0;
            v131 = 0;
            v132 = 0;
            sub_FFB60((__int64)v107, v43, (__int64)v130);
            if ( !(unsigned __int8)sub_60580(v100, v110) && !(unsigned __int8)sub_3136F0(&v128, &v131) )
            {
              if ( v131 )
              {
                *(_QWORD *)&v132 = 0;
                qfree(v131);
              }
              goto LABEL_99;
            }
            v118 = **v107;
            v107 = (int **)&v118;
            while ( 2 )
            {
              v119 = v107;
              if ( !v22 )
              {
                v66 = qalloc(72);
                v22 = (unsigned __int64 *)v66;
                v67 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v66, (__m128i)(unsigned __int64)v66);
                if ( !v66 )
                {
                  v6 = __cxa_allocate_exception(8u);
                  *v6 = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    v6,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                *(_QWORD *)(v66 + 64) = 0;
                *(_OWORD *)(v66 + 16) = 0;
                *(_OWORD *)(v66 + 32) = 0;
                *(_OWORD *)(v66 + 48) = 0;
                *(__m128i *)(v66 + 8) = v67;
                *(_QWORD *)v66 = v66 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_68:
                v120.m128i_i64[0] = (__int64)v22;
                v120.m128i_i64[1] = v23;
                v103 = &v120;
                v44 = sub_144DF0(&v120, v22, 1, (_DWORD **)v101);
LABEL_69:
                v23 = v120.m128i_i64[1];
                v22 = (unsigned __int64 *)v120.m128i_i64[0];
                v45 = v118;
                goto LABEL_70;
              }
              if ( !v23 )
                goto LABEL_68;
              v44 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (*(_BYTE *)v44 & 2) != 0 )
              {
                v44 = (unsigned __int64)v22;
                v50 = 1;
LABEL_105:
                v120.m128i_i64[0] = (__int64)v22;
                v120.m128i_i64[1] = v23;
                v103 = &v120;
                v44 = sub_144DF0(&v120, (unsigned __int64 *)v44, v50, (_DWORD **)&v119);
                goto LABEL_69;
              }
              v45 = v118;
              v47 = v98.m128i_i8[0];
              v48 = v118 <= *(_DWORD *)(v44 + 24);
              if ( v118 < *(_DWORD *)(v44 + 24) )
                goto LABEL_76;
              while ( !v48 )
              {
                v49 = *(_QWORD *)(v44 + 16);
                v47 = 0;
                if ( (*(_BYTE *)v49 & 2) != 0 )
                  goto LABEL_80;
                while ( 1 )
                {
                  v44 = v49;
                  v48 = v118 <= *(_DWORD *)(v49 + 24);
                  if ( v118 >= *(_DWORD *)(v49 + 24) )
                    break;
LABEL_76:
                  v49 = *(_QWORD *)(v44 + 8);
                  v47 = v98.m128i_i8[0];
                  if ( (*(_BYTE *)v49 & 2) != 0 )
                    goto LABEL_80;
                }
              }
              if ( !v44 )
              {
LABEL_80:
                v50 = v47;
                goto LABEL_105;
              }
LABEL_70:
              v46 = sub_17C6B0(v116, (size_t)v110, v115, v111, v45, v109, v112, v44 + 32, v121, v114, &v117);
              if ( v46 == -2 )
              {
                ++v106;
                continue;
              }
              break;
            }
            v106 += v46;
            if ( v46 <= 0 )
              goto LABEL_97;
            v107 = v133;
            sub_120480((__int64)v133, v113, (__int64)v111, 0);
            sub_606D0(v100, (__int64 *)v107);
            v58 = v134;
            v134 = nullptr;
            v59 = _mm_loadu_si128(&v135);
            v135 = 0;
            if ( v128 )
            {
              v103 = v58;
              v98 = v59;
              v129.m128i_i64[0] = 0;
              qfree(v128);
              v60 = _mm_load_si128(&v98);
              v128 = v103;
              v129 = v60;
              if ( v134 )
              {
                v135.m128i_i64[0] = 0;
                qfree(v134);
              }
            }
            else
            {
              v128 = v58;
              v129 = v59;
            }
            qfree(v133[0]);
            sub_60500(v100, v99);
            sub_313340(&v128, &v125);
            if ( !(unsigned __int8)sub_60680(v100) || v129.m128i_i64[0] )
            {
LABEL_97:
              if ( v131 )
              {
                *(_QWORD *)&v132 = 0;
                qfree(v131);
              }
LABEL_99:
              qfree(v130[0]);
LABEL_100:
              if ( (*v108 & 2) == 0 )
              {
                v61 = (unsigned __int64 *)v108[2];
                if ( (*(_BYTE *)v61 & 2) != 0 )
                {
                  v51 = (unsigned __int64 *)(*v108 & 0xFFFFFFFFFFFFFFFCLL);
                  v52 = *v51;
                  if ( (*v51 & 2) == 0 )
                  {
                    v72 = v108;
                    while ( (unsigned __int64 *)v51[2] == v72 )
                    {
                      v72 = v51;
                      v73 = v52 & 0xFFFFFFFFFFFFFFFCLL;
                      v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v52 & 2) != 0 )
                      {
                        v108 = (unsigned __int64 *)v73;
                        goto LABEL_83;
                      }
                      v51 = (unsigned __int64 *)v73;
                    }
                  }
                  v108 = v51;
                }
                else
                {
                  do
                  {
                    v62 = v61;
                    v61 = (unsigned __int64 *)v61[1];
                  }
                  while ( (*(_BYTE *)v61 & 2) == 0 );
                  v108 = v62;
                }
              }
LABEL_83:
              if ( *v104 == v108 )
              {
LABEL_84:
                v107 = v133;
                goto LABEL_85;
              }
              continue;
            }
            break;
          }
          if ( v131 )
          {
            *(_QWORD *)&v132 = 0;
            qfree(v131);
          }
          qfree(v130[0]);
LABEL_85:
          v53 = (__int64 *)v107;
          sub_123820((__int64)v107, v113, (__int64)v111, 1u);
          v107 = (int **)v53;
          sub_60440(v99, v53, v54, v55, v56, v57);
          sub_312EE0(&v125, &v134);
          sub_60080(v121, (__int64 *)v107);
          sub_311F30(&v122, &v134);
          if ( v134 )
          {
            v135.m128i_i64[0] = 0;
            qfree(v134);
          }
          qfree(v133[0]);
          if ( v128 )
          {
            v129.m128i_i64[0] = 0;
            qfree(v128);
          }
          qfree(v127);
          v111 = *((unsigned int **)v111 + 1);
          if ( v111 )
            continue;
          break;
        }
        if ( v106 )
        {
          v36 = v113;
          v37 = *(_DWORD *)(v113 + 24);
          v115 = v37;
          BYTE1(v37) &= ~2u;
          LOBYTE(v37) = v37 | 0x80;
          *(_DWORD *)(v113 + 24) = v37;
          v38 = v116[5];
          if ( (*(_BYTE *)(v38 + 1) & 8) != 0 && *(char *)(*(_QWORD *)(v36 + 48) + 4LL) >= 0 && *(int *)(v36 + 352) > 0 )
          {
            v86 = 0;
            while ( 1 )
            {
              v87 = *(unsigned int *)(*(_QWORD *)(v113 + 344) + 4 * v86);
              if ( (unsigned int)v87 >= *(_DWORD *)(v38 + 64) )
                break;
              v88 = *(_QWORD *)(v38 + 528);
              v89 = *(_QWORD **)(v88 + 8 * v87);
              v90 = v89[7];
              v91 = sub_137060(v89, v90, v88, v33, v34, v35);
              if ( v113 == v91 )
                sub_1374E0(v89, v90, v92, v33, v34, v35);
              if ( *(_DWORD *)(v113 + 352) <= (int)++v86 )
                goto LABEL_44;
              v38 = v116[5];
            }
            if ( !under_debugger )
              sub_37E160(52719);
LABEL_209:
            BUG();
          }
LABEL_44:
          sub_9E320(v113, (__int64)"global propagate result");
        }
LABEL_45:
        a2 = (__int64 (__fastcall *)(__int64))v112;
        v39 = sub_190880(v113, v112, v109);
        i += v106 + v39;
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
        if ( v22 )
        {
          if ( v23 )
          {
            v78 = *v22;
            v79 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (*(_BYTE *)v79 & 2) == 0 )
            {
              v80 = v79[1];
              if ( (*(_BYTE *)v80 & 2) != 0 )
              {
                v83 = v79[2];
                if ( (*(_BYTE *)v83 & 2) == 0 )
                  goto LABEL_165;
LABEL_183:
                v93 = v79[6];
                if ( v93 )
                {
                  v79[7] = 0;
                  qfree(v93);
                }
                qfree(v79[4]);
                *v79 |= 2uLL;
                goto LABEL_172;
              }
              v81 = *(_BYTE **)(v80 + 8);
              if ( (*v81 & 2) != 0 )
              {
                v82 = *(_BYTE **)(v80 + 16);
                if ( (*v82 & 2) == 0 )
                {
LABEL_160:
                  sub_16FE00((__int64)v82);
                  goto LABEL_161;
                }
LABEL_192:
                v95 = *(_QWORD *)(v80 + 48);
                if ( v95 )
                {
                  *(_QWORD *)(v80 + 56) = 0;
                  qfree(v95);
                }
                qfree(*(_QWORD *)(v80 + 32));
                *(_QWORD *)v80 |= 2uLL;
                goto LABEL_162;
              }
              sub_16FE00((__int64)v81);
              v82 = *(_BYTE **)(v80 + 16);
              if ( (*v82 & 2) == 0 )
                goto LABEL_160;
LABEL_161:
              if ( (*(_BYTE *)v80 & 2) == 0 )
                goto LABEL_192;
LABEL_162:
              if ( v80 )
                qfree(v80);
              v83 = v79[2];
              if ( (*(_BYTE *)v83 & 2) == 0 )
              {
LABEL_165:
                v84 = *(_BYTE **)(v83 + 8);
                if ( (*v84 & 2) != 0 )
                {
                  v85 = *(_BYTE **)(v83 + 16);
                  if ( (*v85 & 2) == 0 )
                  {
LABEL_167:
                    sub_16FE00((__int64)v85);
                    goto LABEL_168;
                  }
LABEL_196:
                  v96 = *(_QWORD *)(v83 + 48);
                  if ( v96 )
                  {
                    *(_QWORD *)(v83 + 56) = 0;
                    qfree(v96);
                  }
                  qfree(*(_QWORD *)(v83 + 32));
                  *(_QWORD *)v83 |= 2uLL;
                  goto LABEL_169;
                }
                sub_16FE00((__int64)v84);
                v85 = *(_BYTE **)(v83 + 16);
                if ( (*v85 & 2) == 0 )
                  goto LABEL_167;
LABEL_168:
                if ( (*(_BYTE *)v83 & 2) == 0 )
                  goto LABEL_196;
LABEL_169:
                if ( v83 )
                  qfree(v83);
              }
              if ( (*(_BYTE *)v79 & 2) == 0 )
                goto LABEL_183;
LABEL_172:
              if ( v78 > 3 )
                qfree(v79);
            }
          }
          qfree(v22);
        }
        if ( v102 != ++v16 )
        {
          if ( v117 )
            goto LABEL_54;
          continue;
        }
        break;
      }
      if ( !v117 )
        break;
LABEL_54:
      if ( v138 )
      {
        *(_QWORD *)&v139 = 0;
        qfree(v138);
      }
      if ( v136 )
      {
        *(_QWORD *)&v137 = 0;
        qfree(v136);
      }
      sub_100C10((__int64)v109);
      sub_100C10(v112);
    }
LABEL_141:
    if ( i || !(_BYTE)v114 )
      break;
    if ( v138 )
    {
      *(_QWORD *)&v139 = 0;
      qfree(v138);
    }
    if ( v136 )
    {
      *(_QWORD *)&v137 = 0;
      qfree(v136);
    }
    sub_100C10((__int64)v109);
    sub_100C10(v112);
  }
  if ( v138 )
  {
    *(_QWORD *)&v139 = 0;
    qfree(v138);
  }
  if ( v136 )
  {
    *(_QWORD *)&v137 = 0;
    qfree(v136);
  }
  sub_100C10((__int64)v109);
  sub_100C10(v112);
  return (unsigned int)i;
}
