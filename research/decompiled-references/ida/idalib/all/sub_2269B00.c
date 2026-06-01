_QWORD *__fastcall sub_2269B00(_QWORD *a1, __int64 *a2, __int64 a3, void **a4, int a5)
{
  __int64 v6; // r13
  bool v7; // zf
  __m128i si128; // xmm3
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  size_t v13; // rdx
  size_t v14; // rbx
  _QWORD *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  std::chrono::_V2::system_clock *v21; // rbp
  unsigned __int64 v22; // rbx
  unsigned int v23; // r13d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r14
  __int64 *v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 *v30; // rdx
  __m128 v31; // xmm0
  void *v32; // rax
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rsi
  void *v39; // rax
  void *v40; // rbx
  const void *v41; // r13
  __int64 v42; // rax
  _BYTE *v43; // rdi
  __int64 v45; // rax
  __int64 v47; // rdi
  const char *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 i; // rdx
  char v52; // al
  const char *v53; // rax
  __int64 v54; // rdi
  void **v55; // rbx
  __int64 v56; // rax
  __m128i v57; // xmm6
  _QWORD *v58; // rax
  __int64 *v59; // rsi
  char *v60; // r12
  __int64 v61; // rdx
  __int64 v62; // rdx
  __m128i v63; // xmm7
  __int64 v64; // rdx
  void *v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r15
  __int64 *v69; // rdx
  __int64 v70; // r15
  _BYTE *v71; // r14
  _BYTE *v72; // rsi
  _DWORD *v73; // r15
  __int64 v74; // rsi
  char *v75; // rdx
  void *v76; // rdi
  _BYTE *v77; // r14
  _BYTE *v78; // rsi
  __int64 v79; // rsi
  int v80; // ebx
  __int64 v81; // rdi
  unsigned int v82; // eax
  __int64 *v84; // [rsp+18h] [rbp-7E0h] BYREF
  __int64 v85; // [rsp+20h] [rbp-7D8h]
  void **p_ptr; // [rsp+28h] [rbp-7D0h]
  void **v87; // [rsp+30h] [rbp-7C8h]
  char **v88; // [rsp+38h] [rbp-7C0h]
  void **v89; // [rsp+40h] [rbp-7B8h]
  __int64 **v90; // [rsp+48h] [rbp-7B0h]
  _QWORD **v91; // [rsp+50h] [rbp-7A8h]
  void **v92; // [rsp+58h] [rbp-7A0h]
  int v93; // [rsp+64h] [rbp-794h]
  __int64 v94; // [rsp+68h] [rbp-790h]
  _BYTE *v95; // [rsp+70h] [rbp-788h]
  _BYTE *v96; // [rsp+78h] [rbp-780h]
  __int128 *v97; // [rsp+80h] [rbp-778h]
  int v98; // [rsp+88h] [rbp-770h]
  int v99; // [rsp+8Ch] [rbp-76Ch]
  void *v100; // [rsp+98h] [rbp-760h] BYREF
  __int64 v101; // [rsp+A0h] [rbp-758h] BYREF
  __int64 *v102; // [rsp+A8h] [rbp-750h]
  _QWORD v103[2]; // [rsp+B0h] [rbp-748h] BYREF
  unsigned int v104; // [rsp+C0h] [rbp-738h]
  __int128 v105; // [rsp+D0h] [rbp-728h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-718h]
  void *s1[2]; // [rsp+F0h] [rbp-708h] BYREF
  __int64 v108; // [rsp+100h] [rbp-6F8h]
  __int128 v109; // [rsp+110h] [rbp-6E8h] BYREF
  __int64 v110; // [rsp+120h] [rbp-6D8h]
  __int16 v111; // [rsp+130h] [rbp-6C8h]
  _BYTE v112[32]; // [rsp+140h] [rbp-6B8h] BYREF
  __int16 v113; // [rsp+160h] [rbp-698h]
  _BYTE v114[16]; // [rsp+170h] [rbp-688h] BYREF
  __int64 *v115; // [rsp+180h] [rbp-678h]
  __int64 v116; // [rsp+188h] [rbp-670h]
  __int16 v117; // [rsp+190h] [rbp-668h]
  _QWORD v118[2]; // [rsp+1A0h] [rbp-658h] BYREF
  __int16 v119; // [rsp+1B0h] [rbp-648h]
  const char *v120; // [rsp+1B8h] [rbp-640h]
  size_t v121; // [rsp+1C0h] [rbp-638h]
  __int16 v122; // [rsp+1C8h] [rbp-630h]
  char *v123; // [rsp+1D0h] [rbp-628h]
  size_t v124; // [rsp+1D8h] [rbp-620h]
  __int16 v125; // [rsp+1E0h] [rbp-618h]
  const char *v126; // [rsp+1E8h] [rbp-610h]
  size_t v127; // [rsp+1F0h] [rbp-608h]
  __int16 v128; // [rsp+1F8h] [rbp-600h]
  const char *v129; // [rsp+200h] [rbp-5F8h]
  size_t v130; // [rsp+208h] [rbp-5F0h]
  __int16 v131; // [rsp+210h] [rbp-5E8h]
  char v132; // [rsp+218h] [rbp-5E0h] BYREF
  void *v133; // [rsp+220h] [rbp-5D8h] BYREF
  __m128i v134; // [rsp+228h] [rbp-5D0h]
  char v135; // [rsp+238h] [rbp-5C0h] BYREF
  _BYTE v136[24]; // [rsp+340h] [rbp-4B8h] BYREF
  char v137; // [rsp+358h] [rbp-4A0h] BYREF
  void *ptr; // [rsp+460h] [rbp-398h] BYREF
  __m128i v139; // [rsp+468h] [rbp-390h]
  _BYTE v140[264]; // [rsp+478h] [rbp-380h] BYREF
  void *v141; // [rsp+580h] [rbp-278h] BYREF
  __m128i v142; // [rsp+588h] [rbp-270h] BYREF
  __m128 v143; // [rsp+5A0h] [rbp-258h] BYREF
  __int64 v144; // [rsp+5B0h] [rbp-248h]
  __int64 v145; // [rsp+5B8h] [rbp-240h]
  __int64 v146; // [rsp+5C0h] [rbp-238h]
  __int64 v147; // [rsp+5C8h] [rbp-230h]
  char v148; // [rsp+5D0h] [rbp-228h]
  __m128i v149; // [rsp+6A0h] [rbp-158h] BYREF
  __m128i v150; // [rsp+6B0h] [rbp-148h] BYREF
  __m128i v151; // [rsp+6C0h] [rbp-138h] BYREF
  __int64 v152; // [rsp+6D0h] [rbp-128h]
  __int64 v153; // [rsp+6D8h] [rbp-120h]
  __int64 v154; // [rsp+6E0h] [rbp-118h]
  __int64 v155; // [rsp+6E8h] [rbp-110h]
  char v156; // [rsp+6F0h] [rbp-108h]

  v6 = a3;
  v7 = *(_DWORD *)(a3 + 32) == 4;
  p_ptr = a4;
  v93 = a5;
  if ( v7 )
  {
    v118[0] = "name";
    v119 = 1;
    v120 = "type";
    v118[1] = j__strlen("name");
    v122 = 1;
    v123 = "contents";
    v121 = j__strlen("type");
    v125 = 0;
    v126 = "external-contents";
    v124 = j__strlen("contents");
    v128 = 0;
    v129 = "use-external-name";
    v127 = j__strlen("external-contents");
    v130 = j__strlen("use-external-name");
    v141 = v118;
    v149.m128i_i64[0] = (__int64)&v132;
    v131 = 0;
    v89 = &v141;
    v84 = v103;
    sub_2269730((__int64)v103, (const __m128i **)&v141, (const __m128i **)&v149);
    v92 = &v133;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    *(_BYTE *)(v6 + 76) = 0;
    v133 = &v135;
    v88 = (char **)v136;
    v105 = 0;
    v106 = 0;
    v134 = si128;
    *(_QWORD *)v136 = &v137;
    *(__m128i *)&v136[8] = si128;
    sub_22754C0(v6);
    v9 = *(_QWORD *)(v6 + 80);
    if ( v9 )
    {
      LODWORD(v91) = 0;
      v10 = v6;
      v90 = (__int64 **)&v105;
      v87 = s1;
      v95 = v114;
      v96 = v112;
      v98 = 0;
      v94 = 0;
      v97 = &v109;
      while ( 1 )
      {
        ptr = v140;
        v139 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v11 = sub_22751E0(v9);
        LODWORD(v85) = *(_DWORD *)(v11 + 32);
        if ( (_DWORD)v85 != 1 )
        {
          v149.m128i_i64[0] = (__int64)"expected string";
          v151.m128i_i16[0] = 259;
LABEL_64:
          sub_226EEF0(*a2, v11, &v149, 0);
LABEL_65:
          v43 = ptr;
          *a1 = 0;
          if ( v43 != v140 )
            free(v43);
          goto LABEL_67;
        }
        v12 = sub_2270420(v11, &ptr);
        v14 = v13;
        v15 = (_QWORD *)v12;
        v16 = sub_22751E0(v9);
        if ( !(unsigned __int8)sub_225B910(a2, v16, v15, v14, v84) )
          goto LABEL_65;
        s1[0] = nullptr;
        s1[1] = nullptr;
        if ( v14 != j__strlen("name") )
          break;
        if ( !v14 || !memcmp(v15, "name", v14) )
        {
          v45 = sub_2275440(v9);
          if ( !(unsigned __int8)sub_225B380(a2, v45, v87, (__int64)&ptr) )
            goto LABEL_65;
          v94 = sub_2275440(v9);
          sub_22645B0((__int64)&v149, (__int64)s1[0], (__int64)s1[1]);
          *(_QWORD *)&v136[8] = 0;
          sub_A1FE50(v88, v149.m128i_i64[0], (_BYTE *)(v149.m128i_i64[0] + v149.m128i_i64[1]));
          if ( (unsigned __int64 *)v149.m128i_i64[0] != &v150.m128i_u64[1] )
            free((void *)v149.m128i_i64[0]);
          goto LABEL_16;
        }
        if ( v14 == j__strlen("type") )
          goto LABEL_42;
LABEL_10:
        if ( v14 != j__strlen("contents") )
          goto LABEL_11;
LABEL_51:
        if ( memcmp(v15, "contents", v14) )
        {
          if ( v14 == j__strlen("external-contents") )
            goto LABEL_53;
          goto LABEL_12;
        }
LABEL_85:
        if ( (_DWORD)v91 )
        {
LABEL_106:
          v149.m128i_i64[0] = (__int64)"entry already has 'contents' or 'external-contents'";
          v151.m128i_i16[0] = 259;
          v11 = sub_22751E0(v9);
          goto LABEL_64;
        }
        v49 = sub_2275440(v9);
        v50 = v49;
        if ( *(_DWORD *)(v49 + 32) != 5 )
        {
          v48 = "expected array";
LABEL_84:
          v149.m128i_i64[0] = (__int64)v48;
          v151.m128i_i16[0] = 259;
          v11 = sub_2275440(v9);
          goto LABEL_64;
        }
        *(_BYTE *)(v49 + 76) = 0;
        sub_2274D70(v49);
        for ( i = *(_QWORD *)(v50 + 80); i; i = *(_QWORD *)(v50 + 80) )
        {
          sub_2269B00(&v149, a2, i, p_ptr, 0);
          if ( !v149.m128i_i64[0] )
            goto LABEL_65;
          sub_2261BB0((__int64)v90, v149.m128i_i64);
          if ( v149.m128i_i64[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v149.m128i_i64[0] + 8LL))(v149.m128i_i64[0]);
          sub_2274D70(v50);
        }
        LODWORD(v91) = 1;
LABEL_16:
        if ( ptr != v140 )
          free(ptr);
        sub_22754C0(v10);
        v9 = *(_QWORD *)(v10 + 80);
        if ( !v9 )
        {
          v6 = v10;
          if ( (unsigned __int8)sub_226EEE0(*a2) )
            goto LABEL_101;
          if ( (_DWORD)v91 )
          {
            if ( !(unsigned __int8)sub_225BBC0(a2, v10, v84, v19, (unsigned int)v91, v20) )
              goto LABEL_101;
            if ( v99 )
            {
              if ( v99 == 1 )
              {
                v53 = "'contents' is not supported for 'directory-remap' entries";
                if ( (_DWORD)v91 == 1 )
                  goto LABEL_105;
              }
            }
            else if ( v98 )
            {
              v53 = "'use-external-name' is not supported for 'directory' entries";
              goto LABEL_105;
            }
            v21 = *(std::chrono::_V2::system_clock **)v136;
            v22 = *(_QWORD *)&v136[8];
            if ( (_BYTE)v93 )
            {
              v149 = *(__m128i *)v136;
              v151.m128i_i16[0] = 261;
              if ( (unsigned __int8)sub_228B020(&v149, 1) )
                goto LABEL_26;
              v151.m128i_i16[0] = 261;
              v149 = *(__m128i *)v136;
              if ( (unsigned __int8)sub_228B020(&v149, 3) )
                goto LABEL_135;
              if ( *((_DWORD *)p_ptr + 31) == 1 )
              {
                v80 = sub_22612B0(p_ptr[10], (size_t)p_ptr[11], (__int64)v88);
                sub_22645B0((__int64)&v149, *(__int64 *)v136, *(__int64 *)&v136[8]);
                sub_9C3C90(v88, (char **)&v149);
                if ( (unsigned __int64 *)v149.m128i_i64[0] != &v150.m128i_u64[1] )
                  free((void *)v149.m128i_i64[0]);
              }
              else
              {
                v80 = sub_228EC80(v88);
              }
              if ( v80 )
              {
                v81 = *a2;
                v149.m128i_i64[0] = (__int64)"entry with relative path at the root level is not discoverable";
                v151.m128i_i16[0] = 259;
                sub_226EEF0(v81, v94, &v149, 0);
                goto LABEL_101;
              }
              v151.m128i_i16[0] = 261;
              v149 = *(__m128i *)v136;
              if ( (unsigned __int8)sub_228B020(&v149, 1) )
              {
LABEL_26:
                v22 = *(_QWORD *)&v136[8];
                v21 = *(std::chrono::_V2::system_clock **)v136;
                v23 = 1;
              }
              else
              {
LABEL_135:
                v82 = sub_2259FA0(*(__int64 *)v136, *(__int64 *)&v136[8]);
                v22 = *(_QWORD *)&v136[8];
                v21 = *(std::chrono::_V2::system_clock **)v136;
                v23 = v82;
                if ( v82 != 3 )
                  v23 = 2;
              }
            }
            else
            {
              v23 = 0;
            }
            sub_2289830(v21, v22, v23);
            v25 = v24;
            if ( v22 > v24 )
            {
              do
              {
                v26 = v22 - 1;
                if ( !(unsigned __int8)sub_228ACA0((unsigned int)*((char *)v21 + v22 - 1), v23) )
                  break;
                if ( v26 > v22 )
                {
                  v22 = 0;
                  break;
                }
                --v22;
              }
              while ( v25 < v26 );
            }
            v100 = nullptr;
            v101 = sub_228AA60(v21, v22, v23);
            v102 = v27;
            if ( v99 == 1 )
            {
              v77 = v133;
              p_ptr = (void **)v101;
              v84 = v102;
              v85 = v134.m128i_i64[0];
              v78 = (_BYTE *)v101;
              v73 = (_DWORD *)operator new(0x58u);
              v73[2] = 1;
              *(_QWORD *)v73 = &off_2BEB750;
              *((_QWORD *)v73 + 2) = v73 + 8;
              sub_2259A00((_QWORD *)v73 + 2, v78, (__int64)v84 + (_QWORD)v78);
              v79 = v85;
              *(_QWORD *)v73 = &off_2BEB790;
              *((_QWORD *)v73 + 6) = v73 + 16;
              sub_2259A00((_QWORD *)v73 + 6, v77, (__int64)&v77[v79]);
              v75 = (char *)&unk_2BEB7A0;
              v73[20] = v98;
            }
            else
            {
              if ( v99 != 2 )
              {
                v28 = std::chrono::_V2::system_clock::now(v21);
                v29 = sub_225C160();
                v143.m128_i16[0] = 257;
                v85 = v29;
                v84 = v30;
                sub_2253560(&v149, (_QWORD **)v89);
                v152 = v28;
                v155 = 0x1FF00000003LL;
                v31 = _mm_loadh_ps((const double *)&v84);
                v156 = 0;
                v151 = (__m128i)v31;
                v153 = 0;
                v154 = 0;
                sub_225DA90(&ptr, (__int64)&v101, (__int64)v90, &v149);
                v32 = ptr;
                v33 = v100;
                ptr = nullptr;
                v100 = v32;
                if ( v33 )
                {
                  (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 8LL))(v33);
                  if ( ptr )
                    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
                }
                if ( (__m128i *)v149.m128i_i64[0] != &v150 )
                  operator delete((void *)v149.m128i_i64[0]);
LABEL_38:
                v34 = sub_228A4B0(v21, v22, v23);
                v36 = v34;
                v37 = v35;
                if ( v35 )
                {
                  sub_2289790(v114, v34, v35, v23);
                  sub_22895F0(&ptr, v36, v37);
                  v55 = v89;
                  p_ptr = &ptr;
                  v87 = &v100;
                  v91 = (_QWORD **)v112;
                  while ( !(unsigned __int8)sub_22897C0(v114, p_ptr) )
                  {
                    v108 = 0;
                    *(_OWORD *)s1 = 0;
                    sub_2261BB0((__int64)s1, (__int64 *)v87);
                    v68 = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)s1);
                    v85 = sub_225C160();
                    v84 = v69;
                    v113 = 257;
                    sub_2253560(v55, v91);
                    v144 = v68;
                    v109 = *(_OWORD *)s1;
                    v143 = _mm_loadh_ps((const double *)&v84);
                    v70 = v116;
                    v145 = 0;
                    v110 = v108;
                    v146 = 0;
                    v147 = 0x1FF00000003LL;
                    v149.m128i_i64[0] = (__int64)&v150;
                    v148 = 0;
                    *(_OWORD *)s1 = 0;
                    v108 = 0;
                    if ( v141 == v55 + 2 )
                    {
                      v150 = _mm_load_si128((const __m128i *)&v142.m128i_u64[1]);
                    }
                    else
                    {
                      v149.m128i_i64[0] = (__int64)v141;
                      v150.m128i_i64[0] = v142.m128i_i64[1];
                    }
                    v56 = v142.m128i_i64[0];
                    v57 = _mm_load_si128((const __m128i *)&v143);
                    v84 = v115;
                    v142.m128i_i64[0] = 0;
                    v149.m128i_i64[1] = v56;
                    v141 = v55 + 2;
                    v151 = v57;
                    v142.m128i_i8[8] = 0;
                    v152 = v144;
                    v153 = 0;
                    v154 = 0;
                    v155 = 0x1FF00000003LL;
                    v156 = 0;
                    v58 = (_QWORD *)operator new(0xA0u);
                    v59 = v84;
                    *((_DWORD *)v58 + 2) = 0;
                    v60 = (char *)v58;
                    *v58 = &off_2BEB750;
                    v58[2] = v58 + 4;
                    sub_2259A00(v58 + 2, v59, (__int64)v59 + v70);
                    *(_QWORD *)v60 = &off_2BEB770;
                    *((_QWORD *)v60 + 6) = v109;
                    v61 = *((_QWORD *)&v109 + 1);
                    v109 = 0;
                    *((_QWORD *)v60 + 7) = v61;
                    v62 = v110;
                    v110 = 0;
                    *((_QWORD *)v60 + 8) = v62;
                    *((_QWORD *)v60 + 9) = v60 + 88;
                    if ( (__m128i *)v149.m128i_i64[0] == &v150 )
                    {
                      *(__m128i *)(v60 + 88) = _mm_load_si128(&v150);
                    }
                    else
                    {
                      *((_QWORD *)v60 + 9) = v149.m128i_i64[0];
                      *((_QWORD *)v60 + 11) = v150.m128i_i64[0];
                    }
                    v63 = _mm_load_si128(&v151);
                    *((_QWORD *)v60 + 10) = v149.m128i_i64[1];
                    v64 = v152;
                    *(__m128i *)(v60 + 104) = v63;
                    *((_QWORD *)v60 + 15) = v64;
                    *((_QWORD *)v60 + 16) = v153;
                    *((_QWORD *)v60 + 17) = v154;
                    *((_QWORD *)v60 + 18) = v155;
                    v60[152] = v156;
                    sub_225DA30((__int64 **)&v109);
                    v65 = v100;
                    v100 = v60;
                    if ( v65 )
                      (*(void (__fastcall **)(void *))(*(_QWORD *)v65 + 8LL))(v65);
                    if ( v141 != v55 + 2 )
                      operator delete(v141);
                    sub_225DA30((__int64 **)s1);
                    sub_2289610(v114, v59, v66, v67);
                  }
                }
                *a1 = v100;
                goto LABEL_67;
              }
              v71 = v133;
              p_ptr = (void **)v101;
              v84 = v102;
              v85 = v134.m128i_i64[0];
              v72 = (_BYTE *)v101;
              v73 = (_DWORD *)operator new(0x58u);
              v73[2] = 2;
              *(_QWORD *)v73 = &off_2BEB750;
              *((_QWORD *)v73 + 2) = v73 + 8;
              sub_2259A00((_QWORD *)v73 + 2, v72, (__int64)v84 + (_QWORD)v72);
              v74 = v85;
              *(_QWORD *)v73 = &off_2BEB790;
              *((_QWORD *)v73 + 6) = v73 + 16;
              sub_2259A00((_QWORD *)v73 + 6, v71, (__int64)&v71[v74]);
              v75 = (char *)&unk_2BEB7C0;
              v73[20] = v98;
            }
            v76 = v100;
            *(_QWORD *)v73 = v75 + 16;
            v100 = v73;
            if ( v76 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v76 + 8LL))(v76);
            goto LABEL_38;
          }
LABEL_104:
          v53 = "missing key 'contents' or 'external-contents'";
LABEL_105:
          v54 = *a2;
          v151.m128i_i16[0] = 259;
          v149.m128i_i64[0] = (__int64)v53;
          sub_226EEF0(v54, v6, &v149, 0);
          *a1 = 0;
          goto LABEL_67;
        }
      }
      if ( v14 != j__strlen("type") )
      {
        if ( v14 != j__strlen("contents") )
        {
LABEL_11:
          if ( v14 == j__strlen("external-contents") )
          {
            if ( !v14 )
            {
LABEL_54:
              if ( (_DWORD)v91 )
                goto LABEL_106;
              v42 = sub_2275440(v9);
              if ( !(unsigned __int8)sub_225B380(a2, v42, v87, (__int64)&ptr) )
                goto LABEL_65;
              v142 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
              v141 = v89 + 3;
              if ( *((_BYTE *)p_ptr + 113) )
              {
                sub_A1FE50(v89, p_ptr[10], (_BYTE *)p_ptr[11] + (_QWORD)p_ptr[10]);
                v109 = *(_OWORD *)s1;
                v151.m128i_i16[0] = 257;
                v117 = 257;
                v113 = 257;
                v111 = 261;
                sub_228A3B0(v89, v97, v96, v95, &v149);
              }
              else
              {
                sub_A1FE50(v89, (_BYTE *)s1[0], (_BYTE *)s1[0] + (unsigned __int64)s1[1]);
              }
              sub_22645B0((__int64)&v149, (__int64)v141, v142.m128i_i64[0]);
              sub_9C3C90((char **)v89, (char **)&v149);
              if ( (unsigned __int64 *)v149.m128i_i64[0] != &v150.m128i_u64[1] )
                free((void *)v149.m128i_i64[0]);
              v134.m128i_i64[0] = 0;
              sub_A1FE50(v92, v141, (_BYTE *)v141 + v142.m128i_i64[0]);
              if ( v141 != v89 + 3 )
                free(v141);
              LODWORD(v91) = 2;
              goto LABEL_16;
            }
LABEL_53:
            if ( !memcmp(v15, "external-contents", v14) )
              goto LABEL_54;
          }
LABEL_12:
          v17 = sub_2275440(v9);
          if ( !(unsigned __int8)sub_225B3E0(a2, v17, &v149) )
            goto LABEL_65;
          v18 = 2;
          if ( v149.m128i_i8[0] )
            v18 = v85;
          v98 = v18;
          goto LABEL_16;
        }
        if ( !v14 )
          goto LABEL_85;
        goto LABEL_51;
      }
      if ( !v14 )
        goto LABEL_43;
LABEL_42:
      if ( !memcmp(v15, "type", v14) )
      {
LABEL_43:
        v38 = sub_2275440(v9);
        if ( !(unsigned __int8)sub_225B380(a2, v38, v87, (__int64)&ptr) )
          goto LABEL_65;
        v39 = (void *)j__strlen("file");
        v40 = s1[1];
        v41 = s1[0];
        if ( s1[1] == v39 )
        {
          if ( !s1[1] || !memcmp(s1[0], "file", (size_t)s1[1]) )
          {
            v99 = 2;
            goto LABEL_16;
          }
          if ( v40 == (void *)j__strlen("directory") )
          {
LABEL_47:
            if ( !memcmp(v41, "directory", (size_t)v40) )
            {
LABEL_48:
              v99 = 0;
              goto LABEL_16;
            }
          }
          if ( v40 != (void *)j__strlen("directory-remap") )
            goto LABEL_83;
        }
        else
        {
          if ( v40 == (void *)j__strlen("directory") )
          {
            if ( !v40 )
              goto LABEL_48;
            goto LABEL_47;
          }
          if ( v40 != (void *)j__strlen("directory-remap") )
            goto LABEL_83;
          v99 = 1;
          if ( !v40 )
            goto LABEL_16;
        }
        if ( memcmp(v41, "directory-remap", (size_t)v40) )
        {
LABEL_83:
          v48 = "unknown value for 'type'";
          goto LABEL_84;
        }
        v99 = 1;
        goto LABEL_16;
      }
      goto LABEL_10;
    }
    v52 = sub_226EEE0(*a2);
    v90 = (__int64 **)&v105;
    if ( !v52 )
      goto LABEL_104;
LABEL_101:
    *a1 = 0;
LABEL_67:
    if ( *(char ***)v136 != v88 + 3 )
      free(*(void **)v136);
    if ( v133 != v92 + 3 )
      free(v133);
    sub_225DA30(v90);
    operator delete(v103[0], 24LL * v104, 8);
  }
  else
  {
    v47 = *a2;
    v149.m128i_i64[0] = (__int64)"expected mapping node for file or directory entry";
    v151.m128i_i16[0] = 259;
    sub_226EEF0(v47, a3, &v149, 0);
    *a1 = 0;
  }
  return a1;
}
