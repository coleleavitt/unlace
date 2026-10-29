unsigned __int64 __fastcall sub_37A500(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __m128i *v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __m128i *v18; // rax
  unsigned __int64 *v19; // rbp
  __int32 v20; // r15d
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // edx
  unsigned int v29; // eax
  __int64 v30; // r15
  unsigned __int64 *v31; // r12
  int v32; // eax
  unsigned __int64 v33; // r13
  __int64 *v34; // r12
  __int64 v35; // rax
  __int64 *v36; // rbx
  __int64 v37; // rdx
  __int64 *v38; // rdi
  __int64 *v39; // rdi
  __int64 v40; // rbx
  __int64 *v41; // rdi
  __int64 *v42; // rdi
  __int64 v43; // rax
  int v45; // eax
  bool v46; // al
  __int64 v47; // rcx
  __int64 v48; // rdi
  _QWORD *v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int32 *v54; // rdx
  __int32 *v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rax
  bool v58; // dl
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  int v63; // r15d
  __int64 v64; // rdx
  int v65; // eax
  char *v66; // rdi
  char *v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 *v70; // rsi
  __int64 v71; // rdx
  int v72; // ecx
  __int64 v73; // rdx
  int v74; // r10d
  int v75; // r10d
  __int64 v76; // r15
  __int64 v77; // rsi
  __int64 v78; // rdx
  _DWORD *v79; // rcx
  _DWORD *v80; // rax
  unsigned __int64 v81; // rdx
  int v82; // eax
  unsigned int v83; // eax
  unsigned __int64 *v84; // rdx
  __int64 v85; // rdx
  int v86; // eax
  char *v87; // rdi
  char *v88; // rdx
  unsigned __int64 *v89; // rax
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rsi
  __int64 v92; // rdx
  _DWORD *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  unsigned __int64 *v98; // rsi
  unsigned __int64 v99; // rcx
  __int64 v100; // rdx
  unsigned __int64 *v101; // rdi
  unsigned __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rdx
  char v105; // [rsp+4h] [rbp-194h]
  int v106; // [rsp+4h] [rbp-194h]
  unsigned __int64 v107; // [rsp+8h] [rbp-190h]
  __int64 v108; // [rsp+10h] [rbp-188h]
  int v109; // [rsp+18h] [rbp-180h]
  bool v110; // [rsp+18h] [rbp-180h]
  __int64 *v111; // [rsp+20h] [rbp-178h]
  __int64 v112; // [rsp+20h] [rbp-178h]
  __int64 v113; // [rsp+28h] [rbp-170h]
  unsigned __int64 v114; // [rsp+30h] [rbp-168h]
  bool v115; // [rsp+38h] [rbp-160h]
  __int64 v116; // [rsp+38h] [rbp-160h]
  int v117; // [rsp+40h] [rbp-158h]
  _QWORD *v118; // [rsp+50h] [rbp-148h]
  __int64 v119; // [rsp+58h] [rbp-140h]
  __m128i v120; // [rsp+60h] [rbp-138h] BYREF
  __int64 v121; // [rsp+70h] [rbp-128h] BYREF
  __int64 v122; // [rsp+78h] [rbp-120h]
  __int64 v123; // [rsp+80h] [rbp-118h] BYREF
  __int128 v124; // [rsp+88h] [rbp-110h]
  __m128i v125; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 *v126; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v127; // [rsp+B8h] [rbp-E0h]
  char v128; // [rsp+C8h] [rbp-D0h]
  int v129; // [rsp+CCh] [rbp-CCh]
  char v130[8]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-C0h]
  __int64 v132; // [rsp+E0h] [rbp-B8h]
  __int64 v133; // [rsp+F0h] [rbp-A8h]
  __int64 v134; // [rsp+F8h] [rbp-A0h]
  __int64 v135; // [rsp+128h] [rbp-70h]
  __int64 v136; // [rsp+130h] [rbp-68h]
  __int64 v137; // [rsp+140h] [rbp-58h]
  __int64 v138; // [rsp+148h] [rbp-50h]
  unsigned __int64 v139; // [rsp+158h] [rbp-40h]

  v6 = a2;
  v139 = __readfsqword(0x28u);
  v7 = *(_QWORD **)(a1 + 936);
  if ( (unsigned __int8)sub_19F810(v7) )
  {
    if ( *(int *)(a1 + 68) > 0 || (*(_BYTE *)(a1 + 4) & 0x20) != 0 )
    {
      if ( !under_debugger )
        sub_383060(52038);
LABEL_278:
      BUG();
    }
    v8 = *(_QWORD **)(a1 + 944);
    if ( *(_BYTE *)(*(_QWORD *)(*v8 + 1496LL) + 148LL) )
    {
      v9 = v8[1];
      v10 = v8[3];
      if ( v9 <= v10 )
        v10 = v9;
      v107 = v10;
    }
    else
    {
      v107 = -1;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
    if ( a2 <= 0x10 )
    {
      v56 = getinf();
      sub_D10B0((__int64)v130, *(_QWORD *)(a1 + 1496), v56);
    }
    else
    {
      sub_D10B0((__int64)v130, *(_QWORD *)(a1 + 1496), a2);
    }
    v114 = v11;
    v6 = 64;
    v118 = v7 + 3;
    goto LABEL_11;
  }
  v49 = *(_QWORD **)(a1 + 944);
  if ( !*(_BYTE *)(*(_QWORD *)(*v49 + 1496LL) + 148LL) )
  {
    if ( a2 > 0x10 )
    {
      sub_D10B0((__int64)v130, *(_QWORD *)(a1 + 1496), a2);
      v114 = -1;
LABEL_128:
      v118 = nullptr;
      v107 = v114;
      goto LABEL_11;
    }
    v114 = -1;
LABEL_224:
    v6 = getinf();
    sub_D10B0((__int64)v130, *(_QWORD *)(a1 + 1496), v6);
    goto LABEL_128;
  }
  v50 = v49[1];
  v51 = v49[3];
  if ( v50 <= v51 )
    v51 = v50;
  v114 = v51;
  if ( a2 <= 0x10 )
    goto LABEL_224;
  sub_D10B0((__int64)v130, *(_QWORD *)(a1 + 1496), a2);
  v118 = nullptr;
  v107 = v114;
LABEL_11:
  v12 = (__m128i *)sub_369E90((__int64)v130, a1, v6);
  if ( a3 )
  {
    if ( !*(_QWORD *)(a1 + 464) )
      goto LABEL_21;
    v13 = 0;
    while ( 1 )
    {
      v14 = sub_13D280((_QWORD *)a1, v13);
      if ( *(_DWORD *)v14 == 2 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        v16 = *(_DWORD **)v15;
        v17 = *(_QWORD *)v15 + 24LL * *(_QWORD *)(v15 + 8);
        if ( *(_QWORD *)v15 == v17 )
        {
LABEL_20:
          sub_81FC0((__int64 *)(a1 + 456), v13);
LABEL_21:
          v121 = 0;
          v122 = 0;
          v123 = 0;
          v124 = 0;
          if ( (*(_BYTE *)a1 & 8) == 0 )
          {
            v105 = 0;
            goto LABEL_23;
          }
LABEL_99:
          v117 = -1;
          v31 = nullptr;
          v113 = 0;
          v30 = *(_QWORD *)(a1 + 144);
          v109 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
LABEL_100:
          if ( !v118 )
          {
            v19 = v31;
            goto LABEL_102;
          }
LABEL_52:
          if ( v30 < v114 )
            sub_36DBC0(a1, (v30 + v109 - 1) & -v109, v114, -1, v117 == 1);
          v19 = v31;
          goto LABEL_55;
        }
        while ( (unsigned int)(*v16 - 3) > 1 )
        {
          v16 += 6;
          if ( (_DWORD *)v17 == v16 )
            goto LABEL_20;
        }
      }
      else if ( (unsigned int)(*(_DWORD *)v14 - 3) > 1 )
      {
        goto LABEL_20;
      }
      if ( ++v13 >= *(_QWORD *)(a1 + 464) )
        goto LABEL_21;
    }
  }
  v48 = *(_QWORD *)(a1 + 456);
  if ( v48 )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree(v48);
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  if ( (*(_BYTE *)a1 & 8) != 0 )
    goto LABEL_99;
  v105 = 1;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 1 )
  {
    v57 = *(int *)(a1 + 480);
    if ( (_DWORD)v57 != -1 )
      v105 = sub_369E00(*(_QWORD *)(a1 + 432) + 104 * v57) ^ 1;
  }
LABEL_23:
  v113 = *(_QWORD *)(a1 + 440);
  if ( !v113 )
  {
    if ( !v118 )
    {
      v30 = *(_QWORD *)(a1 + 144);
      v19 = nullptr;
      v117 = -1;
      v109 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
      goto LABEL_102;
    }
    v117 = -1;
    v30 = *(_QWORD *)(a1 + 144);
    v109 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    goto LABEL_248;
  }
  v18 = nullptr;
  v113 = 0;
  if ( v118 )
    v18 = v12;
  v117 = -1;
  v19 = nullptr;
  v20 = 0;
  v111 = (__int64 *)v18;
  v21 = 0;
  do
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(a1 + 432) + 104 * v21;
      if ( *(_DWORD *)v22 == 2 )
        break;
      if ( (unsigned int)(*(_DWORD *)v22 - 3) > 1 )
        goto LABEL_91;
      if ( !a3 )
        goto LABEL_36;
LABEL_29:
      v21 = ++v20;
      if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 440) )
        goto LABEL_48;
    }
    v23 = *(_QWORD *)(v22 + 8);
    v24 = *(_DWORD **)v23;
    v25 = *(_QWORD *)v23 + 24LL * *(_QWORD *)(v23 + 8);
    if ( *(_QWORD *)v23 == v25 )
    {
LABEL_91:
      v12 = &v120;
      v45 = sub_1C3500((_DWORD *)v22);
      if ( v45 == -1 )
        goto LABEL_94;
      if ( v45 >= v114 )
        goto LABEL_94;
      v108 = v45;
      v12 = &v120;
      v46 = sub_228C90(a1, v22);
      v47 = v108;
      if ( !v46 )
        goto LABEL_94;
      v110 = 0;
      goto LABEL_121;
    }
    while ( 1 )
    {
      LODWORD(v12) = *v24;
      if ( (unsigned int)(*v24 - 3) <= 1 )
        break;
      v24 += 6;
      if ( (_DWORD *)v25 == v24 )
        goto LABEL_91;
    }
    if ( a3 )
      goto LABEL_29;
LABEL_36:
    if ( !v105 )
      goto LABEL_94;
    if ( *(_DWORD *)(v22 + 92) )
      goto LABEL_94;
    v125.m128i_i64[1] = a1;
    v125.m128i_i64[0] = (__int64)&off_4E6140;
    v12 = &v120;
    v126 = v111;
    if ( (unsigned int)for_all_arglocs() )
      goto LABEL_94;
    v12 = &v120;
    v26 = sub_1C3500((_DWORD *)v22);
    if ( v26 == -1 )
      goto LABEL_42;
    if ( v26 >= v114 )
    {
      if ( *(_QWORD *)(a1 + 144) > v26 )
        goto LABEL_94;
LABEL_42:
      v115 = 0;
      goto LABEL_43;
    }
    v116 = v26;
    v110 = sub_228C90(a1, v22);
    v47 = v116;
    if ( !v110 )
    {
      if ( v116 < *(_QWORD *)(a1 + 144) )
        goto LABEL_94;
      goto LABEL_42;
    }
LABEL_121:
    v12 = &v120;
    v125.m128i_i64[0] = v47;
    v119 = v47;
    v125.m128i_i32[2] = v20;
    v120.m128i_i64[0] = (__int64)v19;
    v120.m128i_i64[1] = v113;
    sub_37A240(&v120, &v125);
    v19 = (unsigned __int64 *)v120.m128i_i64[0];
    v115 = v58;
    v113 = v120.m128i_i64[1];
    if ( !v58 )
    {
      if ( !(unsigned __int8)sub_1EEA60((unsigned __int8 *)a1) )
      {
        if ( !under_debugger )
          sub_383060(50213);
        goto LABEL_278;
      }
      if ( !v110 || v119 < *(_QWORD *)(a1 + 144) )
      {
LABEL_94:
        v27 = *(_DWORD *)(v22 + 24);
LABEL_95:
        BYTE1(v27) &= 0x7Eu;
        *(_DWORD *)(v22 + 24) = v27 | 0x100000;
        goto LABEL_29;
      }
      goto LABEL_43;
    }
    if ( sub_11CB40(*(_DWORD *)(v22 + 88)) )
    {
      if ( v117 != -1 )
      {
        if ( !v110 || v119 < *(_QWORD *)(a1 + 144) )
          goto LABEL_134;
LABEL_234:
        v115 = v110;
        goto LABEL_43;
      }
      v28 = *(_DWORD *)(v22 + 24);
      if ( (v28 & 0x80000) != 0 )
      {
        if ( !v110 || v119 < *(_QWORD *)(a1 + 144) )
          goto LABEL_47;
        goto LABEL_234;
      }
      if ( (get_tinfo_property() & 0xF) == 9 )
      {
        if ( !v110 || *(_QWORD *)(a1 + 144) > v119 )
        {
          v117 = 1;
          v28 = *(_DWORD *)(v22 + 24);
          goto LABEL_47;
        }
        v117 = 1;
        v115 = v110;
        goto LABEL_43;
      }
      if ( !v110 || v119 < *(_QWORD *)(a1 + 144) )
        goto LABEL_253;
    }
    else if ( !v110 || *(_QWORD *)(a1 + 144) > v119 )
    {
LABEL_253:
      v117 = 0;
      v28 = *(_DWORD *)(v22 + 24);
      goto LABEL_47;
    }
    v117 = 0;
LABEL_43:
    v12 = &v125;
    v125 = 0u;
    v126 = nullptr;
    v127 = 0;
    sub_1C3380(v22, a1, (__int64)&v125, 0);
    if ( !(unsigned __int8)sub_64780(&v125, &v121) )
    {
      v12 = (__m128i *)&v126;
      if ( !(unsigned __int8)sub_318470((unsigned __int64 **)&v126, (__int64)&v123) )
      {
        v52 = *(_QWORD *)(a1 + 456);
        v53 = *(_QWORD *)(a1 + 464);
        v54 = (__int32 *)(v52 + 4 * v53);
        if ( (__int32 *)v52 != v54 )
        {
          v55 = *(__int32 **)(a1 + 456);
          while ( *v55 != v20 )
          {
            if ( v54 == ++v55 )
              goto LABEL_129;
          }
          if ( v54 != v55 )
            sub_369E70();
        }
LABEL_129:
        if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v53 + 1) )
        {
          v103 = qvector_reserve(a1 + 456, v52, v53 + 1, 4);
          v104 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v103;
          v54 = (__int32 *)(v103 + 4 * v104);
        }
        *v54 = v20;
        ++*(_QWORD *)(a1 + 464);
        sub_64280(&v121, v125.m128i_i64);
        sub_316CB0(&v123, &v126, v59, v60);
        if ( v126 )
        {
          *(_QWORD *)&v127 = 0;
          qfree((__int64)v126);
          qfree(v125.m128i_i64[0]);
          v28 = *(_DWORD *)(v22 + 24);
          goto LABEL_47;
        }
        qfree(v125.m128i_i64[0]);
LABEL_134:
        v28 = *(_DWORD *)(v22 + 24);
        goto LABEL_47;
      }
    }
    if ( v126 )
    {
      *(_QWORD *)&v127 = 0;
      qfree((__int64)v126);
    }
    qfree(v125.m128i_i64[0]);
    v27 = *(_DWORD *)(v22 + 24);
    v28 = v27;
    if ( !v115 )
      goto LABEL_95;
LABEL_47:
    ++v20;
    v29 = v28 & 0xFFEFFFFF;
    BYTE1(v29) = BYTE1(v28) | 1;
    *(_DWORD *)(v22 + 24) = v29;
    v21 = v20;
  }
  while ( (unsigned __int64)v20 < *(_QWORD *)(a1 + 440) );
LABEL_48:
  if ( v118 )
  {
    v30 = *(_QWORD *)(a1 + 144);
    v109 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    if ( v19 )
    {
      if ( !v113 )
        goto LABEL_51;
      v31 = (unsigned __int64 *)v19[1];
      if ( v19 == v31 )
        goto LABEL_52;
LABEL_167:
      v112 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
           & (*(_QWORD *)(a1 + 664) + *(_QWORD *)(a1 + 672) - *(_QWORD *)(a1 + 1440));
      v72 = 0;
      while ( 1 )
      {
        v73 = v31[3];
        v74 = *((_DWORD *)v31 + 8);
        if ( v73 >= v107 )
        {
          LODWORD(v12) = 1;
LABEL_196:
          v85 = *(_QWORD *)(a1 + 432) + 104LL * v74;
          v86 = *(_DWORD *)(v85 + 24);
          BYTE1(v86) &= 0x7Eu;
          *(_DWORD *)(v85 + 24) = v86 | 0x100000;
          v87 = *(char **)(a1 + 456);
          v88 = &v87[4 * *(_QWORD *)(a1 + 464)];
          if ( v87 != v88 )
          {
            while ( v74 != *(_DWORD *)v87 )
            {
              v87 += 4;
              if ( v88 == v87 )
                goto LABEL_202;
            }
            if ( v88 != v87 )
            {
              memmove(v87, v87 + 4, v88 - v87 - 4);
              --*(_QWORD *)(a1 + 464);
            }
          }
LABEL_202:
          v72 = (int)v12;
          goto LABEL_190;
        }
        LOBYTE(v12) = v112 <= v73 && v73 != v30;
        if ( (_BYTE)v12 )
          goto LABEL_196;
        LODWORD(v12) = v72;
        if ( (unsigned __int8)v72 | (v73 < v30) )
          goto LABEL_196;
        v106 = *((_DWORD *)v31 + 8);
        sub_36DBC0(a1, v30, v73, v74, v117 == 1);
        v75 = v106;
        v76 = *(_QWORD *)(a1 + 432) + 104LL * v106;
        if ( *(_DWORD *)v76 == 2 )
        {
          v92 = *(_QWORD *)(v76 + 8);
          v93 = *(_DWORD **)v92;
          v94 = *(_QWORD *)v92 + 24LL * *(_QWORD *)(v92 + 8);
          if ( *(_QWORD *)v92 == v94 )
          {
LABEL_173:
            v77 = *(_QWORD *)(a1 + 456);
            v78 = *(_QWORD *)(a1 + 464);
            v79 = (_DWORD *)(v77 + 4 * v78);
            if ( (_DWORD *)v77 != v79 )
            {
              v80 = *(_DWORD **)(a1 + 456);
              while ( v106 != *v80 )
              {
                if ( v79 == ++v80 )
                  goto LABEL_180;
              }
              if ( v79 != v80 )
              {
                if ( !under_debugger )
                  sub_383060(51603);
                goto LABEL_278;
              }
            }
LABEL_180:
            v81 = v78 + 1;
            if ( *(_QWORD *)(a1 + 472) < v81 )
            {
              v95 = qvector_reserve(a1 + 456, v77, v81, 4);
              v96 = *(_QWORD *)(a1 + 464);
              *(_QWORD *)(a1 + 456) = v95;
              v75 = v106;
              v79 = (_DWORD *)(v95 + 4 * v96);
            }
            *v79 = v75;
            ++*(_QWORD *)(a1 + 464);
            goto LABEL_183;
          }
          while ( (unsigned int)(*v93 - 3) > 1 )
          {
            v93 += 6;
            if ( (_DWORD *)v94 == v93 )
              goto LABEL_173;
          }
        }
        else if ( (unsigned int)(*(_DWORD *)v76 - 3) > 1 )
        {
          goto LABEL_173;
        }
LABEL_183:
        v12 = &v120;
        v82 = sub_1C35C0((_DWORD *)v76, *(_DWORD *)(v76 + 88));
        v30 = v82;
        if ( v82 <= 0 )
        {
          if ( !under_debugger )
            sub_383060(51583);
          goto LABEL_278;
        }
        v83 = *(_DWORD *)(a1 + 72);
        if ( v83 <= 0x10 )
          v83 = getinf();
        if ( v83 == 176 || v83 == 256 || (v12 = &v120, v72 = getinf_flag(), (_BYTE)v72) )
          v72 = 0;
        else
          v30 = (v109 - 1 + v30) & -v109;
LABEL_190:
        if ( (*v31 & 2) != 0 )
          goto LABEL_193;
        v84 = (unsigned __int64 *)v31[2];
        if ( (*(_BYTE *)v84 & 2) == 0 )
        {
          do
          {
            v31 = v84;
            v84 = (unsigned __int64 *)v84[1];
          }
          while ( (*(_BYTE *)v84 & 2) == 0 );
LABEL_193:
          if ( v31 == v19 )
            goto LABEL_100;
          continue;
        }
        v89 = (unsigned __int64 *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
        v90 = *v89;
        if ( (*v89 & 2) != 0 )
        {
LABEL_205:
          v31 = v89;
          if ( v89 == v19 )
            goto LABEL_100;
        }
        else
        {
          while ( 1 )
          {
            if ( (unsigned __int64 *)v89[2] != v31 )
              goto LABEL_205;
            v31 = v89;
            v91 = v90 & 0xFFFFFFFFFFFFFFFCLL;
            v90 = *(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v90 & 2) != 0 )
              break;
            v89 = (unsigned __int64 *)v91;
          }
          v31 = (unsigned __int64 *)v91;
          if ( (unsigned __int64 *)v91 == v19 )
            goto LABEL_100;
        }
      }
    }
LABEL_248:
    v31 = nullptr;
    goto LABEL_52;
  }
  if ( *(_DWORD *)(a1 + 68) )
    goto LABEL_164;
  if ( !v113 )
  {
    v30 = *(_QWORD *)(a1 + 144);
    v109 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    goto LABEL_102;
  }
  v61 = *v19;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          if ( (v61 & 2) == 0 )
          {
LABEL_139:
            v62 = v19[1];
            if ( (*(_BYTE *)v62 & 2) != 0 )
            {
              v62 = v61 & 0xFFFFFFFFFFFFFFFCLL;
              v97 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v97 & 2) == 0 )
              {
                v98 = v19;
                do
                {
                  if ( *(unsigned __int64 **)(v62 + 8) != v98 )
                    break;
                  v98 = (unsigned __int64 *)v62;
                  v99 = v97 & 0xFFFFFFFFFFFFFFFCLL;
                  v97 = *(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFFCLL);
                  v62 = v99;
                }
                while ( (v97 & 2) == 0 );
              }
            }
            else
            {
              while ( (**(_BYTE **)(v62 + 16) & 2) == 0 )
                v62 = *(_QWORD *)(v62 + 16);
            }
            goto LABEL_141;
          }
LABEL_160:
          v62 = v19[2];
LABEL_141:
          v63 = *(_DWORD *)(v62 + 32);
          v12 = &v120;
          v125.m128i_i64[1] = 0;
          v126 = nullptr;
          v127 = 0u;
          v128 = 0;
          v125.m128i_i64[0] = (__int64)&off_4E6168;
          v129 = v63;
          if ( (unsigned int)sub_11FBB0(a1, (__int64)&v125)
            || (v64 = *(_QWORD *)(a1 + 432) + 104LL * v63, v65 = *(_DWORD *)(v64 + 24), (v65 & 0x8000) != 0) )
          {
            v30 = *(_QWORD *)(a1 + 144);
            v109 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
            if ( v19 )
              goto LABEL_166;
            goto LABEL_102;
          }
          BYTE1(v65) &= 0x7Eu;
          *(_DWORD *)(v64 + 24) = v65 | 0x100000;
          v66 = *(char **)(a1 + 456);
          v67 = &v66[4 * *(_QWORD *)(a1 + 464)];
          if ( v66 != v67 )
          {
            while ( v63 != *(_DWORD *)v66 )
            {
              v66 += 4;
              if ( v67 == v66 )
                goto LABEL_149;
            }
            if ( v67 != v66 )
            {
              memmove(v66, v66 + 4, v67 - v66 - 4);
              --*(_QWORD *)(a1 + 464);
            }
          }
LABEL_149:
          v61 = *v19;
          if ( (*v19 & 2) != 0 )
          {
            v69 = v19[2];
          }
          else
          {
            v68 = v19[1];
            if ( (*(_BYTE *)v68 & 2) != 0 )
            {
              v69 = v61 & 0xFFFFFFFFFFFFFFFCLL;
              v100 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v100 & 2) == 0 )
              {
                v101 = v19;
                do
                {
                  if ( v101 != *(unsigned __int64 **)(v69 + 8) )
                    break;
                  v101 = (unsigned __int64 *)v69;
                  v102 = v100 & 0xFFFFFFFFFFFFFFFCLL;
                  v100 = *(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFFCLL);
                  v69 = v102;
                }
                while ( (v100 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v69 = v68;
                v68 = *(_QWORD *)(v68 + 16);
              }
              while ( (*(_BYTE *)v68 & 2) == 0 );
            }
          }
          if ( !v19 )
            continue;
          break;
        }
        v70 = (__int64 *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v61 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_162;
        if ( (*(_BYTE *)(v61 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          continue;
        break;
      }
      v71 = *(_QWORD *)(v69 + 24);
      while ( 2 )
      {
        if ( v71 < v70[3] )
        {
          v70 = (__int64 *)v70[1];
          goto LABEL_158;
        }
        if ( v71 > v70[3] )
        {
          v70 = (__int64 *)v70[2];
LABEL_158:
          if ( (*(_BYTE *)v70 & 2) != 0 )
          {
            if ( (v61 & 2) == 0 )
              goto LABEL_139;
            goto LABEL_160;
          }
          continue;
        }
        break;
      }
      if ( v70 == (__int64 *)v19 )
        continue;
      break;
    }
LABEL_162:
    v120.m128i_i64[0] = (__int64)v19;
    v12 = &v120;
    v120.m128i_i64[1] = v113;
    sub_22F840((unsigned __int64 **)&v120, v70);
    v113 = v120.m128i_i64[1];
    v19 = (unsigned __int64 *)v120.m128i_i64[0];
    if ( v120.m128i_i64[1] )
    {
      v61 = *(_QWORD *)v120.m128i_i64[0];
      continue;
    }
    break;
  }
LABEL_164:
  v30 = *(_QWORD *)(a1 + 144);
  v109 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( v19 && v113 )
  {
LABEL_166:
    v31 = (unsigned __int64 *)v19[1];
    if ( v19 != v31 )
      goto LABEL_167;
  }
LABEL_102:
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 944) + 16LL) )
  {
LABEL_51:
    v31 = v19;
    goto LABEL_52;
  }
LABEL_55:
  v32 = *(_DWORD *)(a1 + 68);
  if ( v32 > 0 )
    sub_36DBC0(a1, v30, *(_QWORD *)(a1 + 144) + v32, *(_DWORD *)(a1 + 440), v117 == 1);
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree(v123);
  }
  qfree(v121);
  if ( !v19 )
    goto LABEL_80;
  if ( !v113 )
    goto LABEL_79;
  v33 = *v19;
  v34 = (__int64 *)(*v19 & 0xFFFFFFFFFFFFFFFCLL);
  v35 = *v34;
  if ( (*v34 & 2) != 0 )
    goto LABEL_79;
  v36 = (__int64 *)v34[1];
  v37 = *v36;
  if ( (*v36 & 2) != 0 )
  {
    v40 = v34[2];
    if ( (*(_BYTE *)v40 & 2) == 0 )
      goto LABEL_70;
LABEL_255:
    *v34 = v35 | 2;
    goto LABEL_77;
  }
  v38 = (__int64 *)v36[1];
  if ( (*(_BYTE *)v38 & 2) != 0 )
  {
    v39 = (__int64 *)v36[2];
    if ( (*(_BYTE *)v39 & 2) == 0 )
    {
LABEL_65:
      sub_36A410(v39);
      goto LABEL_66;
    }
    goto LABEL_264;
  }
  sub_36A410(v38);
  v39 = (__int64 *)v36[2];
  if ( (*(_BYTE *)v39 & 2) == 0 )
    goto LABEL_65;
LABEL_66:
  v37 = *v36;
  if ( (*v36 & 2) == 0 )
LABEL_264:
    *v36 = v37 | 2;
  if ( v36 )
    qfree((__int64)v36);
  v40 = v34[2];
  if ( (*(_BYTE *)v40 & 2) == 0 )
  {
LABEL_70:
    v41 = *(__int64 **)(v40 + 8);
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
      v42 = *(__int64 **)(v40 + 16);
      if ( (*(_BYTE *)v42 & 2) == 0 )
      {
LABEL_72:
        sub_36A410(v42);
        goto LABEL_73;
      }
      v43 = *(_QWORD *)v40;
    }
    else
    {
      sub_36A410(v41);
      v42 = *(__int64 **)(v40 + 16);
      if ( (*(_BYTE *)v42 & 2) == 0 )
        goto LABEL_72;
LABEL_73:
      v43 = *(_QWORD *)v40;
      if ( (*(_QWORD *)v40 & 2) != 0 )
      {
LABEL_74:
        if ( v40 )
          qfree(v40);
        goto LABEL_76;
      }
    }
    *(_QWORD *)v40 = v43 | 2;
    goto LABEL_74;
  }
LABEL_76:
  v35 = *v34;
  if ( (*v34 & 2) == 0 )
    goto LABEL_255;
LABEL_77:
  if ( v33 > 3 )
    qfree((__int64)v34);
LABEL_79:
  qfree((__int64)v19);
LABEL_80:
  if ( v137 )
  {
    v138 = 0;
    qfree(v137);
  }
  if ( v135 )
  {
    v136 = 0;
    qfree(v135);
  }
  if ( v133 )
  {
    v134 = 0;
    qfree(v133);
  }
  if ( v131 )
  {
    v132 = 0;
    qfree(v131);
  }
  return v139 - __readfsqword(0x28u);
}
