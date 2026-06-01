void *__fastcall sub_5C1DC0(__int64 a1, __int64 a2, double a3)
{
  char **exception; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebp
  _QWORD *v9; // rax
  __int64 v10; // rbp
  _QWORD *v11; // r14
  _OWORD *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 *v15; // r14
  char v16; // bp
  char v17; // al
  void *v18; // rax
  __int64 v19; // rsi
  void *v20; // r15
  unsigned int v21; // ecx
  void (__fastcall ***v22)(_QWORD); // rbx
  bool v23; // zf
  void (__fastcall ***v24)(_QWORD); // rbx
  __int64 v26; // rax
  unsigned int i; // ebp
  __int64 v28; // r12
  _DWORD **v29; // r13
  _DWORD **v30; // rbp
  _DWORD *v31; // r8
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // rcx
  unsigned int v37; // edi
  _DWORD *v38; // rax
  void *v39; // rax
  _DWORD *v40; // rsi
  __int64 v41; // rax
  int v42; // edi
  int v43; // edx
  size_t v44; // rcx
  size_t v45; // r9
  int v46; // edx
  __int64 v47; // rax
  size_t v48; // rsi
  size_t v49; // r14
  size_t v50; // r15
  _DWORD *v51; // rax
  _DWORD *v52; // rax
  __int64 v53; // rbp
  _DWORD *v54; // rax
  _DWORD *v55; // r12
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rbx
  void (__fastcall ***v59)(void *); // r12
  unsigned int v60; // r14d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rcx
  _DWORD **v64; // rax
  int v65; // eax
  void *v66; // rdi
  size_t v67; // r14
  __int64 v68; // rax
  __int64 v69; // r14
  _QWORD *v70; // rax
  _QWORD *v71; // rdx
  size_t v72; // rax
  char *v73; // r15
  __int64 v74; // rax
  char *v75; // r14
  __int64 v76; // rax
  __int64 v77; // rdx
  size_t v78; // rsi
  size_t v79; // rdx
  const void *v80; // rsi
  __int64 v81; // rax
  void *v82; // rdi
  __int64 v83; // rax
  _DWORD *v84; // rdx
  _DWORD *v85; // r15
  size_t v86; // r9
  size_t v87; // rbx
  void *v88; // rdi
  unsigned int v89; // eax
  int v90; // eax
  void *v91; // rdi
  unsigned int v92; // eax
  unsigned int v93; // r15d
  size_t v94; // r12
  __int64 v95; // rax
  __m128 *v96; // rax
  const __m128i *v97; // r14
  void *v98; // rcx
  _OWORD *v99; // rax
  __m128i *v100; // r13
  _OWORD *v101; // rax
  _OWORD *v102; // rax
  _OWORD *v103; // rax
  __m128i v104; // xmm0
  __int64 v105; // rax
  _QWORD *v106; // rax
  int v107; // eax
  unsigned int v108; // r14d
  __int64 v109; // rax
  size_t v110; // rcx
  void (__fastcall **v111)(void *); // rdx
  void *src; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v113; // [rsp+10h] [rbp-C8h]
  _DWORD *v114; // [rsp+18h] [rbp-C0h]
  char *v115; // [rsp+20h] [rbp-B8h]
  __int64 v116; // [rsp+28h] [rbp-B0h]
  unsigned int v117; // [rsp+34h] [rbp-A4h]
  void *v118; // [rsp+38h] [rbp-A0h]
  void *v119; // [rsp+40h] [rbp-98h]
  unsigned int v120; // [rsp+48h] [rbp-90h]
  int v121; // [rsp+4Ch] [rbp-8Ch]
  void *v122; // [rsp+50h] [rbp-88h]
  _DWORD *v123; // [rsp+58h] [rbp-80h]
  _DWORD *v124; // [rsp+60h] [rbp-78h]
  size_t v125; // [rsp+68h] [rbp-70h]
  __int64 v126[11]; // [rsp+80h] [rbp-58h] BYREF

  v5 = a1;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= *(_DWORD *)(v6 - 4) )
      {
LABEL_6:
        v7 = *(_QWORD *)(v5 + 24);
        goto LABEL_7;
      }
      if ( (unsigned __int8)sub_62FDE0(v7 + 656) )
        return nullptr;
      v6 = *(_QWORD *)(a2 + 24);
      ++v8;
      if ( !v6 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_7:
    v118 = nullptr;
    if ( (unsigned __int8)sub_64AF30(v7) )
    {
      v96 = (__m128 *)sub_186B270(0x340u);
      v97 = *(const __m128i **)(v5 + 24);
      v118 = v96;
      v96->m128_u64[0] = (unsigned __int64)&off_1C524C8;
      v98 = (void *)v97->m128i_i64[0];
      v96->m128_i32[2] = 0;
      v96[3].m128_u64[0] = 0;
      src = v98;
      v96[3].m128_u64[1] = (unsigned __int64)v98;
      v96[4].m128_u64[0] = 0;
      v96[1] = _mm_loadh_ps((const double *)&src);
      v96[2] = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)&v97[41], (__m128i)(unsigned __int64)&v97[41]);
      v99 = (_OWORD *)sub_186B270(0x80u);
      v100 = (__m128i *)v118;
      *v99 = 0;
      v100[4].m128i_i64[1] = (__int64)v99;
      v100[5].m128i_i64[0] = 8;
      v100[5].m128i_i32[2] = 0;
      v99[1] = 0;
      v99[2] = 0;
      v99[3] = 0;
      v99[4] = 0;
      v99[5] = 0;
      v99[6] = 0;
      v99[7] = 0;
      v101 = (_OWORD *)sub_186B270(0x80u);
      v100[6].m128i_i64[0] = (__int64)v101;
      v100[6].m128i_i64[1] = 8;
      v100[7].m128i_i32[0] = 0;
      *v101 = 0;
      v101[1] = 0;
      v101[2] = 0;
      v101[3] = 0;
      v101[4] = 0;
      v101[5] = 0;
      v101[6] = 0;
      v101[7] = 0;
      v102 = (_OWORD *)sub_186B270(0x80u);
      v100[7].m128i_i64[1] = (__int64)v102;
      v100[8].m128i_i64[0] = 8;
      v100[8].m128i_i32[2] = 0;
      v100[9].m128i_i64[0] = 0;
      *v102 = 0;
      v102[1] = 0;
      v102[2] = 0;
      v102[3] = 0;
      v102[4] = 0;
      v102[5] = 0;
      v102[6] = 0;
      v102[7] = 0;
      v103 = (_OWORD *)sub_186B270(0x80u);
      v100[9].m128i_i64[1] = (__int64)v103;
      *v103 = 0;
      v103[1] = 0;
      v103[2] = 0;
      v103[3] = 0;
      v103[4] = 0;
      v103[5] = 0;
      v103[6] = 0;
      v103[7] = 0;
      v104 = _mm_loadl_epi64(v97);
      v100[10].m128i_i64[0] = 8;
      v100[10].m128i_i32[2] = 0;
      v100[12].m128i_i64[0] = (__int64)v97;
      v100[11] = _mm_unpacklo_epi64(v104, (__m128i)(unsigned __int64)&v97[41]);
      sub_5C8F60(&v100[12].m128i_u64[1], v97, 40000);
      sub_FA3A80(&v100[39], v100[11].m128i_i64[0]);
      v105 = v100[11].m128i_i64[0];
      a3 = 0.0;
      ++v100->m128i_i32[2];
      v100[49].m128i_i32[0] = 1;
      v100[47].m128i_i64[0] = v105;
      v100[49].m128i_i64[1] = 0;
      v100[50].m128i_i32[0] = 1;
      v100[50].m128i_i8[8] = 0;
      v100[51].m128i_i16[0] = 256;
      v100[48] = 0;
    }
    v122 = *(void **)(*(_QWORD *)(v5 + 24) + 2952LL);
    if ( v122 )
    {
      v9 = (_QWORD *)sub_186B270(0x68u);
      v10 = *(_QWORD *)(v5 + 32);
      *((_BYTE *)v9 + 24) = 1;
      v11 = v9;
      *((_DWORD *)v9 + 2) = 0;
      v9[2] = 0;
      v122 = v9;
      *v9 = &off_1C68570;
      v9[4] = v10;
      v12 = (_OWORD *)sub_186B270(0x80u);
      v11[5] = v12;
      *((_DWORD *)v11 + 14) = 0;
      v11[6] = 8;
      *v12 = 0;
      v12[1] = 0;
      v12[2] = 0;
      v12[3] = 0;
      v12[4] = 0;
      v12[5] = 0;
      v12[6] = 0;
      v12[7] = 0;
      v13 = sub_186B270(0xC0u);
      ++*((_DWORD *)v11 + 2);
      a3 = 0.0;
      *(_QWORD *)v13 = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 32) = 0;
      *(_QWORD *)(v13 + 56) = 0;
      *(_QWORD *)(v13 + 80) = 0;
      *(_QWORD *)(v13 + 104) = 0;
      *(_QWORD *)(v13 + 128) = 0;
      *(_QWORD *)(v13 + 152) = 0;
      *(_QWORD *)(v13 + 176) = 0;
      *(_QWORD *)(v13 + 184) = 0;
      v11[8] = v13;
      v11[9] = 8;
      *((_DWORD *)v11 + 20) = 0;
      v11[11] = v10;
      v11[12] = 0;
      *(_OWORD *)(v13 + 16) = 0;
      *(_OWORD *)(v13 + 40) = 0;
      *(_OWORD *)(v13 + 64) = 0;
      *(_OWORD *)(v13 + 88) = 0;
      *(_OWORD *)(v13 + 112) = 0;
      *(_OWORD *)(v13 + 136) = 0;
      *(_OWORD *)(v13 + 160) = 0;
    }
    *(_QWORD *)(v5 + 152) = v118;
    *(_QWORD *)(v5 + 160) = v122;
    sub_5BDB00(v5);
    do
    {
      v14 = *(__int64 **)(a2 + 24);
      if ( !v14 )
        break;
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v14 == v15 )
        break;
      v16 = 0;
      do
      {
        v17 = sub_5C0450((_QWORD *)v5, *v14++);
        v16 |= v17;
      }
      while ( v15 != v14 );
    }
    while ( v16 );
    v18 = (void *)sub_186B270(0xF8u);
    v19 = *(_QWORD *)(v5 + 24);
    v119 = v18;
    sub_63D370(v18, v19);
    v20 = v119;
    sub_5BE340(v5, a2, (__int64)v119);
    if ( *(_DWORD *)(v5 + 100) )
    {
      v26 = *(_QWORD *)(a2 + 24);
      for ( i = 0; v26; ++i )
      {
        if ( i >= *(_DWORD *)(v26 - 4) )
          break;
        sub_5C0E90((_QWORD *)v5, *(_QWORD *)(v26 + 8LL * i), (__int64)v119, v21, a3);
        v26 = *(_QWORD *)(a2 + 24);
      }
      v28 = *(_QWORD *)(v5 + 160);
      if ( v28 )
      {
        v29 = *(_DWORD ***)(v5 + 112);
        v30 = &v29[3 * *(unsigned int *)(v5 + 120)];
        if ( v29 != v30 )
        {
          while ( (unsigned __int64)*v29 <= 1 )
          {
            v29 += 3;
            if ( v30 == v29 )
              goto LABEL_59;
          }
          if ( v30 != v29 )
          {
            v31 = *v29;
            if ( *v29 )
              goto LABEL_36;
LABEL_37:
            v32 = *(_QWORD **)(v28 + 96);
            if ( v32 )
            {
              v33 = *((_DWORD *)v32 - 1);
              if ( v33 == *((_DWORD *)v32 - 2) )
              {
                v60 = (3 * v33 + 1) >> 1;
                v61 = 8 * v60 + 8;
                if ( 8 * v33 + 8 >= (unsigned int)v61 || v33 >= v60 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v126, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v126);
                  sub_233E40((__int64)v126);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                src = v31;
                v62 = (unsigned int *)sub_186B300(v32 - 1, v61);
                v63 = v62[1];
                v32 = v62 + 2;
                v31 = src;
                *(_QWORD *)(v28 + 96) = v62 + 2;
                *v62 = v60;
                LODWORD(v62) = v63;
                v36 = &v32[v63];
                v35 = (_DWORD)v62 + 1;
              }
              else
              {
                v34 = v33;
                v35 = v33 + 1;
                v36 = &v32[v34];
              }
            }
            else
            {
              src = v31;
              v106 = (_QWORD *)sub_186B270(0x18u);
              v32 = v106 + 1;
              *v106 = 2;
              v31 = src;
              v35 = 1;
              *(_QWORD *)(v28 + 96) = v32;
              v36 = v32;
            }
            *v36 = v31;
            *((_DWORD *)v32 - 1) = v35;
            v37 = *((_DWORD *)v29 + 3);
            v121 = *((_DWORD *)v29 + 2);
            v38 = v29[2];
            v120 = v37;
            src = v38;
            if ( v38 )
            {
              v113 = (__int64)v31;
              v39 = (void *)sub_186B270(4LL * v37);
              v40 = v29[2];
              src = v39;
              memcpy(v39, v40, 4LL * v37);
              v31 = (_DWORD *)v113;
            }
            v41 = *(unsigned int *)(v28 + 72);
            v42 = *(_DWORD *)(v28 + 80);
            v43 = v42 + *(_DWORD *)(v28 + 76);
            v117 = 2 * v41;
            if ( 3 * (int)v41 < (unsigned int)(4 * v43) )
            {
              v69 = v117;
              v114 = v31;
              v113 = 24LL * v117;
              v116 = v113;
              v70 = (_QWORD *)sub_186B270(v113);
              v31 = v114;
              v44 = (size_t)v70;
              if ( (_DWORD)v69 )
              {
                v71 = &v70[3 * v69];
                do
                {
                  *v70 = 0;
                  v70 += 3;
                  *(v70 - 2) = 0;
                }
                while ( v71 != v70 );
                v72 = v44;
                if ( (((_BYTE)v71 - (_BYTE)v44) & 8) == 0
                  || (v72 = v44 + 24, *(_QWORD *)(v44 + 16) = 0, v71 != (_QWORD *)(v44 + 24)) )
                {
                  do
                  {
                    *(_QWORD *)(v72 + 16) = 0;
                    v72 += 48LL;
                    *(_QWORD *)(v72 - 8) = 0;
                  }
                  while ( v71 != (_QWORD *)v72 );
                }
              }
              v73 = *(char **)(v28 + 64);
              v74 = *(unsigned int *)(v28 + 72);
              LODWORD(v114) = v117 - 1;
              v75 = &v73[24 * v74];
              v45 = v44 + v113;
              if ( v73 != v75 )
              {
                do
                {
                  while ( 1 )
                  {
                    v76 = *(_QWORD *)v73;
                    if ( *(_QWORD *)v73 > 1u )
                    {
                      v77 = 24LL * (*(_DWORD *)(v76 + 12) & (unsigned int)v114);
                      v78 = v44 + v77;
                      if ( v113 == v77 )
                      {
LABEL_117:
                        if ( v44 == v78 )
                        {
LABEL_124:
                          v124 = (_DWORD *)v45;
                          v123 = v31;
                          v115 = (char *)v44;
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v79 = v44;
                        while ( *(_QWORD *)v79 )
                        {
                          v79 += 24LL;
                          if ( v78 == v79 )
                            goto LABEL_124;
                        }
                      }
                      else
                      {
                        v79 = v44 + v77;
                        while ( *(_QWORD *)v79 )
                        {
                          v79 += 24LL;
                          if ( v45 == v79 )
                            goto LABEL_117;
                        }
                      }
                      *(_QWORD *)v79 = v76;
                      v80 = *((const void **)v73 + 2);
                      *(_DWORD *)(v79 + 8) = *((_DWORD *)v73 + 2);
                      if ( v80 )
                        break;
                    }
                    v73 += 24;
                    if ( v75 == v73 )
                      goto LABEL_108;
                  }
                  v81 = *((unsigned int *)v73 + 3);
                  v82 = *(void **)(v79 + 16);
                  if ( *(_DWORD *)(v79 + 12) < (unsigned int)v81 )
                  {
                    if ( v82 )
                    {
                      v125 = v45;
                      v124 = v31;
                      v123 = (_DWORD *)v79;
                      v115 = (char *)v44;
                      sub_186B220(v82);
                      v81 = *((unsigned int *)v73 + 3);
                      v45 = v125;
                      v31 = v124;
                      v79 = (size_t)v123;
                      v44 = (size_t)v115;
                    }
                    v125 = v45;
                    v124 = v31;
                    v123 = (_DWORD *)v79;
                    v115 = (char *)v44;
                    v83 = sub_186B270(4 * v81);
                    v84 = v123;
                    v82 = (void *)v83;
                    v45 = v125;
                    v31 = v124;
                    v44 = (size_t)v115;
                    *((_QWORD *)v123 + 2) = v83;
                    v81 = *((unsigned int *)v73 + 3);
                    v80 = *((const void **)v73 + 2);
                    v84[3] = v81;
                  }
                  v73 += 24;
                  v124 = (_DWORD *)v45;
                  v123 = v31;
                  v115 = (char *)v44;
                  memcpy(v82, v80, 4 * v81);
                  v44 = (size_t)v115;
                  v31 = v123;
                  v45 = (size_t)v124;
                }
                while ( v75 != v73 );
LABEL_108:
                v74 = *(unsigned int *)(v28 + 72);
                v75 = *(char **)(v28 + 64);
              }
              if ( v75 )
              {
                if ( (_DWORD)v74 )
                {
                  v123 = (_DWORD *)v45;
                  v85 = v31;
                  v86 = (size_t)v75;
                  v124 = (_DWORD *)v5;
                  v87 = v44;
                  v115 = &v75[24 * v74];
                  do
                  {
                    while ( 1 )
                    {
                      v88 = *(void **)(v86 + 16);
                      if ( !v88 )
                        break;
                      v113 = v86;
                      sub_186B220(v88);
                      v86 = v113 + 24;
                      if ( v115 == (char *)(v113 + 24) )
                        goto LABEL_114;
                    }
                    v86 += 24LL;
                  }
                  while ( v115 != (char *)v86 );
LABEL_114:
                  v44 = v87;
                  v45 = (size_t)v123;
                  v5 = (__int64)v124;
                  v31 = v85;
                }
                v123 = (_DWORD *)v45;
                v115 = (char *)v31;
                v113 = v44;
                sub_186B220(v75);
                v44 = v113;
                v31 = v115;
                v45 = (size_t)v123;
              }
              v89 = v117;
              *(_QWORD *)(v28 + 64) = v44;
              v42 = 0;
              *(_DWORD *)(v28 + 80) = 0;
              *(_DWORD *)(v28 + 72) = v89;
            }
            else
            {
              LODWORD(v114) = v41 - 1;
              v44 = *(_QWORD *)(v28 + 64);
              v116 = 24 * v41;
              v45 = v44 + 24 * v41;
            }
            v46 = v31[3];
            v47 = 24LL * (v46 & (unsigned int)v114);
            v48 = v44 + v47;
            if ( v47 != v116 )
            {
              v49 = v44 + v47;
              v50 = 0;
              while ( 1 )
              {
                v51 = *(_DWORD **)v49;
                if ( *(_QWORD *)v49 > 1u )
                {
                  if ( v51[3] == v46 && v51 == v31 )
                  {
                    v90 = v121;
                    v23 = src == nullptr;
                    *(_QWORD *)v49 = v31;
                    *(_DWORD *)(v49 + 8) = v90;
                    if ( v23 )
                      goto LABEL_74;
                    v91 = *(void **)(v49 + 16);
                    v92 = v120;
                    if ( *(_DWORD *)(v49 + 12) < v120 )
                    {
                      if ( v91 )
                        sub_186B220(v91);
                      v93 = v120;
                      v94 = 4LL * v120;
                      v95 = sub_186B270(v94);
                      *(_QWORD *)(v49 + 16) = v95;
                      v91 = (void *)v95;
                      *(_DWORD *)(v49 + 12) = v93;
                      goto LABEL_136;
                    }
LABEL_135:
                    v94 = 4LL * v92;
                    goto LABEL_136;
                  }
                }
                else
                {
                  if ( !v51 )
                  {
                    if ( v50 )
                      goto LABEL_81;
                    v50 = v49;
                    goto LABEL_82;
                  }
                  v50 = v49;
                }
                v49 += 24LL;
                if ( v49 == v45 )
                  goto LABEL_55;
              }
            }
            v50 = 0;
            while ( 1 )
            {
LABEL_55:
              if ( v48 == v44 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v52 = *(_DWORD **)v44;
              if ( *(_QWORD *)v44 > 1u )
              {
                if ( v52[3] == v46 && v52 == v31 )
                {
                  v107 = v121;
                  v23 = src == nullptr;
                  *(_QWORD *)v44 = v31;
                  *(_DWORD *)(v44 + 8) = v107;
                  if ( !v23 )
                  {
                    v91 = *(void **)(v44 + 16);
                    v92 = v120;
                    if ( *(_DWORD *)(v44 + 12) >= v120 )
                      goto LABEL_135;
                    if ( v91 )
                    {
                      v113 = v44;
                      sub_186B220(v91);
                      v44 = v113;
                    }
                    v113 = v44;
                    v108 = v120;
                    v94 = 4LL * v120;
                    v109 = sub_186B270(v94);
                    v110 = v113;
                    v91 = (void *)v109;
                    *(_QWORD *)(v113 + 16) = v109;
                    *(_DWORD *)(v110 + 12) = v108;
LABEL_136:
                    memcpy(v91, src, v94);
                    sub_186B220(src);
                  }
LABEL_74:
                  v64 = v29 + 3;
                  if ( v30 != v29 + 3 )
                  {
                    while ( 1 )
                    {
                      v31 = *v64;
                      v29 = v64;
                      if ( (unsigned __int64)*v64 > 1 )
                        break;
                      v64 += 3;
                      if ( v30 == v64 )
                        goto LABEL_59;
                    }
                    if ( v30 != v64 )
                    {
                      v28 = *(_QWORD *)(v5 + 160);
LABEL_36:
                      ++v31[2];
                      goto LABEL_37;
                    }
                  }
                  break;
                }
              }
              else
              {
                if ( !v52 )
                {
                  if ( v50 )
LABEL_81:
                    *(_DWORD *)(v28 + 80) = v42 - 1;
                  else
                    v50 = v44;
LABEL_82:
                  v65 = v121;
                  v23 = src == nullptr;
                  *(_QWORD *)v50 = v31;
                  *(_DWORD *)(v50 + 8) = v65;
                  if ( v23 )
                  {
                    ++*(_DWORD *)(v28 + 76);
                  }
                  else
                  {
                    v66 = *(void **)(v50 + 16);
                    v67 = 4LL * v120;
                    if ( *(_DWORD *)(v50 + 12) < v120 )
                    {
                      if ( v66 )
                        sub_186B220(v66);
                      v67 = 4LL * v120;
                      v68 = sub_186B270(v67);
                      *(_QWORD *)(v50 + 16) = v68;
                      v66 = (void *)v68;
                      *(_DWORD *)(v50 + 12) = v120;
                    }
                    memcpy(v66, src, v67);
                    ++*(_DWORD *)(v28 + 76);
                    sub_186B220(src);
                  }
                  goto LABEL_74;
                }
                v50 = v44;
              }
              v44 += 24LL;
            }
          }
        }
      }
LABEL_59:
      v53 = *(_QWORD *)(v5 + 24);
      v54 = (_DWORD *)sub_132F900(*(_QWORD *)(v53 + 2960), v118);
      if ( v54 )
        ++v54[2];
      v55 = *(_DWORD **)(v53 + 2960);
      if ( v55 )
      {
        v23 = v55[2]-- == 1;
        if ( v23 )
        {
          v111 = *(void (__fastcall ***)(void *))v55;
          src = v54;
          (*v111)(v55);
          sub_186B220(v55);
          v54 = src;
        }
      }
      *(_QWORD *)(v53 + 2960) = v54;
      v56 = *(_QWORD *)(v5 + 24);
      v57 = sub_1336AB0(*(_QWORD *)(v56 + 2952), v122);
      v58 = v57;
      if ( v57 )
        ++*(_DWORD *)(v57 + 8);
      v59 = *(void (__fastcall ****)(void *))(v56 + 2952);
      if ( v59 )
      {
        v23 = (*((_DWORD *)v59 + 2))-- == 1;
        if ( v23 )
        {
          (**v59)(v59);
          sub_186B220(v59);
        }
      }
      *(_QWORD *)(v56 + 2952) = v58;
    }
    else
    {
      sub_63D960(v20);
      sub_186B220(v20);
      v119 = nullptr;
    }
    v22 = (void (__fastcall ***)(_QWORD))v122;
    if ( v122 )
    {
      LODWORD(src) = *((_DWORD *)v122 + 2);
      v23 = (_DWORD)src == 1;
      *((_DWORD *)v122 + 2) = (_DWORD)src - 1;
      if ( v23 )
      {
        (**v22)(v22);
        sub_186B220(v22);
      }
    }
    v24 = (void (__fastcall ***)(_QWORD))v118;
    if ( v118 )
    {
      LODWORD(src) = *((_DWORD *)v118 + 2);
      v23 = (_DWORD)src == 1;
      *((_DWORD *)v118 + 2) = (_DWORD)src - 1;
      if ( v23 )
      {
        (**v24)(v24);
        sub_186B220(v24);
      }
    }
  }
  return v119;
}

