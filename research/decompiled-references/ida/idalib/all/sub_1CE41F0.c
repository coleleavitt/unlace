__int64 __fastcall sub_1CE41F0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __int64 a9,
        int *a10,
        unsigned __int8 a11)
{
  int *v11; // r13
  __int64 v12; // r8
  __int64 v13; // r15
  __m128i *v14; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rax
  char *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rax
  int v30; // eax
  char *v31; // rdi
  char v32; // al
  char v33; // si
  unsigned __int64 v34; // r12
  int v35; // r14d
  __int64 *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  char *v42; // rdi
  unsigned __int64 *v43; // r12
  unsigned __int64 *v44; // r14
  unsigned __int64 v45; // rdi
  __int64 v46; // r9
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // rdx
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rdi
  __int64 v70; // rax
  _QWORD *v71; // rbx
  _QWORD *v72; // r14
  unsigned __int64 v73; // rdi
  unsigned __int8 v74; // dl
  int v75; // eax
  unsigned __int64 v76; // rdi
  unsigned __int8 v77; // dl
  int v78; // eax
  unsigned __int64 v79; // rdi
  unsigned __int8 v80; // dl
  int v81; // eax
  _QWORD *v82; // r13
  unsigned __int64 v83; // rdi
  unsigned __int8 v84; // al
  int v85; // edx
  _QWORD *v86; // rcx
  __int64 *v87; // rcx
  __int64 v88; // rdx
  int v89; // eax
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // r13
  __int64 *v98; // r15
  __int64 v99; // rbp
  __int64 v100; // rbx
  void *v101; // rdi
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r13
  __int64 v108; // rbx
  __int64 *v109; // r15
  __int64 v110; // rbp
  void *v111; // rdi
  _QWORD *v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  unsigned __int64 v116; // r12
  __int64 *v117; // rbp
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  __int64 v124; // r14
  int v126[2]; // [rsp+0h] [rbp-228h]
  int v127[2]; // [rsp+0h] [rbp-228h]
  int v128[2]; // [rsp+0h] [rbp-228h]
  int v129[2]; // [rsp+0h] [rbp-228h]
  int v130[2]; // [rsp+0h] [rbp-228h]
  __int16 v131; // [rsp+10h] [rbp-218h]
  __int64 v132; // [rsp+10h] [rbp-218h]
  __int64 v133; // [rsp+10h] [rbp-218h]
  char v134; // [rsp+18h] [rbp-210h]
  char v135; // [rsp+27h] [rbp-201h]
  char v136; // [rsp+28h] [rbp-200h]
  int v137[2]; // [rsp+28h] [rbp-200h]
  _BOOL8 v138; // [rsp+30h] [rbp-1F8h]
  int v139[2]; // [rsp+30h] [rbp-1F8h]
  int v140[2]; // [rsp+30h] [rbp-1F8h]
  int v141[2]; // [rsp+30h] [rbp-1F8h]
  int v142[2]; // [rsp+30h] [rbp-1F8h]
  unsigned int v143; // [rsp+38h] [rbp-1F0h]
  __int64 *v144; // [rsp+38h] [rbp-1F0h]
  unsigned int v145; // [rsp+38h] [rbp-1F0h]
  unsigned int v146; // [rsp+38h] [rbp-1F0h]
  unsigned int v147; // [rsp+38h] [rbp-1F0h]
  __m128i *v148; // [rsp+40h] [rbp-1E8h]
  int v149[2]; // [rsp+48h] [rbp-1E0h] BYREF
  int v150[2]; // [rsp+58h] [rbp-1D0h] BYREF
  int v151[2]; // [rsp+60h] [rbp-1C8h] BYREF
  int v152; // [rsp+68h] [rbp-1C0h]
  int v153[2]; // [rsp+70h] [rbp-1B8h] BYREF
  int v154[2]; // [rsp+78h] [rbp-1B0h]
  int v155[4]; // [rsp+80h] [rbp-1A8h]
  void *v156[2]; // [rsp+90h] [rbp-198h] BYREF
  __int64 v157; // [rsp+A0h] [rbp-188h] BYREF
  void *v158; // [rsp+B0h] [rbp-178h] BYREF
  void *v159; // [rsp+B8h] [rbp-170h]
  __int64 v160; // [rsp+C0h] [rbp-168h] BYREF
  int v161[2]; // [rsp+140h] [rbp-E8h] BYREF
  _QWORD *v162; // [rsp+148h] [rbp-E0h]
  void *ptr; // [rsp+150h] [rbp-D8h]
  int v164; // [rsp+158h] [rbp-D0h]
  _BYTE v165[32]; // [rsp+160h] [rbp-C8h] BYREF
  void *v166; // [rsp+180h] [rbp-A8h]
  unsigned __int64 *v167; // [rsp+188h] [rbp-A0h]
  void *v168[2]; // [rsp+198h] [rbp-90h]
  char v169; // [rsp+1E6h] [rbp-42h]
  char v170; // [rsp+1E7h] [rbp-41h]

  v11 = a10;
  *(_QWORD *)v149 = a5;
  if ( a10 )
    *a10 = 0;
  v12 = a4->m128i_u32[0];
  if ( (_DWORD)v12 && a4->m128i_i32[1] && !a4->m128i_i64[1] )
    goto LABEL_47;
  v13 = a2;
  *(_BYTE *)(a2 + 167) = 1;
  v14 = a4;
  v16 = *(_QWORD *)v149;
  if ( (*(_QWORD *)v149 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v17 = sub_169D2C0(a1, *(__int64 *)v149, (__int64)a3, (__int64)a4, v12, a6);
    if ( !v17 )
    {
      v47 = *(_QWORD *)(*(_QWORD *)v149 & 0xFFFFFFFFFFFFFFF0LL);
      v131 = (*(unsigned __int8 *)(v47 + 17) >> 2) & 1;
      v48 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)(v48 - 57) <= 1u || (unsigned __int8)(v48 - 35) <= 1u )
        goto LABEL_59;
      goto LABEL_11;
    }
    v32 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v149 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( (unsigned __int8)(v32 - 57) <= 1u || (unsigned __int8)(v32 - 35) <= 1u )
      goto LABEL_59;
  }
  else
  {
    if ( a4->m128i_i32[0] )
    {
      if ( !a4->m128i_i32[1] )
      {
        v17 = (_QWORD *)a4->m128i_i64[1];
        if ( !v17 )
        {
          LOBYTE(v131) = 0;
          goto LABEL_40;
        }
      }
    }
    else
    {
      v17 = (_QWORD *)a4->m128i_i64[1];
      if ( !v17 )
      {
        LOBYTE(v131) = 0;
LABEL_110:
        if ( !a3 )
          goto LABEL_111;
        goto LABEL_43;
      }
    }
    v18 = sub_16A2930(a1, (__int64)a4, (unsigned __int8)a6, (__int64)a4, v12, a6);
    v17 = (_QWORD *)v18;
    if ( !v18 )
    {
      LOBYTE(v131) = sub_169D3A0(a1, (__int64)v14, v19, v20, v21, v22);
      goto LABEL_11;
    }
    if ( (unsigned __int8)sub_169F990(a1, (__int64)v14, v18) )
    {
LABEL_47:
      LODWORD(v14) = 1;
      return (unsigned int)v14;
    }
  }
  sub_1A48440(a1, v13, (__int64)v17, 0);
  LOBYTE(v131) = *(_DWORD *)v13 == 1;
LABEL_11:
  if ( v14->m128i_i32[0] && v14->m128i_i32[1] || v14->m128i_i64[1] )
    goto LABEL_13;
  v16 = *(_QWORD *)v149;
LABEL_40:
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_110;
  if ( *(_DWORD *)(v13 + 16) )
  {
LABEL_13:
    v134 = 1;
    v23 = *(_DWORD *)v13;
    v135 = 0;
    goto LABEL_14;
  }
  if ( a3 )
  {
LABEL_43:
    sub_1A49A10(a1, v13, a3, 0, 0, a6, a7, a8);
    if ( (*(_QWORD *)v149 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_44;
LABEL_111:
    v134 = 1;
    v135 = 0;
    goto LABEL_45;
  }
LABEL_44:
  v134 = 0;
  v135 = 1;
LABEL_45:
  v23 = *(_DWORD *)v13;
  LOBYTE(v131) = (*(_DWORD *)v13 == 1) | v131;
LABEL_14:
  if ( v23 == 5 )
    goto LABEL_65;
  v24 = *(_DWORD *)(v13 + 16);
  if ( a10
    && (!v14->m128i_i32[0] || !v14->m128i_i32[1])
    && !v14->m128i_i64[1]
    && (*(_QWORD *)v149 & 0xFFFFFFFFFFFFFFF0LL) == 0
    && (BYTE4(a9) != 1 || !(_DWORD)a9) )
  {
    if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
    {
LABEL_54:
      if ( !v24 && !(_BYTE)v131 )
      {
LABEL_56:
        v30 = 1;
        if ( (*(_BYTE *)(v13 + 120) & 7) == 0 )
        {
LABEL_58:
          *v11 = v30;
LABEL_59:
          v31 = *(char **)(v13 + 88);
          *(_DWORD *)v13 = 0;
          *(_DWORD *)(v13 + 16) = 0;
          if ( v31 )
            sub_1A39780(v31);
          *(_BYTE *)(v13 + 166) = 0;
          LODWORD(v14) = 0;
          *(_OWORD *)(v13 + 88) = 0;
          return (unsigned int)v14;
        }
LABEL_57:
        v30 = 2;
        goto LABEL_58;
      }
      goto LABEL_18;
    }
    v67 = *(_QWORD **)(v13 + 8);
    v68 = v24;
    v69 = &v67[v68];
    v70 = (v68 * 8) >> 5;
    *(_QWORD *)v137 = v69;
    if ( v70 )
    {
      *(_QWORD *)v139 = v17;
      v148 = v14;
      v71 = *(_QWORD **)(v13 + 8);
      v72 = &v67[4 * v70];
      v143 = *(_DWORD *)(v13 + 16);
      do
      {
        v82 = v71;
        v83 = *v71 & 0xFFFFFFFFFFFFFFF8LL;
        v84 = *(_BYTE *)(v83 + 28) & 0x7F;
        v85 = v84;
        if ( ((v84 + 52) & 0x7Fu) <= 1 || (unsigned int)v84 - 53 <= 1 )
          v85 = *(_BYTE *)(sub_B72ED0(v83) + 28) & 0x7F;
        if ( (unsigned int)(v85 - 34) > 5 )
        {
LABEL_148:
          v86 = v71;
          v17 = *(_QWORD **)v139;
          v24 = v143;
          v11 = a10;
          v14 = v148;
          goto LABEL_149;
        }
        v73 = v71[1] & 0xFFFFFFFFFFFFFFF8LL;
        v74 = *(_BYTE *)(v73 + 28) & 0x7F;
        v75 = v74;
        if ( (unsigned int)v74 - 53 <= 1 || ((v74 + 52) & 0x7Fu) <= 1 )
          v75 = *(_BYTE *)(sub_B72ED0(v73) + 28) & 0x7F;
        if ( (unsigned int)(v75 - 34) > 5 )
        {
          v112 = v71;
          v17 = *(_QWORD **)v139;
          v24 = v143;
          v11 = a10;
          v14 = v148;
          v86 = v112 + 1;
          goto LABEL_149;
        }
        v71 += 2;
        v76 = *v71 & 0xFFFFFFFFFFFFFFF8LL;
        v77 = *(_BYTE *)(v76 + 28) & 0x7F;
        v78 = v77;
        if ( (unsigned int)v77 - 53 <= 1 || ((v77 + 52) & 0x7Fu) <= 1 )
          v78 = *(_BYTE *)(sub_B72ED0(v76) + 28) & 0x7F;
        if ( (unsigned int)(v78 - 34) > 5 )
          goto LABEL_148;
        v71 = v82 + 3;
        v79 = v82[3] & 0xFFFFFFFFFFFFFFF8LL;
        v80 = *(_BYTE *)(v79 + 28) & 0x7F;
        v81 = v80;
        if ( (unsigned int)v80 - 53 <= 1 || ((v80 + 52) & 0x7Fu) <= 1 )
          v81 = *(_BYTE *)(sub_B72ED0(v79) + 28) & 0x7F;
        if ( (unsigned int)(v81 - 34) > 5 )
          goto LABEL_148;
        v71 = v82 + 4;
      }
      while ( v82 + 4 != v72 );
      v67 = v82 + 4;
      v17 = *(_QWORD **)v139;
      v24 = v143;
      v11 = a10;
      v14 = v148;
    }
    v113 = (__int64)(*(_QWORD *)v137 - (_QWORD)v67) >> 3;
    if ( v113 != 2 )
    {
      if ( v113 != 3 )
      {
        if ( v113 != 1 )
          goto LABEL_150;
        goto LABEL_184;
      }
      v146 = v24;
      *(_QWORD *)v141 = v67;
      v120 = sub_16C47B0(*v67 & 0xFFFFFFFFFFFFFFF8LL);
      v86 = *(_QWORD **)v141;
      v24 = v146;
      if ( (*(_BYTE *)(v120 + 28) & 0x7Fu) - 34 > 5 )
        goto LABEL_149;
      v67 = (_QWORD *)(*(_QWORD *)v141 + 8LL);
    }
    v147 = v24;
    *(_QWORD *)v142 = v67;
    v121 = sub_16C47B0(*v67 & 0xFFFFFFFFFFFFFFF8LL);
    v86 = *(_QWORD **)v142;
    v24 = v147;
    if ( (*(_BYTE *)(v121 + 28) & 0x7Fu) - 34 > 5 )
      goto LABEL_149;
    v67 = (_QWORD *)(*(_QWORD *)v142 + 8LL);
LABEL_184:
    v145 = v24;
    *(_QWORD *)v140 = v67;
    v114 = sub_16C47B0(*v67 & 0xFFFFFFFFFFFFFFF8LL);
    v24 = v145;
    if ( (*(_BYTE *)(v114 + 28) & 0x7Fu) - 34 <= 5 )
      goto LABEL_150;
    v86 = *(_QWORD **)v140;
LABEL_149:
    if ( *(_QWORD **)v137 != v86 )
      goto LABEL_54;
LABEL_150:
    if ( v24 )
      goto LABEL_57;
    goto LABEL_56;
  }
LABEL_18:
  if ( v24 )
  {
LABEL_70:
    v33 = v134;
    v34 = **(_QWORD **)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_71;
  }
  if ( (((unsigned __int8)v131 ^ 1) & a11) != 0 )
  {
    v25 = *(_QWORD *)(v13 + 120);
    v26 = *(char **)(v13 + 88);
    *(_DWORD *)v13 = 0;
    *(_DWORD *)(v13 + 16) = 0;
    *(_QWORD *)v150 = v25;
    if ( v26 )
      sub_1A39780(v26);
    a7 = 0.0;
    *(_QWORD *)v154 = 16842752;
    *(_OWORD *)(v13 + 88) = 0;
    *(_OWORD *)v155 = 0;
    v27 = *(unsigned int *)(v13 + 152);
    *(_QWORD *)v153 = off_2C58E38;
    *(_BYTE *)(v13 + 166) = 0;
    sub_1A6BD60(
      v161,
      a1,
      (const __m128i *)(v13 + 120),
      v27,
      (unsigned __int64)a3,
      v14,
      0.0,
      a8,
      (__int64)v153,
      1,
      (unsigned __int64)v17,
      0,
      0,
      1u);
    if ( *(_QWORD *)v161 )
    {
      if ( v164 && *(_QWORD *)ptr )
      {
        v158 = (void *)((*(_BYTE *)(*(_QWORD *)ptr + 29LL) >> 5) & 3 | *(_QWORD *)ptr);
        sub_1743080(v13 + 8, (__int64)v158);
        *(_DWORD *)v13 = 2;
      }
      sub_1CB13F0(v13, 1);
      if ( *(_DWORD *)v13 == 5 )
      {
        v42 = *(char **)(v13 + 88);
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 16) = 0;
        if ( v42 )
          sub_1A39780(v42);
        *(_BYTE *)(v13 + 166) = 0;
        a7 = 0.0;
        *(_OWORD *)(v13 + 88) = 0;
      }
      else if ( *(_DWORD *)(v13 + 16) )
      {
        *(_QWORD *)(v13 + 120) = *(_QWORD *)v161;
        if ( v17 )
        {
          sub_1A39F10(v156, (__int64 *)v161, *(_QWORD *)(a1 + 232));
          if ( v165[28] )
          {
            sub_B86A00((__int64)&v158, (__int64 *)v150);
            v87 = (__int64 *)v158;
            if ( v159 == v156[1] )
            {
              v144 = (__int64 *)v158;
              v102 = sub_9B48C0(v158, v156[0], (size_t)v159);
              v87 = v144;
              v138 = v102 == 0;
            }
            else
            {
              v138 = 0;
            }
            if ( v87 != &v160 )
              operator delete(v87);
          }
          else
          {
            v138 = 0;
          }
          sub_168B9B0((__int64)&v158, a1 + 8, 4278);
          sub_AE9DF0((unsigned __int8 **)&v158, *(__int64 *)v150, 9u);
          sub_AE9DF0((unsigned __int8 **)&v158, (__int64)v17, 0xCu);
          sub_AE9DF0((unsigned __int8 **)&v158, v138, 2u);
          v28 = v14->m128i_i64[0];
          LOBYTE(v152) = 1;
          *(_QWORD *)v151 = v28;
          sub_AEC610((__int64 *)&v158, (__int64 *)v151);
          sub_1A60AF0(a1, (__int64)v161, &v158, 1u);
          if ( v158 && v159 )
            sub_1580C40((unsigned __int64)v159, (unsigned __int64)v158);
          if ( v156[0] != &v157 )
            operator delete(v156[0]);
        }
        else
        {
          sub_168B9B0((__int64)&v158, a1 + 8, 4284);
          sub_AE9DF0((unsigned __int8 **)&v158, *(__int64 *)v150, 9u);
          sub_1A60AF0(a1, (__int64)v161, &v158, 1u);
          if ( v158 && v159 )
            sub_1580C40((unsigned __int64)v159, (unsigned __int64)v158);
        }
        v134 = (v131 ^ 1) & a11;
        v136 = 1;
LABEL_83:
        v43 = v167;
        v44 = (unsigned __int64 *)v166;
        if ( v167 != v166 )
        {
          do
          {
            if ( *v44 )
            {
              v45 = v44[1];
              if ( v45 )
                sub_1580C40(v45, *v44);
            }
            v44 += 3;
          }
          while ( v43 != v44 );
          v44 = (unsigned __int64 *)v166;
        }
        if ( v44 )
          operator delete(v44);
        if ( ptr != v165 )
          free(ptr);
        if ( !*(_DWORD *)(v13 + 16) )
        {
          sub_1CB13F0(v13, v136);
          if ( *(_DWORD *)(v13 + 16) )
            goto LABEL_95;
          goto LABEL_65;
        }
        goto LABEL_70;
      }
    }
    v136 = v134;
    goto LABEL_83;
  }
  v33 = v134;
  v34 = 0;
LABEL_71:
  sub_1CB13F0(v13, v33);
  v35 = *(_DWORD *)(v13 + 16);
  if ( !v35 )
  {
    if ( (_BYTE)v131 )
    {
      *(_DWORD *)v13 = 1;
    }
    else if ( v34 )
    {
      if ( BYTE4(a9) )
      {
        if ( !(_DWORD)a9 )
          goto LABEL_65;
        v36 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v161, v36, *(_DWORD *)(v13 + 128), 0x1406u, 0);
        *(_QWORD *)v151 = *(_QWORD *)(v13 + 120);
        v49 = sub_15894B0((__int64)v161, (__int64 *)v151);
        v156[0] = (void *)v14->m128i_i64[0];
        v35 = a9;
        v38 = sub_1587DB0(v49, (__int64 *)v156);
      }
      else
      {
        v36 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v161, v36, *(_DWORD *)(v13 + 128), 0x1406u, 0);
        *(_QWORD *)v151 = *(_QWORD *)(v13 + 120);
        v37 = sub_15894B0((__int64)v161, (__int64 *)v151);
        v156[0] = (void *)v14->m128i_i64[0];
        v38 = sub_1587DB0(v37, (__int64 *)v156);
      }
      LOBYTE(v150[0]) = BYTE4(a9);
      v39 = sub_1588420(v38, (unsigned __int8 *)v150);
      v40 = v39;
      if ( *(_BYTE *)(v39 + 120) )
      {
        v62 = *(_QWORD *)(v39 + 32);
        if ( v62 )
        {
          v63 = *(unsigned int *)(v62 + 424);
          v64 = *(unsigned int *)(v62 + 428);
          v65 = v63 + 1;
        }
        else
        {
          v88 = *(_QWORD *)(v40 + 40);
          v89 = *(_DWORD *)(v88 + 14976);
          if ( v89 )
          {
            v93 = (unsigned int)(v89 - 1);
            *(_DWORD *)(v88 + 14976) = v93;
            v62 = *(_QWORD *)(v88 + 8 * v93 + 14848);
            v94 = *(unsigned int *)(v62 + 536);
            *(_BYTE *)v62 = 0;
            v95 = *(_QWORD *)(v62 + 528);
            *(_DWORD *)(v62 + 424) = 0;
            v96 = v95 + (v94 << 6);
            *(_QWORD *)v129 = v95;
            if ( v95 != v96 )
            {
              v97 = v62;
              v132 = v13;
              v98 = v36;
              v99 = v40;
              v100 = v96;
              do
              {
                while ( 1 )
                {
                  v100 -= 64;
                  v101 = *(void **)(v100 + 24);
                  if ( v101 == (void *)(v100 + 40) )
                    break;
                  operator delete(v101);
                  if ( *(_QWORD *)v129 == v100 )
                    goto LABEL_166;
                }
              }
              while ( *(_QWORD *)v129 != v100 );
LABEL_166:
              v40 = v99;
              v62 = v97;
              v36 = v98;
              v13 = v132;
            }
            v63 = *(unsigned int *)(v62 + 424);
            v64 = *(unsigned int *)(v62 + 428);
            *(_DWORD *)(v62 + 536) = 0;
            v65 = v63 + 1;
          }
          else
          {
            v62 = operator new(0x3A0u);
            v64 = 8;
            *(_BYTE *)v62 = 0;
            *(_QWORD *)(v62 + 96) = v62 + 112;
            *(_QWORD *)(v62 + 128) = v62 + 144;
            *(_QWORD *)(v62 + 160) = v62 + 176;
            *(_QWORD *)(v62 + 192) = v62 + 208;
            *(_QWORD *)(v62 + 224) = v62 + 240;
            *(_QWORD *)(v62 + 256) = v62 + 272;
            *(_QWORD *)(v62 + 288) = v62 + 304;
            *(_QWORD *)(v62 + 320) = v62 + 336;
            *(_QWORD *)(v62 + 352) = v62 + 368;
            *(_QWORD *)(v62 + 384) = v62 + 400;
            *(_QWORD *)(v62 + 416) = v62 + 432;
            *(_QWORD *)(v62 + 104) = 0;
            *(_BYTE *)(v62 + 112) = 0;
            *(_QWORD *)(v62 + 136) = 0;
            *(_BYTE *)(v62 + 144) = 0;
            *(_QWORD *)(v62 + 168) = 0;
            *(_BYTE *)(v62 + 176) = 0;
            *(_QWORD *)(v62 + 200) = 0;
            *(_BYTE *)(v62 + 208) = 0;
            *(_QWORD *)(v62 + 232) = 0;
            *(_BYTE *)(v62 + 240) = 0;
            *(_QWORD *)(v62 + 264) = 0;
            *(_BYTE *)(v62 + 272) = 0;
            *(_QWORD *)(v62 + 296) = 0;
            *(_BYTE *)(v62 + 304) = 0;
            *(_QWORD *)(v62 + 328) = 0;
            *(_BYTE *)(v62 + 336) = 0;
            *(_QWORD *)(v62 + 360) = 0;
            *(_BYTE *)(v62 + 368) = 0;
            *(_QWORD *)(v62 + 392) = 0;
            *(_BYTE *)(v62 + 400) = 0;
            *(_QWORD *)(v62 + 424) = 0x800000000LL;
            *(_QWORD *)(v62 + 528) = v62 + 544;
            v65 = 1;
            *(_QWORD *)(v62 + 536) = 0x600000000LL;
            v63 = 0;
          }
          *(_QWORD *)(v40 + 32) = v62;
        }
        LODWORD(v158) = v35;
        HIDWORD(v158) = v35;
        LOBYTE(v159) = 1;
        if ( v65 > v64 )
        {
          *(_QWORD *)v128 = v62;
          sub_2237220(v62 + 416, v62 + 432, v65, 12);
          v62 = *(_QWORD *)v128;
          v63 = *(unsigned int *)(*(_QWORD *)v128 + 424LL);
        }
        v66 = *(_QWORD *)(v62 + 416) + 12 * v63;
        *(_QWORD *)v66 = v158;
        *(_DWORD *)(v66 + 8) = (_DWORD)v159;
        ++*(_DWORD *)(v62 + 424);
      }
      else if ( *(_BYTE *)(v39 + 132) )
      {
        v51 = sub_168B9E0((_QWORD *)v39);
        v54 = *(_QWORD *)(v40 + 16);
        if ( v54 )
        {
          *(_QWORD *)v126 = v51;
          v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54);
          v51 = *(_QWORD *)v126;
        }
        *(_QWORD *)v153 = v54;
        v55 = *sub_1587BC0(v51, (__int64 *)v153, v50, v51, v52, v53) + 32LL * *(unsigned int *)(v40 + 128);
        v56 = *(_QWORD *)(v55 + 8);
        v57 = v55;
        if ( v56 )
        {
          v58 = *(unsigned int *)(v56 + 424);
          v59 = *(unsigned int *)(v56 + 428);
          v60 = v58 + 1;
        }
        else
        {
          v90 = *(_QWORD *)(v55 + 16);
          v91 = *(_DWORD *)(v90 + 14976);
          if ( v91 )
          {
            v103 = (unsigned int)(v91 - 1);
            *(_DWORD *)(v90 + 14976) = v103;
            v56 = *(_QWORD *)(v90 + 8 * v103 + 14848);
            v104 = *(unsigned int *)(v56 + 536);
            *(_BYTE *)v56 = 0;
            v105 = *(_QWORD *)(v56 + 528);
            *(_DWORD *)(v56 + 424) = 0;
            v106 = v105 + (v104 << 6);
            *(_QWORD *)v130 = v105;
            if ( v105 != v106 )
            {
              v107 = v56;
              v108 = v106;
              v133 = v13;
              v109 = v36;
              v110 = v57;
              do
              {
                while ( 1 )
                {
                  v108 -= 64;
                  v111 = *(void **)(v108 + 24);
                  if ( v111 == (void *)(v108 + 40) )
                    break;
                  operator delete(v111);
                  if ( *(_QWORD *)v130 == v108 )
                    goto LABEL_175;
                }
              }
              while ( *(_QWORD *)v130 != v108 );
LABEL_175:
              v57 = v110;
              v56 = v107;
              v36 = v109;
              v13 = v133;
            }
            v58 = *(unsigned int *)(v56 + 424);
            v59 = *(unsigned int *)(v56 + 428);
            *(_DWORD *)(v56 + 536) = 0;
            v60 = v58 + 1;
          }
          else
          {
            *(_QWORD *)v127 = v57;
            v92 = operator new(0x3A0u);
            v59 = 8;
            v58 = 0;
            v56 = v92;
            *(_BYTE *)v92 = 0;
            *(_QWORD *)(v92 + 96) = v92 + 112;
            *(_QWORD *)(v92 + 128) = v92 + 144;
            *(_QWORD *)(v92 + 160) = v92 + 176;
            *(_QWORD *)(v92 + 192) = v92 + 208;
            *(_QWORD *)(v92 + 224) = v92 + 240;
            *(_QWORD *)(v92 + 256) = v92 + 272;
            *(_QWORD *)(v92 + 288) = v92 + 304;
            *(_QWORD *)(v92 + 320) = v92 + 336;
            *(_QWORD *)(v92 + 352) = v92 + 368;
            *(_QWORD *)(v92 + 384) = v92 + 400;
            *(_QWORD *)(v92 + 416) = v92 + 432;
            *(_QWORD *)(v92 + 104) = 0;
            *(_BYTE *)(v92 + 112) = 0;
            *(_QWORD *)(v92 + 136) = 0;
            *(_BYTE *)(v92 + 144) = 0;
            *(_QWORD *)(v92 + 168) = 0;
            *(_BYTE *)(v92 + 176) = 0;
            *(_QWORD *)(v92 + 200) = 0;
            *(_BYTE *)(v92 + 208) = 0;
            *(_QWORD *)(v92 + 232) = 0;
            *(_BYTE *)(v92 + 240) = 0;
            *(_QWORD *)(v92 + 264) = 0;
            *(_BYTE *)(v92 + 272) = 0;
            *(_QWORD *)(v92 + 296) = 0;
            *(_BYTE *)(v92 + 304) = 0;
            *(_QWORD *)(v92 + 328) = 0;
            *(_BYTE *)(v92 + 336) = 0;
            *(_QWORD *)(v92 + 360) = 0;
            *(_BYTE *)(v92 + 368) = 0;
            *(_QWORD *)(v92 + 392) = 0;
            *(_BYTE *)(v92 + 400) = 0;
            *(_QWORD *)(v92 + 424) = 0x800000000LL;
            v57 = *(_QWORD *)v127;
            *(_QWORD *)(v92 + 536) = 0x600000000LL;
            *(_QWORD *)(v92 + 528) = v92 + 544;
            v60 = 1;
          }
          *(_QWORD *)(v57 + 8) = v56;
        }
        LODWORD(v158) = v35;
        HIDWORD(v158) = v35;
        LOBYTE(v159) = 1;
        if ( v60 > v59 )
        {
          sub_2237220(v56 + 416, v56 + 432, v60, 12);
          v58 = *(unsigned int *)(v56 + 424);
        }
        v61 = *(_QWORD *)(v56 + 416) + 12 * v58;
        *(_QWORD *)v61 = v158;
        *(_DWORD *)(v61 + 8) = (_DWORD)v159;
        ++*(_DWORD *)(v56 + 424);
      }
      sub_15F7200(v161);
      v41 = sub_16C47B0(v34);
      sub_168B9F0((__int64)v161, v36, *(_DWORD *)(v41 + 24), 0x18FAu, 0);
      v158 = *(void **)(v13 + 120);
      sub_15894B0((__int64)v161, (__int64 *)&v158);
      sub_15F7200(v161);
      goto LABEL_47;
    }
LABEL_65:
    LODWORD(v14) = 0;
    return (unsigned int)v14;
  }
LABEL_95:
  if ( !a3 )
    goto LABEL_65;
  LOBYTE(v14) = v135 | ((*(_QWORD *)v149 & 0xFFFFFFFFFFFFFFF0LL) == 0);
  if ( (_BYTE)v14 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
    goto LABEL_65;
  sub_1CB0230((__int64)v161, a1, *(_QWORD *)(v13 + 120), *(_DWORD *)(v13 + 128), 0);
  v170 = 1;
  sub_1A49A10(a1, (__int64)v161, a3, 0, 0, v46, a7, a8);
  sub_1CB13F0((__int64)v161, 0);
  if ( (_DWORD)ptr )
  {
    if ( v161[0] == 2 && (v115 = sub_16C47B0(*v162 & 0xFFFFFFFFFFFFFFF8LL), (v116 = sub_1CB3DC0(v115, 1, 1)) != 0) )
    {
      if ( *(_BYTE *)(v13 + 164) )
      {
        if ( *(_DWORD *)v13 != 2
          || (v122 = sub_16C47B0(**(_QWORD **)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL),
              v123 = sub_1CB3DC0(v122, 1, 1),
              v124 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v123 + 32LL))(v123),
              v124 != (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v116 + 32LL))(v116)) )
        {
          v117 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)&v158, v117, *(_DWORD *)(v13 + 128), 0x15F9u, 0);
          v156[0] = *(void **)(v13 + 120);
          v118 = sub_15894B0((__int64)&v158, (__int64 *)v156);
          sub_1605D30(v118, (__int64 *)v149);
          sub_15F7200(&v158);
          sub_168B9F0(
            (__int64)&v158,
            v117,
            *(_DWORD *)((**(_QWORD **)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 24),
            0x1683u,
            0);
          sub_1605D30((__int64)&v158, (__int64 *)v149);
          sub_15F7200(&v158);
          v119 = sub_16C47B0(*v162 & 0xFFFFFFFFFFFFFFF8LL);
          sub_168B9F0((__int64)&v158, v117, *(_DWORD *)(v119 + 24), 0x1684u, 0);
          sub_15F7200(&v158);
        }
      }
    }
    else
    {
      v161[0] = 0;
      LODWORD(ptr) = 0;
      if ( v168[0] )
        sub_1A39780((char *)v168[0]);
      v169 = 0;
      *(_OWORD *)v168 = 0;
    }
  }
  sub_169D230((__int64)v161);
  return (unsigned int)v14;
}
