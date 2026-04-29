__int64 __fastcall sub_40B260(__int64 a1, __int64 a2, int a3, _DWORD *a4, int a5, double a6)
{
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v9; // r12
  __int64 v11; // rsi
  int v13; // r13d
  __int64 v14; // rax
  int v15; // eax
  unsigned __int8 v16; // cl
  int v17; // eax
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rdi
  int tinfo_size; // eax
  __m128i *v22; // rax
  __m128i si128; // xmm1
  __int64 v24; // rcx
  char *v25; // r8
  char *v26; // r8
  char *v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rsi
  _DWORD *v34; // r10
  char *v35; // r11
  unsigned __int64 v36; // r8
  size_t v37; // r9
  int v38; // eax
  int v39; // r12d
  __int64 v40; // r12
  int v41; // eax
  __int64 v42; // r13
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r15
  __int64 v45; // rdi
  __m128i v46; // xmm0
  _DWORD *v47; // rax
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // r15
  int v51; // eax
  __int64 v52; // rdi
  char *i; // rbx
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // r15
  _QWORD *v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // rdi
  _QWORD *v61; // rdi
  __int64 v62; // rax
  int v63; // edx
  char *v64; // rsi
  int v65; // eax
  __int64 v66; // r15
  int v67; // eax
  int v68; // eax
  __int64 v69; // r12
  int v70; // eax
  __int64 v71; // r9
  char *v72; // rsi
  char *v73; // r9
  char *v74; // r10
  unsigned __int64 v75; // r8
  char *v76; // rsi
  char v77; // al
  _DWORD *v78; // rdi
  void **v79; // r12
  unsigned __int8 *v80; // r10
  void *v81; // r8
  char *v82; // r9
  size_t v83; // r11
  __int64 v84; // rsi
  void *v85; // rax
  char tinfo_property; // al
  __int64 v87; // rax
  int v88; // edx
  unsigned int v89; // ecx
  unsigned int v90; // edx
  void (__fastcall *v91)(_QWORD *, __int64, int *, __int128 *, double); // rax
  unsigned int v92; // edx
  void (__fastcall *v93)(__int64 *, __int64, int *, __int128 *); // rax
  int v94; // edx
  bool v95; // r12
  _DWORD *v96; // r15
  size_t v97; // rdx
  void *v98; // rdi
  void *v99; // rax
  void *v100; // rax
  size_t v101; // [rsp+8h] [rbp-4F8h]
  int v102; // [rsp+20h] [rbp-4E0h]
  int v103; // [rsp+28h] [rbp-4D8h]
  int v104; // [rsp+2Ch] [rbp-4D4h]
  _DWORD *v105; // [rsp+40h] [rbp-4C0h]
  char *v106; // [rsp+40h] [rbp-4C0h]
  size_t v107; // [rsp+40h] [rbp-4C0h]
  unsigned __int64 v108; // [rsp+40h] [rbp-4C0h]
  char v109; // [rsp+48h] [rbp-4B8h]
  void *v110; // [rsp+48h] [rbp-4B8h]
  int v111; // [rsp+50h] [rbp-4B0h]
  unsigned __int64 v112; // [rsp+50h] [rbp-4B0h]
  unsigned __int8 *v113; // [rsp+50h] [rbp-4B0h]
  unsigned __int64 v114; // [rsp+50h] [rbp-4B0h]
  unsigned __int64 v115; // [rsp+50h] [rbp-4B0h]
  void *v116; // [rsp+50h] [rbp-4B0h]
  _QWORD *v117; // [rsp+58h] [rbp-4A8h]
  _QWORD *v118; // [rsp+58h] [rbp-4A8h]
  void *v119; // [rsp+58h] [rbp-4A8h]
  __int64 v120; // [rsp+68h] [rbp-498h]
  int v121; // [rsp+68h] [rbp-498h]
  int v122; // [rsp+68h] [rbp-498h]
  int v123; // [rsp+68h] [rbp-498h]
  int v124; // [rsp+68h] [rbp-498h]
  char v125; // [rsp+73h] [rbp-48Dh]
  int v126; // [rsp+74h] [rbp-48Ch]
  size_t n; // [rsp+78h] [rbp-488h]
  size_t na; // [rsp+78h] [rbp-488h]
  size_t nb; // [rsp+78h] [rbp-488h]
  size_t nd; // [rsp+78h] [rbp-488h]
  int nc; // [rsp+78h] [rbp-488h]
  _QWORD *ne; // [rsp+78h] [rbp-488h]
  void *v133; // [rsp+80h] [rbp-480h]
  char *v134; // [rsp+80h] [rbp-480h]
  char *v135; // [rsp+80h] [rbp-480h]
  _BYTE *v136; // [rsp+88h] [rbp-478h]
  void *v137; // [rsp+88h] [rbp-478h]
  unsigned __int8 *v138; // [rsp+88h] [rbp-478h]
  void *v139; // [rsp+88h] [rbp-478h]
  char *v140; // [rsp+88h] [rbp-478h]
  char *src; // [rsp+90h] [rbp-470h]
  __int64 srca; // [rsp+90h] [rbp-470h]
  _DWORD *srcf; // [rsp+90h] [rbp-470h]
  char *srcb; // [rsp+90h] [rbp-470h]
  char *srcc; // [rsp+90h] [rbp-470h]
  void *srcd; // [rsp+90h] [rbp-470h]
  unsigned __int8 *srce; // [rsp+90h] [rbp-470h]
  char srcg; // [rsp+90h] [rbp-470h]
  char *srci; // [rsp+90h] [rbp-470h]
  char *srch; // [rsp+90h] [rbp-470h]
  unsigned __int64 v151; // [rsp+98h] [rbp-468h]
  __int64 v152; // [rsp+98h] [rbp-468h]
  __int64 *v153; // [rsp+98h] [rbp-468h]
  void *v154; // [rsp+98h] [rbp-468h]
  size_t v155; // [rsp+A0h] [rbp-460h]
  size_t v156; // [rsp+A0h] [rbp-460h]
  size_t v157; // [rsp+A0h] [rbp-460h]
  int v158; // [rsp+A0h] [rbp-460h]
  __int64 v159; // [rsp+B0h] [rbp-450h]
  char *v160; // [rsp+B8h] [rbp-448h]
  int v161; // [rsp+B8h] [rbp-448h]
  char *s1[2]; // [rsp+C0h] [rbp-440h] BYREF
  __int64 v163; // [rsp+D0h] [rbp-430h]
  char *v164; // [rsp+D8h] [rbp-428h]
  char *v165; // [rsp+E0h] [rbp-420h]
  __int64 v166; // [rsp+E8h] [rbp-418h]
  __int64 v167; // [rsp+F0h] [rbp-410h]
  __int64 v168; // [rsp+F8h] [rbp-408h]
  int v169; // [rsp+108h] [rbp-3F8h] BYREF
  int v170; // [rsp+10Ch] [rbp-3F4h] BYREF
  unsigned __int64 v171; // [rsp+110h] [rbp-3F0h] BYREF
  __int64 v172; // [rsp+118h] [rbp-3E8h] BYREF
  __int64 v173; // [rsp+120h] [rbp-3E0h] BYREF
  __int64 v174; // [rsp+128h] [rbp-3D8h] BYREF
  __int64 v175; // [rsp+130h] [rbp-3D0h] BYREF
  __int64 v176; // [rsp+138h] [rbp-3C8h] BYREF
  _QWORD v177[2]; // [rsp+140h] [rbp-3C0h] BYREF
  __int64 v178; // [rsp+150h] [rbp-3B0h] BYREF
  __int64 v179; // [rsp+158h] [rbp-3A8h]
  __int128 v180; // [rsp+160h] [rbp-3A0h] BYREF
  __int64 v181; // [rsp+170h] [rbp-390h] BYREF
  __int128 v182; // [rsp+178h] [rbp-388h]
  __int64 v183; // [rsp+190h] [rbp-370h] BYREF
  __int128 v184; // [rsp+198h] [rbp-368h]
  __int64 v185; // [rsp+1A8h] [rbp-358h]
  __int64 v186; // [rsp+1B0h] [rbp-350h] BYREF
  __int64 v187; // [rsp+1B8h] [rbp-348h] BYREF
  __int128 v188; // [rsp+1C0h] [rbp-340h]
  __int64 v189; // [rsp+1D0h] [rbp-330h]
  __int128 v190; // [rsp+1D8h] [rbp-328h]
  char v191; // [rsp+1E8h] [rbp-318h]
  _BYTE v192[16]; // [rsp+1F0h] [rbp-310h] BYREF
  __int64 v193; // [rsp+200h] [rbp-300h]
  _BYTE v194[8]; // [rsp+208h] [rbp-2F8h] BYREF
  void *dest; // [rsp+210h] [rbp-2F0h] BYREF
  char *v196; // [rsp+218h] [rbp-2E8h]
  unsigned __int64 v197; // [rsp+220h] [rbp-2E0h]
  _DWORD v198[4]; // [rsp+228h] [rbp-2D8h] BYREF
  _DWORD v199[142]; // [rsp+238h] [rbp-2C8h]
  char v200; // [rsp+470h] [rbp-90h] BYREF
  char v201; // [rsp+4C0h] [rbp-40h] BYREF
  unsigned __int64 v202; // [rsp+4C8h] [rbp-38h]

  v168 = a2;
  LODWORD(v165) = a3;
  v167 = (__int64)a4;
  LODWORD(v166) = a5;
  v202 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !*(_QWORD *)(*(_QWORD *)(v6 + 520) + 376LL) )
    return 0;
  v11 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a1 + 480);
  v164 = *(char **)(v9 + 1032);
  v163 = *(_QWORD *)(v9 + 112);
  v13 = !sub_11C000(v9, v11, 1) ? 4 : 12;
  if ( *(_BYTE *)(a2 + 32) != 11 )
    return 0;
  v14 = *(_QWORD *)(v168 + 72);
  if ( !*(_QWORD *)(v14 + 32) )
    return 0;
  if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 24LL), 2) & 0x3F) == 0x2D )
    return 0;
  v125 = sub_11F7C0(*(char **)(*(_QWORD *)(v168 + 72) + 24LL), &v171, 1u);
  if ( !v125 )
    return 0;
  s1[0] = *(char **)(v168 + 40);
  if ( strcmp(s1[0], "mac_syscall") )
  {
    v15 = strcmp(s1[0], "linux_eabi_syscall");
    v16 = v15;
    if ( !v15 )
    {
      v77 = v125;
      v18 = v171;
      v125 = 0;
      v109 = v77;
      goto LABEL_12;
    }
    v17 = strcmp(s1[0], "linux_syscall");
    v16 = v17;
    if ( !v17 )
    {
      v109 = 0;
      v18 = v171;
      v125 = 0;
LABEL_12:
      v104 = v18;
      v172 = 0;
      v173 = 0;
      if ( (unsigned __int8)sub_40AE10((__int64)v164, &v173, (__int64)&v172, v16, v18) )
      {
        v19 = *(_QWORD *)(v168 + 72);
        v159 = v19;
        v103 = *(_DWORD *)(v19 + 280);
        v20 = *(_QWORD *)(v19 + 24) + 24LL;
        s1[0] = *(char **)(v19 + 24);
        copy_tinfo_t(v20, &v173);
        s1[0] = *(char **)(v159 + 24);
        v7 = sub_11F7C0(s1[0], &v176, 0);
        if ( (_BYTE)v7 )
        {
          tinfo_size = get_tinfo_size(0, *((_QWORD *)s1[0] + 3), 0);
          sub_120450((__int64)s1[0], v163, v176, tinfo_size, -1, 0);
          if ( !(_BYTE)v172 )
          {
LABEL_80:
            clear_tinfo_t(&v173);
            clear_tinfo_t(&v172);
            return v7;
          }
          v183 = 0;
          v185 = 0;
          v186 = 0;
          v187 = 0;
          v189 = 0;
          v191 = 16;
          v184 = 0;
          v188 = 0;
          v190 = 0;
          get_tinfo_details(v172, 140, &v183);
          v22 = (__m128i *)v192;
          si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
          v24 = v168;
          do
          {
            v22->m128i_i32[1] = -1;
            v22 += 5;
            v22[-5].m128i_i16[0] = 0;
            v22[-5].m128i_i16[1] = 0;
            v22[-5].m128i_i64[1] = 0;
            v22[-4] = si128;
            v22[-3].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v22[-3] + 8) = 0;
            v22[-2].m128i_i32[2] = 0;
            v22[-1].m128i_i64[0] = 0;
            v22[-1].m128i_i32[2] = 0;
          }
          while ( &v201 != (char *)v22 );
          v168 = v24;
          if ( v125 || *(_BYTE *)(v9 + 144) )
            LODWORD(v166) = *(_DWORD *)v167;
          v25 = *(char **)(v159 + 24);
          LODWORD(v176) = v166;
          v160 = v25;
          s1[0] = v25 + 24;
          sub_124BC0((__int64)v192, (unsigned __int8 *)v25);
          v193 = *((_QWORD *)v160 + 2);
          copy_tinfo_t(v194, s1[0]);
          v26 = v160;
          if ( &dest != (void **)(v160 + 32) )
          {
            v27 = *((char **)v160 + 5);
            if ( v27 && (v155 = (size_t)(v27 - 1), v27 != &byte_1) )
            {
              v154 = *((void **)v160 + 4);
              if ( v197 < (unsigned __int64)v27 )
              {
                srch = *((char **)v160 + 5);
                dest = (void *)qvector_reserve(&dest, dest, v27, 1);
                v26 = v160;
                v27 = srch;
              }
              v140 = v26;
              v196 = v27;
              srci = v27;
              memmove(dest, v154, v155);
              v26 = v140;
              srci[(_QWORD)dest - 1] = 0;
            }
            else
            {
              v196 = nullptr;
            }
          }
          v156 = (size_t)v26;
          copy_argloc(v198, v26 + 56);
          v199[0] = *(_DWORD *)(v156 + 72);
          copy_tinfo_t(v194, s1[0]);
          if ( v192[0] == 14 )
          {
            sub_409F40((__int64)v192, &v176);
          }
          else
          {
            v198[0] = 3;
            v198[2] = v166;
          }
          v28 = *(_QWORD *)(v159 + 32);
          v102 = v28;
          v126 = v28;
          if ( (_QWORD)v184 && (int)v28 > 1 )
          {
            LODWORD(s1[0]) = 1;
            v161 = 1;
            v166 = 1;
            while ( 1 )
            {
              v178 = 0;
              v179 = 0;
              v151 = 80 * v166;
              v136 = &v192[80 * v166];
              n = 80LL * (v161 - 1);
              src = (char *)(v183 + n);
              if ( (unsigned __int8)get_tinfo_details(*(_QWORD *)(v183 + n + 64), 11, &v178) )
              {
                v176 = 0;
                v177[0] = 0;
                v180 = 0;
                copy_tinfo_t((char *)&v180 + 8, v177);
                v181 = 0;
                copy_tinfo_t(&v181, &v176);
                LODWORD(v182) = 0;
                WORD2(v182) = 0;
                clear_tinfo_t(v177);
                clear_tinfo_t(&v176);
                v29 = v180;
                *(_QWORD *)&v180 = v178;
                v178 = v29;
                create_tinfo(src + 64, 10, 10, &v180);
                clear_tinfo_t(&v181);
                clear_tinfo_t((char *)&v180 + 8);
                clear_tinfo_t(&v180);
              }
              clear_tinfo_t(&v178);
              v30 = *(_QWORD *)(v183 + n + 64);
              na = v183 + n + 64;
              v120 = SLODWORD(s1[0]);
              srca = 80LL * SLODWORD(s1[0]);
              v157 = *(int *)(*(_QWORD *)(v159 + 24) + srca + 4);
              v31 = get_tinfo_size(0, v30, 0);
              if ( v157 < v31 )
              {
                if ( 2 * v157 != v31 )
                {
                  v7 = 0;
                  goto LABEL_65;
                }
                if ( *(_BYTE *)(v9 + 144) )
                {
                  if ( !under_debugger )
                    sub_3835A0(0xC86Eu, v30, 0.0);
                  goto LABEL_182;
                }
                if ( v109 )
                  LODWORD(s1[0]) += ((__int64)s1[0] & 1) == 0;
                v158 = LODWORD(s1[0]) + 1;
                if ( LODWORD(s1[0]) + 1 < v126 )
                {
                  v122 = v31;
                  v61 = (_QWORD *)j__qalloc_or_throw(32);
                  *v61 = 0xFFFFFFFF00000000LL;
                  v61[2] = 0xFFFFFFFF00000000LL;
                  v62 = v166;
                  v61[1] = 0;
                  v61[3] = 0;
                  v62 *= 80;
                  v192[v62] = 14;
                  *(_QWORD *)&v192[v62 + 8] = v61;
                  srcb = (char *)(4LL * SLODWORD(s1[0]));
                  sub_124BC0((__int64)v61, (unsigned __int8 *)(*(_QWORD *)(v159 + 24) + 80LL * SLODWORD(s1[0])));
                  sub_124BC0(
                    *(_QWORD *)&v192[80 * v166 + 8] + 16LL,
                    (unsigned __int8 *)(*(_QWORD *)(v159 + 24) + 80LL * v158));
                  v63 = v122;
                  if ( *(_BYTE *)(v9 + 145) )
                  {
                    sub_11C450(*(char **)&v192[80 * v166 + 8], (char *)(*(_QWORD *)&v192[80 * v166 + 8] + 16LL));
                    v63 = v122;
                  }
                  *(_DWORD *)&v192[80 * v166 + 4] = v63;
                  copy_tinfo_t(&v194[v151], na);
                  v64 = &srcb[v167];
                  if ( v192[80 * v166] == 14 )
                  {
                    sub_409F40((__int64)v136, v64);
                  }
                  else
                  {
                    v65 = *(_DWORD *)v64;
                    *((_DWORD *)v136 + 14) = 3;
                    *((_DWORD *)v136 + 16) = v65;
                  }
                  LODWORD(s1[0]) += 2;
                }
                else
                {
                  if ( SLODWORD(s1[0]) >= v126 )
                  {
                    ++v161;
                    goto LABEL_44;
                  }
                  v71 = *(_QWORD *)(v159 + 24) + 80LL * SLODWORD(s1[0]);
                  v123 = *(_DWORD *)(v167 + 4LL * SLODWORD(s1[0]));
                  s1[0] = (char *)(v71 + 24);
                  LODWORD(v178) = v123;
                  srcc = (char *)v71;
                  sub_124BC0((__int64)v136, (unsigned __int8 *)v71);
                  v72 = s1[0];
                  *(_QWORD *)&v194[80 * v166 - 8] = *((_QWORD *)srcc + 2);
                  copy_tinfo_t(&v194[v151], v72);
                  v73 = srcc;
                  v74 = (char *)&dest + v151;
                  if ( (char *)&dest + v151 != srcc + 32 )
                  {
                    v75 = *((_QWORD *)srcc + 5);
                    if ( v75 && (nb = v75 - 1, v75 != 1) )
                    {
                      v119 = *((void **)srcc + 4);
                      if ( *(_QWORD *)&v198[v151 / 4 - 2] < v75 )
                      {
                        v108 = *((_QWORD *)srcc + 5);
                        v100 = (void *)qvector_reserve((char *)&dest + v151, *(&dest + 10 * v166), v75, 1);
                        v73 = srcc;
                        v75 = v108;
                        v74 = (char *)&dest + v151;
                        *(&dest + 10 * v166) = v100;
                      }
                      v97 = nb;
                      v98 = *(void **)v74;
                      *((_QWORD *)v74 + 1) = v75;
                      v106 = v73;
                      v115 = v75;
                      ne = v74;
                      memmove(v98, v119, v97);
                      v73 = v106;
                      *(_BYTE *)(*ne + v115 - 1) = 0;
                    }
                    else
                    {
                      (&v196)[v151 / 8] = nullptr;
                    }
                  }
                  nd = (size_t)v73;
                  copy_argloc(&v198[v151 / 4], v73 + 56);
                  v76 = s1[0];
                  v199[20 * v166] = *(_DWORD *)(nd + 72);
                  copy_tinfo_t(&v194[v151], v76);
                  if ( v192[80 * v166] == 14 )
                  {
                    sub_409F40((__int64)v136, &v178);
                  }
                  else
                  {
                    *((_DWORD *)v136 + 14) = 3;
                    *((_DWORD *)v136 + 16) = v123;
                  }
                  LODWORD(s1[0]) = v158;
                }
              }
              else
              {
                v111 = v31;
                if ( v31 < v157 )
                {
                  v180 = 0xFFFFFFFF00000000LL;
                  v117 = (_QWORD *)j__qalloc_or_throw(80);
                  v32 = *(_QWORD *)(v168 + 24);
                  v117[4] = 0xFFFFFFFF00000000LL;
                  v117[5] = 0;
                  v117[6] = 0xFFFFFFFF00000000LL;
                  v117[7] = 0;
                  v117[8] = 0xFFFFFFFF00000000LL;
                  v117[9] = 0;
                  sub_330C90((__int64)v117, v32);
                  *(_DWORD *)v117 = 10;
                  sub_124BC0((__int64)(v117 + 4), (unsigned __int8 *)(*(_QWORD *)(v159 + 24) + srca));
                  *((_DWORD *)v117 + 17) = v111;
                  *((_QWORD *)&v180 + 1) = v117;
                  LOBYTE(v180) = 4;
                  DWORD1(v180) = v111;
                  sub_11C450((char *)(*(_QWORD *)(v159 + 24) + srca), (char *)&v180);
                  sub_11C7E0((__int64)&v180);
                }
                v33 = *(_QWORD *)(v159 + 24) + srca;
                v121 = *(_DWORD *)(v167 + 4 * v120);
                LODWORD(v177[0]) = v121;
                sub_124BC0((__int64)v136, (unsigned __int8 *)v33);
                *(_QWORD *)&v194[80 * v166 - 8] = *(_QWORD *)(v33 + 16);
                copy_tinfo_t(&v194[v151], v33 + 24);
                v34 = (_DWORD *)v33;
                v35 = (char *)&dest + v151;
                if ( (void **)((char *)&dest + v151) != (void **)(v33 + 32) )
                {
                  v36 = *(_QWORD *)(v33 + 40);
                  if ( v36 && (v37 = v36 - 1, v36 != 1) )
                  {
                    srcd = *(void **)(v33 + 32);
                    if ( *(_QWORD *)&v198[v151 / 4 - 2] < v36 )
                    {
                      v101 = v36 - 1;
                      v114 = *(_QWORD *)(v33 + 40);
                      v85 = (void *)qvector_reserve((char *)&dest + v151, *(&dest + 10 * v166), v36, 1);
                      v37 = v101;
                      v34 = (_DWORD *)v33;
                      v36 = v114;
                      v35 = (char *)&dest + v151;
                      *(&dest + 10 * v166) = v85;
                    }
                    *((_QWORD *)v35 + 1) = v36;
                    v105 = v34;
                    v112 = v36;
                    v118 = v35;
                    memmove(*(void **)v35, srcd, v37);
                    v34 = v105;
                    *(_BYTE *)(*v118 + v112 - 1) = 0;
                  }
                  else
                  {
                    (&v196)[v151 / 8] = nullptr;
                  }
                }
                srcf = v34;
                copy_argloc(&v198[v151 / 4], v34 + 14);
                v199[20 * v166] = srcf[18];
                copy_tinfo_t(&v194[v151], na);
                if ( v192[80 * v166] == 14 )
                {
                  sub_409F40((__int64)v136, v177);
                }
                else
                {
                  *((_DWORD *)v136 + 14) = 3;
                  *((_DWORD *)v136 + 16) = v121;
                }
                ++LODWORD(s1[0]);
              }
              v166 = ++v161;
              if ( (unsigned __int64)v184 < v161 || v126 <= SLODWORD(s1[0]) )
              {
                v158 = (int)s1[0];
                goto LABEL_44;
              }
            }
          }
          v158 = 1;
          v161 = 1;
LABEL_44:
          v38 = get_tinfo_property(v172, 20) & 0xFFFFFFF0;
          if ( v38 != 64 && v38 != 208 )
            goto LABEL_46;
          v124 = 4;
          if ( !v104 )
            v124 = *(_DWORD *)(v159 + 32);
          if ( v158 < v102 && v124 > v161 )
          {
            v78 = (_DWORD *)v167;
            LODWORD(v167) = v161;
            s1[0] = (char *)&v78[v158];
            v152 = 80LL * v158;
            v79 = &dest + 10 * v161;
            do
            {
              srce = (unsigned __int8 *)(*(_QWORD *)(v159 + 24) + v152);
              nc = *(_DWORD *)s1[0];
              v166 = (__int64)(srce + 24);
              LODWORD(v180) = nc;
              sub_124BC0((__int64)(v79 - 4), srce);
              v137 = (void *)(int)v167;
              *(_QWORD *)&v194[80 * (int)v167 - 8] = *((_QWORD *)srce + 2);
              copy_tinfo_t(v79 - 1, srce + 24);
              v80 = srce;
              v81 = v137;
              if ( v79 != (void **)(srce + 32) )
              {
                v82 = *((char **)srce + 5);
                if ( v82 && (v83 = (size_t)(v82 - 1), v82 != &byte_1) )
                {
                  v139 = *((void **)srce + 4);
                  if ( v79[2] < v82 )
                  {
                    v107 = (size_t)(v82 - 1);
                    v116 = v81;
                    v135 = *((char **)srce + 5);
                    v99 = (void *)qvector_reserve(v79, *(&dest + 10 * (_QWORD)v81), v82, 1);
                    v81 = v116;
                    v83 = v107;
                    v80 = srce;
                    v82 = v135;
                    *(&dest + 10 * (_QWORD)v116) = v99;
                  }
                  v79[1] = v82;
                  v110 = v81;
                  v113 = v80;
                  v134 = v82;
                  memmove(*v79, v139, v83);
                  v80 = v113;
                  v81 = v110;
                  v134[(_QWORD)*v79 - 1] = 0;
                }
                else
                {
                  v79[1] = nullptr;
                }
              }
              v133 = v81;
              v138 = v80;
              copy_argloc(v79 + 3, v80 + 56);
              v84 = v166;
              v199[20 * (_QWORD)v133] = *((_DWORD *)v138 + 18);
              copy_tinfo_t(v79 - 1, v84);
              if ( v192[80 * (_QWORD)v133] == 14 )
              {
                sub_409F40((__int64)(v79 - 4), &v180);
              }
              else
              {
                *((_DWORD *)v79 + 6) = 3;
                *((_DWORD *)v79 + 8) = nc;
              }
              v79 += 10;
              LODWORD(v167) = v167 + 1;
              s1[0] += 4;
              v152 += 80;
            }
            while ( v124 > (int)v167 && v126 > (int)v167 + v158 - v161 );
          }
          else
          {
LABEL_46:
            LODWORD(v167) = v161;
          }
          v174 = 0;
          v166 = (__int64)&v174;
          copy_tinfo_t(&v174, &v186);
          if ( (get_tinfo_property(v174, 2) & 0x3F) == 1 )
            v39 = 0;
          else
            v39 = get_tinfo_size(0, v174, 0);
          if ( (get_tinfo_property(v174, 2) & 0x3F) != 1 )
          {
            tinfo_property = get_tinfo_property(v174, 2);
            if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
              goto LABEL_51;
          }
          if ( v39 >= *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) )
            goto LABEL_51;
          v87 = sub_66AE0((_QWORD *)v6);
          v88 = *(_DWORD *)(v6 + 64);
          v153 = (__int64 *)v87;
          v180 = 0u;
          v89 = v88 - 2;
          v90 = *(_DWORD *)(a1 + 72);
          LODWORD(s1[0]) = v89;
          srcg = sub_6F670(v87, (__int64 *)&v180, v90, v89);
          qfree(v180);
          if ( !srcg )
            LODWORD(s1[0]) = -1;
          if ( (get_tinfo_property(v174, 2) & 0x3F) == 1 )
          {
            if ( !(_BYTE)v165 )
            {
              copy_tinfo_t(v166, v159 + 72);
              goto LABEL_51;
            }
            v91 = *(void (__fastcall **)(_QWORD *, __int64, int *, __int128 *, double))(*(_QWORD *)v163 + 104LL);
            *(_QWORD *)&v180 = 7;
            v91(v177, v163, &v169, &v180, 0.0);
            clear_tinfo_t(&v180);
            if ( !LODWORD(v177[0]) || (v92 = (unsigned __int8)getinf(59), v92 != v169) )
            {
              if ( !under_debugger )
                sub_3835A0(0xC94Cu, v163, 0.0);
              goto LABEL_182;
            }
            v180 = 0u;
            v181 = 0;
            v182 = 0;
            sub_1C2BF0((__int64)v177, (__int64 *)&v180, v92, 0, nullptr);
            if ( sub_17BF20(
                   v153,
                   (__int64)&v180,
                   *(_DWORD *)(a1 + 72),
                   (unsigned int)s1[0],
                   *(_QWORD *)(v168 + 8),
                   0,
                   2u,
                   1u) )
            {
              v178 = 7;
              copy_tinfo_t(v166, &v178);
              clear_tinfo_t(&v178);
              v39 = v169;
            }
            sub_93580(&v180);
            cleanup_argloc(v177);
            if ( *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) != 8 || v39 > 7 )
            {
LABEL_51:
              v40 = sub_335C70(
                      v6,
                      *(_QWORD *)(v168 + 24),
                      *(_QWORD *)(v168 + 40),
                      (_QWORD *)v166,
                      v167,
                      (__int64)v192,
                      0);
              v41 = v13 | v103 & 1;
              v42 = *(_QWORD *)(v40 + 72);
              LODWORD(v163) = v41;
              *(_DWORD *)(v42 + 280) |= v41;
              sub_63C80((__int64 *)(v42 + 136), (__int64 *)(v159 + 136));
              sub_317070((__int64 *)(v42 + 152), (__int64 **)(v159 + 152));
              v43 = *(_QWORD *)(v159 + 224);
              v167 = 0;
              v44 = v43;
              if ( v43 )
              {
                s1[0] = (char *)(16 * v43);
                v167 = qalloc_or_throw(16 * v43);
                memcpy((void *)v167, *(const void **)(v159 + 216), (size_t)s1[0]);
              }
              v45 = *(_QWORD *)(v42 + 216);
              v46 = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v44);
              if ( v45 )
              {
                *(_QWORD *)(v42 + 224) = 0;
                *(__m128i *)s1 = v46;
                qfree(v45);
                v46 = _mm_load_si128((const __m128i *)s1);
              }
              v47 = (_DWORD *)v167;
              v48 = v172;
              *(__m128i *)(v42 + 224) = v46;
              *(_QWORD *)(v42 + 216) = v47;
              v49 = get_tinfo_property(v48, 20) & 0xFFFFFFF0;
              if ( v49 == 64 || v49 == 208 )
                sub_40A760(v164, v42);
              if ( (_BYTE)v165 || *(_DWORD *)(v40 + 68) >= *(_DWORD *)(v168 + 68) )
              {
                v50 = v168;
                sub_11C450((char *)(v168 + 32), (char *)(v40 + 32));
                sub_11C450((char *)(v50 + 48), (char *)(v40 + 48));
                sub_11C450((char *)(v50 + 64), (char *)(v40 + 64));
              }
              else
              {
                v96 = (_DWORD *)v168;
                sub_125D20(v168 + 32, (unsigned __int8 *)v40);
                sub_11C7E0((__int64)(v96 + 12));
                *v96 = 9;
              }
              if ( (v163 & 8) != 0 )
                sub_6ACA0(a1, *(_QWORD *)(v168 + 8));
              if ( v40 )
              {
                sub_11C7E0(v40 + 64);
                sub_11C7E0(v40 + 48);
                sub_11C7E0(v40 + 32);
                j__qfree(v40);
              }
              v51 = *(_DWORD *)(a1 + 24);
              v52 = v166;
              BYTE1(v51) &= ~2u;
              LOBYTE(v51) = v51 | 0x80;
              *(_DWORD *)(a1 + 24) = v51;
              clear_tinfo_t(v52);
LABEL_65:
              for ( i = &v200; ; i -= 80 )
              {
                cleanup_argloc(i + 56);
                v54 = *((_QWORD *)i + 4);
                if ( v54 )
                {
                  *((_QWORD *)i + 5) = 0;
                  qfree(v54);
                }
                clear_tinfo_t(i + 24);
                sub_11C7E0((__int64)i);
                if ( v192 == i )
                  break;
              }
              if ( v189 )
              {
                *(_QWORD *)&v190 = 0;
                qfree(v189);
              }
              cleanup_argloc(&v187);
              clear_tinfo_t(&v186);
              v55 = v183;
              if ( v183 )
              {
                v56 = v184;
                v57 = 0;
                if ( (_QWORD)v184 )
                {
                  do
                  {
                    v58 = (_QWORD *)(v55 + 80 * v57);
                    clear_tinfo_t(v58 + 8);
                    v59 = v58[5];
                    if ( v59 )
                    {
                      v58[6] = 0;
                      qfree(v59);
                    }
                    v60 = v58[2];
                    if ( v60 )
                    {
                      v58[3] = 0;
                      qfree(v60);
                    }
                    cleanup_argloc(v58);
                    v55 = v183;
                    ++v57;
                  }
                  while ( v56 != v57 );
                }
                *(_QWORD *)&v184 = 0;
                qfree(v55);
              }
              goto LABEL_80;
            }
          }
          else
          {
            if ( *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) != 8 || v39 > 7 )
              goto LABEL_51;
            if ( !(_BYTE)v165 )
            {
              if ( v125 || *(_DWORD *)(v168 + 68) != 8 )
                goto LABEL_51;
              goto LABEL_155;
            }
          }
          v93 = *(void (__fastcall **)(__int64 *, __int64, int *, __int128 *))(*(_QWORD *)v163 + 104LL);
          *(_QWORD *)&v180 = 21;
          v93(&v178, v163, &v170, &v180);
          clear_tinfo_t(&v180);
          if ( (_DWORD)v178 != 3 || v170 != 8 )
          {
            if ( !under_debugger )
              sub_3835A0(0xCC22u, v163, 0.0);
            goto LABEL_182;
          }
          v180 = 0u;
          sub_63880((__int64 *)&v180, v39 + v179, 8 - v39);
          v94 = *(_DWORD *)(a1 + 72);
          v181 = 0;
          v182 = 0;
          v95 = sub_17BF20(v153, (__int64)&v180, v94, (unsigned int)s1[0], *(_QWORD *)(v168 + 8), 0, 2u, 1u);
          sub_93580(&v180);
          cleanup_argloc(&v178);
          if ( !v95 )
            goto LABEL_51;
LABEL_155:
          *(_QWORD *)&v180 = 21;
          copy_tinfo_t(v166, &v180);
          clear_tinfo_t(&v180);
          goto LABEL_51;
        }
        if ( !under_debugger )
          sub_3835A0(0xC86Du, (__int64)&v176, a6);
LABEL_182:
        BUG();
      }
      clear_tinfo_t(&v173);
      clear_tinfo_t(&v172);
      return 0;
    }
    return 0;
  }
  v18 = v171;
  v109 = 0;
  v16 = 1;
  if ( (_DWORD)v171 != 0x80000000 )
    goto LABEL_12;
  if ( !(unsigned __int8)sub_11F7C0((char *)(*(_QWORD *)(*(_QWORD *)(v168 + 72) + 24LL) + 320LL), &v171, 1u) || v171 > 2 )
    return 0;
  v165 = (char *)(v168 + 64);
  sub_123480((__int64)&v180, (unsigned __int8 *)(v168 + 64));
  v66 = *((_QWORD *)&v180 + 1);
  sub_40A760(v164, *((__int64 *)&v180 + 1));
  v67 = 4;
  if ( v171 == 2 )
    v67 = 3;
  *(_DWORD *)(v66 + 8) = v67;
  sub_81E80((_QWORD *)(v66 + 24), v67);
  v166 = sub_40A9D0((__int64)v164, 1, 0x80000000);
  v164 = *(char **)(*(_QWORD *)(v168 + 72) + 24LL);
  v7 = sub_11F7C0(v164, &v175, 0);
  if ( !(_BYTE)v7 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC86Du, (__int64)&v175, a6);
    goto LABEL_182;
  }
  v68 = get_tinfo_size(0, *(_QWORD *)v166, 0);
  sub_120450((__int64)v164, v163, v175, v68, -1, 0);
  sub_40B140(*(_QWORD *)(v66 + 24), *(_QWORD *)(*(_QWORD *)(v168 + 72) + 24LL), v166, *(_DWORD *)v167);
  v69 = v9 + 264;
  sub_40B140(
    *(_QWORD *)(v66 + 24) + 80LL,
    *(_QWORD *)(*(_QWORD *)(v168 + 72) + 24LL) + 320LL,
    v69,
    *(_DWORD *)(v167 + 16));
  sub_40B140(
    *(_QWORD *)(v66 + 24) + 160LL,
    *(_QWORD *)(*(_QWORD *)(v168 + 72) + 24LL) + 80LL,
    *(_QWORD *)(*(_QWORD *)(v168 + 72) + 24LL) + 104LL,
    *(_DWORD *)(v167 + 4));
  if ( *(_DWORD *)(v66 + 8) == 4 )
    sub_40B140(
      *(_QWORD *)(v66 + 24) + 240LL,
      *(_QWORD *)(*(_QWORD *)(v168 + 72) + 24LL) + 160LL,
      v69,
      *(_DWORD *)(v167 + 8));
  *(_DWORD *)(v66 + 280) |= v13;
  sub_11C450(v165, (char *)&v180);
  if ( v13 != 4 )
    sub_6ACA0(a1, *(_QWORD *)(v168 + 8));
  v70 = *(_DWORD *)(a1 + 24);
  BYTE1(v70) &= ~2u;
  LOBYTE(v70) = v70 | 0x80;
  *(_DWORD *)(a1 + 24) = v70;
  sub_11C7E0((__int64)&v180);
  return v7;
}
