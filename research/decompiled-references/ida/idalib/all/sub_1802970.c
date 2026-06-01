__int64 __fastcall sub_1802970(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        double a7,
        double a8,
        __int64 a9)
{
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r14
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // r14
  char v24; // al
  __int64 v25; // rax
  char v26; // dl
  __int64 v27; // r14
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  char v44; // r13
  unsigned __int64 v45; // rsi
  __int64 v46; // rcx
  bool v47; // di
  char *v48; // rsi
  int v49; // edx
  char *v50; // rax
  __int64 v51; // rdx
  unsigned __int8 v52; // dl
  __int64 v53; // rax
  char v54; // dl
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  char v58; // r14
  __int64 v59; // r14
  unsigned __int8 v60; // cl
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int8 v63; // cl
  bool v64; // cf
  int v65; // ecx
  int v66; // eax
  _QWORD *v67; // rdi
  _BOOL8 v68; // r9
  int v69; // ecx
  __int64 v70; // r8
  unsigned int *v71; // rdi
  size_t v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  int v78; // r8d
  int v79; // r9d
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r14
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  char v86; // dl
  int v87; // r8d
  int v88; // r9d
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdi
  __int16 v94; // cx
  unsigned __int8 v95; // al
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  void *v100; // r13
  char *v101; // r15
  __int64 v102; // rax
  _QWORD *v103; // rdi
  __int64 v104; // rdx
  int v105; // edi
  char v106; // al
  __int64 v107; // r13
  unsigned __int8 v108; // al
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  unsigned __int64 v114; // r14
  unsigned __int64 v115; // rax
  __int64 v116; // [rsp-8h] [rbp-200h]
  int v117[2]; // [rsp+0h] [rbp-1F8h]
  unsigned __int8 v118; // [rsp+0h] [rbp-1F8h]
  int *v119; // [rsp+8h] [rbp-1F0h]
  unsigned __int64 v120; // [rsp+8h] [rbp-1F0h]
  __int16 v121; // [rsp+8h] [rbp-1F0h]
  int v122; // [rsp+10h] [rbp-1E8h]
  void **p_s2; // [rsp+18h] [rbp-1E0h]
  int *v124; // [rsp+20h] [rbp-1D8h]
  int v125; // [rsp+28h] [rbp-1D0h]
  int v126; // [rsp+28h] [rbp-1D0h]
  int v127; // [rsp+30h] [rbp-1C8h]
  __int64 v128; // [rsp+30h] [rbp-1C8h]
  int v129; // [rsp+38h] [rbp-1C0h]
  int v130; // [rsp+3Ch] [rbp-1BCh] BYREF
  int v131; // [rsp+40h] [rbp-1B8h]
  int v132[2]; // [rsp+44h] [rbp-1B4h] BYREF
  char v133; // [rsp+4Ch] [rbp-1ACh]
  int v134[2]; // [rsp+50h] [rbp-1A8h]
  int v135; // [rsp+58h] [rbp-1A0h]
  __int64 v136; // [rsp+60h] [rbp-198h] BYREF
  int v137; // [rsp+68h] [rbp-190h]
  int v138[2]; // [rsp+70h] [rbp-188h] BYREF
  unsigned __int64 v139; // [rsp+78h] [rbp-180h]
  int v140; // [rsp+80h] [rbp-178h]
  int v141; // [rsp+88h] [rbp-170h]
  void *s2; // [rsp+90h] [rbp-168h] BYREF
  unsigned __int64 v143; // [rsp+98h] [rbp-160h]
  int v144; // [rsp+A0h] [rbp-158h] BYREF
  int v145; // [rsp+A8h] [rbp-150h]
  int v146[2]; // [rsp+B0h] [rbp-148h] BYREF
  int v147; // [rsp+B8h] [rbp-140h]
  __int64 *v148; // [rsp+C0h] [rbp-138h]
  int v149; // [rsp+C8h] [rbp-130h]
  int v150; // [rsp+D0h] [rbp-128h]
  int v151; // [rsp+D8h] [rbp-120h]
  int v152; // [rsp+E0h] [rbp-118h]
  int v153; // [rsp+E8h] [rbp-110h]
  char v154; // [rsp+ECh] [rbp-10Ch]
  int v155; // [rsp+F0h] [rbp-108h]
  int v156; // [rsp+F8h] [rbp-100h]
  int v157; // [rsp+100h] [rbp-F8h]
  int v158; // [rsp+108h] [rbp-F0h]
  int v159[2]; // [rsp+110h] [rbp-E8h] BYREF
  void *src; // [rsp+118h] [rbp-E0h] BYREF
  int v161[2]; // [rsp+120h] [rbp-D8h]
  int v162; // [rsp+128h] [rbp-D0h] BYREF
  char v163; // [rsp+130h] [rbp-C8h]
  int v164; // [rsp+138h] [rbp-C0h]
  int v165; // [rsp+140h] [rbp-B8h]
  int v166; // [rsp+148h] [rbp-B0h]
  void *v167; // [rsp+150h] [rbp-A8h]
  int v168; // [rsp+158h] [rbp-A0h]
  char v169; // [rsp+160h] [rbp-98h]
  void *v170[2]; // [rsp+168h] [rbp-90h]
  int v171[2]; // [rsp+178h] [rbp-80h]
  int v172[2]; // [rsp+180h] [rbp-78h]
  __m128i v173; // [rsp+188h] [rbp-70h] BYREF
  __int64 v174; // [rsp+198h] [rbp-60h] BYREF
  int v175[4]; // [rsp+1A0h] [rbp-58h]
  int v176[2]; // [rsp+1B0h] [rbp-48h]
  int v177; // [rsp+1B8h] [rbp-40h]
  __int64 v178; // [rsp+1C0h] [rbp-38h]
  int v179; // [rsp+1C8h] [rbp-30h]
  char v180; // [rsp+1D0h] [rbp-28h]

  v13 = *a4;
  v130 = a5;
  *(_QWORD *)v134 = v13;
  *(_QWORD *)v117 = a6;
  v135 = a5;
  sub_B85890(&v136, v13);
  v14 = sub_15F1670((__int64)a1);
  v15 = *a4;
  v16 = v14;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 && *((_QWORD *)a3 + 1) )
  {
    if ( (unsigned __int8)sub_183B910(a1, v15, a2, a3) )
      return 0;
    v15 = *a4;
  }
  v173.m128i_i64[0] = v15;
  *(_OWORD *)v170 = 0;
  src = &v162;
  *(_QWORD *)v161 = 0x800000000LL;
  *(_QWORD *)v159 = 0;
  v173.m128i_i32[2] = v130;
  *(_QWORD *)v171 = 0;
  *(_QWORD *)v172 = a1;
  sub_B85890(&v174, v15);
  *(_OWORD *)v175 = 0;
  *(_QWORD *)v176 = 0x101010000LL;
  sub_1A395A0(v159);
  sub_1A5D3E0((_DWORD)a1, (unsigned int)v159, a2, (_DWORD)a3, 0, v16 == 0, 0);
  v19 = *a3;
  v20 = v116;
  if ( (_DWORD)v19 )
  {
    v37 = a3[1];
    if ( v37 )
    {
      if ( !*((_QWORD *)a3 + 1) )
        goto LABEL_30;
      v18 = v161[0] | v37;
      if ( v161[0] | v37 )
        goto LABEL_10;
      goto LABEL_26;
    }
    if ( v161[0] || *((_QWORD *)a3 + 1) || (*(_BYTE *)a1[29] & 0x20) == 0 )
    {
LABEL_27:
      v22 = *((_QWORD *)a3 + 1);
      goto LABEL_8;
    }
  }
  else
  {
    v21 = *((_QWORD *)a3 + 1);
    v18 = (unsigned int)v161[0];
    v22 = v21;
    if ( v161[0] )
      goto LABEL_8;
    if ( v21 )
      goto LABEL_10;
    if ( (*(_BYTE *)a1[29] & 0x20) == 0 )
      goto LABEL_39;
  }
  if ( sub_18010C0(a1, *a4, v130, 0.0, a8) )
  {
LABEL_22:
    v17 = 3;
    goto LABEL_31;
  }
  if ( *a3 )
  {
    v37 = a3[1];
LABEL_26:
    if ( v37 )
      goto LABEL_10;
    goto LABEL_27;
  }
  v21 = *((_QWORD *)a3 + 1);
LABEL_39:
  v22 = v21;
LABEL_8:
  if ( !v16 || v22 )
    goto LABEL_10;
  v47 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v172 + 232LL) + 1LL) & 8) != 0 )
    v47 = *(_WORD *)(*(_QWORD *)v117 + 16LL) == 47;
  v48 = (char *)src + 8 * (unsigned int)v161[0];
  if ( src == v48 )
    goto LABEL_64;
  v18 = *(_BYTE *)((*(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
  v49 = (unsigned __int8)v18;
  v20 = (unsigned int)(unsigned __int8)v18 - 58;
  if ( (unsigned int)v20 > 9 && (_BYTE)v18 != 20 )
  {
    v50 = (char *)src + 8;
    if ( v47 )
    {
      do
      {
        if ( (unsigned int)(v49 - 68) <= 6 )
          break;
        if ( v48 == v50 )
          goto LABEL_64;
        v55 = *(_QWORD *)v50;
        v50 += 8;
        v18 = *(_BYTE *)((v55 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
        v49 = (unsigned __int8)v18;
        if ( (unsigned int)(unsigned __int8)v18 - 58 <= 9 )
          break;
      }
      while ( (_BYTE)v18 != 20 );
      goto LABEL_10;
    }
    while ( v48 != v50 )
    {
      v51 = *(_QWORD *)v50;
      v50 += 8;
      v52 = *(_BYTE *)((v51 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
      v18 = (unsigned int)v52 - 58;
      if ( (unsigned int)v18 <= 9 || v52 == 20 )
        goto LABEL_10;
    }
LABEL_64:
    v53 = sub_19D6A80(a1[92], v159, a2, *a4, v20);
    if ( !v54 )
    {
      if ( v53 )
      {
LABEL_66:
        v17 = 4;
        goto LABEL_31;
      }
      v18 = (unsigned int)v161[0];
      if ( !v161[0] )
        sub_1A4ED10(a1, v159);
      goto LABEL_10;
    }
LABEL_30:
    v17 = 1;
    goto LABEL_31;
  }
LABEL_10:
  HIBYTE(v129) = 0;
  v119 = v146;
  p_s2 = &s2;
  v124 = &v144;
  while ( 1 )
  {
    if ( v159[0] == 1 )
    {
      v17 = 6;
      goto LABEL_31;
    }
    if ( v159[0] == 5 )
      break;
    if ( v159[0] )
    {
      v23 = 0;
      goto LABEL_15;
    }
    v56 = a1[29];
    v57 = *a3;
    v58 = *(_BYTE *)(v56 + 1);
    if ( !(_DWORD)v57 || !a3[1] )
    {
      if ( !*((_QWORD *)a3 + 1) )
      {
        v18 = *(_QWORD *)v117;
        if ( *(_WORD *)(*(_QWORD *)v117 + 16LL) == 22 )
        {
          if ( (v58 & 8) != 0 )
          {
            v17 = 5;
            goto LABEL_31;
          }
          if ( (*(_WORD *)v56 & 0x808) == 0 && (*(_BYTE *)(v56 + 12) & 1) == 0 && (*(_BYTE *)(v56 + 47) & 0x20) == 0 )
          {
            if ( sub_17FF390((__int64)a1, (unsigned int)v130, *a4, a2, v20, v19) )
              goto LABEL_66;
            v58 = *(_BYTE *)(a1[29] + 1);
          }
        }
      }
      if ( v58 < 0 )
      {
        if ( !*a3 || (v19 = a3[1], !(_DWORD)v19) )
        {
          if ( !*((_QWORD *)a3 + 1) && *(_WORD *)(*(_QWORD *)v117 + 16LL) == 47 )
          {
            v67 = (_QWORD *)a1[31];
            v17 = 11;
            sub_A81B40(v67, *(__int64 *)v134, v57, v18, v20, v19);
            goto LABEL_31;
          }
        }
      }
    }
    v23 = HIBYTE(v129) | ((v58 & 8) != 0);
    if ( !v23 && (unsigned __int8)sub_17D4C20((__int64)a1, (__int64)v159, a2, (int)a3, a4, v130) )
      goto LABEL_15;
    HIBYTE(v129) = (a9 != 0) & (HIBYTE(v129) ^ 1);
    if ( !HIBYTE(v129) )
      goto LABEL_126;
    sub_1A6BD60((_DWORD)v119, (_DWORD)a1, (unsigned int)&v173, v175[2], a2, (_DWORD)a3, a9, 1, 0, 0, 0, 1);
    if ( !*(_QWORD *)v146 )
    {
      sub_17A1D90(v119);
      goto LABEL_126;
    }
    if ( !v149 || (v59 = *v148) == 0 )
    {
      v62 = a1[29];
      v59 = 0;
      v65 = 4276;
      v66 = 5351;
      goto LABEL_94;
    }
    v60 = *(_BYTE *)(v59 + 28) & 0x7F;
    if ( (unsigned int)v60 - 53 > 1 && ((v60 + 52) & 0x7Fu) > 1 )
    {
      v62 = a1[29];
      if ( (*(_BYTE *)(v62 + 1) & 8) == 0 )
        goto LABEL_85;
      v61 = *v148;
      if ( *(_WORD *)(*(_QWORD *)v117 + 16LL) != 47 )
        goto LABEL_84;
    }
    else
    {
      v61 = sub_B72ED0(*v148);
      v62 = a1[29];
      if ( (*(_BYTE *)(v62 + 1) & 8) == 0 || *(_WORD *)(*(_QWORD *)v117 + 16LL) != 47 )
      {
        if ( v61 )
        {
LABEL_84:
          v60 = *(_BYTE *)(v61 + 28) & 0x7F;
LABEL_85:
          v63 = (v60 + 108) & 0x7F;
          if ( v63 <= 0x38u )
          {
            v64 = ((0x100FFC000000001uLL >> v63) & 1) != 0;
            v65 = v64 ? 5373 : 4276;
            v66 = v64 ? 5377 : 5351;
            goto LABEL_94;
          }
        }
LABEL_140:
        v65 = 4276;
        v66 = 5351;
        goto LABEL_94;
      }
      if ( !v61 )
        goto LABEL_140;
    }
    v60 = *(_BYTE *)(v61 + 28) & 0x7F;
    if ( (unsigned int)v60 - 68 > 6 )
      goto LABEL_85;
    v65 = 4278;
    v66 = 4284;
LABEL_94:
    if ( *a3 && a3[1] || *((_QWORD *)a3 + 1) )
    {
      v126 = v65;
      sub_1A39F10(p_s2, v119, v62);
      v68 = 0;
      v69 = v126;
      v70 = (__int64)(a1 + 1);
      if ( v154 )
      {
        v71 = *(unsigned int **)(*a4 + 16);
        v72 = *v71;
        if ( v72 == v143 )
        {
          v68 = 1;
          if ( *v71 )
          {
            v89 = memcmp(v71 + 4, s2, v72);
            v70 = (__int64)(a1 + 1);
            v69 = v126;
            v68 = v89 == 0;
          }
        }
      }
      v128 = v68;
      sub_168B9B0((__int64)v138, v70, v69);
      sub_AE9DF0((unsigned __int8 **)v138, *a4, 5u);
      v76 = sub_16A2930((__int64)a1, (__int64)a3, 0, v73, v74, v75);
      sub_AE9DF0((unsigned __int8 **)v138, v76, 0xCu);
      sub_AE9DF0((unsigned __int8 **)v138, v128, 2u);
      v77 = *(_QWORD *)a3;
      v133 = 1;
      *(_QWORD *)v132 = v77;
      sub_AEC610((__int64 *)v138, (__int64 *)v132);
      sub_1A60AF0(
        (int)a1,
        (int)v119,
        (int)v138,
        1,
        v78,
        v79,
        v117[0],
        (int)v119,
        v122,
        (int)p_s2,
        (int)v124,
        (int)v138,
        v128,
        v129,
        v131,
        v132[1],
        v134[0],
        v135,
        v136,
        v137,
        v138[0],
        v139,
        v140,
        v141,
        (int)s2,
        v143,
        v144,
        v145,
        v146[0],
        v147,
        (int)v148,
        v149,
        v150,
        v151,
        v152,
        v153,
        v155,
        v156,
        v157,
        v158,
        v159[0],
        (int)src,
        v161[0],
        v162,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168,
        v169,
        (int)v170[0],
        (int)v170[1],
        v171[0],
        v172[0],
        v173.m128i_i32[0],
        v173.m128i_i32[2],
        v174,
        v175[0],
        v175[2],
        v176[0],
        v177,
        v178,
        v179,
        v180);
      if ( *(_QWORD *)v138 && v139 )
        sub_1580C40(v139, *(unsigned __int64 *)v138);
      if ( s2 != v124 )
        operator delete(s2);
    }
    else
    {
      sub_168B9B0((__int64)p_s2, (__int64)(a1 + 1), v66);
      sub_AE9DF0((unsigned __int8 **)p_s2, *a4, 5u);
      sub_1A60AF0(
        (int)a1,
        (int)v119,
        (int)p_s2,
        1,
        v87,
        v88,
        v117[0],
        (int)v119,
        v122,
        (int)p_s2,
        (int)v124,
        v125,
        v127,
        v129,
        v131,
        v132[1],
        v134[0],
        v135,
        v136,
        v137,
        v138[0],
        v139,
        v140,
        v141,
        (int)s2,
        v143,
        v144,
        v145,
        v146[0],
        v147,
        (int)v148,
        v149,
        v150,
        v151,
        v152,
        v153,
        v155,
        v156,
        v157,
        v158,
        v159[0],
        (int)src,
        v161[0],
        v162,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168,
        v169,
        (int)v170[0],
        (int)v170[1],
        v171[0],
        v172[0],
        v173.m128i_i32[0],
        v173.m128i_i32[2],
        v174,
        v175[0],
        v175[2],
        v176[0],
        v177,
        v178,
        v179,
        v180);
      if ( s2 && v143 )
        sub_1580C40(v143, (unsigned __int64)s2);
    }
    v80 = *(_QWORD *)v146;
    v81 = *(_QWORD *)v146 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v146[0] & 7) != 0 )
      v81 = 0;
    *a4 = v81;
    if ( v149 && !*v148 )
    {
      v17 = 2;
      goto LABEL_117;
    }
    v159[0] = 0;
    v161[0] = 0;
    if ( v170[0] )
    {
      sub_1A39780(v170[0]);
      v80 = *(_QWORD *)v146;
    }
    BYTE2(v176[1]) = 0;
    *(_OWORD *)v170 = 0;
    v173.m128i_i64[0] = v80;
    if ( v59 )
    {
      s2 = (void *)(v59 | (*(_BYTE *)(v59 + 29) >> 5) & 3);
      sub_1743080((__int64)&src, (__int64)s2);
      v159[0] = 2;
    }
    else if ( v159[0] != 2 )
    {
      goto LABEL_128;
    }
    v83 = sub_16C47B0(*(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_BYTE *)(v83 + 28) & 0x7F) == 0x32 )
    {
      v84 = *(_QWORD *)(v83 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v83 + 40) & 7) != 0 )
        v84 = 0;
      v85 = sub_19D6A80(a1[92], v159, a2, v84, v82);
      if ( v86 )
      {
        v17 = 1;
LABEL_117:
        sub_17A1D90(v119);
        goto LABEL_31;
      }
      if ( v85 )
      {
        v17 = 4;
        goto LABEL_117;
      }
    }
LABEL_128:
    sub_17A1D90(v119);
  }
  if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
    goto LABEL_30;
  if ( *(_WORD *)(*(_QWORD *)v117 + 16LL) != 47 )
    goto LABEL_30;
  v23 = sub_1CB4170(a1, v159, 1, 0, 0);
  if ( !v23 )
    goto LABEL_30;
  sub_1CB3F20(a1, v159, 1, 1);
  if ( v159[0] == 5 )
    goto LABEL_30;
LABEL_15:
  v24 = *(_BYTE *)(a1[29] + 1);
  if ( (v24 & 8) == 0 )
    goto LABEL_16;
  v39 = *(_QWORD *)v117;
  if ( *(_WORD *)(*(_QWORD *)v117 + 16LL) != 47 )
    goto LABEL_16;
  if ( !v23 )
  {
    if ( !*a3 || (v40 = 0, !a3[1]) )
    {
      v40 = 0;
      if ( !*((_QWORD *)a3 + 1) )
        v40 = (unsigned int)v24 >> 31;
    }
    if ( (unsigned __int8)sub_1CB4170(a1, v159, 1, 0, v40) )
    {
      sub_1CB3F20(a1, v159, 1, 1);
      goto LABEL_48;
    }
LABEL_16:
    v120 = *(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL;
    v25 = sub_16C47B0(v120);
    v26 = *(_BYTE *)(v25 + 28);
    v27 = v25;
    v28 = v26 & 0x7F;
    if ( (v26 & 0x7Fu) - 58 <= 9 )
    {
      sub_18F5260((_DWORD)a1, v27, (unsigned int)&v130, 1, 0, 0, 0, 0, 0);
      sub_19116A0(a1, *(unsigned int *)(v27 + 24), v27, 0);
      v33 = *(_QWORD *)(v27 + 48);
      v34 = *(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL;
      if ( v33 )
        v35 = v33 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v35 = sub_A7AA70(a1[31], v27, v29, v30, v31, v32);
      v36 = v35;
      if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 53 <= 1 )
        v36 = sub_A77600(a1[31], v34, v35);
LABEL_21:
      sub_179C050((__int64)a1, (__int64)a3, v36, v130, 1, 0.0, a8);
      goto LABEL_22;
    }
    switch ( v28 )
    {
      case 0x14u:
LABEL_138:
        sub_18F5260((_DWORD)a1, v27, (unsigned int)&v130, 1, 0, 0, 0, 0, 0);
        if ( *(_WORD *)(*(_QWORD *)v117 + 16LL) == 26 )
        {
LABEL_126:
          v17 = 0;
          *(_WORD *)((char *)v176 + 3) = 0;
        }
        else
        {
          v93 = a1[31];
          v17 = 3;
          sub_A82070(v93, v27, 0, v90, v91, v92);
        }
        goto LABEL_31;
      case 0x4Cu:
        if ( *(_QWORD *)(v27 + 48) )
        {
          v27 = *(_QWORD *)(v27 + 48);
          goto LABEL_138;
        }
        break;
      case 0x49u:
        if ( (*(_BYTE *)(v120 + 28) & 0x7Fu) - 53 > 1 )
        {
          v17 = 12;
          sub_F22AA0((unsigned __int64 *)v146, v27);
        }
        else
        {
          sub_F22B10((unsigned __int64 *)v146, v120);
          v17 = 12;
        }
        goto LABEL_31;
      case 0x39u:
        v105 = (int)a1;
        v17 = 1;
        sub_18F5260(v105, v27, (unsigned int)&v130, 1, 0, 0, 0, 0, 0);
        goto LABEL_31;
      default:
        if ( (unsigned int)v28 - 68 <= 6 && (v26 & 0x7D) != 0x45 )
        {
          v17 = 8;
          sub_F22AA0((unsigned __int64 *)v146, v27);
          goto LABEL_31;
        }
        break;
    }
    v94 = *(_WORD *)(*(_QWORD *)v117 + 16LL);
    if ( v94 == 31 || v94 == 28 )
    {
      v121 = *(_WORD *)(*(_QWORD *)v117 + 16LL);
      v106 = *(_BYTE *)(sub_16C47B0(v27) + 28) & 0x7F;
      if ( ((v106 + 94) & 0x7Fu) <= 5 )
        goto LABEL_180;
      v94 = v121;
      if ( v106 == 71 )
        goto LABEL_180;
    }
    else
    {
      if ( v94 != 5 )
        goto LABEL_156;
LABEL_180:
      if ( (unsigned __int8)sub_17D4C20((__int64)a1, (__int64)v159, a2, (int)a3, a4, v130) )
      {
        if ( v159[0] != 2 )
          goto LABEL_202;
        v107 = *(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL;
        v108 = *(_BYTE *)(v107 + 28) & 0x7F;
        if ( ((v108 + 52) & 0x7Fu) <= 1 || (unsigned int)v108 - 53 <= 1 )
          v107 = sub_B72ED0(*(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(v107 + 28) & 0x7Fu) - 58 > 9 )
        {
LABEL_202:
          sub_18F5260((_DWORD)a1, 0, (unsigned int)&v130, 1, 0, 0, 0, 0, 0);
          BUG();
        }
        sub_18F5260((_DWORD)a1, v107, (unsigned int)&v130, 1, 0, 0, 0, 0, 0);
        v113 = *(_QWORD *)(v107 + 48);
        v114 = *(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL;
        if ( v113 )
          v115 = v113 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v115 = sub_A7AA70(a1[31], v107, v109, v110, v111, v112);
        v36 = v115;
        if ( (*(_BYTE *)(v114 + 28) & 0x7Fu) - 53 <= 1 )
          v36 = sub_A77600(a1[31], v114, v115);
        goto LABEL_21;
      }
      v94 = *(_WORD *)(*(_QWORD *)v117 + 16LL);
    }
LABEL_156:
    v95 = sub_18C19C0(a1, a3, v159, v94 == 22);
    v118 = v95;
    if ( v159[0] != 2 || v95 || sub_17A0250(v27) && (*(_BYTE *)(v27 + 28) & 0x7F) != 0x21 )
    {
      v100 = src;
      *(_WORD *)((char *)v176 + 3) = 0;
      v101 = (char *)src + 8 * (unsigned int)v161[0];
      v102 = sub_15AB9E0((__int64)a3, (_QWORD *)a1[31], v96, v97, v98, v99);
      v103 = (_QWORD *)a1[31];
      v17 = 7;
      sub_C98860(v103, (__int64)v170[1], v102, v104, &v173, v118, v100, (__int64)v101, 0, 0);
    }
    else
    {
      v17 = 4;
    }
    goto LABEL_31;
  }
LABEL_48:
  v41 = 8LL * (unsigned int)v161[0];
  if ( v41 > 8 )
  {
    sub_A81E80((_QWORD *)a1[31], (__int64 *)src, (__int64 *)((char *)src + v41), v39, v20, v19);
  }
  else if ( v161[0] )
  {
    v42 = sub_1CB3DC0(*(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL, 1, 0, v39, v20);
    v43 = a1[31];
    v44 = *(_BYTE *)(v42 + 28) & 0x7F;
    v45 = *(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v45 + 28) & 0x7Fu) - 53 > 1 )
    {
      sub_F22AA0((unsigned __int64 *)v146, v42);
      v46 = *(_QWORD *)v146;
    }
    else
    {
      sub_F22B10((unsigned __int64 *)&s2, v45);
      v46 = (__int64)s2;
    }
    sub_A80CA0(v43, *((_QWORD *)a3 + 1), 0, v46);
    if ( v44 != 71 )
    {
      v17 = (v44 == 69) + 8;
      goto LABEL_31;
    }
  }
  else
  {
    sub_A81B40((_QWORD *)a1[31], *(__int64 *)v134, 0, v39, v20, v19);
  }
  v17 = 10;
  *(_WORD *)((char *)v176 + 3) = 0;
LABEL_31:
  sub_169D230((__int64)v159);
  return v17;
}
