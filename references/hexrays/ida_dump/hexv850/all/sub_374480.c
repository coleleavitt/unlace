unsigned __int64 __fastcall sub_374480(__int64 a1, unsigned int a2, char a3)
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
  __int64 *v40; // rbx
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
  __int32 *v52; // rsi
  __int64 v53; // rcx
  __int32 *v54; // rdx
  __int32 *v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rax
  bool v58; // dl
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx
  int v61; // r15d
  __int64 v62; // rdx
  int v63; // eax
  char *v64; // rdi
  char *v65; // rax
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  __int64 *v68; // rsi
  __int64 v69; // rdx
  int v70; // ecx
  __int64 v71; // rdx
  int v72; // r10d
  int v73; // r10d
  __int64 v74; // r15
  _DWORD *v75; // rsi
  __int64 v76; // rdx
  _DWORD *v77; // rcx
  _DWORD *v78; // rax
  unsigned __int64 v79; // rdx
  int v80; // eax
  unsigned int v81; // eax
  unsigned __int64 *v82; // rdx
  __int64 v83; // rdx
  int v84; // eax
  char *v85; // rdi
  char *v86; // rdx
  unsigned __int64 *v87; // rax
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rsi
  __int64 v90; // rdx
  _DWORD *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 *v96; // rsi
  unsigned __int64 v97; // rcx
  __int64 v98; // rdx
  unsigned __int64 *v99; // rdi
  unsigned __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rdx
  char v103; // [rsp+4h] [rbp-194h]
  int v104; // [rsp+4h] [rbp-194h]
  unsigned __int64 v105; // [rsp+8h] [rbp-190h]
  __int64 v106; // [rsp+10h] [rbp-188h]
  int v107; // [rsp+18h] [rbp-180h]
  bool v108; // [rsp+18h] [rbp-180h]
  __int64 *v109; // [rsp+20h] [rbp-178h]
  __int64 v110; // [rsp+20h] [rbp-178h]
  __int64 v111; // [rsp+28h] [rbp-170h]
  unsigned __int64 v112; // [rsp+30h] [rbp-168h]
  bool v113; // [rsp+38h] [rbp-160h]
  __int64 v114; // [rsp+38h] [rbp-160h]
  int v115; // [rsp+40h] [rbp-158h]
  _QWORD *v116; // [rsp+50h] [rbp-148h]
  __int64 v117; // [rsp+58h] [rbp-140h]
  __m128i v118; // [rsp+60h] [rbp-138h] BYREF
  __int64 v119; // [rsp+70h] [rbp-128h] BYREF
  __int64 v120; // [rsp+78h] [rbp-120h]
  __int64 v121; // [rsp+80h] [rbp-118h] BYREF
  __int128 v122; // [rsp+88h] [rbp-110h]
  __m128i v123; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 *v124; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v125; // [rsp+B8h] [rbp-E0h]
  char v126; // [rsp+C8h] [rbp-D0h]
  int v127; // [rsp+CCh] [rbp-CCh]
  char v128[8]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+D8h] [rbp-C0h]
  __int64 v130; // [rsp+E0h] [rbp-B8h]
  __int64 v131; // [rsp+F0h] [rbp-A8h]
  __int64 v132; // [rsp+F8h] [rbp-A0h]
  __int64 v133; // [rsp+128h] [rbp-70h]
  __int64 v134; // [rsp+130h] [rbp-68h]
  __int64 v135; // [rsp+140h] [rbp-58h]
  __int64 v136; // [rsp+148h] [rbp-50h]
  unsigned __int64 v137; // [rsp+158h] [rbp-40h]

  v6 = a2;
  v137 = __readfsqword(0x28u);
  v7 = *(_QWORD **)(a1 + 936);
  if ( (unsigned __int8)sub_19AB10(v7) )
  {
    if ( *(int *)(a1 + 68) > 0 || (*(_BYTE *)(a1 + 4) & 0x20) != 0 )
    {
      if ( !under_debugger )
        sub_37CFE0(52038);
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
      v105 = v10;
    }
    else
    {
      v105 = -1;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
    if ( a2 <= 0x10 )
    {
      v56 = getinf(99);
      sub_CC4F0((__int64)v128, *(_QWORD *)(a1 + 1496), v56);
    }
    else
    {
      sub_CC4F0((__int64)v128, *(_QWORD *)(a1 + 1496), a2);
    }
    v112 = v11;
    v6 = 64;
    v116 = v7 + 3;
    goto LABEL_11;
  }
  v49 = *(_QWORD **)(a1 + 944);
  if ( !*(_BYTE *)(*(_QWORD *)(*v49 + 1496LL) + 148LL) )
  {
    if ( a2 > 0x10 )
    {
      sub_CC4F0((__int64)v128, *(_QWORD *)(a1 + 1496), a2);
      v112 = -1;
LABEL_128:
      v116 = nullptr;
      v105 = v112;
      goto LABEL_11;
    }
    v112 = -1;
LABEL_224:
    v6 = getinf(99);
    sub_CC4F0((__int64)v128, *(_QWORD *)(a1 + 1496), v6);
    goto LABEL_128;
  }
  v50 = v49[1];
  v51 = v49[3];
  if ( v50 <= v51 )
    v51 = v50;
  v112 = v51;
  if ( a2 <= 0x10 )
    goto LABEL_224;
  sub_CC4F0((__int64)v128, *(_QWORD *)(a1 + 1496), a2);
  v116 = nullptr;
  v105 = v112;
LABEL_11:
  v12 = (__m128i *)sub_363E10((__int64)v128, a1, v6);
  if ( a3 )
  {
    if ( !*(_QWORD *)(a1 + 464) )
      goto LABEL_21;
    v13 = 0;
    while ( 1 )
    {
      v14 = sub_1386C0((_QWORD *)a1, v13);
      if ( *(_DWORD *)v14 == 2 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        v16 = *(_DWORD **)v15;
        v17 = *(_QWORD *)v15 + 24LL * *(_QWORD *)(v15 + 8);
        if ( *(_QWORD *)v15 == v17 )
        {
LABEL_20:
          sub_7D400((__int64 *)(a1 + 456), v13);
LABEL_21:
          v119 = 0;
          v120 = 0;
          v121 = 0;
          v122 = 0;
          if ( (*(_BYTE *)a1 & 8) == 0 )
          {
            v103 = 0;
            goto LABEL_23;
          }
LABEL_99:
          v115 = -1;
          v31 = nullptr;
          v111 = 0;
          v30 = *(_QWORD *)(a1 + 144);
          v107 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
LABEL_100:
          if ( !v116 )
          {
            v19 = v31;
            goto LABEL_102;
          }
LABEL_52:
          if ( v30 < v112 )
            sub_367B40(a1, (v30 + v107 - 1) & -v107, v112, -1, v115 == 1);
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
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  if ( (*(_BYTE *)a1 & 8) != 0 )
    goto LABEL_99;
  v103 = 1;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 1 )
  {
    v57 = *(int *)(a1 + 480);
    if ( (_DWORD)v57 != -1 )
      v103 = sub_363D80(*(_QWORD *)(a1 + 432) + 104 * v57) ^ 1;
  }
LABEL_23:
  v111 = *(_QWORD *)(a1 + 440);
  if ( !v111 )
  {
    if ( !v116 )
    {
      v30 = *(_QWORD *)(a1 + 144);
      v19 = nullptr;
      v115 = -1;
      v107 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
      goto LABEL_102;
    }
    v115 = -1;
    v30 = *(_QWORD *)(a1 + 144);
    v107 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    goto LABEL_248;
  }
  v18 = nullptr;
  v111 = 0;
  if ( v116 )
    v18 = v12;
  v115 = -1;
  v19 = nullptr;
  v20 = 0;
  v109 = (__int64 *)v18;
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
      v12 = &v118;
      v45 = sub_1BE780((_DWORD *)v22);
      if ( v45 == -1 )
        goto LABEL_94;
      if ( v45 >= v112 )
        goto LABEL_94;
      v106 = v45;
      v12 = &v118;
      v46 = sub_2238D0(a1, v22);
      v47 = v106;
      if ( !v46 )
        goto LABEL_94;
      v108 = 0;
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
    if ( !v103 )
      goto LABEL_94;
    if ( *(_DWORD *)(v22 + 92) )
      goto LABEL_94;
    v123.m128i_i64[1] = a1;
    v123.m128i_i64[0] = (__int64)&off_4B9AC0;
    v12 = &v118;
    v124 = v109;
    if ( (unsigned int)for_all_arglocs(&v123, v22, *(unsigned int *)(v22 + 88), 0) )
      goto LABEL_94;
    v12 = &v118;
    v26 = sub_1BE780((_DWORD *)v22);
    if ( v26 == -1 )
      goto LABEL_42;
    if ( v26 >= v112 )
    {
      if ( *(_QWORD *)(a1 + 144) > v26 )
        goto LABEL_94;
LABEL_42:
      v113 = 0;
      goto LABEL_43;
    }
    v114 = v26;
    v108 = sub_2238D0(a1, v22);
    v47 = v114;
    if ( !v108 )
    {
      if ( v114 < *(_QWORD *)(a1 + 144) )
        goto LABEL_94;
      goto LABEL_42;
    }
LABEL_121:
    v12 = &v118;
    v123.m128i_i64[0] = v47;
    v117 = v47;
    v123.m128i_i32[2] = v20;
    v118.m128i_i64[0] = (__int64)v19;
    v118.m128i_i64[1] = v111;
    sub_3741C0(&v118, &v123);
    v19 = (unsigned __int64 *)v118.m128i_i64[0];
    v113 = v58;
    v111 = v118.m128i_i64[1];
    if ( !v58 )
    {
      if ( !(unsigned __int8)sub_1E96A0((unsigned __int8 *)a1) )
      {
        if ( !under_debugger )
          sub_37CFE0(50213);
        goto LABEL_278;
      }
      if ( !v108 || v117 < *(_QWORD *)(a1 + 144) )
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
    if ( sub_117F80(*(_DWORD *)(v22 + 88)) )
    {
      if ( v115 != -1 )
      {
        if ( !v108 || v117 < *(_QWORD *)(a1 + 144) )
          goto LABEL_134;
LABEL_234:
        v113 = v108;
        goto LABEL_43;
      }
      v28 = *(_DWORD *)(v22 + 24);
      if ( (v28 & 0x80000) != 0 )
      {
        if ( !v108 || v117 < *(_QWORD *)(a1 + 144) )
          goto LABEL_47;
        goto LABEL_234;
      }
      if ( (get_tinfo_property(*(_QWORD *)(v22 + 80), 2) & 0xF) == 9 )
      {
        if ( !v108 || *(_QWORD *)(a1 + 144) > v117 )
        {
          v115 = 1;
          v28 = *(_DWORD *)(v22 + 24);
          goto LABEL_47;
        }
        v115 = 1;
        v113 = v108;
        goto LABEL_43;
      }
      if ( !v108 || v117 < *(_QWORD *)(a1 + 144) )
        goto LABEL_253;
    }
    else if ( !v108 || *(_QWORD *)(a1 + 144) > v117 )
    {
LABEL_253:
      v115 = 0;
      v28 = *(_DWORD *)(v22 + 24);
      goto LABEL_47;
    }
    v115 = 0;
LABEL_43:
    v12 = &v123;
    v123 = 0u;
    v124 = nullptr;
    v125 = 0;
    sub_1BE600(v22, a1, v123.m128i_i64, 0);
    if ( !(unsigned __int8)sub_5FD00(&v123, &v119) )
    {
      v12 = (__m128i *)&v124;
      if ( !(unsigned __int8)sub_312BB0((unsigned __int64 **)&v124, (__int64)&v121) )
      {
        v52 = *(__int32 **)(a1 + 456);
        v53 = *(_QWORD *)(a1 + 464);
        v54 = &v52[v53];
        if ( v52 != v54 )
        {
          v55 = *(__int32 **)(a1 + 456);
          while ( *v55 != v20 )
          {
            if ( v54 == ++v55 )
              goto LABEL_129;
          }
          if ( v54 != v55 )
            sub_363DF0();
        }
LABEL_129:
        if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v53 + 1) )
        {
          v101 = qvector_reserve(a1 + 456, v52, v53 + 1, 4);
          v102 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v101;
          v54 = (__int32 *)(v101 + 4 * v102);
        }
        *v54 = v20;
        ++*(_QWORD *)(a1 + 464);
        sub_5F800(&v119, v123.m128i_i64);
        sub_3113F0(&v121, &v124);
        if ( v124 )
        {
          *(_QWORD *)&v125 = 0;
          qfree(v124);
          qfree(v123.m128i_i64[0]);
          v28 = *(_DWORD *)(v22 + 24);
          goto LABEL_47;
        }
        qfree(v123.m128i_i64[0]);
LABEL_134:
        v28 = *(_DWORD *)(v22 + 24);
        goto LABEL_47;
      }
    }
    if ( v124 )
    {
      *(_QWORD *)&v125 = 0;
      qfree(v124);
    }
    qfree(v123.m128i_i64[0]);
    v27 = *(_DWORD *)(v22 + 24);
    v28 = v27;
    if ( !v113 )
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
  if ( v116 )
  {
    v30 = *(_QWORD *)(a1 + 144);
    v107 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    if ( v19 )
    {
      if ( !v111 )
        goto LABEL_51;
      v31 = (unsigned __int64 *)v19[1];
      if ( v19 == v31 )
        goto LABEL_52;
LABEL_167:
      v110 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
           & (*(_QWORD *)(a1 + 664) + *(_QWORD *)(a1 + 672) - *(_QWORD *)(a1 + 1440));
      v70 = 0;
      while ( 1 )
      {
        v71 = v31[3];
        v72 = *((_DWORD *)v31 + 8);
        if ( v71 >= v105 )
        {
          LODWORD(v12) = 1;
LABEL_196:
          v83 = *(_QWORD *)(a1 + 432) + 104LL * v72;
          v84 = *(_DWORD *)(v83 + 24);
          BYTE1(v84) &= 0x7Eu;
          *(_DWORD *)(v83 + 24) = v84 | 0x100000;
          v85 = *(char **)(a1 + 456);
          v86 = &v85[4 * *(_QWORD *)(a1 + 464)];
          if ( v85 != v86 )
          {
            while ( v72 != *(_DWORD *)v85 )
            {
              v85 += 4;
              if ( v86 == v85 )
                goto LABEL_202;
            }
            if ( v86 != v85 )
            {
              memmove(v85, v85 + 4, v86 - v85 - 4);
              --*(_QWORD *)(a1 + 464);
            }
          }
LABEL_202:
          v70 = (int)v12;
          goto LABEL_190;
        }
        LOBYTE(v12) = v110 <= v71 && v71 != v30;
        if ( (_BYTE)v12 )
          goto LABEL_196;
        LODWORD(v12) = v70;
        if ( (unsigned __int8)v70 | (v71 < v30) )
          goto LABEL_196;
        v104 = *((_DWORD *)v31 + 8);
        sub_367B40(a1, v30, v71, v72, v115 == 1);
        v73 = v104;
        v74 = *(_QWORD *)(a1 + 432) + 104LL * v104;
        if ( *(_DWORD *)v74 == 2 )
        {
          v90 = *(_QWORD *)(v74 + 8);
          v91 = *(_DWORD **)v90;
          v92 = *(_QWORD *)v90 + 24LL * *(_QWORD *)(v90 + 8);
          if ( *(_QWORD *)v90 == v92 )
          {
LABEL_173:
            v75 = *(_DWORD **)(a1 + 456);
            v76 = *(_QWORD *)(a1 + 464);
            v77 = &v75[v76];
            if ( v75 != v77 )
            {
              v78 = *(_DWORD **)(a1 + 456);
              while ( v104 != *v78 )
              {
                if ( v77 == ++v78 )
                  goto LABEL_180;
              }
              if ( v77 != v78 )
              {
                if ( !under_debugger )
                  sub_37CFE0(51603);
                goto LABEL_278;
              }
            }
LABEL_180:
            v79 = v76 + 1;
            if ( *(_QWORD *)(a1 + 472) < v79 )
            {
              v93 = qvector_reserve(a1 + 456, v75, v79, 4);
              v94 = *(_QWORD *)(a1 + 464);
              *(_QWORD *)(a1 + 456) = v93;
              v73 = v104;
              v77 = (_DWORD *)(v93 + 4 * v94);
            }
            *v77 = v73;
            ++*(_QWORD *)(a1 + 464);
            goto LABEL_183;
          }
          while ( (unsigned int)(*v91 - 3) > 1 )
          {
            v91 += 6;
            if ( (_DWORD *)v92 == v91 )
              goto LABEL_173;
          }
        }
        else if ( (unsigned int)(*(_DWORD *)v74 - 3) > 1 )
        {
          goto LABEL_173;
        }
LABEL_183:
        v12 = &v118;
        v80 = sub_1BE840((_DWORD *)v74, *(_DWORD *)(v74 + 88));
        v30 = v80;
        if ( v80 <= 0 )
        {
          if ( !under_debugger )
            sub_37CFE0(51583);
          goto LABEL_278;
        }
        v81 = *(_DWORD *)(a1 + 72);
        if ( v81 <= 0x10 )
          v81 = getinf(99);
        if ( v81 == 176 || v81 == 256 || (v12 = &v118, v70 = getinf_flag(67, 2), (_BYTE)v70) )
          v70 = 0;
        else
          v30 = (v107 - 1 + v30) & -v107;
LABEL_190:
        if ( (*v31 & 2) != 0 )
          goto LABEL_193;
        v82 = (unsigned __int64 *)v31[2];
        if ( (*(_BYTE *)v82 & 2) == 0 )
        {
          do
          {
            v31 = v82;
            v82 = (unsigned __int64 *)v82[1];
          }
          while ( (*(_BYTE *)v82 & 2) == 0 );
LABEL_193:
          if ( v31 == v19 )
            goto LABEL_100;
          continue;
        }
        v87 = (unsigned __int64 *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
        v88 = *v87;
        if ( (*v87 & 2) != 0 )
        {
LABEL_205:
          v31 = v87;
          if ( v87 == v19 )
            goto LABEL_100;
        }
        else
        {
          while ( 1 )
          {
            if ( (unsigned __int64 *)v87[2] != v31 )
              goto LABEL_205;
            v31 = v87;
            v89 = v88 & 0xFFFFFFFFFFFFFFFCLL;
            v88 = *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v88 & 2) != 0 )
              break;
            v87 = (unsigned __int64 *)v89;
          }
          v31 = (unsigned __int64 *)v89;
          if ( (unsigned __int64 *)v89 == v19 )
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
  if ( !v111 )
  {
    v30 = *(_QWORD *)(a1 + 144);
    v107 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    goto LABEL_102;
  }
  v59 = *v19;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          if ( (v59 & 2) == 0 )
          {
LABEL_139:
            v60 = v19[1];
            if ( (*(_BYTE *)v60 & 2) != 0 )
            {
              v60 = v59 & 0xFFFFFFFFFFFFFFFCLL;
              v95 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v95 & 2) == 0 )
              {
                v96 = v19;
                do
                {
                  if ( *(unsigned __int64 **)(v60 + 8) != v96 )
                    break;
                  v96 = (unsigned __int64 *)v60;
                  v97 = v95 & 0xFFFFFFFFFFFFFFFCLL;
                  v95 = *(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCLL);
                  v60 = v97;
                }
                while ( (v95 & 2) == 0 );
              }
            }
            else
            {
              while ( (**(_BYTE **)(v60 + 16) & 2) == 0 )
                v60 = *(_QWORD *)(v60 + 16);
            }
            goto LABEL_141;
          }
LABEL_160:
          v60 = v19[2];
LABEL_141:
          v61 = *(_DWORD *)(v60 + 32);
          v12 = &v118;
          v123.m128i_i64[1] = 0;
          v124 = nullptr;
          v125 = 0u;
          v126 = 0;
          v123.m128i_i64[0] = (__int64)&off_4B9AE8;
          v127 = v61;
          if ( (unsigned int)sub_11AFF0(a1, (__int64)&v123)
            || (v62 = *(_QWORD *)(a1 + 432) + 104LL * v61, v63 = *(_DWORD *)(v62 + 24), (v63 & 0x8000) != 0) )
          {
            v30 = *(_QWORD *)(a1 + 144);
            v107 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
            if ( v19 )
              goto LABEL_166;
            goto LABEL_102;
          }
          BYTE1(v63) &= 0x7Eu;
          *(_DWORD *)(v62 + 24) = v63 | 0x100000;
          v64 = *(char **)(a1 + 456);
          v65 = &v64[4 * *(_QWORD *)(a1 + 464)];
          if ( v64 != v65 )
          {
            while ( v61 != *(_DWORD *)v64 )
            {
              v64 += 4;
              if ( v65 == v64 )
                goto LABEL_149;
            }
            if ( v65 != v64 )
            {
              memmove(v64, v64 + 4, v65 - v64 - 4);
              --*(_QWORD *)(a1 + 464);
            }
          }
LABEL_149:
          v59 = *v19;
          if ( (*v19 & 2) != 0 )
          {
            v67 = v19[2];
          }
          else
          {
            v66 = v19[1];
            if ( (*(_BYTE *)v66 & 2) != 0 )
            {
              v67 = v59 & 0xFFFFFFFFFFFFFFFCLL;
              v98 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v98 & 2) == 0 )
              {
                v99 = v19;
                do
                {
                  if ( v99 != *(unsigned __int64 **)(v67 + 8) )
                    break;
                  v99 = (unsigned __int64 *)v67;
                  v100 = v98 & 0xFFFFFFFFFFFFFFFCLL;
                  v98 = *(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
                  v67 = v100;
                }
                while ( (v98 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v67 = v66;
                v66 = *(_QWORD *)(v66 + 16);
              }
              while ( (*(_BYTE *)v66 & 2) == 0 );
            }
          }
          if ( !v19 )
            continue;
          break;
        }
        v68 = (__int64 *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v59 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_162;
        if ( (*(_BYTE *)(v59 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          continue;
        break;
      }
      v69 = *(_QWORD *)(v67 + 24);
      while ( 2 )
      {
        if ( v69 < v68[3] )
        {
          v68 = (__int64 *)v68[1];
          goto LABEL_158;
        }
        if ( v69 > v68[3] )
        {
          v68 = (__int64 *)v68[2];
LABEL_158:
          if ( (*(_BYTE *)v68 & 2) != 0 )
          {
            if ( (v59 & 2) == 0 )
              goto LABEL_139;
            goto LABEL_160;
          }
          continue;
        }
        break;
      }
      if ( v68 == (__int64 *)v19 )
        continue;
      break;
    }
LABEL_162:
    v118.m128i_i64[0] = (__int64)v19;
    v12 = &v118;
    v118.m128i_i64[1] = v111;
    sub_22A480((unsigned __int64 **)&v118, v68);
    v111 = v118.m128i_i64[1];
    v19 = (unsigned __int64 *)v118.m128i_i64[0];
    if ( v118.m128i_i64[1] )
    {
      v59 = *(_QWORD *)v118.m128i_i64[0];
      continue;
    }
    break;
  }
LABEL_164:
  v30 = *(_QWORD *)(a1 + 144);
  v107 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( v19 && v111 )
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
    sub_367B40(a1, v30, *(_QWORD *)(a1 + 144) + v32, *(_DWORD *)(a1 + 440), v115 == 1);
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121);
  }
  qfree(v119);
  if ( !v19 )
    goto LABEL_80;
  if ( !v111 )
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
    v40 = (__int64 *)v34[2];
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
      sub_364390(v39);
      goto LABEL_66;
    }
    goto LABEL_264;
  }
  sub_364390(v38);
  v39 = (__int64 *)v36[2];
  if ( (*(_BYTE *)v39 & 2) == 0 )
    goto LABEL_65;
LABEL_66:
  v37 = *v36;
  if ( (*v36 & 2) == 0 )
LABEL_264:
    *v36 = v37 | 2;
  if ( v36 )
    qfree(v36);
  v40 = (__int64 *)v34[2];
  if ( (*(_BYTE *)v40 & 2) == 0 )
  {
LABEL_70:
    v41 = (__int64 *)v40[1];
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
      v42 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v42 & 2) == 0 )
      {
LABEL_72:
        sub_364390(v42);
        goto LABEL_73;
      }
      v43 = *v40;
    }
    else
    {
      sub_364390(v41);
      v42 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v42 & 2) == 0 )
        goto LABEL_72;
LABEL_73:
      v43 = *v40;
      if ( (*v40 & 2) != 0 )
      {
LABEL_74:
        if ( v40 )
          qfree(v40);
        goto LABEL_76;
      }
    }
    *v40 = v43 | 2;
    goto LABEL_74;
  }
LABEL_76:
  v35 = *v34;
  if ( (*v34 & 2) == 0 )
    goto LABEL_255;
LABEL_77:
  if ( v33 > 3 )
    qfree(v34);
LABEL_79:
  qfree(v19);
LABEL_80:
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
  if ( v129 )
  {
    v130 = 0;
    qfree(v129);
  }
  return v137 - __readfsqword(0x28u);
}
