__int64 __fastcall sub_58F0B0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5, _QWORD *a6, __m128 si128)
{
  char **exception; // rbp
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64 *); // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64 *); // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r9d
  __int64 v22; // rax
  _QWORD *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __m128i v31; // xmm1
  __int64 v32; // rax
  _BYTE *v33; // rax
  char *v34; // rax
  void *v35; // r8
  _QWORD *v36; // r13
  int v37; // r13d
  int v38; // eax
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // r13
  unsigned int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  __int64 *v46; // rcx
  _QWORD *v47; // rdi
  __m128i v48; // xmm0
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // ecx
  int v52; // r9d
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // ecx
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rdi
  int *v60; // rsi
  _QWORD *v61; // rdi
  std::ios_base *v62; // rbx
  __int64 (__fastcall *v63)(__int64, __int64 *); // rax
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  int v67; // r9d
  __int64 v68; // rbx
  int v69; // ecx
  int v70; // r9d
  __int64 v71; // r12
  __int64 v72; // rdi
  int v73; // ecx
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rdi
  int v77; // r9d
  int v78; // ecx
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 v81; // rbp
  __int64 v82; // rax
  int v83; // r9d
  __int64 v84; // rbx
  int v85; // ecx
  int v86; // r9d
  __int64 v87; // r12
  __int64 v88; // rdi
  int v89; // ecx
  __int64 v90; // rbp
  __int64 v91; // rdi
  __int64 v92; // rsi
  std::ios_base *v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 result; // rax
  __int64 v101; // r12
  __int64 *v102; // rbx
  unsigned __int64 v103; // rbp
  __int64 v104; // rsi
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdi
  unsigned int v109; // ecx
  size_t v110; // rsi
  _DWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rbx
  __int64 v114; // rdi
  void *v115; // rdx
  void *v116; // rsi
  _QWORD *v117; // r13
  _QWORD *v118; // rax
  unsigned __int64 v119; // rdi
  _QWORD *v120; // rax
  void *v121; // rsi
  _QWORD *v122; // rax
  __int64 v123; // rbx
  unsigned __int64 v124; // rdi
  __int64 v125; // rax
  unsigned int v126; // [rsp+0h] [rbp-538h]
  int v127; // [rsp+0h] [rbp-538h]
  int v128; // [rsp+0h] [rbp-538h]
  int v129; // [rsp+0h] [rbp-538h]
  int v130; // [rsp+0h] [rbp-538h]
  int v131; // [rsp+0h] [rbp-538h]
  struct _Unwind_Exception *v132; // [rsp+0h] [rbp-538h]
  int v133; // [rsp+0h] [rbp-538h]
  struct _Unwind_Exception *v134; // [rsp+0h] [rbp-538h]
  std::ios_base *v135; // [rsp+8h] [rbp-530h]
  std::ios_base *v136; // [rsp+8h] [rbp-530h]
  std::ios_base *v137; // [rsp+8h] [rbp-530h]
  std::ios_base *v138; // [rsp+8h] [rbp-530h]
  std::ios_base *v139; // [rsp+8h] [rbp-530h]
  std::ios_base *v140; // [rsp+8h] [rbp-530h]
  std::ios_base *v141; // [rsp+8h] [rbp-530h]
  std::ios_base *v142; // [rsp+8h] [rbp-530h]
  int *v143; // [rsp+10h] [rbp-528h]
  int v144; // [rsp+10h] [rbp-528h]
  int v145; // [rsp+10h] [rbp-528h]
  int v146; // [rsp+10h] [rbp-528h]
  int v147; // [rsp+10h] [rbp-528h]
  int v148; // [rsp+10h] [rbp-528h]
  int v149; // [rsp+10h] [rbp-528h]
  _QWORD *v150; // [rsp+18h] [rbp-520h]
  int v151; // [rsp+18h] [rbp-520h]
  int v152; // [rsp+18h] [rbp-520h]
  int v153; // [rsp+18h] [rbp-520h]
  int v154; // [rsp+18h] [rbp-520h]
  int v155; // [rsp+18h] [rbp-520h]
  int v156; // [rsp+18h] [rbp-520h]
  int *v157; // [rsp+20h] [rbp-518h]
  int v158; // [rsp+20h] [rbp-518h]
  int v159[2]; // [rsp+20h] [rbp-518h]
  int v160; // [rsp+20h] [rbp-518h]
  int v161; // [rsp+20h] [rbp-518h]
  int v162; // [rsp+20h] [rbp-518h]
  int v163; // [rsp+20h] [rbp-518h]
  char v164[8]; // [rsp+28h] [rbp-510h]
  char v165; // [rsp+28h] [rbp-510h]
  int v166; // [rsp+28h] [rbp-510h]
  int v167; // [rsp+28h] [rbp-510h]
  int v168; // [rsp+28h] [rbp-510h]
  int v169; // [rsp+28h] [rbp-510h]
  int v170; // [rsp+28h] [rbp-510h]
  int v171; // [rsp+28h] [rbp-510h]
  __int64 v172; // [rsp+30h] [rbp-508h]
  int v173; // [rsp+30h] [rbp-508h]
  __int64 v174; // [rsp+30h] [rbp-508h]
  __int64 v175; // [rsp+30h] [rbp-508h]
  __int64 v176; // [rsp+30h] [rbp-508h]
  __int64 v177; // [rsp+30h] [rbp-508h]
  __int64 v178; // [rsp+30h] [rbp-508h]
  __int64 v179; // [rsp+30h] [rbp-508h]
  _QWORD *ptr; // [rsp+38h] [rbp-500h]
  _QWORD *ptra; // [rsp+38h] [rbp-500h]
  void *ptrb; // [rsp+38h] [rbp-500h]
  void *ptrc; // [rsp+38h] [rbp-500h]
  void *ptrd; // [rsp+38h] [rbp-500h]
  void *ptre; // [rsp+38h] [rbp-500h]
  void *ptrf; // [rsp+38h] [rbp-500h]
  void *ptrg; // [rsp+38h] [rbp-500h]
  int v188[2]; // [rsp+40h] [rbp-4F8h]
  int v189[2]; // [rsp+40h] [rbp-4F8h]
  std::locale *v190; // [rsp+48h] [rbp-4F0h]
  int v191[4]; // [rsp+50h] [rbp-4E8h] BYREF
  __int64 v192; // [rsp+60h] [rbp-4D8h]
  _QWORD *v193; // [rsp+68h] [rbp-4D0h]
  __m128i v194; // [rsp+70h] [rbp-4C8h] BYREF
  __m128i v195; // [rsp+80h] [rbp-4B8h] BYREF
  int v196[2]; // [rsp+90h] [rbp-4A8h]
  _QWORD *v197; // [rsp+98h] [rbp-4A0h]
  __int64 v198; // [rsp+A0h] [rbp-498h]
  void *v199; // [rsp+A8h] [rbp-490h]
  size_t n; // [rsp+B0h] [rbp-488h]
  __int64 v201; // [rsp+B8h] [rbp-480h]
  char v202[8]; // [rsp+C8h] [rbp-470h] BYREF
  int v203[2]; // [rsp+D0h] [rbp-468h] BYREF
  __int64 v204; // [rsp+D8h] [rbp-460h]
  int v205[2]; // [rsp+E0h] [rbp-458h] BYREF
  __int64 v206; // [rsp+E8h] [rbp-450h]
  __int64 v207; // [rsp+F0h] [rbp-448h]
  void *v208; // [rsp+100h] [rbp-438h]
  void *v209; // [rsp+108h] [rbp-430h]
  _QWORD dest[2]; // [rsp+110h] [rbp-428h] BYREF
  int v211[2]; // [rsp+120h] [rbp-418h] BYREF
  std::ios_base *v212; // [rsp+128h] [rbp-410h]
  int v213[2]; // [rsp+140h] [rbp-3F8h] BYREF
  __int64 v214; // [rsp+148h] [rbp-3F0h]
  __m128 v215; // [rsp+150h] [rbp-3E8h] BYREF
  __int128 v216; // [rsp+160h] [rbp-3D8h]
  void *src[2]; // [rsp+170h] [rbp-3C8h]
  __int128 v218; // [rsp+180h] [rbp-3B8h]
  char v219[8]; // [rsp+190h] [rbp-3A8h] BYREF
  int v220; // [rsp+198h] [rbp-3A0h]
  void *v221; // [rsp+1A0h] [rbp-398h]
  char *v222; // [rsp+1A8h] [rbp-390h]
  _QWORD v223[2]; // [rsp+1B0h] [rbp-388h] BYREF
  __int64 v224[28]; // [rsp+1C0h] [rbp-378h] BYREF
  __int16 v225; // [rsp+2A0h] [rbp-298h]
  __int128 v226; // [rsp+2A8h] [rbp-290h]
  __int128 v227; // [rsp+2B8h] [rbp-280h]
  int v228[2]; // [rsp+2D0h] [rbp-268h] BYREF
  __int64 v229; // [rsp+370h] [rbp-1C8h]
  int *v230; // [rsp+378h] [rbp-1C0h] BYREF
  int *v231; // [rsp+418h] [rbp-120h] BYREF
  __int64 v232; // [rsp+4B0h] [rbp-88h]
  __int64 v233; // [rsp+4B8h] [rbp-80h]
  __int64 v234; // [rsp+4C0h] [rbp-78h]
  __int64 v235; // [rsp+4C8h] [rbp-70h]
  __int64 v236; // [rsp+4D0h] [rbp-68h]
  __int64 v237; // [rsp+4D8h] [rbp-60h]
  __int64 v238; // [rsp+4E0h] [rbp-58h]
  _BYTE v239[80]; // [rsp+4E8h] [rbp-50h] BYREF

  v9 = *(_QWORD *)(a1 + 40);
  v195.m128i_i64[1] = a2;
  v204 = v9;
  v206 = v9;
  v150 = a4;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a3 + 144LL);
  *(_QWORD *)v196 = a5;
  v197 = a6;
  *(_QWORD *)v203 = 0;
  *(_QWORD *)v205 = 0;
  if ( v10 == sub_586990 )
  {
    v11 = a3[6];
    if ( v11 )
    {
      ++*(_DWORD *)(v11 + 8);
      *(_QWORD *)v203 = v11;
    }
  }
  else
  {
    v10((__int64)a3, (__int64 *)v203);
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v150 + 144LL);
  if ( v12 == sub_586990 )
  {
    v13 = *(_QWORD *)v205;
    v14 = v150[6];
    if ( *(_QWORD *)v205 != v14 )
    {
      if ( *(_QWORD *)v205 )
      {
        v15 = v206;
        v16 = (*(_DWORD *)(*(_QWORD *)v205 + 8LL))-- == 1;
        if ( v16 )
        {
          sub_15D7BC0(v15, v13);
          v14 = v150[6];
        }
      }
      *(_QWORD *)v205 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
    }
  }
  else
  {
    v12((__int64)v150, (__int64 *)v205);
  }
  v17 = sub_15E1B70(*(_QWORD *)(a1 + 40));
  v195.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 64;
  v194 = _mm_unpacklo_epi64(
           (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64),
           (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v18 = *(_QWORD *)v203;
  if ( *(_QWORD *)v203 )
  {
    v19 = v204;
    v16 = (*(_DWORD *)(*(_QWORD *)v203 + 8LL))-- == 1;
    if ( v16 )
      sub_15D7BC0(v19, v18);
  }
  v20 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v203 = v17;
  v198 = v20;
  v207 = v20;
  v157 = v228;
  sub_633760(v228, v20, 0, v239);
  v239[8] = 0;
  *(_QWORD *)v228 = &off_1C4CA80;
  v22 = v150[2];
  if ( !v22 )
  {
    v143 = v213;
    goto LABEL_159;
  }
  v126 = 0;
  v23 = nullptr;
  v143 = v213;
  v135 = (std::ios_base *)v224;
  while ( v126 < *(_DWORD *)(v22 - 4) )
  {
    std::ios_base::ios_base(v135);
    v225 = 0;
    v24 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v226 = 0;
    v25 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v227 = 0;
    v224[0] = (__int64)&`vtable for'std::ios + 16;
    v26 = *(_QWORD *)(v24 - 24);
    v224[27] = 0;
    *(_QWORD *)v213 = v24;
    *(_QWORD *)((char *)v213 + v26) = v25;
    v214 = 0;
    v165 = v25;
    std::ios::init();
    v27 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    v28 = *(_QWORD *)(v27 - 24);
    v215.m128_u64[0] = v27;
    v29 = (unsigned __int64 *)((char *)v215.m128_u64 + v28);
    v30 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    *v29 = v30;
    v173 = v30;
    std::ios::init();
    v31 = _mm_load_si128(&v194);
    ptra = (_QWORD *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
    *(_QWORD *)v188 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    *(_QWORD *)((char *)v213 + *(ptra - 3)) = *(_QWORD *)v188;
    v215 = (__m128)v31;
    v216 = 0;
    *(_QWORD *)v213 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 24;
    *(_OWORD *)src = 0;
    v218 = 0;
    v224[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    std::locale::locale((std::locale *)v219);
    v220 = 24;
    LOBYTE(v223[0]) = 0;
    v215.m128_u64[1] = (unsigned __int64)&`vtable for'std::stringbuf + 16;
    v193 = v223;
    v221 = v223;
    v222 = nullptr;
    std::ios::init();
    LOBYTE(v211[0]) = 120;
    if ( *(void **)((char *)&src[-2] + *(_QWORD *)(v215.m128_u64[0] - 24)) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put((std::ostream *)&v215, 120);
    std::ostream::_M_insert<unsigned long>();
    *(_QWORD *)v191 = *(_QWORD *)(a1 + 40);
    v32 = *(_QWORD *)(v150[2] + 8LL * v126);
    v209 = nullptr;
    v208 = dest;
    v192 = v32;
    v33 = (_BYTE *)v218;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v218 )
    {
      if ( src[0] >= (void *)v218 )
        v33 = src[0];
      if ( !src[0] )
        v33 = (_BYTE *)v218;
      v34 = (char *)(v33 - (char *)src[1]);
      v35 = v34;
      if ( (__int64)v34 < 0 )
        std::__throw_length_error("basic_string::_M_replace");
      if ( (unsigned __int64)v34 > 0xF )
      {
        if ( (unsigned __int64)v34 > 0x1D )
        {
          v119 = (unsigned __int64)(v34 + 1);
          if ( (__int64)(v34 + 1) < 0 )
            std::__throw_bad_alloc();
          v201 = (__int64)v34;
        }
        else
        {
          v201 = 30;
          v119 = 31;
        }
        n = (size_t)v34;
        v199 = src[1];
        v120 = (_QWORD *)operator new(v119);
        v121 = v199;
        v35 = (void *)n;
        v36 = v120;
        if ( v199 )
        {
          v199 = (void *)n;
          memcpy(v120, v121, n);
          v35 = v199;
        }
        if ( v208 != dest )
        {
          v199 = v35;
          operator delete(v208, dest[0] + 1LL);
          v35 = v199;
        }
        v208 = v36;
        dest[0] = v201;
      }
      else if ( src[1] == dest )
      {
        v199 = v34;
        std::string::_M_replace_cold();
        v35 = v199;
        v36 = v208;
      }
      else
      {
        if ( v34 )
        {
          if ( v34 == (_BYTE *)&dword_0 + 1 )
          {
            LOBYTE(dest[0]) = *(_BYTE *)src[1];
          }
          else
          {
            v199 = v34;
            memcpy(dest, src[1], (size_t)v34);
            v35 = v199;
          }
        }
        v36 = dest;
      }
      v209 = v35;
      *((_BYTE *)v35 + (_QWORD)v36) = 0;
      goto LABEL_32;
    }
    v115 = v222;
    if ( (unsigned __int64)v222 > 0xF )
    {
      if ( (__int64)v222 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( (unsigned __int64)v222 <= 0x1D )
      {
        v199 = &qword_18 + 6;
        v124 = 31;
      }
      else
      {
        v124 = (unsigned __int64)(v222 + 1);
        if ( (__int64)(v222 + 1) < 0 )
          std::__throw_bad_alloc();
        v199 = v222;
      }
      n = (size_t)v222;
      v125 = operator new(v124);
      v115 = (void *)n;
      v117 = (_QWORD *)v125;
      if ( v208 != dest )
      {
        operator delete(v208, dest[0] + 1LL);
        v115 = (void *)n;
      }
      v208 = v117;
      v116 = v221;
      dest[0] = v199;
LABEL_169:
      v199 = v115;
      memcpy(v117, v116, (size_t)v115);
      v118 = v208;
      v115 = v199;
      goto LABEL_139;
    }
    if ( v222 )
    {
      v116 = v221;
      v117 = dest;
      if ( v222 != (_BYTE *)&dword_0 + 1 )
        goto LABEL_169;
      LOBYTE(dest[0]) = *(_BYTE *)v221;
    }
    v118 = dest;
LABEL_139:
    v209 = v115;
    *((_BYTE *)v115 + (_QWORD)v118) = 0;
LABEL_32:
    sub_180C5A0(v202, v208);
    v37 = v191[0];
    v38 = sub_15E3510(*(_QWORD *)v191, v202, 0, 0, v192, 0);
    v41 = sub_15DC610(
            v37,
            v38,
            0,
            0,
            v39,
            v40,
            v126,
            (int)v135,
            (int)v143,
            (int)v150,
            (int)v157,
            v165,
            v173,
            (int)ptra,
            v188[0],
            v219);
    v42 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    if ( v23 )
    {
      v43 = *((_DWORD *)v23 - 1);
      if ( v43 == *((_DWORD *)v23 - 2) )
      {
        v109 = (3 * v43 + 1) >> 1;
        v110 = 8 * v109 + 8;
        if ( 8 * v43 + 8 >= (unsigned int)v110 || v43 >= v109 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v211, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v211);
          sub_233E40((__int64)v211);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v191[0] = (3 * v43 + 1) >> 1;
        v111 = (_DWORD *)sub_186B300(v23 - 1, v110);
        v112 = (unsigned int)v111[1];
        v23 = v111 + 2;
        *v111 = v191[0];
        v46 = (__int64 *)&v111[2 * v112 + 2];
        v45 = v112 + 1;
      }
      else
      {
        v44 = v43;
        v45 = v43 + 1;
        v46 = &v23[v44];
      }
    }
    else
    {
      v122 = (_QWORD *)sub_186B270(0x18u);
      v23 = v122 + 1;
      *v122 = 2;
      v45 = 1;
      v46 = v23;
    }
    v47 = v208;
    *v46 = v42;
    v48 = _mm_loadl_epi64(&v195);
    *((_DWORD *)v23 - 1) = v45;
    si128 = (__m128)_mm_unpacklo_epi64(v48, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    if ( v47 != dest )
    {
      *(__m128 *)v191 = si128;
      operator delete(v47, dest[0] + 1LL);
      si128 = (__m128)_mm_load_si128((const __m128i *)v191);
    }
    v215 = si128;
    *(_QWORD *)v213 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 24;
    v224[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    if ( v221 != v193 )
      operator delete(v221, v223[0] + 1LL);
    v215.m128_u64[1] = (unsigned __int64)&`vtable for'std::streambuf + 16;
    std::locale::~locale(v190);
    *(_QWORD *)((char *)v213 + *(ptr - 3)) = *(_QWORD *)v189;
    v49 = *(_QWORD *)(v27 - 24);
    v215.m128_u64[0] = v27;
    *(unsigned __int64 *)((char *)v215.m128_u64 + v49) = v172;
    v50 = *(_QWORD *)(v24 - 24);
    *(_QWORD *)v213 = v24;
    *(_QWORD *)((char *)v213 + v50) = *(_QWORD *)v164;
    v214 = 0;
    v224[0] = (__int64)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base(v135);
    v126 = v127 + 1;
    v22 = v150[2];
    if ( !v22 )
      goto LABEL_42;
  }
  if ( v23 )
  {
LABEL_42:
    v51 = *((_DWORD *)v23 - 1);
    goto LABEL_43;
  }
LABEL_159:
  v23 = nullptr;
  v51 = 0;
LABEL_43:
  sub_157BE40(
    (int)v143,
    (int)v157,
    v203[0],
    v51,
    (int)v23,
    v21,
    v126,
    (__int64)v135,
    (int)v143,
    (int)v150,
    (int)v157,
    *(int *)v164,
    v172,
    ptr);
  v53 = *(_QWORD *)v203;
  v54 = *(_QWORD *)v213;
  *(_QWORD *)v213 = *(_QWORD *)v203;
  *(_QWORD *)v203 = v54;
  if ( *(_QWORD *)v213 && (v55 = v214, v16 = *(_DWORD *)(v53 + 8) == 1, --*(_DWORD *)(v53 + 8), v16) )
  {
    sub_15D7BC0(v55, v53);
    if ( !v23 )
      goto LABEL_133;
LABEL_46:
    v56 = *((_DWORD *)v23 - 1);
  }
  else
  {
    if ( v23 )
      goto LABEL_46;
LABEL_133:
    v56 = 0;
  }
  sub_157BE40(v144, v158, v205[0], v56, (int)v23, v52, v128, (__int64)v136, v144, v151, v158, v166, v174, ptrb);
  v57 = *(_QWORD *)v205;
  v58 = *(_QWORD *)v213;
  *(_QWORD *)v213 = *(_QWORD *)v205;
  *(_QWORD *)v205 = v58;
  if ( *(_QWORD *)v213 )
  {
    v59 = v214;
    v16 = (*(_DWORD *)(v57 + 8))-- == 1;
    if ( v16 )
    {
      sub_15D7BC0(v59, v57);
      v58 = *(_QWORD *)v205;
    }
  }
  v60 = (int *)"union";
  v61 = (_QWORD *)a1;
  sub_5875C0(a1, "union", *(__int64 *)v203, v58);
  if ( v197 )
  {
    v62 = *(std::ios_base **)(a1 + 40);
    *(_QWORD *)v211 = 0;
    v137 = v62;
    v212 = v62;
    v63 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v197 + 144LL);
    if ( v63 == sub_586990 )
    {
      v64 = v197[6];
      if ( v64 )
      {
        *(_QWORD *)v211 = v197[6];
        ++*(_DWORD *)(v64 + 8);
      }
    }
    else
    {
      v61 = v197;
      v60 = v211;
      v63((__int64)v197, (__int64 *)v211);
    }
    if ( (unsigned int)sub_180B130(v61) > 2 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)si128.m128_u64) )
      {
        sub_186A4C0(*(double *)si128.m128_u64);
        v113 = sub_180B150(v61, v60);
        std::__ostream_insert<char,std::char_traits<char>>();
        v114 = sub_160EBE0(v113, v211);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v114, "\n");
      }
      else
      {
        v123 = sub_180B150(v61, v60);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_160EBE0(v123, v211);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v65 = *(_QWORD *)(a1 + 40);
    v129 = v65;
    sub_15E1A70(v65);
    v66 = sub_15E1B70(v65);
    v68 = v66;
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    if ( v23 )
      v69 = *((_DWORD *)v23 - 1);
    else
      v69 = 0;
    sub_157BE40(v145, v159[0], v66, v69, (int)v23, v67, v129, (__int64)v137, v145, v152, v159[0], v167, v175, ptrc);
    v71 = *(_QWORD *)v213;
    *(_QWORD *)v213 = v68;
    if ( v68 && (v72 = v214, v16 = *(_DWORD *)(v68 + 8) == 1, --*(_DWORD *)(v68 + 8), v16) )
    {
      sub_15D7BC0(v72, v68);
      if ( !v23 )
        goto LABEL_157;
LABEL_62:
      v73 = *((_DWORD *)v23 - 1);
    }
    else
    {
      if ( v23 )
        goto LABEL_62;
LABEL_157:
      v73 = 0;
    }
    sub_157BE40(v146, v160, v211[0], v73, (int)v23, v70, v130, (__int64)v138, v146, v153, v160, v168, v176, ptrd);
    v74 = *(_QWORD *)v211;
    v75 = *(_QWORD *)v213;
    *(_QWORD *)v213 = *(_QWORD *)v211;
    *(_QWORD *)v211 = v75;
    if ( *(_QWORD *)v213 )
    {
      v76 = v214;
      v16 = (*(_DWORD *)(v74 + 8))-- == 1;
      if ( v16 )
      {
        sub_15D7BC0(v76, v74);
        v75 = *(_QWORD *)v211;
      }
    }
    sub_588120(a1, "union_delta low", v75, v71);
    if ( v23 )
      v78 = *((_DWORD *)v23 - 1);
    else
      v78 = 0;
    sub_157BE40(v147, v161, v196[0], v78, (int)v23, v77, v131, (__int64)v139, v147, v154, v161, v169, v177, ptre);
    v79 = *(_QWORD *)v213;
    sub_588120(a1, "union delta0", *(__int64 *)v211, *(__int64 *)v213);
    v80 = sub_15E1B70(*(_QWORD *)(a1 + 40));
    v81 = v80;
    if ( v80 )
      ++*(_DWORD *)(v80 + 8);
    if ( v71 )
    {
      v16 = (*(_DWORD *)(v71 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v132, v71);
    }
    v82 = sub_15E1B70(*(_QWORD *)(a1 + 40));
    v84 = v82;
    if ( v82 )
      ++*(_DWORD *)(v82 + 8);
    if ( v23 )
      v85 = *((_DWORD *)v23 - 1);
    else
      v85 = 0;
    sub_157BE40(v148, v162, v81, v85, (int)v23, v83, (int)v132, (__int64)v140, v148, v155, v162, v170, v178, ptrf);
    v87 = *(_QWORD *)v213;
    *(_QWORD *)v213 = v81;
    if ( v81 && (v88 = v214, v16 = *(_DWORD *)(v81 + 8) == 1, --*(_DWORD *)(v81 + 8), v16) )
    {
      sub_15D7BC0(v88, v81);
      if ( !v23 )
        goto LABEL_155;
LABEL_80:
      v89 = *((_DWORD *)v23 - 1);
    }
    else
    {
      if ( v23 )
        goto LABEL_80;
LABEL_155:
      v89 = 0;
    }
    sub_157BE40(v149, v163, v84, v89, (int)v23, v86, v133, (__int64)v141, v149, v156, v163, v171, v179, ptrg);
    v90 = *(_QWORD *)v213;
    *(_QWORD *)v213 = v84;
    if ( v84 )
    {
      v91 = v214;
      v16 = (*(_DWORD *)(v84 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v91, v84);
    }
    sub_5875C0(a1, "union no overflow", v87, v90);
    if ( v90 )
    {
      v16 = (*(_DWORD *)(v90 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v134, v90);
    }
    if ( v87 )
    {
      v16 = (*(_DWORD *)(v87 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v134, v87);
    }
    v92 = *(_QWORD *)v211;
    if ( *(_QWORD *)v211 )
    {
      v93 = v212;
      v16 = (*(_DWORD *)(*(_QWORD *)v211 + 8LL))-- == 1;
      if ( v16 )
        sub_15D7BC0(v93, v92);
    }
    if ( v79 )
    {
      v16 = (*(_DWORD *)(v79 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v142, v79);
    }
  }
  *(_QWORD *)v228 = &off_1C4CA60;
  if ( v238 )
    sub_186B220((void *)(v238 - 8));
  v94 = v236;
  if ( v236 )
  {
    v95 = v237;
    v16 = (*(_DWORD *)(v236 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v95, v94);
  }
  v96 = v234;
  if ( v234 )
  {
    v97 = v235;
    v16 = (*(_DWORD *)(v234 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v97, v96);
  }
  v98 = v232;
  if ( v232 )
  {
    v99 = v233;
    v16 = (*(_DWORD *)(v232 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v99, v98);
  }
  v231 = &qword_1C637E8;
  sub_15841B0(&v231);
  v230 = &qword_1C637E8;
  sub_15841B0(&v230);
  if ( v229 )
    sub_186B220((void *)(v229 - 8));
  result = sub_15841B0(*(_QWORD *)v159);
  if ( v23 )
  {
    v101 = v198;
    v102 = v23;
    v103 = (unsigned __int64)&v23[*((unsigned int *)v23 - 1)];
    if ( (unsigned __int64)v23 < v103 )
    {
      do
      {
        while ( 1 )
        {
          v104 = *v102;
          if ( *v102 )
          {
            v16 = (*(_DWORD *)(v104 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v102 >= v103 )
            goto LABEL_116;
        }
        ++v102;
        sub_15D7BC0(v101, v104);
      }
      while ( (unsigned __int64)v102 < v103 );
    }
LABEL_116:
    result = sub_186B220(v23 - 1);
  }
  v105 = *(_QWORD *)v205;
  if ( *(_QWORD *)v205 )
  {
    v106 = v206;
    v16 = (*(_DWORD *)(*(_QWORD *)v205 + 8LL))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v106, v105);
  }
  v107 = *(_QWORD *)v203;
  if ( *(_QWORD *)v203 )
  {
    v108 = v204;
    v16 = (*(_DWORD *)(*(_QWORD *)v203 + 8LL))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v108, v107);
  }
  return result;
}

