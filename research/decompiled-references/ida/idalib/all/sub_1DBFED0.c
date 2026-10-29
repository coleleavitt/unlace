void __fastcall sub_1DBFED0(__int64 a1, void (__fastcall *a2)(__int64, __int64, void **), __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  int v5; // r13d
  __int64 v6; // r10
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  __int64 v10; // r13
  __int64 v11; // rsi
  int v12; // edx
  unsigned __int8 v13; // dl
  __int64 v14; // rsi
  void *v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // edx
  __m128i *v23; // rbp
  __int64 v24; // r8
  __int64 *v25; // r9
  __int64 *v26; // r9
  __int64 *v27; // r12
  char v28; // bp
  __int64 v29; // rcx
  char *v30; // rax
  __int64 v31; // rsi
  int v32; // edx
  __int64 v33; // rax
  int v34; // r9d
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  unsigned int v44; // edx
  unsigned int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int16 v48; // ax
  __int64 v49; // rcx
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  _DWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  unsigned int v59; // eax
  unsigned int v60; // edx
  __int64 v61; // rdx
  __int64 v62; // rbp
  __int64 v63; // rcx
  unsigned int v64; // r8d
  __int64 v65; // rdx
  _BYTE *v66; // rsi
  signed __int64 v67; // rdx
  unsigned int v68; // eax
  unsigned int v69; // edx
  void *v70; // rdi
  _QWORD *v71; // r8
  __int64 v72; // rdx
  __int64 *v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 *v78; // r9
  unsigned __int64 v79; // rax
  const __m128i *v80; // rsi
  __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  __int64 v83; // rsi
  int v84; // edx
  unsigned int v85; // eax
  unsigned int v86; // edx
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 *v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 *v94; // r9
  unsigned __int64 v95; // rax
  const __m128i *v96; // rsi
  __int64 v97; // rdx
  unsigned __int64 v98; // rdx
  __int64 v99; // rbx
  unsigned __int8 v100; // cl
  unsigned int v101; // edx
  unsigned int v102; // eax
  unsigned int v103; // edx
  __int64 v104; // rbp
  unsigned __int8 v105; // al
  __int64 v106; // rsi
  int v107; // edx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rsi
  __int64 v111; // r8
  __int64 v112; // r9
  unsigned __int64 v113; // rsi
  unsigned __int64 v114; // rax
  _BYTE *v115; // rax
  _BYTE *v116; // rdi
  unsigned __int64 v117; // rbx
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rdx
  __m128i *v120; // rax
  __int64 v121; // rbx
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // rcx
  _BYTE *v124; // rax
  __int64 v125; // r8
  size_t v126; // rdx
  _BYTE *v127; // rdi
  unsigned __int64 v128; // rcx
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rbp
  unsigned int v132; // ecx
  unsigned int v133; // edx
  __int64 v134; // rsi
  int v135; // edx
  unsigned int v136; // edx
  unsigned int v137; // eax
  unsigned __int64 v138; // rax
  const __m128i *v139; // rsi
  __int64 v140; // rdx
  unsigned __int64 v141; // rdx
  unsigned int v142; // edx
  unsigned int v143; // eax
  _BYTE *v144; // rdi
  __int64 v145; // rax
  __int64 v146; // rdx
  __m128i v147; // xmm5
  unsigned __int64 v148; // rax
  __int64 v149; // [rsp+8h] [rbp-1E0h]
  __int64 v150; // [rsp+10h] [rbp-1D8h]
  unsigned __int8 v151; // [rsp+10h] [rbp-1D8h]
  unsigned __int8 v152; // [rsp+10h] [rbp-1D8h]
  __int64 v153; // [rsp+10h] [rbp-1D8h]
  __int64 v154; // [rsp+10h] [rbp-1D8h]
  __int64 *v157; // [rsp+28h] [rbp-1C0h]
  __int64 *v158; // [rsp+28h] [rbp-1C0h]
  __int64 v159; // [rsp+28h] [rbp-1C0h]
  __int64 v160; // [rsp+28h] [rbp-1C0h]
  unsigned __int64 v161; // [rsp+28h] [rbp-1C0h]
  __int64 v162; // [rsp+30h] [rbp-1B8h]
  __int64 v163; // [rsp+30h] [rbp-1B8h]
  void (__fastcall *v164)(__int64, __m128i *, __m128i *); // [rsp+30h] [rbp-1B8h]
  __int64 v165; // [rsp+30h] [rbp-1B8h]
  void (__fastcall *v166)(__int64, __m128i *, __m128i *); // [rsp+30h] [rbp-1B8h]
  void (__fastcall *v167)(__int64, __m128i *, __m128i *); // [rsp+30h] [rbp-1B8h]
  unsigned int v168; // [rsp+30h] [rbp-1B8h]
  int v169; // [rsp+30h] [rbp-1B8h]
  unsigned int v170; // [rsp+38h] [rbp-1B0h]
  unsigned int v171; // [rsp+3Ch] [rbp-1ACh]
  __int64 v172; // [rsp+50h] [rbp-198h]
  __int64 v173; // [rsp+50h] [rbp-198h]
  __int64 v174; // [rsp+58h] [rbp-190h] BYREF
  __int64 v175; // [rsp+60h] [rbp-188h]
  __m128i *v176; // [rsp+68h] [rbp-180h]
  void *dest; // [rsp+70h] [rbp-178h]
  __m128 v178; // [rsp+78h] [rbp-170h] BYREF
  void *v179; // [rsp+90h] [rbp-158h] BYREF
  unsigned __int64 v180; // [rsp+98h] [rbp-150h]
  _QWORD v181[2]; // [rsp+A0h] [rbp-148h] BYREF
  __m128i src; // [rsp+B0h] [rbp-138h] BYREF
  _QWORD v183[2]; // [rsp+C0h] [rbp-128h] BYREF
  __m128i v184; // [rsp+D0h] [rbp-118h] BYREF
  __m128i v185; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v186; // [rsp+F0h] [rbp-F8h]
  char v187; // [rsp+F8h] [rbp-F0h]
  int v188; // [rsp+FCh] [rbp-ECh]
  void **p_ptr; // [rsp+100h] [rbp-E8h]
  void *ptr; // [rsp+110h] [rbp-D8h] BYREF
  _BYTE v191[24]; // [rsp+118h] [rbp-D0h] BYREF
  _WORD *v192; // [rsp+130h] [rbp-B8h]
  char v193; // [rsp+138h] [rbp-B0h]
  int v194; // [rsp+13Ch] [rbp-ACh]
  __m128i *v195; // [rsp+140h] [rbp-A8h]

  v3 = *(unsigned int *)(a1 + 11320);
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 24LL);
  v5 = *(_DWORD *)(a1 + 11320);
  v171 = v4;
  if ( v4 && (unsigned int)v3 > v4 )
  {
    v170 = v5 - (v4 >> 1);
    v5 = (*(_DWORD *)(*(_QWORD *)(a1 + 264) + 24LL) & 1) + (*(_DWORD *)(*(_QWORD *)(a1 + 264) + 24LL) >> 1);
  }
  else
  {
    v170 = *(_DWORD *)(a1 + 11320);
  }
  v6 = v3 << 6;
  v7 = 0;
  v149 = *(_QWORD *)(a1 + 11312);
  if ( v149 + v6 != v149 )
  {
    v8 = v5;
    v10 = v149 + v6;
    while ( 2 )
    {
      while ( v8 <= v7 && v170 > v7 )
      {
        v10 -= 64;
        if ( v8 == v7 )
        {
          sub_168B9B0((__int64)&v184, a1 + 8, 6051);
          v13 = 3;
          v14 = *(_DWORD *)(a1 + 11320) - v171;
LABEL_18:
          sub_AE9DF0((unsigned __int8 **)&v184, v14, v13);
          sub_1582CA0((__int64)&ptr, &v184);
LABEL_19:
          sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 + 8), (const __m128i *)&ptr);
          if ( ptr && *(_QWORD *)v191 )
            sub_1580C40(*(unsigned __int64 *)v191, (unsigned __int64)ptr);
          v15 = (void *)v184.m128i_i64[0];
          if ( v184.m128i_i64[0] )
          {
            v16 = v184.m128i_u64[1];
            if ( v184.m128i_i64[1] )
LABEL_24:
              sub_1580C40(v16, (unsigned __int64)v15);
          }
        }
LABEL_8:
        ++v7;
        if ( v149 == v10 )
          return;
      }
      switch ( *(_DWORD *)(v10 - 64) )
      {
        case 0:
          v99 = *(_QWORD *)(v10 - 48);
          v150 = v10 - 64;
          v100 = *(_BYTE *)(v99 + 28) & 0x7F;
          if ( (unsigned int)v100 - 59 > 2 )
          {
            if ( (unsigned int)v100 - 34 > 5 )
            {
              if ( (unsigned int)v100 - 40 > 6 )
              {
                if ( v100 == 62 )
                {
                  v134 = a1 + 8;
                  v135 = 6392;
                }
                else if ( (unsigned int)v100 - 49 > 2 )
                {
                  if ( v100 != 72 )
                    goto LABEL_37;
                  v134 = a1 + 8;
                  v135 = 6386;
                }
                else
                {
                  v134 = a1 + 8;
                  v135 = 6399;
                }
              }
              else
              {
                v134 = a1 + 8;
                v135 = 6415;
                if ( v100 != 43 )
                {
                  v148 = *(_QWORD *)(v99 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v99 + 16) & 4) != 0 )
                    v148 = *(_QWORD *)v148;
                  v135 = ((*(_BYTE *)(v148 + 8) + 70) & 0x7Fu) < 4 ? 6412 : 6415;
                }
              }
            }
            else
            {
              v134 = a1 + 8;
              v135 = sub_B77AF0(v99) == 0 ? 6396 : 6009;
            }
            sub_168B9B0((__int64)&v184, v134, v135);
            sub_1DB86A0((unsigned __int8 **)&v184, v99);
            v136 = *(_DWORD *)(v10 - 8);
            v137 = *(_DWORD *)(v10 - 4);
            v191[0] = 1;
            ptr = (void *)__PAIR64__(v137, v136);
            sub_AEC610(v184.m128i_i64, (__int64 *)&ptr);
            sub_1582CA0((__int64)&ptr, &v184);
            v103 = *(_DWORD *)(v150 + 8);
          }
          else
          {
            sub_168B9B0((__int64)&v184, a1 + 8, (unsigned int)v100 - 60 < 2 ? 6386 : 6395);
            sub_1DB86A0((unsigned __int8 **)&v184, v99);
            v101 = *(_DWORD *)(v10 - 8);
            v102 = *(_DWORD *)(v10 - 4);
            v191[0] = 1;
            ptr = (void *)__PAIR64__(v102, v101);
            sub_AEC610(v184.m128i_i64, (__int64 *)&ptr);
            sub_1582CA0((__int64)&ptr, &v184);
            v103 = *(_DWORD *)(v10 - 56);
          }
LABEL_123:
          sub_1DB8FA0(a2, a3, v103, (const __m128i *)&ptr);
          if ( ptr && *(_QWORD *)v191 )
            sub_1580C40(*(unsigned __int64 *)v191, (unsigned __int64)ptr);
          if ( v184.m128i_i64[0] )
          {
            if ( v184.m128i_i64[1] )
              sub_1580C40(v184.m128i_u64[1], v184.m128i_u64[0]);
          }
LABEL_37:
          v10 = v150;
          goto LABEL_8;
        case 1:
          v159 = *(_QWORD *)(v10 - 40);
          ptr = &v191[16];
          *(__m128i *)v191 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          v185 = 0;
          v184.m128i_i64[0] = (__int64)&off_2BEBEE0;
          v184.m128i_i32[2] = 2;
          v187 = 0;
          v188 = 1;
          v186 = 0;
          p_ptr = &ptr;
          sub_227B8B0(&v184, 0, 0, 0);
          v167 = *(void (__fastcall **)(__int64, __m128i *, __m128i *))(*(_QWORD *)v159 + 88LL);
          src.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v87, (__int64)v167, v88, v89);
          src.m128i_i64[1] = v90;
          v167(v159, &v184, &src);
          v95 = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v91, v92, v93, v94);
          v96 = *(const __m128i **)(v10 - 32);
          src.m128i_i64[1] = v97;
          v98 = *(unsigned int *)(v10 - 24);
          src.m128i_i64[0] = v95;
          sub_F712D0((__int64)&v184, v96, v98, &src, 0);
          v83 = a1 + 8;
          v84 = 5878;
          goto LABEL_112;
        case 2:
          v71 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 - 48) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(*(_QWORD *)(v10 - 48) + 16LL) & 4) != 0 )
            v71 = (_QWORD *)*v71;
          v153 = (__int64)v71;
          if ( !v71 )
          {
            ptr = &v191[16];
            *(__m128i *)v191 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
            p_ptr = &ptr;
            v184.m128i_i64[0] = (__int64)&off_2BEBEE0;
            v184.m128i_i32[2] = 2;
            v187 = 0;
            v188 = 1;
            v186 = 0;
            v185 = 0;
            sub_227B8B0(&v184, 0, 0, 0);
            BUG();
          }
          ptr = &v191[16];
          *(__m128i *)v191 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          v185 = 0;
          v184.m128i_i64[0] = (__int64)&off_2BEBEE0;
          v184.m128i_i32[2] = 2;
          v187 = 0;
          v188 = 1;
          v186 = 0;
          p_ptr = &ptr;
          sub_227B8B0(&v184, 0, 0, 0);
          v166 = *(void (__fastcall **)(__int64, __m128i *, __m128i *))(*(_QWORD *)(v153 - 72) + 88LL);
          src.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v72, (__int64)v166, v153, v73);
          src.m128i_i64[1] = v74;
          v166(v153 - 72, &v184, &src);
          v79 = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v75, v76, v77, v78);
          v80 = *(const __m128i **)(v10 - 32);
          src.m128i_i64[1] = v81;
          v82 = *(unsigned int *)(v10 - 24);
          src.m128i_i64[0] = v79;
          sub_F712D0((__int64)&v184, v80, v82, &src, 0);
          v83 = a1 + 8;
          v84 = 5881;
LABEL_112:
          v10 -= 64;
          sub_168B9B0((__int64)&v179, v83, v84);
          sub_AEC220((unsigned __int8 **)&v179, *p_ptr, (signed __int64)p_ptr[1]);
          v85 = *(_DWORD *)(v10 + 60);
          v86 = *(_DWORD *)(v10 + 56);
          src.m128i_i8[8] = 1;
          src.m128i_i64[0] = __PAIR64__(v85, v86);
          sub_AEC610((__int64 *)&v179, src.m128i_i64);
          sub_1582CA0((__int64)&src, (_BYTE **)&v179);
          sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 + 8), &src);
          if ( src.m128i_i64[0] && src.m128i_i64[1] )
            sub_1580C40(src.m128i_u64[1], src.m128i_u64[0]);
          if ( v179 && v180 )
            sub_1580C40(v180, (unsigned __int64)v179);
          v184.m128i_i64[0] = (__int64)&unk_2C76288;
          sub_227B7A0(&v184);
          if ( ptr != &v191[16] )
            free(ptr);
          goto LABEL_8;
        case 3:
          v104 = *(_QWORD *)(v10 - 48);
          v106 = a1 + 8;
          v107 = 5967;
          goto LABEL_131;
        case 4:
          v104 = *(_QWORD *)(v10 - 48);
          v105 = *(_BYTE *)(v104 + 28) & 0x7F;
          if ( v105 != 71 )
          {
            if ( v105 == 69 )
            {
              v129 = 1;
LABEL_181:
              v130 = *(_QWORD *)(v104 + 56);
              v131 = 1;
              v160 = v130;
            }
            else
            {
              LOBYTE(v129) = (unsigned int)v105 - 41 <= 1;
              if ( (unsigned int)v105 - 68 <= 6 )
              {
                v129 = (unsigned __int8)v129;
                goto LABEL_181;
              }
              if ( v105 == 61 )
                v145 = *(_QWORD *)(v104 + 184);
              else
                v145 = *(_QWORD *)(v104 + 144);
              v129 = (unsigned __int8)v129;
              v131 = 0;
              v160 = v145;
            }
            sub_168B9B0((__int64)&src, a1 + 8, 5875);
            sub_AE9DF0((unsigned __int8 **)&src, v129, 2u);
            sub_AE9DF0((unsigned __int8 **)&src, v131, 2u);
            sub_1DB86A0((unsigned __int8 **)&src, *(_QWORD *)(v10 - 48));
            sub_1CB5C00((__int64)&ptr, a1, v160, *(_QWORD *)(v10 - 32), *(_DWORD *)(v10 - 24));
            v66 = ptr;
            v67 = *(_QWORD *)v191;
            goto LABEL_97;
          }
          v106 = a1 + 8;
          v107 = 6008;
LABEL_131:
          sub_168B9B0((__int64)&src, v106, v107);
          sub_1DB86A0((unsigned __int8 **)&src, v104);
          v63 = *(_QWORD *)(v10 - 32);
          v65 = *(_QWORD *)(v104 + 56);
          v64 = *(_DWORD *)(v10 - 24);
LABEL_96:
          sub_1CB5C00((__int64)&ptr, a1, v65, v63, v64);
          v66 = ptr;
          v67 = *(_QWORD *)v191;
LABEL_97:
          sub_AEC220((unsigned __int8 **)&src, v66, v67);
          v68 = *(_DWORD *)(v10 - 4);
          v69 = *(_DWORD *)(v10 - 8);
          v10 -= 64;
          v184.m128i_i8[8] = 1;
          v184.m128i_i64[0] = __PAIR64__(v68, v69);
          sub_AEC610(src.m128i_i64, v184.m128i_i64);
          sub_1582CA0((__int64)&v184, &src);
          sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 + 8), &v184);
          if ( v184.m128i_i64[0] && v184.m128i_i64[1] )
            sub_1580C40(v184.m128i_u64[1], v184.m128i_u64[0]);
          v70 = ptr;
          if ( ptr != &v191[8] )
LABEL_101:
            operator delete(v70);
LABEL_102:
          v15 = (void *)src.m128i_i64[0];
          if ( !src.m128i_i64[0] )
            goto LABEL_8;
          v16 = src.m128i_u64[1];
          if ( !src.m128i_i64[1] )
            goto LABEL_8;
          goto LABEL_24;
        case 5:
          v21 = a1 + 8;
          v22 = 6061;
          goto LABEL_30;
        case 6:
          v53 = *(_QWORD *)(v10 - 48);
          v178.m128_u64[0] = 0;
          dest = &v178.m128_u16[4];
          v54 = *(_QWORD *)(v53 + 40);
          v165 = v53;
          v178.m128_i8[8] = 0;
          if ( (v54 & 7) != 0 )
            goto LABEL_77;
          v55 = v54 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v55 )
            goto LABEL_77;
          v56 = *(_DWORD **)(v55 + 16);
          v57 = (unsigned int)*v56;
          if ( !*v56 )
            goto LABEL_77;
          v115 = v56 + 4;
          if ( v115 )
          {
            src.m128i_i64[0] = (__int64)v183;
            sub_1DB8B90(&src, v115, (__int64)&v115[v57]);
          }
          else
          {
            LOBYTE(v183[0]) = 0;
            src.m128i_i64[0] = (__int64)v183;
            src.m128i_i64[1] = 0;
          }
          v179 = v181;
          sub_1DB8B90(&v179, " '", (__int64)"");
          v116 = v179;
          v117 = v180 + src.m128i_i64[1];
          if ( v179 == v181 )
            v118 = 15;
          else
            v118 = v181[0];
          if ( v117 <= v118 )
          {
            if ( src.m128i_i64[1] )
            {
              v144 = (char *)v179 + v180;
              if ( src.m128i_i64[1] == 1 )
                *v144 = *(_BYTE *)src.m128i_i64[0];
              else
                memcpy(v144, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
              v116 = v179;
            }
            goto LABEL_157;
          }
          if ( (_QWORD *)src.m128i_i64[0] == v183 )
            v119 = 15;
          else
            v119 = v183[0];
          if ( v117 > v119 )
          {
            sub_998B30((__int64)&v179, v180, 0, src.m128i_i64[0], src.m128i_u64[1]);
            v116 = v179;
LABEL_157:
            v180 = v117;
            v120 = (__m128i *)&v179;
            v116[v117] = 0;
            goto LABEL_158;
          }
          v120 = (__m128i *)sub_99BDC0(&src, 0, 0, v179, v180);
LABEL_158:
          v184.m128i_i64[0] = (__int64)&v185;
          if ( (__m128i *)v120->m128i_i64[0] == &v120[1] )
          {
            v185 = _mm_loadu_si128(v120 + 1);
          }
          else
          {
            v184.m128i_i64[0] = v120->m128i_i64[0];
            v185.m128i_i64[0] = v120[1].m128i_i64[0];
          }
          v184.m128i_i64[1] = v120->m128i_i64[1];
          v120->m128i_i64[0] = (__int64)v120[1].m128i_i64;
          v120->m128i_i64[1] = 0;
          v120[1].m128i_i8[0] = 0;
          v121 = v184.m128i_i64[1];
          if ( v184.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
            std::__throw_length_error("basic_string::append");
          v122 = v184.m128i_i64[1] + 1;
          if ( (__m128i *)v184.m128i_i64[0] == &v185 )
            v123 = 15;
          else
            v123 = v185.m128i_i64[0];
          if ( v122 > v123 )
          {
            v174 = v184.m128i_i64[1] + 1;
            sub_998B30((__int64)&v184, v184.m128i_u64[1], 0, "'", 1u);
            v122 = v174;
          }
          else
          {
            *(_BYTE *)(v184.m128i_i64[0] + v184.m128i_i64[1]) = 39;
          }
          v184.m128i_i64[1] = v122;
          *(_BYTE *)(v184.m128i_i64[0] + v121 + 1) = 0;
          v124 = (_BYTE *)v184.m128i_i64[0];
          ptr = &v191[8];
          if ( (__m128i *)v184.m128i_i64[0] == &v185 )
          {
            v126 = v184.m128i_u64[1];
            v127 = dest;
            v184.m128i_i64[1] = 0;
            v147 = _mm_load_si128(&v185);
            v185.m128i_i8[0] = 0;
            *(_QWORD *)v191 = v126;
            *(__m128i *)&v191[8] = v147;
          }
          else
          {
            v125 = v185.m128i_i64[0];
            v126 = v184.m128i_u64[1];
            ptr = (void *)v184.m128i_i64[0];
            v184.m128i_i64[0] = (__int64)&v185;
            v127 = dest;
            *(_OWORD *)v191 = __PAIR128__(v185.m128i_u64[0], v184.m128i_u64[1]);
            v184.m128i_i64[1] = 0;
            v185.m128i_i8[0] = 0;
            if ( v124 != &v191[8] )
            {
              if ( dest == &v178.m128_u16[4] )
              {
                v174 = v125;
                dest = v124;
                v178 = _mm_loadh_ps((const double *)&v174);
              }
              else
              {
                v174 = v125;
                v128 = v178.m128_u64[1];
                dest = v124;
                v178 = _mm_loadh_ps((const double *)&v174);
                if ( v127 )
                {
                  ptr = v127;
                  *(_QWORD *)&v191[8] = v128;
                  goto LABEL_170;
                }
              }
              v127 = &v191[8];
              ptr = &v191[8];
LABEL_170:
              *(_QWORD *)v191 = 0;
              *v127 = 0;
              if ( ptr != &v191[8] )
                operator delete(ptr);
              if ( (__m128i *)v184.m128i_i64[0] != &v185 )
                operator delete((void *)v184.m128i_i64[0]);
              if ( v179 != v181 )
                operator delete(v179);
              if ( (_QWORD *)src.m128i_i64[0] != v183 )
                operator delete((void *)src.m128i_i64[0]);
LABEL_77:
              v58 = *(_QWORD *)(v10 - 40);
              if ( (*(_BYTE *)(v58 + 28) & 0x7Fu) - 68 > 6 )
                v173 = *(_QWORD *)(v58 + 184);
              else
                v173 = *(_QWORD *)(v58 + 56);
              sub_168B9B0((__int64)&src, a1 + 8, 6294);
              v10 -= 64;
              sub_AE9DF0((unsigned __int8 **)&src, (*(_BYTE *)(v165 + 28) & 0x7F) == 68, 2u);
              sub_AEC220((unsigned __int8 **)&src, dest, v178.m128_i64[0]);
              sub_1CB5C00((__int64)&ptr, a1, v173, *(_QWORD *)(v10 + 32), *(_DWORD *)(v10 + 40));
              sub_AEC220((unsigned __int8 **)&src, ptr, *(signed __int64 *)v191);
              v59 = *(_DWORD *)(v10 + 60);
              v60 = *(_DWORD *)(v10 + 56);
              v184.m128i_i8[8] = 1;
              v184.m128i_i64[0] = __PAIR64__(v59, v60);
              sub_AEC610(src.m128i_i64, v184.m128i_i64);
              sub_1582CA0((__int64)&v184, &src);
              sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 + 8), &v184);
              if ( v184.m128i_i64[0] && v184.m128i_i64[1] )
                sub_1580C40(v184.m128i_u64[1], v184.m128i_u64[0]);
              if ( ptr != &v191[8] )
                operator delete(ptr);
              if ( src.m128i_i64[0] && src.m128i_i64[1] )
                sub_1580C40(src.m128i_u64[1], src.m128i_u64[0]);
              if ( dest != &v178.m128_u16[4] )
                operator delete(dest);
              goto LABEL_8;
            }
          }
          if ( v126 )
          {
            if ( v126 == 1 )
              *v127 = v191[8];
            else
              memcpy(v127, &v191[8], v126);
            v126 = *(_QWORD *)v191;
            v127 = dest;
          }
          v178.m128_u64[0] = v126;
          v127[v126] = 0;
          v127 = ptr;
          goto LABEL_170;
        case 7:
          v61 = *(_QWORD *)(v10 - 40);
          if ( (*(_BYTE *)(v61 + 28) & 0x7Fu) - 68 > 6 )
            v62 = *(_QWORD *)(v61 + 184);
          else
            v62 = *(_QWORD *)(v61 + 56);
          sub_168B9B0((__int64)&src, a1 + 8, 6391);
          v63 = *(_QWORD *)(v10 - 32);
          v64 = *(_DWORD *)(v10 - 24);
          v65 = v62;
          goto LABEL_96;
        case 8:
          sub_168B9B0((__int64)&v184, a1 + 8, 5941);
          sub_1DB86A0((unsigned __int8 **)&v184, *(_QWORD *)(v10 - 48));
          goto LABEL_28;
        case 9:
          v17 = a1 + 8;
          v18 = 6393;
          goto LABEL_26;
        case 0xA:
          v31 = a1 + 8;
          v32 = 6410;
          goto LABEL_49;
        case 0xB:
          v31 = a1 + 8;
          v32 = 6107;
          goto LABEL_49;
        case 0xC:
          sub_168B9B0((__int64)&v184, a1 + 8, 6034);
          sub_1DB86A0((unsigned __int8 **)&v184, *(_QWORD *)(v10 - 48));
          sub_AE9DF0((unsigned __int8 **)&v184, *(int *)(v10 - 24), 2u);
          goto LABEL_28;
        case 0xD:
          v11 = a1 + 8;
          v12 = 6033;
          goto LABEL_12;
        case 0xE:
          v46 = *(_QWORD *)(v10 - 48);
          v10 -= 64;
          if ( (*(_BYTE *)(v46 + 28) & 0x7Fu) - 34 > 5 )
            goto LABEL_8;
          v47 = v46;
          v48 = sub_183C740(a1, (_DWORD *)v46);
          v151 = v48;
          if ( (_BYTE)v48 != 6 )
          {
            sub_168B9B0((__int64)&v184, a1 + 8, 6087);
            sub_AE9DF0((unsigned __int8 **)&v184, (*(_QWORD *)(v46 + 80) >> 26) & 1LL, 2u);
            sub_AE9DF0((unsigned __int8 **)&v184, v151, 2u);
            v154 = *(_QWORD *)(a1 + 248);
            v110 = *(_QWORD *)(sub_B8C1B0(v46 + 72) + 16);
            if ( (v110 & 4) != 0 )
              v113 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v113 = v110 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v113 )
              v113 -= 64LL;
            v114 = sub_A7AC20(v154, v113, v108, v109, v111, v112);
            v13 = 8;
            v14 = v114;
            goto LABEL_18;
          }
          v152 = HIBYTE(v48);
          if ( !HIBYTE(v48) )
            goto LABEL_8;
          v50 = *(_QWORD *)(**(_QWORD **)(v46 + 120) + 48LL);
          v51 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v51 + 16) - 43 <= 1
            || (v146 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                     - 43,
                (unsigned int)v146 <= 1)
            && (v51 = sub_F63050(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL), v47, v146, v49)) != 0 )
          {
            while ( (*(_BYTE *)(v51 + 18) & 0x10) != 0 )
            {
              v51 = *(_QWORD *)(*(_QWORD *)(v51 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              v52 = (unsigned int)*(unsigned __int8 *)(v51 + 16) - 43;
              if ( (unsigned int)v52 > 1 )
                v51 = sub_F63050(v51, v47, v52, v49);
            }
            v50 = *(_QWORD *)(v51 + 32);
          }
          ptr = (void *)v50;
          v161 = sub_6D5440(&ptr);
          sub_168B9B0((__int64)&v184, a1 + 8, 5831);
          sub_AE9DF0((unsigned __int8 **)&v184, v152, 2u);
          sub_AE9DF0((unsigned __int8 **)&v184, v161, 8u);
          sub_1582CA0((__int64)&ptr, &v184);
          goto LABEL_19;
        case 0xF:
          v33 = *(_QWORD *)(v10 - 48);
          if ( v33 )
          {
            v34 = 5835;
            v35 = *(_BYTE *)(v33 + 28) & 0x7F;
            if ( v35 != 73 )
            {
              v34 = 5826;
              if ( (unsigned int)v35 - 68 > 6 )
              {
                v34 = 5827;
                if ( v35 != 42 )
                  v34 = (v35 != 61) + 5824;
              }
            }
            LODWORD(v174) = v34;
            ptr = &v191[16];
            *(__m128i *)v191 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
            v185 = 0;
            v184.m128i_i64[0] = (__int64)&off_2BEBEE0;
            v184.m128i_i32[2] = 2;
            v187 = 0;
            v188 = 1;
            v186 = 0;
            p_ptr = &ptr;
            sub_227B8B0(&v184, 0, 0, 0);
            v36 = *(_QWORD *)(v10 - 48);
            v172 = v36;
            v164 = *(void (__fastcall **)(__int64, __m128i *, __m128i *))(*(_QWORD *)v36 + 88LL);
            src.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v37, v36, (__int64)v164, v38);
            src.m128i_i64[1] = v39;
            v164(v172, &v184, &src);
            v43 = v174;
            if ( (*(_BYTE *)(*(_QWORD *)(v10 - 48) + 28LL) & 0x7Fu) - 34 > 5 )
            {
              v169 = v174;
              v138 = sub_16043A0(
                       *(_QWORD **)(a1 + 248),
                       *(_QWORD **)(a1 + 240),
                       v40,
                       v41,
                       v42,
                       (__int64 *)(unsigned int)v174);
              v139 = *(const __m128i **)(v10 - 32);
              src.m128i_i64[1] = v140;
              v141 = *(unsigned int *)(v10 - 24);
              src.m128i_i64[0] = v138;
              sub_F712D0((__int64)&v184, v139, v141, &src, 0);
              v43 = v169;
            }
            sub_168B9B0((__int64)&v179, a1 + 8, v43);
            sub_AEC220((unsigned __int8 **)&v179, *p_ptr, (signed __int64)p_ptr[1]);
            v44 = *(_DWORD *)(v10 - 8);
            v45 = *(_DWORD *)(v10 - 4);
            src.m128i_i8[8] = 1;
            src.m128i_i64[0] = __PAIR64__(v45, v44);
            sub_AEC610((__int64 *)&v179, src.m128i_i64);
            sub_1582CA0((__int64)&src, (_BYTE **)&v179);
            sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 - 64 + 8), &src);
            if ( src.m128i_i64[0] && src.m128i_i64[1] )
              sub_1580C40(src.m128i_u64[1], src.m128i_u64[0]);
            if ( v179 && v180 )
              sub_1580C40(v180, (unsigned __int64)v179);
            v184.m128i_i64[0] = (__int64)&unk_2C76288;
            sub_227B7A0(&v184);
            if ( ptr != &v191[16] )
              free(ptr);
          }
          else
          {
            sub_168B9B0((__int64)&v184, a1 + 8, 6107);
            v142 = *(_DWORD *)(v10 - 8);
            v143 = *(_DWORD *)(v10 - 4);
            v191[0] = 1;
            ptr = (void *)__PAIR64__(v143, v142);
            sub_AEC610(v184.m128i_i64, (__int64 *)&ptr);
            sub_1582CA0((__int64)&ptr, &v184);
            sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 - 56), (const __m128i *)&ptr);
            if ( ptr && *(_QWORD *)v191 )
              sub_1580C40(*(unsigned __int64 *)v191, (unsigned __int64)ptr);
            if ( v184.m128i_i64[0] && v184.m128i_i64[1] )
              sub_1580C40(v184.m128i_u64[1], v184.m128i_u64[0]);
          }
          v10 -= 64;
          goto LABEL_8;
        case 0x10:
          v31 = a1 + 8;
          v32 = 5851;
          goto LABEL_49;
        case 0x11:
          v17 = a1 + 8;
          v18 = 5849;
          goto LABEL_26;
        case 0x12:
          v31 = a1 + 8;
          v32 = 6411;
          goto LABEL_49;
        case 0x13:
          v31 = a1 + 8;
          v32 = 6259;
LABEL_49:
          sub_168B9B0((__int64)&v184, v31, v32);
          goto LABEL_27;
        case 0x14:
          v11 = a1 + 8;
          v12 = 6356;
LABEL_12:
          sub_168B9B0((__int64)&ptr, v11, v12);
          sub_1DB8FA0(a2, a3, *(_DWORD *)(*(_QWORD *)(v10 - 48) + 24LL), (const __m128i *)&ptr);
          if ( ptr && *(_QWORD *)v191 )
            sub_1580C40(*(unsigned __int64 *)v191, (unsigned __int64)ptr);
          goto LABEL_15;
        case 0x15:
          sub_168B9B0((__int64)&v184, a1 + 8, 6031);
          sub_1DB86A0((unsigned __int8 **)&v184, *(_QWORD *)(v10 - 48));
          goto LABEL_28;
        case 0x16:
          sub_168B9B0((__int64)&v184, a1 + 8, 5919);
          sub_1DB86A0((unsigned __int8 **)&v184, *(_QWORD *)(v10 - 48));
          sub_AE9DF0((unsigned __int8 **)&v184, ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) >> 4) ^ 1) & 1, 2u);
          goto LABEL_28;
        case 0x17:
          v23 = &v184;
          sub_168B9B0((__int64)&src, a1 + 8, 5811);
          v24 = *(unsigned int *)(v10 - 24);
          v25 = *(__int64 **)(v10 - 32);
          v184.m128i_i64[0] = (__int64)&v185;
          v162 = v24;
          v157 = v25;
          v184.m128i_i64[1] = 0;
          ptr = &off_2BEBE68;
          v185.m128i_i8[0] = 0;
          *(_DWORD *)v191 = 0;
          v193 = 0;
          v194 = 1;
          v192 = nullptr;
          *(_OWORD *)&v191[8] = 0;
          v195 = &v184;
          sub_227B8B0(&ptr, 0, 0, 0);
          v26 = v157;
          v158 = &v157[v162];
          if ( v26 != v158 )
          {
            LODWORD(v174) = v7;
            v27 = v26;
            v176 = &v184;
            v28 = 1;
            v175 = v10;
            do
            {
              v29 = *v27;
              if ( v28 )
              {
                v28 = 0;
              }
              else if ( *(_QWORD *)&v191[16] - (_QWORD)v192 > 1u )
              {
                *v192++ = 8236;
              }
              else
              {
                v163 = *v27;
                sub_227BF10(&ptr, ", ", 2);
                v29 = v163;
              }
              ++v27;
              v30 = (char *)sub_BFB9F0(v29);
              sub_F07C00(v30, (__int64)&ptr, 0, (const __m128i *)(*(_QWORD *)(a1 + 248) + 17464LL), 0, 0, "\n", 1);
            }
            while ( v158 != v27 );
            v7 = v174;
            v23 = v176;
            v10 = v175;
          }
          v10 -= 64;
          ptr = &off_2BEBE68;
          sub_227B7A0(&ptr);
          sub_AEC220((unsigned __int8 **)&src, v184.m128i_i64[0], v184.m128i_i64[1]);
          sub_1582CA0((__int64)&ptr, &src);
          sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 + 8), (const __m128i *)&ptr);
          if ( ptr && *(_QWORD *)v191 )
            sub_1580C40(*(unsigned __int64 *)v191, (unsigned __int64)ptr);
          v70 = (void *)v184.m128i_i64[0];
          if ( (__m128i *)v184.m128i_i64[0] == &v23[1] )
            goto LABEL_102;
          goto LABEL_101;
        case 0x19:
          v21 = a1 + 8;
          v22 = 5812;
LABEL_30:
          v10 -= 64;
          sub_168B9B0((__int64)&ptr, v21, v22);
          sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 + 8), (const __m128i *)&ptr);
          v15 = ptr;
          if ( !ptr )
            goto LABEL_8;
          v16 = *(_QWORD *)v191;
          if ( !*(_QWORD *)v191 )
            goto LABEL_8;
          goto LABEL_24;
        case 0x1A:
          v17 = a1 + 8;
          v18 = 6413;
LABEL_26:
          sub_168B9B0((__int64)&v184, v17, v18);
          sub_1DB86A0((unsigned __int8 **)&v184, *(_QWORD *)(v10 - 48));
LABEL_27:
          v19 = *(_DWORD *)(v10 - 8);
          v20 = *(_DWORD *)(v10 - 4);
          v191[0] = 1;
          ptr = (void *)__PAIR64__(v20, v19);
          sub_AEC610(v184.m128i_i64, (__int64 *)&ptr);
LABEL_28:
          v10 -= 64;
          sub_1582CA0((__int64)&ptr, &v184);
          goto LABEL_19;
        case 0x1B:
          sub_168B9B0((__int64)&ptr, a1 + 8, 6384);
          v150 = v10 - 64;
          sub_1DB8FA0(a2, a3, *(_DWORD *)(v10 - 56), (const __m128i *)&ptr);
          if ( ptr && *(_QWORD *)v191 )
            sub_1580C40(*(unsigned __int64 *)v191, (unsigned __int64)ptr);
          if ( !*(_DWORD *)(*(_QWORD *)(v10 - 48) + 24LL) )
            goto LABEL_37;
          v168 = *(_DWORD *)(*(_QWORD *)(v10 - 48) + 24LL);
          sub_168B9B0((__int64)&v184, a1 + 8, 6408);
          sub_AE9DF0((unsigned __int8 **)&v184, 1, 2u);
          v132 = *(_DWORD *)(v10 - 8);
          v133 = *(_DWORD *)(v10 - 4);
          v191[0] = 1;
          ptr = (void *)__PAIR64__(v133, v132);
          sub_AEC610(v184.m128i_i64, (__int64 *)&ptr);
          sub_1582CA0((__int64)&ptr, &v184);
          v103 = v168;
          goto LABEL_123;
        default:
LABEL_15:
          v10 -= 64;
          ++v7;
          if ( v149 == v10 )
            return;
          continue;
      }
    }
  }
}
