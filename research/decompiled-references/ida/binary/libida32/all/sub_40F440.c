unsigned __int64 __fastcall sub_40F440(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        int a5,
        unsigned __int8 *a6,
        unsigned __int8 a7)
{
  unsigned int v11; // r13d
  int v12; // r14d
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  bool v20; // al
  __int16 v21; // ax
  __int64 v22; // r13
  __int64 v23; // rsi
  int v24; // eax
  int v25; // r13d
  int v26; // eax
  int v27; // r13d
  int v28; // eax
  __int64 v29; // r13
  int v30; // eax
  unsigned int v31; // r9d
  int v32; // eax
  bool v33; // cf
  int v34; // eax
  void (__fastcall *v35)(_QWORD *, _QWORD, _QWORD); // rbp
  char v36; // al
  int v37; // eax
  int v38; // r13d
  int v39; // eax
  int v40; // r13d
  int v41; // eax
  int v42; // eax
  int v43; // r13d
  int v44; // eax
  int v45; // r13d
  int v46; // eax
  const char *v47; // rsi
  __int64 v48; // rax
  unsigned int not_tail; // ebx
  __int64 v50; // rcx
  unsigned __int8 v51; // si
  unsigned int v52; // r12d
  __int64 v53; // rax
  const char *v54; // rdx
  unsigned int v55; // r14d
  __int64 v56; // rsi
  int v57; // eax
  unsigned int v58; // r12d
  unsigned int v59; // eax
  unsigned __int64 v60; // r12
  char v61; // al
  __int64 v62; // r14
  unsigned __int64 v63; // r13
  _BYTE *v64; // rsi
  unsigned __int64 v65; // r15
  __int64 v66; // r14
  _BYTE *v67; // rsi
  size_t v68; // rax
  __int64 v69; // r15
  size_t v70; // r13
  size_t v71; // r10
  _BYTE *v72; // rsi
  size_t v73; // rdx
  char *v74; // rdi
  __int64 v75; // r15
  __int64 v76; // r14
  unsigned __int64 v77; // r13
  _BYTE *v78; // rsi
  __int64 v79; // rax
  int v80; // r9d
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 (*v83)(); // rax
  char deref_color; // al
  __int64 v85; // r12
  unsigned __int64 v86; // r14
  _BYTE *v87; // rsi
  unsigned __int64 v88; // r14
  __int64 v89; // r12
  _BYTE *v90; // rsi
  __int64 v91; // r15
  int v92; // eax
  __int64 j; // r13
  __int64 v94; // r14
  unsigned __int64 v95; // r15
  _BYTE *v96; // rsi
  unsigned int v97; // eax
  unsigned int v98; // r12d
  __int64 v99; // r14
  int v100; // ecx
  int v101; // r8d
  int v102; // r9d
  int v103; // eax
  unsigned __int64 max_strlit_length; // rax
  void *v105; // rdi
  int v106; // r10d
  unsigned __int8 v107; // al
  char v108; // al
  int v109; // r10d
  char v110; // dl
  int v111; // eax
  int v112; // ebp
  unsigned __int8 v113; // al
  unsigned int v114; // eax
  __int64 v115; // rbp
  unsigned __int64 v116; // r12
  _BYTE *v117; // rsi
  int v118; // eax
  unsigned __int8 v119; // al
  __int64 v120; // rax
  __int64 (*v121)(); // rax
  const char *v122; // rdx
  char i; // al
  int v124; // eax
  __int64 v125; // rbp
  __int64 v126; // r15
  unsigned __int64 v127; // r14
  char *v128; // rbp
  size_t v129; // rax
  size_t v130; // r15
  size_t v131; // r13
  size_t v132; // rdx
  int v133; // r12d
  __int64 v134; // r15
  __int64 v135; // rsi
  __int64 v136; // rbp
  __int64 (__fastcall *v137)(_QWORD *, char); // rax
  __int64 v138; // rax
  int v139; // [rsp+0h] [rbp-1C8h]
  int dest; // [rsp+8h] [rbp-1C0h]
  unsigned int desta; // [rsp+8h] [rbp-1C0h]
  int destb; // [rsp+8h] [rbp-1C0h]
  int destc; // [rsp+8h] [rbp-1C0h]
  void *destd; // [rsp+8h] [rbp-1C0h]
  size_t n; // [rsp+10h] [rbp-1B8h]
  int v147; // [rsp+18h] [rbp-1B0h]
  int v148; // [rsp+18h] [rbp-1B0h]
  int v149; // [rsp+18h] [rbp-1B0h]
  int v150; // [rsp+20h] [rbp-1A8h]
  int v151; // [rsp+20h] [rbp-1A8h]
  int v153; // [rsp+28h] [rbp-1A0h]
  int v154[2]; // [rsp+28h] [rbp-1A0h]
  int v155; // [rsp+30h] [rbp-198h]
  int v156[2]; // [rsp+30h] [rbp-198h]
  int v157; // [rsp+38h] [rbp-190h]
  int v158; // [rsp+38h] [rbp-190h]
  int v159; // [rsp+38h] [rbp-190h]
  int v160[2]; // [rsp+38h] [rbp-190h]
  unsigned int v161; // [rsp+38h] [rbp-190h]
  int v162; // [rsp+38h] [rbp-190h]
  int v163; // [rsp+38h] [rbp-190h]
  int src; // [rsp+40h] [rbp-188h]
  void *v165; // [rsp+48h] [rbp-180h]
  bool v166; // [rsp+48h] [rbp-180h]
  unsigned int v167; // [rsp+4Ch] [rbp-17Ch]
  __int64 v168; // [rsp+50h] [rbp-178h]
  char v169; // [rsp+53h] [rbp-175h]
  int v170; // [rsp+58h] [rbp-170h]
  int v171; // [rsp+58h] [rbp-170h]
  int v172; // [rsp+60h] [rbp-168h]
  int v173; // [rsp+68h] [rbp-160h] BYREF
  unsigned int v174; // [rsp+6Ch] [rbp-15Ch] BYREF
  void *v175; // [rsp+70h] [rbp-158h] BYREF
  int v176[4]; // [rsp+78h] [rbp-150h]
  int v177; // [rsp+88h] [rbp-140h]
  void *ptr; // [rsp+90h] [rbp-138h] BYREF
  int v179[4]; // [rsp+98h] [rbp-130h]
  int v180; // [rsp+A8h] [rbp-120h]
  char *v181; // [rsp+B0h] [rbp-118h] BYREF
  int v182; // [rsp+B8h] [rbp-110h]
  int v183; // [rsp+C0h] [rbp-108h]
  int v184; // [rsp+C8h] [rbp-100h]
  __int64 v185; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v186; // [rsp+D8h] [rbp-F0h]
  unsigned int v187; // [rsp+ECh] [rbp-DCh]
  unsigned int v188; // [rsp+F8h] [rbp-D0h]
  int v189; // [rsp+FCh] [rbp-CCh]
  __int64 *v190; // [rsp+110h] [rbp-B8h]
  _BYTE v191[20]; // [rsp+120h] [rbp-A8h] BYREF
  char v192[12]; // [rsp+134h] [rbp-94h] BYREF
  char s[72]; // [rsp+140h] [rbp-88h] BYREF
  unsigned __int64 v194; // [rsp+188h] [rbp-40h]

  v194 = __readfsqword(0x28u);
  v150 = (*(__int64 (__fastcall **)(__int64 *))(*a4 + 80))(a4);
  if ( !v150 )
    return v194 - __readfsqword(0x28u);
  v11 = *(_DWORD *)(a2 + 16);
  if ( !sub_3B8910((__int64)a1, v11) )
    v11 = sub_3B87D0((__int64)a1, v11);
  v155 = (*(__int64 (__fastcall **)(__int64 *))(*a4 + 88))(a4);
  v157 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a4 + 96))(a4, v11);
  v12 = (*(__int64 (__fastcall **)(__int64 *))(*a4 + 104))(a4);
  v13 = (*(__int64 (__fastcall **)(__int64 *))(*a4 + 112))(a4);
  v16 = (unsigned int)a5;
  if ( v150 <= a5 )
  {
    v175 = nullptr;
    *(_OWORD *)v176 = 0;
    v175 = (void *)qvector_reserve(&v175, 0, 32, 1);
    if ( (unsigned int)(v12 - 2) <= 2 )
    {
      v173 = 0;
      if ( *(_DWORD *)(*a1 + 1328) >= v155
        && (unsigned __int8)sub_3C4B80(a1, &v173, *(_DWORD *)(a2 + 16), v155)
        && sub_3B8910((__int64)a1, (unsigned int)v173) )
      {
        if ( v12 == 4 )
        {
          v120 = *a4;
          BYTE4(v186) = 1;
          v185 = 16;
          LODWORD(v186) = 5;
          v121 = *(__int64 (**)())(v120 + 152);
          if ( v121 != sub_40F3A0 )
            ((void (__fastcall *)(__int64 *, __int64 *))v121)(a4, &v185);
          generate_deref_chain(a3, (unsigned int)v173, &v185, 1);
        }
        else
        {
          v98 = v173;
          if ( v12 == 2 )
          {
            sub_4BBA40(a1, &v175, (unsigned int)v173, 0);
          }
          else
          {
            ptr = nullptr;
            *(_OWORD *)v179 = 0;
            v99 = *a1;
            (*(void (__fastcall **)(__int64 *, void **))(*a4 + 40))(a4, &ptr);
            if ( *(_QWORD *)v179 <= 1u )
              v103 = 0;
            else
              v103 = add_encoding((int)ptr);
            max_strlit_length = get_max_strlit_length(
                                  v98,
                                  v103 << 24,
                                  3,
                                  v100,
                                  v101,
                                  v102,
                                  v139,
                                  dest,
                                  (int)&v175,
                                  (int)a1,
                                  v150,
                                  a5,
                                  v155,
                                  v157,
                                  src,
                                  v165,
                                  v168,
                                  v170,
                                  v172,
                                  v173,
                                  (int)v175,
                                  v176[0],
                                  v176[2],
                                  v177,
                                  (int)ptr,
                                  v179[0],
                                  v179[2],
                                  v180,
                                  (int)v181,
                                  v182,
                                  v183,
                                  v184,
                                  v185);
            if ( max_strlit_length > 0x800 )
              LODWORD(max_strlit_length) = 2048;
            if ( v98 < v98 + (unsigned int)max_strlit_length )
            {
              sub_3565B0((__int64)&v185, v99, v98, v98 + max_strlit_length, 0);
              v190 = a4;
              v122 = haystack;
              v185 = (__int64)off_2AFE310;
              if ( *(_QWORD *)v179 )
                v122 = (const char *)ptr;
              sub_894230(&v181, &v185, v122, 0, 0);
              while ( 1 )
              {
                for ( i = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v181 + 16LL))(v181);
                      ;
                      i = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v181 + 16LL))(v181) )
                {
                  if ( i )
                    goto LABEL_169;
                  v124 = sub_894330(&v181, s, &v174);
                  if ( v124 == 1 )
                    goto LABEL_169;
                  v125 = *(_QWORD *)v176;
                  if ( !v124 )
                    break;
                  if ( *(_QWORD *)v176 )
                  {
                    v126 = *(_QWORD *)v176 + 2LL;
                    v127 = *(_QWORD *)v176 + 3LL;
                    v125 = *(_QWORD *)v176 - 1LL;
                  }
                  else
                  {
                    v127 = 4;
                    v126 = 3;
                  }
                  if ( *(_QWORD *)&v176[2] < v127 )
                    v175 = (void *)qvector_reserve(n, v175, v127, 1);
                  *(_QWORD *)v176 = v127;
                  *((_BYTE *)v175 + v126) = 0;
                  v128 = (char *)v175 + v125;
                  *(_WORD *)v128 = -16401;
                  v128[2] = -67;
                }
                v129 = strlen(s);
                v130 = v129;
                v131 = v129;
                if ( v125 )
                {
                  --v125;
                  v131 = v129 + v125;
                }
                v132 = v131 + 1;
                if ( *(_QWORD *)&v176[2] < v131 + 1 )
                {
                  v175 = (void *)qvector_reserve(n, v175, v132, 1);
                  v132 = v131 + 1;
                }
                *(_QWORD *)v176 = v132;
                *((_BYTE *)v175 + v131) = 0;
                memmove((char *)v175 + v125, s, v130);
              }
            }
LABEL_169:
            v105 = ptr;
            if ( ptr )
              goto LABEL_170;
          }
        }
      }
      goto LABEL_56;
    }
    v52 = *(_DWORD *)(a2 + 16);
    if ( v52 == -1 )
      goto LABEL_56;
    v161 = v52 + v155 * v150;
    if ( v161 )
    {
      if ( v52 >= v52 + v155 * v150 )
        goto LABEL_56;
    }
    else
    {
      v161 = -1;
    }
    v53 = *a4;
    ptr = nullptr;
    *(_OWORD *)v179 = 0;
    (*(void (__fastcall **)(__int64 *, void **))(v53 + 40))(a4, &ptr);
    sub_3565B0((__int64)&v185, *a1, v52, v161, 0);
    v190 = a4;
    v54 = haystack;
    v185 = (__int64)off_2AFE310;
    if ( *(_QWORD *)v179 )
      v54 = (const char *)ptr;
    sub_894230(&v181, &v185, v54, 0, 0);
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v181 + 16LL))(v181) )
        goto LABEL_171;
      v55 = v188;
      v174 = -1;
      v56 = v188;
      if ( v189 > 0 )
        v56 = v188 - 1;
      v57 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, int *))(*a4 + 32))(a4, v56, 0, &v173);
      if ( v57 )
        break;
      v91 = v186;
      v92 = sub_894330(&v181, s, &v174);
      v60 = v186 - v91;
      if ( v92 == 1 )
      {
        for ( ; v55 < v161; *((_BYTE *)v175 + v115 + 1) = 0 )
        {
          v115 = *(_QWORD *)v176;
          v116 = 2;
          if ( *(_QWORD *)v176 )
          {
            v116 = *(_QWORD *)v176 + 1LL;
            v115 = *(_QWORD *)v176 - 1LL;
          }
          v117 = v175;
          if ( *(_QWORD *)&v176[2] < v116 )
          {
            v175 = (void *)qvector_reserve(&v175, v175, v116, 1);
            v117 = v175;
          }
          *(_QWORD *)v176 = v116;
          ++v55;
          v117[v115] = 46;
        }
LABEL_171:
        v105 = ptr;
        if ( ptr )
        {
LABEL_170:
          *(_QWORD *)v179 = 0;
          qfree(v105);
        }
LABEL_56:
        v47 = haystack;
        if ( *(_QWORD *)v176 )
          v47 = (const char *)v175;
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a3 + 56LL))(a3, v47, 0);
        if ( v175 )
        {
          *(_QWORD *)v176 = 0;
          qfree(v175);
        }
        return v194 - __readfsqword(0x28u);
      }
      if ( !v92
        && (unsigned __int8)is_cp_graphical(v174)
        && (v174 <= 0x7F || (unsigned __int8)(((unsigned int)sub_8930A0(v174) >> 16) - 12) > 2u) )
      {
LABEL_92:
        v61 = sub_79B3A0(*(_QWORD *)(*a1 + 1480) + 2312LL, *a1, v55, 4432);
        if ( (_BYTE)v173 )
        {
          v151 = 9;
        }
        else
        {
          if ( !v61 )
          {
            v151 = 1;
            goto LABEL_104;
          }
          v151 = 13;
        }
        v62 = *(_QWORD *)v176;
        v63 = 2;
        if ( *(_QWORD *)v176 )
        {
          v63 = *(_QWORD *)v176 + 1LL;
          v62 = *(_QWORD *)v176 - 1LL;
        }
        v64 = v175;
        if ( *(_QWORD *)&v176[2] < v63 )
        {
          v175 = (void *)qvector_reserve(&v175, v175, v63, 1);
          v64 = v175;
        }
        *(_QWORD *)v176 = v63;
        v65 = 2;
        v64[v62] = 1;
        *((_BYTE *)v175 + v62 + 1) = 0;
        v66 = *(_QWORD *)v176;
        if ( *(_QWORD *)v176 )
        {
          v65 = *(_QWORD *)v176 + 1LL;
          v66 = *(_QWORD *)v176 - 1LL;
        }
        v67 = v175;
        if ( *(_QWORD *)&v176[2] < v65 )
        {
          v175 = (void *)qvector_reserve(&v175, v175, v65, 1);
          v67 = v175;
        }
        *(_QWORD *)v176 = v65;
        v67[v66] = v151;
        *((_BYTE *)v175 + v66 + 1) = 0;
LABEL_104:
        if ( v174 <= 0x1F )
        {
          v174 = 46;
          strcpy(s, ".");
        }
        v68 = strlen(s);
        v69 = *(_QWORD *)v176;
        v70 = v68;
        v71 = v68;
        if ( *(_QWORD *)v176 )
        {
          v69 = *(_QWORD *)v176 - 1LL;
          v71 = v68 + *(_QWORD *)v176 - 1LL;
        }
        v72 = v175;
        v73 = v71 + 1;
        if ( *(_QWORD *)&v176[2] < v71 + 1 )
        {
          *(_QWORD *)v156 = v71;
          *(_QWORD *)v154 = v71 + 1;
          v175 = (void *)qvector_reserve(&v175, v175, v73, 1);
          v71 = *(_QWORD *)v156;
          v72 = v175;
          v73 = *(_QWORD *)v154;
        }
        *(_QWORD *)v176 = v73;
        v72[v71] = 0;
        v74 = (char *)v175 + v69;
        v75 = 1;
        memmove(v74, s, v70);
        if ( v60 > 1 )
        {
          do
          {
            v76 = *(_QWORD *)v176;
            v77 = 2;
            if ( *(_QWORD *)v176 )
            {
              v77 = *(_QWORD *)v176 + 1LL;
              v76 = *(_QWORD *)v176 - 1LL;
            }
            v78 = v175;
            if ( *(_QWORD *)&v176[2] < v77 )
            {
              v175 = (void *)qvector_reserve(&v175, v175, v77, 1);
              v78 = v175;
            }
            *(_QWORD *)v176 = v77;
            ++v75;
            v78[v76] = 32;
            *((_BYTE *)v175 + v76 + 1) = 0;
          }
          while ( v60 != v75 );
        }
        if ( v151 != 1 )
        {
          v85 = *(_QWORD *)v176;
          v86 = 2;
          if ( *(_QWORD *)v176 )
          {
            v86 = *(_QWORD *)v176 + 1LL;
            v85 = *(_QWORD *)v176 - 1LL;
          }
          v87 = v175;
          if ( *(_QWORD *)&v176[2] < v86 )
          {
            v175 = (void *)qvector_reserve(&v175, v175, v86, 1);
            v87 = v175;
          }
          *(_QWORD *)v176 = v86;
          v88 = 2;
          v87[v85] = 2;
          *((_BYTE *)v175 + v85 + 1) = 0;
          v89 = *(_QWORD *)v176;
          if ( *(_QWORD *)v176 )
          {
            v88 = *(_QWORD *)v176 + 1LL;
            v89 = *(_QWORD *)v176 - 1LL;
          }
          v90 = v175;
          if ( *(_QWORD *)&v176[2] < v88 )
          {
            v175 = (void *)qvector_reserve(&v175, v175, v88, 1);
            v90 = v175;
          }
          *(_QWORD *)v176 = v88;
          v90[v89] = v151;
          *((_BYTE *)v175 + v89 + 1) = 0;
        }
      }
      else if ( v60 )
      {
        for ( j = 0; j != v60; ++j )
        {
          v94 = *(_QWORD *)v176;
          v95 = 2;
          if ( *(_QWORD *)v176 )
          {
            v95 = *(_QWORD *)v176 + 1LL;
            v94 = *(_QWORD *)v176 - 1LL;
          }
          v96 = v175;
          if ( *(_QWORD *)&v176[2] < v95 )
          {
            v175 = (void *)qvector_reserve(&v175, v175, v95, 1);
            v96 = v175;
          }
          *(_QWORD *)v176 = v95;
          v96[v94] = 46;
          *((_BYTE *)v175 + v94 + 1) = 0;
        }
      }
    }
    v58 = v188;
    if ( v57 == 2 )
    {
      v174 = 63;
      v97 = v188;
      strcpy(s, "?");
      do
      {
        if ( v97 >= v187 && v189 <= 0 )
          break;
        sub_894160(&v185, 0);
        v97 = v188;
      }
      while ( v188 == v58 );
    }
    else
    {
      v174 = 32;
      strcpy(s, " ");
      v59 = v188;
      do
      {
        if ( v59 >= v187 && v189 <= 0 )
          break;
        sub_894160(&v185, 0);
        v59 = v188;
      }
      while ( v188 == v58 );
    }
    v60 = 0;
    goto LABEL_92;
  }
  v17 = (unsigned int)(*(_DWORD *)(a2 + 16) + a5 * v155);
  if ( __CFADD__(*(_DWORD *)(a2 + 16), a5 * v155) )
  {
    if ( v157 <= 0 )
      return v194 - __readfsqword(0x28u);
    v133 = 0;
    while ( 1 )
    {
      v137 = *(__int64 (__fastcall **)(_QWORD *, char))(*a3 + 96LL);
      if ( v137 != sub_3598B0 )
      {
        ((void (__fastcall *)(_QWORD *, __int64, unsigned __int64, __int64, __int64, __int64))v137)(
          a3,
          32,
          v14,
          v16,
          v15,
          v17);
        goto LABEL_251;
      }
      v136 = a3[4];
      if ( v136 )
      {
        v14 = v136 + 1;
        v134 = a3[4];
        v135 = a3[3];
        --v136;
        if ( a3[5] < v14 )
          goto LABEL_255;
      }
      else
      {
        v135 = a3[3];
        v134 = 1;
        v14 = 2;
        if ( a3[5] < 2u )
        {
LABEL_255:
          destd = (void *)v14;
          v138 = qvector_reserve(a3 + 3, v135, v14, 1);
          v14 = (unsigned __int64)destd;
          a3[3] = v138;
          v135 = v138;
        }
      }
      a3[4] = v14;
      *(_BYTE *)(v135 + v136) = 32;
      *(_BYTE *)(a3[3] + v134) = 0;
LABEL_251:
      if ( v157 == ++v133 )
        return v194 - __readfsqword(0x28u);
    }
  }
  v166 = v12 == 1 && v13 == 0;
  if ( v166 || (unsigned int)(v12 - 2) <= 1 )
  {
    v169 = 12;
LABEL_9:
    v158 = v17;
    v18 = v155 + v17;
    desta = v155 + v17 - 1;
    if ( desta < (unsigned int)v17 )
      return v194 - __readfsqword(0x28u);
    v19 = v17;
    if ( !(unsigned __int8)sub_615160(*a1, 3, 32) )
      v19 = desta;
    v167 = v11;
    v171 = v158;
    while ( 1 )
    {
      v21 = sub_3B9AA0((__int64)a1, v19, 4);
      if ( !a6 )
      {
        v37 = nbits(v167);
        v38 = v37 + 14;
        v39 = v37 + 7;
        if ( v39 >= 0 )
          v38 = v39;
        v40 = v38 >> 3;
        v159 = v40;
        v41 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(*a4 + 32))(a4, v19, &v185, 0);
        if ( v41 != 1 )
        {
          if ( v41 == 2 )
            goto LABEL_46;
          if ( !v41 )
            sub_359A50((__int64)a3, (__int64)"%0*llX", 2 * v40, v185);
LABEL_44:
          if ( a7 == 1 )
            goto LABEL_31;
          goto LABEL_30;
        }
LABEL_47:
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 40LL))(a3, 32, (unsigned int)(2 * v159));
        goto LABEL_44;
      }
      if ( !v166 )
      {
        if ( v169 == *a6 )
          goto LABEL_23;
        LOBYTE(v22) = v169;
        if ( *a6 != 1 )
          goto LABEL_19;
        goto LABEL_20;
      }
      v48 = v21 & 0x600;
      if ( v48 == 1536 )
        break;
      *(_QWORD *)v160 = a3;
      v22 = v48;
      not_tail = v19;
      do
      {
        if ( v48 == 1024 )
        {
          a3 = *(_QWORD **)v160;
          v50 = v22;
          LOBYTE(v22) = 15;
          goto LABEL_66;
        }
        if ( v48 != 512 )
        {
          v50 = v22;
          a3 = *(_QWORD **)v160;
          LODWORD(v22) = v48 == 0 ? 36 : 18;
          goto LABEL_66;
        }
        not_tail = prev_not_tail(not_tail);
        v48 = get_flags_ex(not_tail, 4) & 0x600;
      }
      while ( v48 != 1536 );
      v50 = v22;
      a3 = *(_QWORD **)v160;
      LOBYTE(v22) = 14;
LABEL_66:
      if ( v155 != 1 )
        goto LABEL_67;
      if ( v50 != 512 )
        goto LABEL_118;
      v51 = *a6;
      if ( (_BYTE)v22 != *a6 )
        goto LABEL_68;
LABEL_23:
      if ( a7 == 1 )
      {
        v42 = nbits(v167);
        v43 = v42 + 14;
        v44 = v42 + 7;
        if ( v44 >= 0 )
          v43 = v44;
        v45 = v43 >> 3;
        v159 = v45;
        v46 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(*a4 + 32))(a4, v19, &v185, 0);
        if ( v46 != 1 )
        {
          if ( v46 != 2 )
          {
            if ( !v46 )
              sub_359A50((__int64)a3, (__int64)"%0*llX", 2 * v45, v185);
            goto LABEL_31;
          }
LABEL_46:
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 40LL))(a3, 63, (unsigned int)(2 * v159));
          goto LABEL_44;
        }
        goto LABEL_47;
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 64LL))(a3, a7);
      v24 = nbits(v167);
      v25 = v24 + 14;
      v26 = v24 + 7;
      if ( v26 >= 0 )
        v25 = v26;
      v27 = v25 >> 3;
      v159 = v27;
      v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(*a4 + 32))(a4, v19, &v185, 0);
      switch ( v28 )
      {
        case 1:
          goto LABEL_47;
        case 2:
          goto LABEL_46;
        case 0:
          sub_359A50((__int64)a3, (__int64)"%0*llX", 2 * v27, v185);
          break;
      }
LABEL_30:
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, a7);
LABEL_31:
      if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
        v20 = desta == v19++;
      else
        v20 = v171 == v19--;
      if ( v20 )
      {
        if ( v155 == 1 && a6 && (v150 - 1 == a5 || (sub_3B9AA0((__int64)a1, v18, 4) & 0x600) != 0x200) && *a6 != 1 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, *a6);
          *a6 = 1;
        }
        return v194 - __readfsqword(0x28u);
      }
    }
    LOBYTE(v22) = 14;
    if ( v155 == 1 )
    {
LABEL_118:
      v51 = *a6;
      if ( *a6 == (_BYTE)v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*a3 + 72LL))(a3);
        *a6 = v22;
        v23 = (unsigned __int8)v22;
        goto LABEL_22;
      }
LABEL_68:
      if ( v51 == 1 )
      {
        *a6 = v22;
        v23 = (unsigned __int8)v22;
LABEL_22:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a3 + 64LL))(a3, v23);
        goto LABEL_23;
      }
LABEL_19:
      (*(void (__fastcall **)(_QWORD *))(*a3 + 72LL))(a3);
LABEL_20:
      *a6 = v22;
      if ( (_BYTE)v22 == 1 )
        goto LABEL_23;
      v23 = (unsigned __int8)v22;
      goto LABEL_22;
    }
LABEL_67:
    v51 = *a6;
    if ( *a6 != (_BYTE)v22 )
      goto LABEL_68;
    goto LABEL_23;
  }
  if ( v12 == 4 )
  {
    destc = *(_DWORD *)(a2 + 16) + a5 * v155;
    if ( v155 == 4 )
    {
      v114 = sub_3BA060(a1, v17);
      v80 = destc;
      v81 = v114;
    }
    else
    {
      v79 = sub_3BA0E0(a1, v17);
      v80 = destc;
      v81 = v79;
    }
    v82 = *a4;
    BYTE4(v186) = 1;
    v185 = 16;
    LODWORD(v186) = 5;
    v83 = *(__int64 (**)())(v82 + 152);
    if ( v83 != sub_40F3A0 )
    {
      v163 = v80;
      ((void (__fastcall *)(__int64 *, __int64 *))v83)(a4, &v185);
      v80 = v163;
    }
    v162 = v80;
    deref_color = get_deref_color(v81, &v185);
    LODWORD(v17) = v162;
    v169 = deref_color;
    goto LABEL_9;
  }
  if ( (unsigned __int64)v155 > 0xC )
  {
    if ( !under_debugger )
      interr(40168);
    goto LABEL_261;
  }
  destb = *(_DWORD *)(a2 + 16) + a5 * v155;
  v153 = v13;
  v29 = *a1;
  v30 = nbits((unsigned int)v17);
  v31 = destb;
  v32 = v155 / (v30 / 8);
  v33 = __CFADD__(destb, v32);
  v34 = destb + v32;
  if ( v33 )
    goto LABEL_37;
  v181 = v192;
  sub_3565B0((__int64)&v185, v29, destb, v34, 0);
  v185 = (__int64)off_2AFE310;
  v190 = a4;
  do
  {
    if ( v188 >= v187 && v189 <= 0 || v181 >= &v192[v155] || !(unsigned __int8)is_mapped(v188) )
    {
      v106 = v153;
      if ( !v12 )
      {
        v112 = 19;
        if ( v155 != *(_QWORD *)(*a1 + 880) )
          v112 = *(char *)(*a1 + (v155 >> 2) + 888);
        if ( (unsigned int)cpu2ieee(v191, v192, (unsigned int)v155) != 1 )
        {
          if ( a6 )
          {
            v113 = *a6;
            if ( *a6 != 18 )
            {
              if ( v113 != 1 )
                (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, v113);
              *a6 = 18;
              (*(void (__fastcall **)(_QWORD *, __int64))(*a3 + 64LL))(a3, 18);
            }
          }
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 40LL))(a3, 63, (unsigned int)v157);
          return v194 - __readfsqword(0x28u);
        }
        if ( v155 == 4 )
          v118 = v157 - 4;
        else
          v118 = v157 + (v155 == 8) - 6;
        realtoasc(s, 67, v191, (v118 << 8) | (v112 << 16) | 0x13u);
        if ( a6 )
        {
          v119 = *a6;
          if ( *a6 != 12 )
          {
            if ( v119 != 1 )
              (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, v119);
            *a6 = 12;
            (*(void (__fastcall **)(_QWORD *, __int64))(*a3 + 64LL))(a3, 12);
          }
        }
LABEL_195:
        v111 = strlen(s);
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 40LL))(a3, 32, (unsigned int)(v157 - v111));
        (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(*a3 + 56LL))(a3, s, 0);
        return v194 - __readfsqword(0x28u);
      }
      if ( a6 )
      {
        v107 = *a6;
        if ( *a6 != 12 )
        {
          if ( v107 != 1 )
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3 + 72LL))(a3, v107);
            v106 = v153;
          }
          *a6 = 12;
          v147 = v106;
          (*(void (__fastcall **)(_QWORD *, __int64))(*a3 + 64LL))(a3, 12);
          v106 = v147;
        }
      }
      v148 = v106;
      v108 = getinf_flag(3, 32);
      v109 = v148;
      if ( v108 )
      {
        memrev(v192, v155);
        v109 = v148;
      }
      v185 = 0;
      if ( (unsigned __int64)v155 <= 8 )
      {
        v149 = v109;
        memcpy(&v185, v192, v155);
        if ( v149 == 1 && v12 == 1 && v185 )
        {
          v110 = 43;
          if ( (v185 & (1LL << (8 * (unsigned __int8)v155 - 1))) != 0 )
            v110 = 45;
          s[0] = v110;
          num2str_uint64(&s[1]);
        }
        else
        {
          num2str_uint64(s);
        }
        goto LABEL_195;
      }
      if ( !under_debugger )
        interr(40166);
LABEL_261:
      BUG();
    }
  }
  while ( (unsigned __int8)sub_894160(&v185, &v181) );
  v31 = destb;
LABEL_37:
  v35 = *(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a3 + 40LL);
  v36 = sub_3B8910((__int64)a1, v31);
  v35(a3, v36 == 0 ? 32 : 63, (unsigned int)v157);
  return v194 - __readfsqword(0x28u);
}

