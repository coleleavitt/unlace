__int64 (__fastcall **__fastcall sub_663530(_QWORD *a1))()
{
  char **v1; // r15
  char **v2; // r15
  char **v3; // r15
  char **v4; // r15
  char **v5; // r15
  char **v6; // r15
  char **v7; // r15
  char **exception; // r12
  std::ios_base *v9; // rbx
  std::ios_base *v10; // rbp
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int v21; // r12d
  unsigned int *v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r13
  __int16 v30; // ax
  _DWORD *v31; // rax
  int v32; // edx
  __int64 v33; // r13
  unsigned int v34; // eax
  _QWORD *v35; // rax
  unsigned __int64 *v36; // rsi
  int v37; // eax
  _QWORD *v38; // r13
  _QWORD *v39; // r15
  __int64 v40; // rbp
  __int64 *v41; // rbp
  unsigned __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 (__fastcall **result)(); // rax
  unsigned int v47; // eax
  __int64 v48; // rdx
  int v49; // eax
  _QWORD *v50; // rdx
  unsigned int v51; // ebp
  unsigned int v52; // edx
  unsigned int *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rbp
  unsigned int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  _QWORD *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // r13
  __int64 v63; // rcx
  int v64; // eax
  _QWORD *v65; // rcx
  __int64 v66; // rsi
  unsigned int v67; // eax
  unsigned int v68; // ecx
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rbp
  unsigned int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  _QWORD *v75; // rdx
  unsigned int v76; // ebp
  unsigned int v77; // edx
  unsigned int *v78; // rax
  unsigned int v79; // edx
  unsigned int v80; // ecx
  unsigned int v81; // r15d
  unsigned int *v82; // rax
  __int64 v83; // rdx
  _QWORD *v84; // r14
  unsigned int v85; // r13d
  unsigned int v86; // edx
  unsigned int *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  std::ios_base *v90; // rax
  _BYTE *v91; // r8
  size_t v92; // r8
  _QWORD *v93; // r15
  size_t v94; // rsi
  char *v95; // rdx
  _QWORD *v96; // rax
  _QWORD *v97; // r14
  unsigned int v98; // eax
  unsigned __int64 v99; // rdi
  char *v100; // rdx
  char *v101; // rcx
  unsigned int v102; // eax
  unsigned int v103; // eax
  unsigned int v104; // edx
  __int64 v105; // r8
  unsigned __int64 v106; // rdi
  _QWORD *v107; // rax
  const void *v108; // rsi
  size_t v109; // rdx
  _QWORD *v110; // r14
  void *v111; // rsi
  unsigned __int64 v112; // rdi
  __int64 v113; // rax
  _QWORD *v114; // r15
  std::ios_base *v115; // [rsp+8h] [rbp-2F0h]
  unsigned int v116; // [rsp+8h] [rbp-2F0h]
  std::ios_base *v117; // [rsp+8h] [rbp-2F0h]
  size_t v118; // [rsp+10h] [rbp-2E8h]
  size_t v119; // [rsp+10h] [rbp-2E8h]
  __int64 v120; // [rsp+10h] [rbp-2E8h]
  __int64 v121; // [rsp+10h] [rbp-2E8h]
  size_t v122; // [rsp+10h] [rbp-2E8h]
  void *v123; // [rsp+18h] [rbp-2E0h]
  size_t v124; // [rsp+18h] [rbp-2E0h]
  size_t v125; // [rsp+18h] [rbp-2E0h]
  size_t v126; // [rsp+18h] [rbp-2E0h]
  size_t n[2]; // [rsp+20h] [rbp-2D8h] BYREF
  _QWORD v128[2]; // [rsp+30h] [rbp-2C8h] BYREF
  void *v129; // [rsp+40h] [rbp-2B8h] BYREF
  size_t v130; // [rsp+48h] [rbp-2B0h]
  _QWORD dest[4]; // [rsp+50h] [rbp-2A8h] BYREF
  _QWORD v132[3]; // [rsp+70h] [rbp-288h] BYREF
  void *v133; // [rsp+88h] [rbp-270h]
  __int64 v134; // [rsp+98h] [rbp-260h]
  void *ptr; // [rsp+A0h] [rbp-258h]
  __m128i v136; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v137; // [rsp+C8h] [rbp-230h]
  void *v138; // [rsp+D0h] [rbp-228h]
  __int64 v139; // [rsp+E0h] [rbp-218h]
  void *v140; // [rsp+E8h] [rbp-210h]
  __int64 (__fastcall **v141)(); // [rsp+F0h] [rbp-208h]
  __int64 v142; // [rsp+100h] [rbp-1F8h]
  void *v143; // [rsp+108h] [rbp-1F0h]
  __int64 v144; // [rsp+118h] [rbp-1E0h]
  void *v145; // [rsp+120h] [rbp-1D8h]
  __int64 v146; // [rsp+128h] [rbp-1D0h]
  __int64 *v147; // [rsp+130h] [rbp-1C8h]
  char v148; // [rsp+138h] [rbp-1C0h]
  _OWORD v149[2]; // [rsp+140h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+160h] [rbp-198h]
  __int128 v151; // [rsp+170h] [rbp-188h]
  char v152[8]; // [rsp+180h] [rbp-178h] BYREF
  int v153; // [rsp+188h] [rbp-170h]
  void *v154; // [rsp+190h] [rbp-168h]
  __int64 v155; // [rsp+198h] [rbp-160h]
  char v156; // [rsp+1A0h] [rbp-158h] BYREF
  _QWORD v157[28]; // [rsp+1B0h] [rbp-148h] BYREF
  __int16 v158; // [rsp+290h] [rbp-68h]
  __int128 v159; // [rsp+298h] [rbp-60h]
  __int128 v160; // [rsp+2A8h] [rbp-50h]

  v9 = (std::ios_base *)a1[29];
  v132[2] = 0;
  v132[0] = &off_1C62200;
  v133 = nullptr;
  v134 = 0;
  ptr = nullptr;
  if ( v9 )
  {
    v115 = (std::ios_base *)((char *)v9 + 8 * *((unsigned int *)v9 - 1));
    if ( v9 != v115 )
    {
      v10 = v9;
      v9 = nullptr;
      while ( 1 )
      {
        v11 = *(_QWORD *)v10;
        v12 = *(_DWORD *)(*(_QWORD *)v10 + 68LL);
        v13 = *(_DWORD *)(*(_QWORD *)v10 + 56LL);
        if ( v12 < v13 )
          break;
LABEL_14:
        v10 = (std::ios_base *)((char *)v10 + 8);
        if ( v115 == v10 )
          goto LABEL_15;
      }
      v14 = v11 + 8LL * v12;
      v15 = v11 + 8 * (v12 + (unsigned __int64)(v13 - 1 - v12)) + 8;
      v16 = *(_QWORD *)(v14 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
      {
        v35 = (_QWORD *)sub_186B270(0x18u);
        v9 = (std::ios_base *)(v35 + 1);
        v36 = v35 + 1;
        *v35 = 2;
        v37 = 1;
        goto LABEL_8;
      }
      while ( 1 )
      {
        v18 = *((_DWORD *)v9 - 1);
        if ( v18 == *((_DWORD *)v9 - 2) )
        {
          v19 = (3 * v18 + 1) >> 1;
          v20 = 8 * v19 + 8;
          v21 = v19;
          if ( 8 * v18 + 8 >= (unsigned int)v20 || v18 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v149);
            sub_233E40((__int64)v149);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300((char *)v9 - 8, v20);
          v23 = v22[1];
          *v22 = v21;
          v9 = (std::ios_base *)(v22 + 2);
          v14 += 8;
          *(_QWORD *)&v22[2 * v23 + 2] = v16;
          v22[1] = v23 + 1;
          if ( v15 == v14 )
            goto LABEL_14;
        }
        else
        {
          v17 = v18;
          v37 = v18 + 1;
          v36 = (unsigned __int64 *)((char *)v9 + 8 * v17);
LABEL_8:
          v14 += 8;
          *v36 = v16;
          *((_DWORD *)v9 - 1) = v37;
          if ( v15 == v14 )
            goto LABEL_14;
        }
        v16 = *(_QWORD *)(v14 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      }
    }
    v9 = nullptr;
  }
LABEL_15:
  v24 = nullptr;
  v137 = 0;
  v128[0] = off_1C52A80;
  v25 = a1[2];
  v26 = *a1;
  v138 = nullptr;
  v139 = 0;
  v128[1] = v25;
  v140 = nullptr;
  v142 = 0;
  v143 = nullptr;
  v141 = &off_1C62200;
  v144 = 0;
  v145 = nullptr;
  v146 = v26;
  v147 = nullptr;
  v148 = 1;
  v136 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v128, (__m128i)(unsigned __int64)&off_1C62200);
  while ( v9 )
  {
    while ( 1 )
    {
      v27 = *((_DWORD *)v9 - 1);
      if ( !v27 )
        goto LABEL_32;
      v28 = (unsigned int)(v27 - 1);
      v29 = *((_QWORD *)v9 + v28);
      *((_DWORD *)v9 - 1) = v28;
      if ( !(unsigned __int8)sub_15D37A0(v132, v29) )
      {
        sub_15D0A90(v132, v29, 1);
        if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))a1[3])(a1[3], v29) )
          break;
      }
    }
    v30 = *(_WORD *)(v29 + 4);
    if ( v30 )
    {
      if ( v30 != 2 )
        goto LABEL_64;
      v55 = *(_QWORD *)(v29 + 24);
      if ( v24 )
      {
        v56 = *((_DWORD *)v24 - 1);
        if ( v56 == *((_DWORD *)v24 - 2) )
        {
          v85 = (3 * v56 + 1) >> 1;
          v86 = 8 * v85 + 8;
          if ( 8 * v56 + 8 >= v86 || v56 >= v85 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v149);
            sub_233E40((__int64)v149);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v87 = (unsigned int *)sub_186B300(v24 - 1, v86);
          v88 = v87[1];
          v24 = v87 + 2;
          *v87 = v85;
          LODWORD(v87) = v88;
          v59 = &v24[v88];
          v58 = (_DWORD)v87 + 1;
        }
        else
        {
          v57 = v56;
          v58 = v56 + 1;
          v59 = &v24[v57];
        }
      }
      else
      {
        v110 = (_QWORD *)sub_186B270(0x18u);
        *v110 = 2;
        v58 = 1;
        v24 = v110 + 1;
        v59 = v24;
      }
      *v59 = v55;
      *((_DWORD *)v24 - 1) = v58;
    }
    else
    {
      v31 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL);
      if ( !v31 || *v31 )
        goto LABEL_64;
      v32 = v31[1];
      if ( v32 == 5 || v32 == 6 )
      {
        v60 = *(unsigned int *)(v29 + 24);
        if ( (_DWORD)v60 )
        {
          v61 = v29;
          v62 = v29 + 8 * v60;
          do
          {
            v67 = *((_DWORD *)v9 - 1);
            if ( v67 == *((_DWORD *)v9 - 2) )
            {
              v68 = (3 * v67 + 1) >> 1;
              v69 = 8 * v68 + 8;
              if ( 8 * v67 + 8 >= (unsigned int)v69 || v67 >= v68 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v149);
                sub_233E40((__int64)v149);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v116 = (3 * v67 + 1) >> 1;
              v70 = (unsigned int *)sub_186B300((char *)v9 - 8, v69);
              v9 = (std::ios_base *)(v70 + 2);
              *v70 = v116;
              LODWORD(v70) = v70[1];
              v65 = (_QWORD *)((char *)v9 + 8 * (unsigned int)v70);
              v64 = (_DWORD)v70 + 1;
            }
            else
            {
              v63 = v67;
              v64 = v67 + 1;
              v65 = (_QWORD *)((char *)v9 + 8 * v63);
            }
            v66 = *(_QWORD *)(v61 + 32);
            v61 += 8;
            *v65 = v66;
            *((_DWORD *)v9 - 1) = v64;
          }
          while ( v62 != v61 );
        }
      }
      else
      {
        if ( v32 == 9 )
        {
          if ( *(_DWORD *)(v29 + 24) == 2 )
          {
            v71 = *(_QWORD *)(v29 + 32);
            v33 = *(_QWORD *)(v29 + 40);
            if ( v24 )
            {
              v72 = *((_DWORD *)v24 - 1);
              if ( v72 == *((_DWORD *)v24 - 2) )
              {
                v79 = (3 * v72 + 1) >> 1;
                v80 = 8 * v79 + 8;
                v81 = v79;
                if ( 8 * v72 + 8 >= v80 || v72 >= v79 )
                {
                  v6 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
                  *v6 = (char *)off_1C63128;
                  sub_2333C0(v6 + 1, v149);
                  sub_233E40((__int64)v149);
                  __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v82 = (unsigned int *)sub_186B300(v24 - 1, v80);
                v83 = v82[1];
                v24 = v82 + 2;
                *v82 = v81;
                LODWORD(v82) = v83;
                v75 = &v24[v83];
                v74 = (_DWORD)v82 + 1;
              }
              else
              {
                v73 = v72;
                v74 = v72 + 1;
                v75 = &v24[v73];
              }
            }
            else
            {
              v97 = (_QWORD *)sub_186B270(0x18u);
              *v97 = 2;
              v74 = 1;
              v24 = v97 + 1;
              v75 = v24;
            }
            *v75 = v71;
            *((_DWORD *)v24 - 1) = v74;
            v34 = *((_DWORD *)v9 - 1);
            if ( v34 != *((_DWORD *)v9 - 2) )
              goto LABEL_31;
            v76 = (3 * v34 + 1) >> 1;
            v77 = 8 * v76 + 8;
            if ( 8 * v34 + 8 >= v77 || v34 >= v76 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v149);
              sub_233E40((__int64)v149);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_91;
          }
        }
        else if ( v32 == 2 && *(_DWORD *)(v29 + 24) == 2 && *(_QWORD *)(*a1 + 856LL) == *(_QWORD *)(v29 + 32) )
        {
          v33 = *(_QWORD *)(v29 + 40);
          v34 = *((_DWORD *)v9 - 1);
          if ( v34 == *((_DWORD *)v9 - 2) )
          {
            v76 = (3 * v34 + 1) >> 1;
            v77 = 8 * v76 + 8;
            if ( 8 * v34 + 8 >= v77 || v34 >= v76 )
            {
              v1 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
              *v1 = (char *)off_1C63128;
              sub_2333C0(v1 + 1, v149);
              sub_233E40((__int64)v149);
              __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_91;
          }
LABEL_31:
          *((_QWORD *)v9 + v34) = v33;
          *((_DWORD *)v9 - 1) = v34 + 1;
          continue;
        }
        if ( v31[1] == 2 && *(_DWORD *)(v29 + 24) == 2 && *(_QWORD *)(*a1 + 856LL) == *(_QWORD *)(v29 + 40) )
        {
          v33 = *(_QWORD *)(v29 + 32);
          v34 = *((_DWORD *)v9 - 1);
          if ( v34 != *((_DWORD *)v9 - 2) )
            goto LABEL_31;
          v76 = (3 * v34 + 1) >> 1;
          v77 = 8 * v76 + 8;
          if ( 8 * v34 + 8 >= v77 || v34 >= v76 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v149);
            sub_233E40((__int64)v149);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_91:
          v78 = (unsigned int *)sub_186B300((char *)v9 - 8, v77);
          *v78 = v76;
          v9 = (std::ios_base *)(v78 + 2);
          v34 = v78[1];
          goto LABEL_31;
        }
LABEL_64:
        if ( v24 )
        {
          v47 = *((_DWORD *)v24 - 1);
          if ( v47 == *((_DWORD *)v24 - 2) )
          {
            v51 = (3 * v47 + 1) >> 1;
            v52 = 8 * v51 + 8;
            if ( 8 * v47 + 8 >= v52 || v47 >= v51 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v149);
              sub_233E40((__int64)v149);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v53 = (unsigned int *)sub_186B300(v24 - 1, v52);
            v54 = v53[1];
            v24 = v53 + 2;
            *v53 = v51;
            LODWORD(v53) = v54;
            v50 = &v24[v54];
            v49 = (_DWORD)v53 + 1;
          }
          else
          {
            v48 = v47;
            v49 = v47 + 1;
            v50 = &v24[v48];
          }
        }
        else
        {
          v84 = (_QWORD *)sub_186B270(0x18u);
          *v84 = 2;
          v49 = 1;
          v24 = v84 + 1;
          v50 = v24;
        }
        *v50 = v29;
        *((_DWORD *)v24 - 1) = v49;
      }
    }
  }
LABEL_32:
  if ( v24 )
  {
    v38 = &v24[*((unsigned int *)v24 - 1)];
    if ( v38 != v24 )
    {
      v39 = v24;
      while ( 1 )
      {
        v40 = *v39;
        if ( (unsigned __int8)sub_168D740(&v136, *v39) )
          break;
        if ( v38 == ++v39 )
          goto LABEL_37;
      }
      *(__m128i *)n = _mm_unpacklo_epi64(
                        (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                        (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
      std::ios_base::ios_base((std::ios_base *)v157);
      v159 = 0;
      v160 = 0;
      v157[0] = (char *)&`vtable for'std::ios + 16;
      v158 = 0;
      v157[27] = 0;
      v89 = *(_QWORD *)(`VTT for'std::ostringstream[1] - 24LL);
      *(_QWORD *)&v149[0] = `VTT for'std::ostringstream[1];
      *(_QWORD *)((char *)v149 + v89) = `VTT for'std::ostringstream[2];
      std::ios::init();
      v149[0] = _mm_load_si128((const __m128i *)n);
      v157[0] = (char *)&`vtable for'std::ostringstream + 64;
      n[0] = (size_t)v152;
      v149[1] = 0;
      *(_OWORD *)src = 0;
      v151 = 0;
      std::locale::locale((std::locale *)v152);
      v153 = 16;
      v156 = 0;
      *((_QWORD *)&v149[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
      v154 = &v156;
      v155 = 0;
      std::ios::init();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v129, v40, *a1, 0, 0, 0);
      sub_160E8B0(v149, &v129);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(dest);
      v90 = (std::ios_base *)__cxa_allocate_exception(0x28u);
      v91 = (_BYTE *)v151;
      v129 = dest;
      v117 = v90;
      v130 = 0;
      LOBYTE(dest[0]) = 0;
      if ( (_QWORD)v151 )
      {
        if ( src[0] >= (void *)v151 )
          v91 = src[0];
        if ( !src[0] )
          v91 = (_BYTE *)v151;
        v92 = v91 - (char *)src[1];
        if ( (v92 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v92 > 0xF )
        {
          if ( v92 > 0x1D )
          {
            v120 = v92;
            v106 = v92 + 1;
            if ( (__int64)(v92 + 1) < 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v120 = 30;
            v106 = 31;
          }
          n[0] = v92;
          v123 = src[1];
          v107 = (_QWORD *)operator new(v106);
          v108 = v123;
          v92 = n[0];
          v93 = v107;
          if ( v123 )
          {
            v124 = n[0];
            memcpy(v107, v108, n[0]);
            v92 = v124;
          }
          if ( v129 != dest )
          {
            v125 = v92;
            operator delete(v129, dest[0] + 1LL);
            v92 = v125;
          }
          v129 = v93;
          dest[0] = v120;
        }
        else if ( src[1] == dest )
        {
          v118 = v92;
          std::string::_M_replace_cold();
          v92 = v118;
          v93 = v129;
        }
        else
        {
          if ( v92 )
          {
            if ( v92 == 1 )
            {
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            }
            else
            {
              v119 = v92;
              memcpy(dest, src[1], v92);
              v92 = v119;
            }
          }
          v93 = dest;
        }
        v130 = v92;
        *((_BYTE *)v93 + v92) = 0;
LABEL_116:
        v94 = v130;
        v95 = (char *)v117 + 24;
        *(_QWORD *)v117 = off_1C63128;
        v96 = v129;
        *((_QWORD *)v117 + 1) = (char *)v117 + 24;
        if ( v96 == dest )
        {
          v98 = v94 + 1;
          if ( (unsigned int)(v94 + 1) >= 8 )
          {
            *((_QWORD *)v117 + 3) = dest[0];
            *(_QWORD *)&v95[v98 - 8] = *(_QWORD *)((char *)&dest[-1] + v98);
            v99 = ((unsigned __int64)v117 + 32) & 0xFFFFFFFFFFFFFFF8LL;
            v100 = &v95[-v99];
            v101 = (char *)((char *)dest - v100);
            v102 = ((_DWORD)v100 + v98) & 0xFFFFFFF8;
            if ( v102 >= 8 )
            {
              v103 = v102 & 0xFFFFFFF8;
              v104 = 0;
              do
              {
                v105 = v104;
                v104 += 8;
                *(_QWORD *)(v99 + v105) = *(_QWORD *)&v101[v105];
              }
              while ( v104 < v103 );
            }
          }
          else if ( (v98 & 4) != 0 )
          {
            *((_DWORD *)v117 + 6) = dest[0];
            *(_DWORD *)&v95[v98 - 4] = *(_DWORD *)((char *)&v130 + v98 + 4);
          }
          else if ( (_DWORD)v94 != -1 )
          {
            *((_BYTE *)v117 + 24) = dest[0];
            if ( (v98 & 2) != 0 )
              *(_WORD *)&v95[v98 - 2] = *(_WORD *)((char *)&v130 + v98 + 6);
          }
        }
        else
        {
          *((_QWORD *)v117 + 1) = v96;
          *((_QWORD *)v117 + 3) = dest[0];
        }
        *((_QWORD *)v117 + 2) = v94;
        __cxa_throw(v117, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v109 = v155;
      if ( (unsigned __int64)v155 > 0xF )
      {
        if ( v155 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        if ( (unsigned __int64)v155 > 0x1D )
        {
          v121 = v155;
          v112 = v155 + 1;
          if ( v155 + 1 < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v121 = 30;
          v112 = 31;
        }
        v126 = v155;
        v113 = operator new(v112);
        v109 = v126;
        v114 = (_QWORD *)v113;
        if ( v129 != dest )
        {
          operator delete(v129, dest[0] + 1LL);
          v109 = v126;
        }
        v129 = v114;
        v111 = v154;
        dest[0] = v121;
      }
      else
      {
        if ( !v155 )
        {
LABEL_147:
          v130 = v109;
          *((_BYTE *)v129 + v109) = 0;
          goto LABEL_116;
        }
        v111 = v154;
        if ( v155 == 1 )
        {
          LOBYTE(dest[0]) = *(_BYTE *)v154;
          goto LABEL_147;
        }
        v114 = dest;
      }
      v122 = v109;
      memcpy(v114, v111, v109);
      v109 = v122;
      goto LABEL_147;
    }
  }
LABEL_37:
  v41 = v147;
  if ( v147 )
  {
    v42 = (unsigned __int64)&v147[*((unsigned int *)v147 - 1)];
    if ( (unsigned __int64)v147 >= v42 )
      goto LABEL_45;
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = v146;
          if ( (*(_DWORD *)(v43 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v41 >= v42 )
          goto LABEL_44;
      }
      sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( (unsigned __int64)v41 < v42 );
LABEL_44:
    v41 = v147;
    if ( v147 )
LABEL_45:
      sub_186B220(v41 - 1);
  }
  v141 = &off_1C62200;
  if ( v145 )
    sub_186B220(v145);
  if ( v143 )
    sub_186B220(v143);
  v136.m128i_i64[1] = (__int64)&off_1C62200;
  if ( v140 )
    sub_186B220(v140);
  if ( v138 )
    sub_186B220(v138);
  if ( v24 )
    sub_186B220(v24 - 1);
  if ( v9 )
    sub_186B220((char *)v9 - 8);
  result = &off_1C62200;
  v132[0] = &off_1C62200;
  if ( ptr )
    result = (__int64 (__fastcall **)())sub_186B220(ptr);
  if ( v133 )
    return (__int64 (__fastcall **)())sub_186B220(v133);
  return result;
}

