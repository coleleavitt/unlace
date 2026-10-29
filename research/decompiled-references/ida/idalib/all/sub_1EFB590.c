__int64 __fastcall sub_1EFB590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v8; // r11
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  size_t v14; // rbp
  __int64 v15; // r11
  _BYTE *v16; // r8
  void **v17; // rcx
  int v18; // eax
  unsigned int v19; // ebp
  size_t v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  bool v24; // zf
  unsigned int v25; // eax
  unsigned int v26; // ebp
  bool v27; // bl
  unsigned int v28; // r8d
  __int64 v29; // rdx
  unsigned int v30; // r15d
  int v31; // ebp
  char v32; // al
  unsigned int v33; // r15d
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // r11
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r9d
  _QWORD *v40; // rcx
  size_t v41; // rdx
  __int64 v42; // r10
  unsigned int v43; // edx
  int v44; // r11d
  __int64 v45; // r11
  char *v46; // rdi
  size_t v47; // rax
  void *v48; // rax
  size_t v49; // rax
  size_t v50; // r8
  char *v51; // rcx
  size_t v52; // rdx
  void **v53; // rsi
  __m128i si128; // xmm3
  void *v55; // rax
  size_t v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r11
  char v60; // al
  int v61; // esi
  int v62; // r10d
  __int64 v63; // r11
  __int64 v64; // rax
  bool v65; // al
  unsigned int v66; // ebp
  int v67; // eax
  __int64 v68; // r11
  int v69; // r9d
  _BYTE *v70; // rsi
  signed __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r8
  _QWORD *v76; // rdx
  __int64 v77; // rax
  _BYTE *v78; // rsi
  __int64 v79; // rdx
  void *v80; // rdi
  _BYTE *v81; // rsi
  __int64 v82; // rax
  char *v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rsi
  __int64 v86; // rdx
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  __int64 v91; // rbp
  char v92; // al
  void **v93; // rax
  void **v94; // rdi
  __int64 v95; // r10
  int v96; // eax
  __int64 v97; // rax
  int v98; // eax
  unsigned int v99; // r9d
  void *v100; // rax
  int v101; // eax
  int v102; // ebp
  unsigned int v103; // eax
  _BYTE *v104; // rsi
  void *v105; // rax
  char v106; // al
  __int64 v107; // rax
  char v108; // al
  __int64 v109; // rax
  __int64 v110; // r11
  __int64 v111; // r11
  __int64 v112; // r11
  size_t v113; // rax
  unsigned int v114; // [rsp+30h] [rbp-450h]
  char v115; // [rsp+30h] [rbp-450h]
  __int64 v116; // [rsp+30h] [rbp-450h]
  __int64 v117; // [rsp+30h] [rbp-450h]
  __int64 v118; // [rsp+30h] [rbp-450h]
  unsigned int v119; // [rsp+30h] [rbp-450h]
  unsigned int v120; // [rsp+38h] [rbp-448h]
  unsigned int v121; // [rsp+38h] [rbp-448h]
  __int64 v122; // [rsp+38h] [rbp-448h]
  __int64 v123; // [rsp+38h] [rbp-448h]
  _BYTE *v124; // [rsp+38h] [rbp-448h]
  unsigned int v125; // [rsp+44h] [rbp-43Ch]
  void *v126; // [rsp+48h] [rbp-438h]
  unsigned int v128; // [rsp+50h] [rbp-430h]
  unsigned int v129; // [rsp+50h] [rbp-430h]
  char v130; // [rsp+58h] [rbp-428h]
  size_t v131; // [rsp+68h] [rbp-418h]
  char v132; // [rsp+78h] [rbp-408h]
  __int64 v133; // [rsp+78h] [rbp-408h]
  __int64 v134; // [rsp+78h] [rbp-408h]
  int v135; // [rsp+78h] [rbp-408h]
  int v136; // [rsp+78h] [rbp-408h]
  __int64 v137; // [rsp+78h] [rbp-408h]
  __int64 v138; // [rsp+78h] [rbp-408h]
  void **v139; // [rsp+88h] [rbp-3F8h]
  unsigned int v140; // [rsp+88h] [rbp-3F8h]
  __int64 v141; // [rsp+88h] [rbp-3F8h]
  char v142; // [rsp+88h] [rbp-3F8h]
  _BYTE *v143; // [rsp+90h] [rbp-3F0h]
  unsigned __int64 v144; // [rsp+98h] [rbp-3E8h]
  __int64 v145; // [rsp+A0h] [rbp-3E0h]
  size_t v146; // [rsp+A0h] [rbp-3E0h]
  __int64 v147; // [rsp+A0h] [rbp-3E0h]
  __int64 v148; // [rsp+A0h] [rbp-3E0h]
  __int64 v149; // [rsp+A0h] [rbp-3E0h]
  __int64 v150; // [rsp+A0h] [rbp-3E0h]
  __int64 v151; // [rsp+A0h] [rbp-3E0h]
  int v152; // [rsp+A8h] [rbp-3D8h]
  int v153; // [rsp+A8h] [rbp-3D8h]
  unsigned __int64 v154; // [rsp+B0h] [rbp-3D0h]
  size_t v155; // [rsp+B8h] [rbp-3C8h]
  size_t v156; // [rsp+B8h] [rbp-3C8h]
  _BYTE *v157; // [rsp+C0h] [rbp-3C0h]
  void *v158; // [rsp+C0h] [rbp-3C0h]
  __int64 v159; // [rsp+C8h] [rbp-3B8h]
  unsigned int v160; // [rsp+C8h] [rbp-3B8h]
  __int64 v161; // [rsp+D0h] [rbp-3B0h]
  unsigned int v162; // [rsp+DCh] [rbp-3A4h] BYREF
  __int64 v163; // [rsp+E0h] [rbp-3A0h] BYREF
  char v164; // [rsp+EBh] [rbp-395h] BYREF
  unsigned int v165; // [rsp+ECh] [rbp-394h] BYREF
  __int64 v166; // [rsp+F0h] [rbp-390h] BYREF
  void *v167; // [rsp+F8h] [rbp-388h] BYREF
  int v168; // [rsp+100h] [rbp-380h]
  void *s2; // [rsp+108h] [rbp-378h] BYREF
  size_t n; // [rsp+110h] [rbp-370h]
  void *v171; // [rsp+118h] [rbp-368h] BYREF
  char v172; // [rsp+120h] [rbp-360h]
  __m128i v173; // [rsp+128h] [rbp-358h] BYREF
  int v174; // [rsp+138h] [rbp-348h]
  __int128 v175; // [rsp+148h] [rbp-338h] BYREF
  int v176; // [rsp+158h] [rbp-328h]
  void *v177; // [rsp+168h] [rbp-318h] BYREF
  size_t v178; // [rsp+170h] [rbp-310h]
  _BYTE v179[16]; // [rsp+178h] [rbp-308h] BYREF
  _QWORD v180[6]; // [rsp+188h] [rbp-2F8h] BYREF
  void *s1; // [rsp+1B8h] [rbp-2C8h] BYREF
  size_t v182; // [rsp+1C0h] [rbp-2C0h]
  _QWORD v183[4]; // [rsp+1C8h] [rbp-2B8h] BYREF
  void *v184[2]; // [rsp+1E8h] [rbp-298h] BYREF
  _DWORD v185[10]; // [rsp+1F8h] [rbp-288h] BYREF
  unsigned __int8 v186; // [rsp+220h] [rbp-260h]
  void *ptr; // [rsp+238h] [rbp-248h] BYREF
  __int64 v188; // [rsp+240h] [rbp-240h]
  _BYTE v189[568]; // [rsp+248h] [rbp-238h] BYREF

  v5 = a2 + 464;
  v163 = a4;
  v162 = a5;
  sub_202A150(&ptr, a2 + 464, 15, 0);
  v126 = ptr;
  if ( ptr )
  {
    sub_1EBF0A0(a1, (_QWORD **)&ptr);
    if ( ptr )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
    return 1;
  }
  v164 = 0;
  v180[0] = &v164;
  v180[2] = &v163;
  v180[1] = a2;
  v180[3] = &v162;
  v180[4] = a1;
  v125 = 0;
  v130 = sub_1EAADD0(a1, a2);
  ptr = v189;
  v188 = 0x4000000000LL;
  v131 = 0;
  v120 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      sub_1EAFE10((__int64)&v167, v5);
      if ( (v168 & 1) != 0 )
      {
        v100 = v167;
        v167 = nullptr;
        v184[0] = v100;
LABEL_59:
        sub_1EBF0A0(a1, (_QWORD **)v184);
        if ( v184[0] )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v184[0] + 8LL))(v184[0]);
LABEL_43:
        v19 = 1;
        goto LABEL_44;
      }
      if ( (_DWORD)v167 == 1 )
      {
        v19 = sub_1EC0410((__int64)v180);
        if ( v19 )
          goto LABEL_44;
        if ( v130 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFFB) == 1 )
          goto LABEL_49;
        v28 = v125;
        if ( *(_BYTE *)(a1 + 9262) )
          v28 = v120;
        v29 = **(_QWORD **)(*(_QWORD *)(a1 + 136) + 104LL);
        if ( (*(_BYTE *)(v29 + 624) & 0x20) != 0
          && *(_QWORD *)(a2 + 1280) > *(_QWORD *)(v29 + 296)
          && !*(_DWORD *)(a2 + 4) )
        {
          if ( !*(_BYTE *)(a1 + 9263) )
          {
LABEL_49:
            v22 = *(_QWORD *)(a1 + 56);
            if ( v22 )
            {
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v22 + 104LL))(
                v22,
                *(_QWORD *)(a2 + 8),
                *(_QWORD *)(a2 + 16),
                *(unsigned int *)(a2 + 4));
              v23 = *(_QWORD *)(a1 + 56);
              if ( v23 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 112LL))(v23) )
                {
                  v24 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 120LL))(*(_QWORD *)(a1 + 56)) == 0;
                  v25 = v120;
                  if ( v24 )
                    v25 = v125;
                  v121 = v25;
                  if ( v25 )
                  {
                    v128 = v19;
                    v26 = 0;
                    do
                    {
                      v27 = v125 <= v26++;
                      sub_1EC0940((__int64)v184, a2, v26);
                      sub_1EAAE30(
                        (__int64)&s1,
                        a1 + 13296,
                        v184[0],
                        (size_t)v184[1],
                        *(_QWORD *)(a2 + 72),
                        *(_QWORD *)(a2 + 80));
                      (*(void (__fastcall **)(_QWORD, void *, size_t, bool, _QWORD, bool))(**(_QWORD **)(a1 + 56) + 128LL))(
                        *(_QWORD *)(a1 + 56),
                        s1,
                        v182,
                        v27,
                        v186,
                        (*(_DWORD *)(a2 + 4) & 0xFFFFFFFB) == 1);
                      sub_1EADF80(v183);
                    }
                    while ( v26 != v121 );
                    v19 = v128;
                  }
                }
              }
            }
            goto LABEL_44;
          }
          v28 = v125;
        }
        if ( v28 )
        {
          v114 = v28;
          v30 = v162;
          sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 947);
          sub_AE9DF0((unsigned __int8 **)v184, v114, 3u);
          sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 48));
          sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
          sub_AEA040((__int64)v184);
          v129 = v19;
          v31 = 0;
          v32 = ((v30 >> 1) ^ 1) & 1;
          v33 = v114;
          v115 = v32;
          do
          {
            v34 = sub_1EC0E20(a1, a2, ++v31, v115);
            if ( (v34 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v34 >> 1) & 3) == 2 )
            {
              v19 = 3;
              goto LABEL_44;
            }
          }
          while ( v31 != v33 );
          v19 = v129;
        }
        goto LABEL_49;
      }
      if ( !(_DWORD)v167 )
        goto LABEL_42;
      if ( (_DWORD)v167 != 2 )
        break;
      if ( HIDWORD(v167) == 16 )
      {
        sub_1EC2CE0(a2 + 864, v5);
        sub_A0BAF0((__int64 *)v184, v5);
        if ( v184[0] )
          goto LABEL_59;
        sub_1EB0310((__int64 *)v184, a2 + 864, 16, nullptr);
        if ( v184[0] )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v184[0] + 8LL))(v184[0]);
LABEL_42:
          v21 = j__strlen("malformed block record in AST file");
          sub_1EAD680(a1, "malformed block record in AST file", v21);
          goto LABEL_43;
        }
        *(_QWORD *)(a2 + 1208) = 8LL * *(_QWORD *)(a2 + 880) - *(unsigned int *)(a2 + 896);
      }
      else if ( HIDWORD(v167) == 17 )
      {
        v9 = *(_QWORD *)(a1 + 56);
        if ( v9 && !v163 )
        {
          v103 = sub_1ECB4B0(
                   v5,
                   *(_QWORD *)(a2 + 8),
                   *(_QWORD *)(a2 + 16),
                   v162,
                   (*(_DWORD *)(a2 + 4) & 0xFFFFFFFB) == 1,
                   v9,
                   a1 + 13216);
          if ( v103 == 1 )
          {
            v19 = 1;
            v113 = j__strlen("malformed block record in AST file");
            sub_1EAD680(a1, "malformed block record in AST file", v113);
            goto LABEL_44;
          }
          if ( !v130 && (!*(_BYTE *)(a1 + 9261) || v103 != 5) && v103 )
          {
            v19 = v103;
            goto LABEL_44;
          }
        }
        else
        {
          sub_A0BAF0((__int64 *)v184, v5);
          if ( v184[0] )
            goto LABEL_59;
        }
      }
      else
      {
        sub_A0BAF0((__int64 *)v184, v5);
        if ( v184[0] )
          goto LABEL_59;
      }
      sub_A0B030((__int64 *)&v167);
    }
    LODWORD(v188) = 0;
    s2 = nullptr;
    n = 0;
    sub_2027F10(&v171, v5, HIDWORD(v167), &ptr, &s2);
    v132 = v172 & 1;
    if ( (v172 & 1) != 0 )
      break;
    v8 = (unsigned int)v171;
    switch ( (int)v171 )
    {
      case 1:
        v10 = ptr;
        if ( *(_QWORD *)ptr != 34 && !v130 )
        {
          v117 = (unsigned int)v171;
          if ( (v162 & 4) == 0 )
          {
            sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), (*(_QWORD *)ptr < 0x22u) - 1 + 916);
            v111 = v117;
            if ( ((1LL << *(_DWORD *)(a2 + 4)) & 0x23) == 0 )
              v111 = ((1LL << *(_DWORD *)(a2 + 4)) & 4) == 0 ? 2 : 0;
            v19 = 4;
            sub_AE9DF0((unsigned __int8 **)v184, v111, 3u);
            sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
            sub_AEA040((__int64)v184);
            goto LABEL_146;
          }
LABEL_227:
          v19 = 4;
          goto LABEL_146;
        }
        v11 = *((_QWORD *)ptr + 7);
        if ( v130 != 1 && v11 )
        {
          if ( (v162 & 0x10) != 0 )
          {
            v137 = (unsigned int)v171;
            v106 = sub_1EAB290(a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v162);
            v8 = v137;
            if ( v106 )
            {
              v19 = 3;
              goto LABEL_146;
            }
          }
          if ( !*(_BYTE *)(a1 + 9260) )
          {
            v118 = v8;
            sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 917);
            v112 = v118;
            if ( ((1LL << *(_DWORD *)(a2 + 4)) & 0x23) == 0 )
              v112 = ((1LL << *(_DWORD *)(a2 + 4)) & 4) == 0 ? 2 : 0;
            v19 = 6;
            sub_AE9DF0((unsigned __int8 **)v184, v112, 3u);
            sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
            sub_AEA040((__int64)v184);
            goto LABEL_146;
          }
LABEL_21:
          *(_BYTE *)(*(_QWORD *)(a1 + 104) + 192LL) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 104) + 193LL) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 104) + 195LL) = 1;
          v10 = ptr;
          goto LABEL_22;
        }
        if ( v11 )
          goto LABEL_21;
LABEL_22:
        v12 = v10[4];
        *(_BYTE *)(a2 + 208) = v12 != 0;
        if ( v12 )
        {
          v13 = *(_QWORD *)(a1 + 9232);
          v133 = v8;
          if ( v13 )
          {
            v104 = *(_BYTE **)(a1 + 9224);
            v184[0] = v185;
            sub_1EA9CC0(v184, v104, (__int64)&v104[v13]);
          }
          else
          {
            sub_1EAA040(v184, "/");
          }
          sub_A0AAD0(a2 + 72, v184);
          v8 = v133;
          if ( v184[0] != v185 )
          {
            operator delete(v184[0]);
            v8 = v133;
          }
          v10 = ptr;
        }
        v134 = v8;
        *(_BYTE *)(a2 + 209) = v10[5] != 0;
        *(_BYTE *)(a2 + 210) = v10[6] != 0;
        sub_10CCE60((__int64)&s1);
        v14 = n;
        v15 = v134;
        v16 = s2;
        v17 = (void **)s1;
        if ( n != v182
          || n && (v143 = s2, v139 = (void **)s1, v18 = memcmp(s1, s2, n), v17 = v139, v16 = v143, v15 = v134, v18) )
        {
          if ( !v130 )
          {
            v124 = v16;
            v116 = v15;
            if ( (v162 & 4) == 0 )
            {
              sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 902);
              v110 = v116;
              if ( ((1LL << *(_DWORD *)(a2 + 4)) & 0x23) == 0 )
                v110 = ((1LL << *(_DWORD *)(a2 + 4)) & 4) == 0 ? 2 : 0;
              sub_AE9DF0((unsigned __int8 **)v184, v110, 3u);
              sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
              sub_AEC220((unsigned __int8 **)v184, v124, v14);
              sub_AEC220((unsigned __int8 **)v184, s1, v182);
              sub_AEA040((__int64)v184);
              v17 = (void **)s1;
            }
            if ( v17 != v183 )
            {
              v19 = 4;
              operator delete(v17);
              goto LABEL_146;
            }
            goto LABEL_227;
          }
        }
        if ( v17 != v183 )
          operator delete(v17);
        goto LABEL_34;
      case 2:
        v145 = (unsigned int)v171;
        v140 = (unsigned int)v171;
        v35 = sub_1EC0410((__int64)v180);
        if ( v35 )
          goto LABEL_112;
        v36 = *(_QWORD *)ptr;
        v37 = *((_QWORD *)ptr + 1);
        v165 = 2;
        v152 = v36;
        v154 = (unsigned int)__ROR4__(v37, 1) | v144 & 0xFFFFFFFF00000000LL;
        v144 = v154;
        v38 = sub_1EAC840((__int64 *)&ptr, &v165, (__int64 *)&s2);
        v39 = v140;
        v40 = ptr;
        v157 = (_BYTE *)v38;
        v155 = v41;
        v42 = *((_QWORD *)ptr + v165);
        v43 = v165 + 1;
        *(_OWORD *)v184 = 0;
        v177 = v179;
        s1 = v183;
        LODWORD(v38) = v44;
        v45 = v145;
        ++v165;
        v185[0] = 0;
        v173 = 0;
        v174 = 0;
        v178 = 0;
        v179[0] = 0;
        v182 = 0;
        LOBYTE(v183[0]) = 0;
        if ( (v38 & 0xFFFFFFFB) == 1 )
        {
          v161 = v145;
          v148 = v42;
          sub_13C2FD0(v184, *(__int64 **)(*(_QWORD *)(a1 + 136) + 104LL), v157, v155, v42 == 0);
          sub_A0AAD0((__int64)&v177, v184);
          v95 = v148;
          v39 = v140;
          v45 = v161;
          if ( v184[0] != v185 )
          {
            operator delete(v184[0]);
            v45 = v161;
            v95 = v148;
            v39 = v140;
          }
          if ( v95 )
          {
            if ( !v178 )
            {
LABEL_226:
              v119 = v39;
              sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 918);
              sub_AEC220((unsigned __int8 **)v184, v157, v155);
              sub_AEA040((__int64)v184);
              v93 = (void **)s1;
              v19 = v119;
              goto LABEL_142;
            }
            v66 = v162;
            v149 = v45;
            if ( (v162 & 2) != 0 )
            {
              v96 = sub_1EFD190(
                      a1,
                      (_DWORD)v177,
                      v178,
                      v152,
                      v154,
                      a2,
                      a3,
                      0,
                      0,
                      (__int128)_mm_load_si128(&v173),
                      v174,
                      v162);
            }
            else
            {
              v66 = v162 & 0xFFFFFFFE;
              v96 = sub_1EFD190(
                      a1,
                      (_DWORD)v177,
                      v178,
                      v152,
                      v154,
                      a2,
                      a3,
                      0,
                      0,
                      (__int128)_mm_load_si128(&v173),
                      v174,
                      v162 & 0xFFFFFFFE);
            }
            v142 = 0;
            v153 = v96;
            v97 = sub_1FDE440(a1 + 160, v177);
            v68 = v149;
            v69 = v153;
            if ( v97 )
            {
              if ( *(_QWORD *)(v97 + 48) != v155
                || v155 && (v98 = memcmp(*(const void **)(v97 + 40), v157, v155), v68 = v149, v69 = v153, v98) )
              {
                sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 918);
                sub_AEC220((unsigned __int8 **)v184, v157, v155);
                sub_AEA040((__int64)v184);
LABEL_165:
                v68 = 1;
                v92 = (v66 & 1) == 0;
                goto LABEL_139;
              }
            }
            goto LABEL_175;
          }
          v43 = v165;
          v40 = ptr;
        }
        else if ( v42 )
        {
          goto LABEL_226;
        }
        v46 = (char *)s2;
        v176 = 0;
        v47 = v40[v43];
        v175 = 0;
        v156 = v47;
        v165 = v43 + 2;
        v48 = (void *)v40[v43 + 1];
        *(_OWORD *)v184 = 0;
        v185[0] = 0;
        v158 = v48;
        v49 = n;
        if ( n <= 0x13 )
        {
          v52 = n;
          v50 = 0;
          if ( !n )
            goto LABEL_92;
          if ( (__int64)n <= 15 )
          {
            v51 = (char *)s2;
            v53 = v184;
          }
          else
          {
            v52 = n - 16;
            v51 = (char *)s2 + 16;
            *(__m128i *)v184 = _mm_loadu_si128((const __m128i *)s2);
            if ( n == 16 )
              goto LABEL_92;
            v53 = (void **)v185;
          }
        }
        else
        {
          v50 = n - 20;
          v51 = (char *)s2 + 16;
          v49 = 20;
          v52 = 4;
          *(__m128i *)v184 = _mm_loadu_si128((const __m128i *)s2);
          v53 = (void **)v185;
        }
        *(_BYTE *)v53 = *v51;
        if ( v52 != 1 )
        {
          *((_BYTE *)v53 + 1) = v51[1];
          if ( v52 != 2 )
          {
            *((_BYTE *)v53 + 2) = v51[2];
            if ( v52 != 3 )
            {
              *((_BYTE *)v53 + 3) = v51[3];
              if ( v52 != 4 )
              {
                *((_BYTE *)v53 + 4) = v51[4];
                if ( v52 != 5 )
                {
                  *((_BYTE *)v53 + 5) = v51[5];
                  if ( v52 != 6 )
                  {
                    *((_BYTE *)v53 + 6) = v51[6];
                    if ( v52 != 7 )
                    {
                      *((_BYTE *)v53 + 7) = v51[7];
                      if ( v52 != 8 )
                      {
                        *((_BYTE *)v53 + 8) = v51[8];
                        if ( v52 != 9 )
                        {
                          *((_BYTE *)v53 + 9) = v51[9];
                          if ( v52 != 10 )
                          {
                            *((_BYTE *)v53 + 10) = v51[10];
                            if ( v52 != 11 )
                            {
                              *((_BYTE *)v53 + 11) = v51[11];
                              if ( v52 != 12 )
                              {
                                *((_BYTE *)v53 + 12) = v51[12];
                                if ( v52 != 13 )
                                {
                                  *((_BYTE *)v53 + 13) = v51[13];
                                  if ( v52 != 14 )
                                    *((_BYTE *)v53 + 14) = v51[14];
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
            }
          }
        }
LABEL_92:
        si128 = _mm_load_si128((const __m128i *)v184);
        v141 = v45;
        v174 = v185[0];
        v173 = si128;
        n = v50;
        s2 = &v46[v49];
        v55 = (void *)sub_1EAC840((__int64 *)&ptr, &v165, (__int64 *)&s2);
        sub_1EAB120((__int64)v184, a1 + 13296, v55, v56, (__int64)v126, v131);
        sub_A0AAD0((__int64)&s1, v184);
        v59 = v141;
        if ( v184[0] != v185 )
        {
          operator delete(v184[0]);
          v59 = v141;
        }
        if ( v178 )
        {
          v159 = v59;
          v146 = v178;
          v60 = sub_FD3830(
                  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL),
                  0x3B6u,
                  *(unsigned int *)(a1 + 504),
                  *(_QWORD *)(a1 + 104),
                  v57,
                  v58);
          v142 = 0;
          v61 = (int)v177;
          v62 = v146;
          v63 = v159;
          if ( v60 != 1 )
          {
            v166 = sub_12ED8B0(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 80LL), v177, v146, 0, 1u);
            v64 = sub_12ED8B0(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 80LL), s1, v182, 0, 1u);
            v63 = v159;
            *(_QWORD *)&v175 = v64;
            if ( v166 )
            {
              if ( v64 )
              {
                v65 = sub_FEE430((unsigned __int64 *)&v166, (unsigned __int64 *)&v175);
                v63 = v159;
                if ( !v65 )
                {
                  sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 950);
                  sub_AEC220((unsigned __int8 **)v184, v177, v178);
                  sub_AEC220((unsigned __int8 **)v184, s1, v182);
                  sub_AEA040((__int64)v184);
                  sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 941);
                  sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
                  sub_AE9DF0((unsigned __int8 **)v184, *(_QWORD *)(a2 + 48) != 0, 2u);
                  sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 48));
                  sub_AEA040((__int64)v184);
                  v142 = 1;
                  v63 = v159;
                }
              }
            }
            v62 = v178;
            v61 = (int)v177;
          }
        }
        else
        {
          v151 = v59;
          sub_9EE8A0((__int64)&v177, (__int64)&s1);
          v142 = 0;
          v63 = v151;
          v62 = v178;
          v61 = (int)v177;
        }
        v66 = v162;
        v160 = v162 & 2;
        if ( (v162 & 2) != 0 )
        {
          v147 = v63;
          v67 = sub_1EFD190(
                  a1,
                  v61,
                  v62,
                  v152,
                  v154,
                  a2,
                  a3,
                  v156,
                  (__int64)v158,
                  (__int128)_mm_load_si128(&v173),
                  v174,
                  v162);
          v68 = v147;
          v69 = v67;
          if ( v67 == 3 )
          {
            v102 = v160;
            goto LABEL_199;
          }
          goto LABEL_103;
        }
        v150 = v63;
        v66 = v162 & 0xFFFFFFFE;
        v101 = sub_1EFD190(
                 a1,
                 v61,
                 v62,
                 v152,
                 v154,
                 a2,
                 a3,
                 v156,
                 (__int64)v158,
                 (__int128)_mm_load_si128(&v173),
                 v174,
                 v162 & 0xFFFFFFFE);
        v68 = v150;
        v69 = v101;
LABEL_175:
        if ( v69 == 3 )
        {
          v102 = v66 & 2;
          if ( !v102 )
            goto LABEL_177;
LABEL_199:
          v123 = v68;
          v107 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 32LL))(*(_QWORD *)(a1 + 288));
          v108 = sub_1FD88A0(v107, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
          v68 = v123;
          if ( v108 )
          {
            if ( !v142 )
            {
              v132 = v108;
              goto LABEL_178;
            }
          }
          else
          {
LABEL_177:
            if ( !v142 )
            {
LABEL_178:
              v92 = v132 | (v102 == 0);
LABEL_139:
              if ( v92 )
              {
LABEL_140:
                v122 = v68;
                sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 941);
                sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
                sub_AE9DF0((unsigned __int8 **)v184, *(_QWORD *)(a2 + 48) != 0, 2u);
                sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 48));
                sub_AEA040((__int64)v184);
                v93 = (void **)s1;
                v68 = v122;
                goto LABEL_141;
              }
            }
          }
          v93 = (void **)s1;
LABEL_141:
          v19 = dword_266EAF0[v68];
LABEL_142:
          if ( v93 != v183 )
            operator delete(v93);
          if ( v177 != v179 )
            operator delete(v177);
          goto LABEL_146;
        }
LABEL_103:
        if ( !v142 )
        {
          switch ( v69 )
          {
            case 0:
              v94 = (void **)s1;
              goto LABEL_150;
            case 1:
            case 6:
              v68 = (unsigned int)(v69 - 1);
              goto LABEL_140;
            case 2:
              goto LABEL_165;
            case 4:
              v68 = 3;
              v92 = ((v66 >> 2) ^ 1) & 1;
              goto LABEL_139;
            case 5:
              v68 = 4;
              v92 = ((v66 >> 3) ^ 1) & 1;
              goto LABEL_139;
            default:
              ++v168;
              BUG();
          }
        }
        v93 = (void **)s1;
        v99 = v69 - 1;
        v94 = (void **)s1;
        if ( v99 <= 5 )
        {
          v68 = v99;
          goto LABEL_141;
        }
LABEL_150:
        if ( v94 != v183 )
          operator delete(v94);
        v80 = v177;
        if ( v177 != v179 )
LABEL_122:
          operator delete(v80);
LABEL_34:
        sub_A0AE90((__int64 *)&v171);
        sub_A0B030((__int64 *)&v167);
        break;
      case 3:
        v81 = s2;
        v82 = *(_QWORD *)ptr;
        v83 = (char *)s2 + n;
        v184[0] = v185;
        *(_DWORD *)(a2 + 168) = v82;
        sub_1EA9D80(v184, v81, (__int64)v83);
        sub_A0AAD0(a2 + 136, v184);
        if ( v184[0] != v185 )
          operator delete(v184[0]);
        sub_1EAB120(
          (__int64)v184,
          a1 + 13296,
          *(void **)(a2 + 136),
          *(_QWORD *)(a2 + 144),
          *(_QWORD *)(a2 + 72),
          *(_QWORD *)(a2 + 80));
        sub_A0AAD0(a2 + 104, v184);
        v80 = v184[0];
        if ( v184[0] == v185 )
          goto LABEL_34;
        goto LABEL_122;
      case 4:
        *(_DWORD *)(a2 + 168) = *(_QWORD *)ptr;
        goto LABEL_34;
      case 5:
        v84 = *(_QWORD *)(a2 + 1232);
        v85 = *(_QWORD *)(a2 + 1224);
        v86 = *((_QWORD *)ptr + 1);
        v120 = *(_QWORD *)ptr;
        *(_QWORD *)(a2 + 1216) = s2;
        v125 = v86;
        v87 = (v84 - v85) >> 3;
        if ( v120 > v87 )
        {
          v136 = v86;
          sub_1EB0DE0((_QWORD *)(a2 + 1224), v120 - v87);
          LODWORD(v86) = v136;
        }
        else if ( v120 < v87 )
        {
          v88 = v85 + 8LL * v120;
          if ( v84 != v88 )
            *(_QWORD *)(a2 + 1232) = v88;
        }
        v89 = *(_QWORD *)(a2 + 1248);
        v90 = (*(_QWORD *)(a2 + 1256) - v89) >> 6;
        if ( v120 > v90 )
        {
          v135 = v86;
          sub_1EB0F90((const __m128i **)(a2 + 1248), v120 - v90);
          LODWORD(v86) = v135;
        }
        else if ( v120 < v90 )
        {
          v91 = v89 + ((unsigned __int64)v120 << 6);
          if ( *(_QWORD *)(a2 + 1256) != v91 )
            *(_QWORD *)(a2 + 1256) = v91;
        }
        *(_DWORD *)(a2 + 1272) = v86;
        goto LABEL_34;
      case 6:
        v184[0] = v185;
        sub_1EA9D80(v184, s2, (__int64)s2 + n);
        sub_A0AAD0(a2 + 40, v184);
        if ( v184[0] != v185 )
          operator delete(v184[0]);
        sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 946);
        sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 48));
        sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
        sub_AE9DF0((unsigned __int8 **)v184, v163 != 0, 2u);
        if ( v163 )
        {
          v70 = *(_BYTE **)(v163 + 40);
          v71 = *(_QWORD *)(v163 + 48);
        }
        else
        {
          v70 = nullptr;
          v71 = 0;
        }
        sub_AEC220((unsigned __int8 **)v184, v70, v71);
        sub_AEA040((__int64)v184);
        v72 = *(_QWORD *)(a1 + 56);
        if ( v72 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v72 + 24LL))(
            v72,
            *(_QWORD *)(a2 + 40),
            *(_QWORD *)(a2 + 48));
        v35 = sub_1EC0410((__int64)v180);
        if ( v35 )
          goto LABEL_112;
        goto LABEL_34;
      case 7:
        v35 = sub_1EFA880(a1, (__int64 *)&ptr, a2, v163, v162);
        if ( !v35 )
          goto LABEL_34;
LABEL_112:
        v19 = v35;
        goto LABEL_146;
      case 8:
        v184[0] = v185;
        v126 = s2;
        v131 = n;
        sub_1EA9D80(v184, s2, (__int64)s2 + n);
        sub_A0AAD0(a2 + 72, v184);
        if ( v184[0] != v185 )
          operator delete(v184[0]);
        v73 = *(_QWORD *)(a1 + 136);
        if ( !*(_BYTE *)(*(_QWORD *)(v73 + 40) + 72LL) )
          goto LABEL_34;
        v74 = sub_13C9950(*(__int64 **)(v73 + 104), *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), 0, 1, 1);
        v75 = v74;
        if ( !v74 )
          goto LABEL_34;
        v76 = *(_QWORD **)(v74 + 48);
        if ( !v76 )
          goto LABEL_34;
        v77 = *(_QWORD *)(a1 + 136);
        if ( (*(_BYTE *)(*(_QWORD *)(v77 + 40) + 168LL) & 2) == 0 && (*(_DWORD *)(a2 + 4) & 0xFFFFFFFB) != 1 )
        {
          v138 = v75;
          v109 = sub_1366810(*(_QWORD *)(v77 + 80), (char *)s2, n, 1);
          if ( !v109 || (v76 = *(_QWORD **)(v138 + 48)) == nullptr || *(_QWORD *)(v109 + 8) != v76[1] )
          {
            v19 = 3;
            if ( !(unsigned __int8)sub_1EAB290(a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v162) )
            {
              sub_FC70B0((__int64)v184, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 927);
              sub_AEC220((unsigned __int8 **)v184, *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 48));
              sub_AEC220((unsigned __int8 **)v184, s2, n);
              sub_AEC220((unsigned __int8 **)v184, (_BYTE *)(*(_QWORD *)(v138 + 48) + 32LL), **(_QWORD **)(v138 + 48));
              sub_AEA040((__int64)v184);
            }
            goto LABEL_146;
          }
        }
        v78 = v76 + 4;
        v79 = (__int64)v76 + *v76 + 32;
        v184[0] = v185;
        sub_1EA9D80(v184, v78, v79);
        sub_A0AAD0(a2 + 72, v184);
        v80 = v184[0];
        if ( v184[0] != v185 )
          goto LABEL_122;
        goto LABEL_34;
      default:
        goto LABEL_34;
    }
  }
  v105 = v171;
  v171 = nullptr;
  v184[0] = v105;
  sub_1EBF0A0(a1, (_QWORD **)v184);
  if ( v184[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v184[0] + 8LL))(v184[0]);
  v19 = 1;
LABEL_146:
  sub_A0AE90((__int64 *)&v171);
LABEL_44:
  sub_A0B030((__int64 *)&v167);
  if ( ptr != v189 )
    free(ptr);
  return v19;
}
