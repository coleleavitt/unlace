unsigned __int64 __fastcall sub_422CB0(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int a5,
        unsigned __int8 *a6,
        unsigned __int8 a7)
{
  unsigned __int64 v11; // r13
  int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r12
  bool v22; // al
  __int16 v23; // ax
  __int64 v24; // r13
  __int64 v25; // rsi
  int v26; // eax
  int v27; // r13d
  int v28; // eax
  int v29; // r13d
  int v30; // eax
  int v31; // eax
  __int64 v32; // r10
  __int64 v33; // rcx
  bool v34; // cf
  __int64 v35; // rcx
  void (__fastcall *v36)(_QWORD *, _QWORD, _QWORD); // rbp
  char v37; // al
  int v38; // eax
  int v39; // r13d
  int v40; // eax
  int v41; // r13d
  int v42; // eax
  int v43; // eax
  int v44; // r13d
  int v45; // eax
  int v46; // r13d
  int v47; // eax
  const char *v48; // rsi
  __int64 v49; // rax
  __int64 not_tail; // rbx
  __int64 v51; // rcx
  unsigned __int8 v52; // si
  unsigned __int64 v53; // r12
  __int64 v54; // r15
  bool v55; // zf
  unsigned __int64 v56; // r15
  __int64 v57; // rax
  const char *v58; // rdx
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rsi
  int v61; // eax
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r12
  char v65; // al
  __int64 v66; // r14
  unsigned __int64 v67; // r13
  _BYTE *v68; // rsi
  unsigned __int64 v69; // r15
  __int64 v70; // r14
  _BYTE *v71; // rsi
  size_t v72; // rax
  __int64 v73; // r15
  size_t v74; // r13
  size_t v75; // r10
  _BYTE *v76; // rsi
  size_t v77; // rdx
  char *v78; // rdi
  __int64 v79; // r15
  __int64 v80; // r14
  unsigned __int64 v81; // r13
  _BYTE *v82; // rsi
  __int64 v83; // rax
  unsigned __int64 v84; // r10
  __int64 v85; // r14
  __int64 v86; // rax
  __int64 (*v87)(); // rax
  char deref_color; // al
  __int64 v89; // r12
  unsigned __int64 v90; // r14
  _BYTE *v91; // rsi
  unsigned __int64 v92; // r14
  __int64 v93; // r12
  _BYTE *v94; // rsi
  __int64 v95; // r15
  int v96; // eax
  __int64 j; // r13
  __int64 v98; // r14
  unsigned __int64 v99; // r15
  _BYTE *v100; // rsi
  unsigned __int64 v101; // rax
  bool v102; // r11
  int v103; // r9d
  unsigned __int8 v104; // al
  char v105; // al
  bool v106; // r11
  int v107; // r9d
  char v108; // dl
  int v109; // eax
  void *v110; // rdi
  int v111; // r8d
  int v112; // r9d
  unsigned __int64 v113; // r12
  __int64 v114; // r14
  int v115; // eax
  unsigned __int64 max_strlit_length; // rax
  int v117; // ebp
  unsigned __int8 v118; // al
  unsigned int v119; // eax
  __int64 v120; // rbp
  unsigned __int64 v121; // r12
  _BYTE *v122; // rsi
  int v123; // eax
  unsigned __int8 v124; // al
  __int64 v125; // rax
  __int64 (*v126)(); // rax
  const char *v127; // rdx
  char i; // al
  int v129; // eax
  __int64 v130; // rbp
  __int64 v131; // r15
  unsigned __int64 v132; // r14
  char *v133; // rbp
  size_t v134; // rax
  size_t v135; // r15
  size_t v136; // r13
  size_t v137; // rdx
  int v138; // r12d
  __int64 v139; // r15
  __int64 v140; // rsi
  __int64 v141; // rbp
  __int64 (__fastcall *v142)(_QWORD *, char); // rax
  __int64 v143; // rax
  void *dest; // [rsp+0h] [rbp-1D8h]
  void *desta; // [rsp+0h] [rbp-1D8h]
  void *destb; // [rsp+0h] [rbp-1D8h]
  void *destc; // [rsp+0h] [rbp-1D8h]
  bool v148; // [rsp+8h] [rbp-1D0h]
  bool v149; // [rsp+8h] [rbp-1D0h]
  int v150; // [rsp+8h] [rbp-1D0h]
  int v152; // [rsp+10h] [rbp-1C8h]
  int v153; // [rsp+10h] [rbp-1C8h]
  bool v154; // [rsp+10h] [rbp-1C8h]
  int v155; // [rsp+18h] [rbp-1C0h]
  __int64 v156; // [rsp+18h] [rbp-1C0h]
  int v157; // [rsp+18h] [rbp-1C0h]
  size_t v159; // [rsp+20h] [rbp-1B8h]
  int v160; // [rsp+28h] [rbp-1B0h]
  size_t v161; // [rsp+28h] [rbp-1B0h]
  int v162; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v163; // [rsp+30h] [rbp-1A8h]
  int v164; // [rsp+30h] [rbp-1A8h]
  _QWORD *v165; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v166; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v167; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v168; // [rsp+30h] [rbp-1A8h]
  int v169; // [rsp+38h] [rbp-1A0h]
  bool src; // [rsp+40h] [rbp-198h]
  unsigned __int64 v171; // [rsp+48h] [rbp-190h]
  char v172; // [rsp+57h] [rbp-181h]
  unsigned __int64 v173; // [rsp+60h] [rbp-178h]
  _BYTE v174[4]; // [rsp+74h] [rbp-164h] BYREF
  unsigned __int64 v175; // [rsp+78h] [rbp-160h] BYREF
  void *v176; // [rsp+80h] [rbp-158h] BYREF
  __int128 v177; // [rsp+88h] [rbp-150h]
  void *ptr; // [rsp+A0h] [rbp-138h] BYREF
  __int128 v179; // [rsp+A8h] [rbp-130h]
  _QWORD v180[4]; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v181; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v182; // [rsp+E8h] [rbp-F0h]
  unsigned __int64 v183; // [rsp+100h] [rbp-D8h]
  unsigned __int64 v184; // [rsp+110h] [rbp-C8h]
  int v185; // [rsp+118h] [rbp-C0h]
  __int64 *v186; // [rsp+128h] [rbp-B0h]
  _BYTE v187[20]; // [rsp+130h] [rbp-A8h] BYREF
  char v188[12]; // [rsp+144h] [rbp-94h] BYREF
  char s[72]; // [rsp+150h] [rbp-88h] BYREF
  unsigned __int64 v190; // [rsp+198h] [rbp-40h]

  v190 = __readfsqword(0x28u);
  v155 = (*(__int64 (__fastcall **)(__int64 *))(*a4 + 80))(a4);
  if ( !v155 )
    return v190 - __readfsqword(0x28u);
  v11 = *(_QWORD *)(a2 + 24);
  if ( !sub_3BD540((__int64)a1, v11) )
    v11 = sub_3BD3C0((__int64)a1, v11);
  v160 = (*(__int64 (__fastcall **)(__int64 *))(*a4 + 88))(a4);
  v162 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*a4 + 96))(a4, v11);
  v12 = (*(__int64 (__fastcall **)(__int64 *))(*a4 + 104))(a4);
  v13 = (*(__int64 (__fastcall **)(__int64 *))(*a4 + 112))(a4);
  v15 = a5;
  v16 = v13;
  if ( v155 <= (int)a5 )
  {
    v177 = 0;
    v176 = nullptr;
    v176 = (void *)qvector_reserve(&v176, 0, 32, 1);
    if ( (unsigned int)(v12 - 2) <= 2 )
    {
      v175 = 0;
      if ( *(_DWORD *)(*a1 + 1512) >= v160
        && (unsigned __int8)sub_3C9E40(a1, (__int64 *)&v175, *(__int64 **)(a2 + 24), v160)
        && sub_3BD540((__int64)a1, v175) )
      {
        if ( v12 == 4 )
        {
          v125 = *a4;
          BYTE4(v182) = 1;
          v181 = 16;
          LODWORD(v182) = 5;
          v126 = *(__int64 (**)())(v125 + 152);
          if ( v126 != sub_422C10 )
            ((void (__fastcall *)(__int64 *, __int64 *))v126)(a4, &v181);
          generate_deref_chain(a3, v175, &v181, 1, v111, v112);
        }
        else
        {
          v113 = v175;
          if ( v12 == 2 )
          {
            sub_4D2890(a1, &v176, v175, 0);
          }
          else
          {
            ptr = nullptr;
            v179 = 0;
            v114 = *a1;
            (*(void (__fastcall **)(__int64 *, void **))(*a4 + 40))(a4, &ptr);
            if ( (unsigned __int64)v179 <= 1 )
              v115 = 0;
            else
              v115 = add_encoding((int)ptr);
            max_strlit_length = get_max_strlit_length(v113, v115 << 24, 3);
            if ( max_strlit_length > 0x800 )
              max_strlit_length = 2048;
            if ( v113 < max_strlit_length + v113 )
            {
              sub_359970((__int64)&v181, v114, v113, max_strlit_length + v113, 0);
              v186 = a4;
              v127 = haystack;
              v181 = (__int64)off_2B282D0;
              if ( (_QWORD)v179 )
                v127 = (const char *)ptr;
              sub_8B7BF0(v180, &v181, v127, 0, 0);
              while ( 1 )
              {
                for ( i = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v180[0] + 16LL))(v180[0]);
                      ;
                      i = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v180[0] + 16LL))(v180[0]) )
                {
                  if ( i )
                    goto LABEL_194;
                  v129 = sub_8B7CF0(v180, s, v174);
                  if ( v129 == 1 )
                    goto LABEL_194;
                  v130 = v177;
                  if ( !v129 )
                    break;
                  if ( (_QWORD)v177 )
                  {
                    v131 = v177 + 2;
                    v132 = v177 + 3;
                    v130 = v177 - 1;
                  }
                  else
                  {
                    v132 = 4;
                    v131 = 3;
                  }
                  if ( *((_QWORD *)&v177 + 1) < v132 )
                    v176 = (void *)qvector_reserve(&v176, v176, v132, 1);
                  *(_QWORD *)&v177 = v132;
                  *((_BYTE *)v176 + v131) = 0;
                  v133 = (char *)v176 + v130;
                  *(_WORD *)v133 = -16401;
                  v133[2] = -67;
                }
                v134 = strlen(s);
                v135 = v134;
                v136 = v134;
                if ( v130 )
                {
                  --v130;
                  v136 = v134 + v130;
                }
                v137 = v136 + 1;
                if ( *((_QWORD *)&v177 + 1) < v136 + 1 )
                {
                  v176 = (void *)qvector_reserve(&v176, v176, v137, 1);
                  v137 = v136 + 1;
                }
                *(_QWORD *)&v177 = v137;
                *((_BYTE *)v176 + v136) = 0;
                memmove((char *)v176 + v130, s, v135);
              }
            }
LABEL_194:
            v110 = ptr;
            if ( ptr )
              goto LABEL_184;
          }
        }
      }
      goto LABEL_63;
    }
    v53 = *(_QWORD *)(a2 + 24);
    if ( v53 == -1 )
      goto LABEL_63;
    v54 = v160 * v155;
    v55 = v53 + v54 == 0;
    v56 = v53 + v54;
    v166 = v56;
    if ( v55 )
    {
      v166 = -1;
    }
    else if ( v53 >= v56 )
    {
      goto LABEL_63;
    }
    v57 = *a4;
    ptr = nullptr;
    v179 = 0;
    (*(void (__fastcall **)(__int64 *, void **))(v57 + 40))(a4, &ptr);
    sub_359970((__int64)&v181, *a1, v53, v166, 0);
    v186 = a4;
    v58 = haystack;
    v181 = (__int64)off_2B282D0;
    if ( (_QWORD)v179 )
      v58 = (const char *)ptr;
    sub_8B7BF0(v180, &v181, v58, 0, 0);
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v180[0] + 16LL))(v180[0]) )
        goto LABEL_183;
      v59 = v184;
      LODWORD(v175) = -1;
      v60 = v184;
      if ( v185 > 0 )
        v60 = v184 - 1;
      v61 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD, _BYTE *))(*a4 + 32))(a4, v60, 0, v174);
      if ( v61 )
        break;
      v95 = v182;
      v96 = sub_8B7CF0(v180, s, &v175);
      v64 = v182 - v95;
      if ( v96 == 1 )
      {
        for ( ; v59 < v166; *((_BYTE *)v176 + v120 + 1) = 0 )
        {
          v120 = v177;
          v121 = 2;
          if ( (_QWORD)v177 )
          {
            v121 = v177 + 1;
            v120 = v177 - 1;
          }
          v122 = v176;
          if ( *((_QWORD *)&v177 + 1) < v121 )
          {
            v176 = (void *)qvector_reserve(&v176, v176, v121, 1);
            v122 = v176;
          }
          *(_QWORD *)&v177 = v121;
          ++v59;
          v122[v120] = 46;
        }
LABEL_183:
        v110 = ptr;
        if ( ptr )
        {
LABEL_184:
          *(_QWORD *)&v179 = 0;
          qfree(v110);
        }
LABEL_63:
        v48 = haystack;
        if ( (_QWORD)v177 )
          v48 = (const char *)v176;
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a3 + 56LL))(a3, v48, 0);
        if ( v176 )
        {
          *(_QWORD *)&v177 = 0;
          qfree(v176);
        }
        return v190 - __readfsqword(0x28u);
      }
      if ( !v96
        && (unsigned __int8)is_cp_graphical((unsigned int)v175)
        && ((unsigned int)v175 <= 0x7F
         || (unsigned __int8)(((unsigned int)sub_8B6A20((unsigned int)v175) >> 16) - 12) > 2u) )
      {
LABEL_99:
        v65 = sub_7BE710(*(_QWORD *)(*a1 + 1672) + 2400LL, *a1, v59, 4432);
        if ( v174[0] )
        {
          v157 = 9;
        }
        else
        {
          if ( !v65 )
          {
            v157 = 1;
            goto LABEL_111;
          }
          v157 = 13;
        }
        v66 = v177;
        v67 = 2;
        if ( (_QWORD)v177 )
        {
          v67 = v177 + 1;
          v66 = v177 - 1;
        }
        v68 = v176;
        if ( *((_QWORD *)&v177 + 1) < v67 )
        {
          v176 = (void *)qvector_reserve(&v176, v176, v67, 1);
          v68 = v176;
        }
        *(_QWORD *)&v177 = v67;
        v69 = 2;
        v68[v66] = 1;
        *((_BYTE *)v176 + v66 + 1) = 0;
        v70 = v177;
        if ( (_QWORD)v177 )
        {
          v69 = v177 + 1;
          v70 = v177 - 1;
        }
        v71 = v176;
        if ( *((_QWORD *)&v177 + 1) < v69 )
        {
          v176 = (void *)qvector_reserve(&v176, v176, v69, 1);
          v71 = v176;
        }
        *(_QWORD *)&v177 = v69;
        v71[v70] = v157;
        *((_BYTE *)v176 + v70 + 1) = 0;
LABEL_111:
        if ( (unsigned int)v175 <= 0x1F )
        {
          LODWORD(v175) = 46;
          strcpy(s, ".");
        }
        v72 = strlen(s);
        v73 = v177;
        v74 = v72;
        v75 = v72;
        if ( (_QWORD)v177 )
        {
          v73 = v177 - 1;
          v75 = v72 + v177 - 1;
        }
        v76 = v176;
        v77 = v75 + 1;
        if ( *((_QWORD *)&v177 + 1) < v75 + 1 )
        {
          v161 = v75;
          v159 = v75 + 1;
          v176 = (void *)qvector_reserve(&v176, v176, v77, 1);
          v75 = v161;
          v76 = v176;
          v77 = v159;
        }
        *(_QWORD *)&v177 = v77;
        v76[v75] = 0;
        v78 = (char *)v176 + v73;
        v79 = 1;
        memmove(v78, s, v74);
        if ( v64 > 1 )
        {
          do
          {
            v80 = v177;
            v81 = 2;
            if ( (_QWORD)v177 )
            {
              v81 = v177 + 1;
              v80 = v177 - 1;
            }
            v82 = v176;
            if ( *((_QWORD *)&v177 + 1) < v81 )
            {
              v176 = (void *)qvector_reserve(&v176, v176, v81, 1);
              v82 = v176;
            }
            *(_QWORD *)&v177 = v81;
            ++v79;
            v82[v80] = 32;
            *((_BYTE *)v176 + v80 + 1) = 0;
          }
          while ( v64 != v79 );
        }
        if ( v157 != 1 )
        {
          v89 = v177;
          v90 = 2;
          if ( (_QWORD)v177 )
          {
            v90 = v177 + 1;
            v89 = v177 - 1;
          }
          v91 = v176;
          if ( *((_QWORD *)&v177 + 1) < v90 )
          {
            v176 = (void *)qvector_reserve(&v176, v176, v90, 1);
            v91 = v176;
          }
          *(_QWORD *)&v177 = v90;
          v92 = 2;
          v91[v89] = 2;
          *((_BYTE *)v176 + v89 + 1) = 0;
          v93 = v177;
          if ( (_QWORD)v177 )
          {
            v92 = v177 + 1;
            v93 = v177 - 1;
          }
          v94 = v176;
          if ( *((_QWORD *)&v177 + 1) < v92 )
          {
            v176 = (void *)qvector_reserve(&v176, v176, v92, 1);
            v94 = v176;
          }
          *(_QWORD *)&v177 = v92;
          v94[v93] = v157;
          *((_BYTE *)v176 + v93 + 1) = 0;
        }
      }
      else if ( v64 )
      {
        for ( j = 0; j != v64; ++j )
        {
          v98 = v177;
          v99 = 2;
          if ( (_QWORD)v177 )
          {
            v99 = v177 + 1;
            v98 = v177 - 1;
          }
          v100 = v176;
          if ( *((_QWORD *)&v177 + 1) < v99 )
          {
            v176 = (void *)qvector_reserve(&v176, v176, v99, 1);
            v100 = v176;
          }
          *(_QWORD *)&v177 = v99;
          v100[v98] = 46;
          *((_BYTE *)v176 + v98 + 1) = 0;
        }
      }
    }
    v62 = v184;
    if ( v61 == 2 )
    {
      LODWORD(v175) = 63;
      v101 = v184;
      strcpy(s, "?");
      do
      {
        if ( v101 >= v183 && v185 <= 0 )
          break;
        sub_8B7B20(&v181, 0);
        v101 = v184;
      }
      while ( v184 == v62 );
    }
    else
    {
      LODWORD(v175) = 32;
      strcpy(s, " ");
      v63 = v184;
      do
      {
        if ( v63 >= v183 && v185 <= 0 )
          break;
        sub_8B7B20(&v181, 0);
        v63 = v184;
      }
      while ( v184 == v62 );
    }
    v64 = 0;
    goto LABEL_99;
  }
  v17 = (unsigned int)v160;
  v18 = (int)(a5 * v160);
  v19 = *(_QWORD *)(a2 + 24) + v18;
  if ( __CFADD__(*(_QWORD *)(a2 + 24), v18) )
  {
    if ( v162 <= 0 )
      return v190 - __readfsqword(0x28u);
    v138 = 0;
    while ( 1 )
    {
      v142 = *(__int64 (__fastcall **)(_QWORD *, char))(*a3 + 96LL);
      if ( v142 != sub_35CB90 )
      {
        ((void (__fastcall *)(_QWORD *, __int64, unsigned __int64, __int64, __int64, __int64))v142)(
          a3,
          32,
          v15,
          v17,
          v14,
          v16);
        goto LABEL_251;
      }
      v141 = a3[4];
      if ( v141 )
      {
        v15 = v141 + 1;
        v139 = a3[4];
        v140 = a3[3];
        --v141;
        if ( a3[5] < v15 )
          goto LABEL_255;
      }
      else
      {
        v140 = a3[3];
        v139 = 1;
        v15 = 2;
        if ( a3[5] < 2u )
        {
LABEL_255:
          destc = (void *)v15;
          v143 = qvector_reserve(a3 + 3, v140, v15, 1);
          v15 = (unsigned __int64)destc;
          a3[3] = v143;
          v140 = v143;
        }
      }
      a3[4] = v15;
      *(_BYTE *)(v140 + v141) = 32;
      *(_BYTE *)(a3[3] + v139) = 0;
LABEL_251:
      if ( v162 == ++v138 )
        return v190 - __readfsqword(0x28u);
    }
  }
  src = v12 == 1 && (_DWORD)v16 == 0;
  if ( src || (unsigned int)(v12 - 2) <= 1 )
  {
    v172 = 12;
LABEL_9:
    v20 = v19 + v160;
    v163 = v19;
    dest = (void *)(v20 - 1);
    if ( (unsigned __int64)dest < v19 )
      return v190 - __readfsqword(0x28u);
    v21 = v19;
    if ( !(unsigned __int8)sub_631C90(*a1, 3, 32) )
      v21 = (unsigned __int64)dest;
    v171 = v11;
    v173 = v163;
    while ( 1 )
    {
      v23 = sub_3BE900(a1, v21, 4);
      if ( !a6 )
      {
        v38 = nbits(v171);
        v39 = v38 + 14;
        v40 = v38 + 7;
        if ( v40 >= 0 )
          v39 = v40;
        v41 = v39 >> 3;
        v164 = v41;
        v42 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64 *, _QWORD))(*a4 + 32))(a4, v21, &v181, 0);
        if ( v42 != 1 )
        {
          if ( v42 == 2 )
            goto LABEL_53;
          if ( !v42 )
            sub_35CD40((__int64)a3, (__int64)"%0*llX", 2 * v41, v181);
LABEL_51:
          if ( a7 == 1 )
            goto LABEL_31;
          goto LABEL_30;
        }
LABEL_54:
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 40LL))(a3, 32, (unsigned int)(2 * v164));
        goto LABEL_51;
      }
      if ( !src )
      {
        if ( v172 == *a6 )
          goto LABEL_23;
        LOBYTE(v24) = v172;
        if ( *a6 != 1 )
          goto LABEL_19;
        goto LABEL_20;
      }
      v49 = v23 & 0x600;
      if ( v49 == 1536 )
        break;
      v165 = a3;
      v24 = v49;
      not_tail = v21;
      do
      {
        if ( v49 == 1024 )
        {
          a3 = v165;
          v51 = v24;
          LOBYTE(v24) = 15;
          goto LABEL_73;
        }
        if ( v49 != 512 )
        {
          v51 = v24;
          a3 = v165;
          LODWORD(v24) = v49 == 0 ? 36 : 18;
          goto LABEL_73;
        }
        not_tail = prev_not_tail(not_tail);
        v49 = get_flags_ex(not_tail, 4) & 0x600;
      }
      while ( v49 != 1536 );
      v51 = v24;
      a3 = v165;
      LOBYTE(v24) = 14;
LABEL_73:
      if ( v160 != 1 )
        goto LABEL_74;
      if ( v51 != 512 )
        goto LABEL_125;
      v52 = *a6;
      if ( (_BYTE)v24 != *a6 )
        goto LABEL_75;
LABEL_23:
      if ( a7 == 1 )
      {
        v43 = nbits(v171);
        v44 = v43 + 14;
        v45 = v43 + 7;
        if ( v45 >= 0 )
          v44 = v45;
        v46 = v44 >> 3;
        v164 = v46;
        v47 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64 *, _QWORD))(*a4 + 32))(a4, v21, &v181, 0);
        if ( v47 != 1 )
        {
          if ( v47 != 2 )
          {
            if ( !v47 )
              sub_35CD40((__int64)a3, (__int64)"%0*llX", 2 * v46, v181);
            goto LABEL_31;
          }
LABEL_53:
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 40LL))(a3, 63, (unsigned int)(2 * v164));
          goto LABEL_51;
        }
        goto LABEL_54;
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 64LL))(a3, a7);
      v26 = nbits(v171);
      v27 = v26 + 14;
      v28 = v26 + 7;
      if ( v28 >= 0 )
        v27 = v28;
      v29 = v27 >> 3;
      v164 = v29;
      v30 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64 *, _QWORD))(*a4 + 32))(a4, v21, &v181, 0);
      switch ( v30 )
      {
        case 1:
          goto LABEL_54;
        case 2:
          goto LABEL_53;
        case 0:
          sub_35CD40((__int64)a3, (__int64)"%0*llX", 2 * v29, v181);
          break;
      }
LABEL_30:
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, a7);
LABEL_31:
      if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
        v22 = dest == (void *)v21++;
      else
        v22 = v173 == v21--;
      if ( v22 )
      {
        if ( v160 == 1 && a6 && (v155 - 1 == a5 || (sub_3BE900(a1, v20, 4) & 0x600) != 0x200) && *a6 != 1 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, *a6);
          *a6 = 1;
        }
        return v190 - __readfsqword(0x28u);
      }
    }
    LOBYTE(v24) = 14;
    if ( v160 == 1 )
    {
LABEL_125:
      v52 = *a6;
      if ( *a6 == (_BYTE)v24 )
      {
        (*(void (__fastcall **)(_QWORD *))(*a3 + 72LL))(a3);
        *a6 = v24;
        v25 = (unsigned __int8)v24;
        goto LABEL_22;
      }
LABEL_75:
      if ( v52 == 1 )
      {
        *a6 = v24;
        v25 = (unsigned __int8)v24;
LABEL_22:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a3 + 64LL))(a3, v25);
        goto LABEL_23;
      }
LABEL_19:
      (*(void (__fastcall **)(_QWORD *))(*a3 + 72LL))(a3);
LABEL_20:
      *a6 = v24;
      if ( (_BYTE)v24 == 1 )
        goto LABEL_23;
      v25 = (unsigned __int8)v24;
      goto LABEL_22;
    }
LABEL_74:
    v52 = *a6;
    if ( *a6 != (_BYTE)v24 )
      goto LABEL_75;
    goto LABEL_23;
  }
  if ( v12 == 4 )
  {
    destb = (void *)(*(_QWORD *)(a2 + 24) + v18);
    if ( v160 == 4 )
    {
      v119 = sub_3BEEF0(a1, v19);
      v84 = (unsigned __int64)destb;
      v85 = v119;
    }
    else
    {
      v83 = sub_3BEF70(a1, v19);
      v84 = (unsigned __int64)destb;
      v85 = v83;
    }
    v86 = *a4;
    BYTE4(v182) = 1;
    v181 = 16;
    LODWORD(v182) = 5;
    v87 = *(__int64 (**)())(v86 + 152);
    if ( v87 != sub_422C10 )
    {
      v168 = v84;
      ((void (__fastcall *)(__int64 *, __int64 *))v87)(a4, &v181);
      v84 = v168;
    }
    v167 = v84;
    deref_color = get_deref_color(v85);
    v19 = v167;
    v172 = deref_color;
    goto LABEL_9;
  }
  if ( (unsigned __int64)v160 > 0xC )
  {
    if ( !under_debugger )
      interr(40168);
    goto LABEL_261;
  }
  desta = (void *)(*(_QWORD *)(a2 + 24) + v18);
  v169 = v16;
  v156 = *a1;
  v31 = nbits(v19);
  v32 = (__int64)desta;
  v33 = v31 / 8;
  v34 = __CFADD__(desta, v160 / v33);
  v35 = (__int64)desta + v160 / v33;
  if ( v34 )
    goto LABEL_44;
  v180[0] = v188;
  sub_359970((__int64)&v181, v156, (__int64)desta, v35, 0);
  v181 = (__int64)off_2B282D0;
  v186 = a4;
  do
  {
    if ( v184 >= v183 && v185 <= 0 || v180[0] >= (unsigned __int64)&v188[v160] || !(unsigned __int8)is_mapped(v184) )
    {
      v102 = v12 == 1;
      v103 = v169;
      if ( !v12 )
      {
        v117 = 19;
        if ( *(_QWORD *)(*a1 + 1048) != v160 )
          v117 = *(char *)(*a1 + (v160 >> 2) + 1056);
        if ( (unsigned int)cpu2ieee(v187, v188, (unsigned int)v160) != 1 )
        {
          if ( a6 )
          {
            v118 = *a6;
            if ( *a6 != 18 )
            {
              if ( v118 != 1 )
                (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, v118);
              *a6 = 18;
              (*(void (__fastcall **)(_QWORD *, __int64))(*a3 + 64LL))(a3, 18);
            }
          }
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 40LL))(a3, 63, (unsigned int)v162);
          return v190 - __readfsqword(0x28u);
        }
        if ( v160 == 4 )
          v123 = v162 - 4;
        else
          v123 = v162 + (v160 == 8) - 6;
        realtoasc(s, 67, v187, (v123 << 8) | (v117 << 16) | 0x13u);
        if ( a6 )
        {
          v124 = *a6;
          if ( *a6 != 12 )
          {
            if ( v124 != 1 )
              (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, v124);
            *a6 = 12;
            (*(void (__fastcall **)(_QWORD *, __int64))(*a3 + 64LL))(a3, 12);
          }
        }
LABEL_182:
        v109 = strlen(s);
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 40LL))(a3, 32, (unsigned int)(v162 - v109));
        (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(*a3 + 56LL))(a3, s, 0);
        return v190 - __readfsqword(0x28u);
      }
      if ( a6 )
      {
        v104 = *a6;
        if ( *a6 != 12 )
        {
          if ( v104 != 1 )
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, v104);
            v103 = v169;
            v102 = v12 == 1;
          }
          *a6 = 12;
          v152 = v103;
          v148 = v102;
          (*(void (__fastcall **)(_QWORD *, __int64))(*a3 + 64LL))(a3, 12);
          v103 = v152;
          v102 = v148;
        }
      }
      v153 = v103;
      v149 = v102;
      v105 = getinf_flag(3, 32);
      v106 = v149;
      v107 = v153;
      if ( v105 )
      {
        memrev(v188, v160);
        v107 = v153;
        v106 = v149;
      }
      v181 = 0;
      if ( (unsigned __int64)v160 <= 8 )
      {
        v150 = v107;
        v154 = v106;
        memcpy(&v181, v188, v160);
        if ( v150 == 1 && v154 && v181 )
        {
          v108 = 43;
          if ( (v181 & (1LL << (8 * (unsigned __int8)v160 - 1))) != 0 )
            v108 = 45;
          s[0] = v108;
          num2str_uint64(&s[1]);
        }
        else
        {
          num2str_uint64(s);
        }
        goto LABEL_182;
      }
      if ( !under_debugger )
        interr(40166);
LABEL_261:
      BUG();
    }
  }
  while ( (unsigned __int8)sub_8B7B20(&v181, v180) );
  v32 = (__int64)desta;
LABEL_44:
  v36 = *(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a3 + 40LL);
  v37 = sub_3BD540((__int64)a1, v32);
  v36(a3, v37 == 0 ? 32 : 63, (unsigned int)v162);
  return v190 - __readfsqword(0x28u);
}
