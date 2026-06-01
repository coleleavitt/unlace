__int64 __fastcall sub_449D00(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // eax
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // rdx
  bool v12; // zf
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  int *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  QT::QAbstractItemView *v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // r12
  _QWORD *v22; // rax
  int *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r8d
  void *v28; // rbp
  int *v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rbp
  __int64 v32; // rbx
  const char *v33; // rdi
  unsigned __int64 v34; // rax
  _QWORD *v35; // rcx
  const char *v36; // r12
  __int64 v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rbx
  _QWORD *v41; // rcx
  _QWORD *v42; // rbp
  const char *v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  _BOOL8 v49; // rdi
  __int64 *v50; // rax
  __int64 v51; // r11
  _QWORD *v52; // r15
  __int64 v53; // rbx
  const char *v54; // rdi
  const char *v55; // rcx
  char *v56; // rdi
  unsigned __int64 v57; // rbx
  char *v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // r9
  void *v61; // rdx
  _QWORD *v62; // r8
  void *v63; // r10
  void *v64; // rdx
  const char *v65; // rdi
  _QWORD *v66; // r10
  int v67; // eax
  unsigned __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rdx
  size_t v71; // rax
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  size_t v77; // r10
  void *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // r8
  _QWORD *v81; // r9
  unsigned __int64 v82; // rax
  _QWORD *v83; // rcx
  char *v84; // rsi
  char *i; // rdi
  __int64 v86; // rdx
  size_t v87; // rdx
  _QWORD **v88; // rax
  _QWORD **v89; // rax
  void *v90; // rax
  __int64 v91; // rdx
  char *v92; // rcx
  unsigned __int64 v93; // rax
  char *j; // r9
  __int64 v95; // rdx
  __int64 v96; // r13
  __int64 v97; // r12
  _QWORD *v98; // rbx
  _QWORD *v99; // rbp
  __int64 v100; // rdi
  void *v101; // rdi
  __int64 v102; // rax
  int v103; // [rsp+8h] [rbp-140h]
  unsigned __int64 v104; // [rsp+8h] [rbp-140h]
  int v105; // [rsp+8h] [rbp-140h]
  __int64 v106; // [rsp+8h] [rbp-140h]
  _QWORD *n; // [rsp+20h] [rbp-128h]
  size_t na; // [rsp+20h] [rbp-128h]
  __int64 nc; // [rsp+20h] [rbp-128h]
  size_t nb; // [rsp+20h] [rbp-128h]
  size_t nd; // [rsp+20h] [rbp-128h]
  int ne; // [rsp+20h] [rbp-128h]
  unsigned __int64 v114; // [rsp+28h] [rbp-120h]
  void *v115; // [rsp+28h] [rbp-120h]
  void *v116; // [rsp+28h] [rbp-120h]
  _OWORD *v117; // [rsp+28h] [rbp-120h]
  _QWORD *v118; // [rsp+30h] [rbp-118h]
  size_t v119; // [rsp+30h] [rbp-118h]
  size_t v120; // [rsp+30h] [rbp-118h]
  __int64 v121; // [rsp+38h] [rbp-110h]
  unsigned __int64 v122; // [rsp+40h] [rbp-108h]
  unsigned __int64 v123; // [rsp+40h] [rbp-108h]
  const char *v124; // [rsp+48h] [rbp-100h]
  void *v125; // [rsp+50h] [rbp-F8h]
  __int64 v126; // [rsp+58h] [rbp-F0h]
  int v127; // [rsp+60h] [rbp-E8h]
  unsigned __int8 v128; // [rsp+67h] [rbp-E1h]
  _QWORD *v129; // [rsp+68h] [rbp-E0h]
  __int64 *v131; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v132; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v133; // [rsp+98h] [rbp-B0h]
  __int64 v134; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v135; // [rsp+B8h] [rbp-90h]
  int v136; // [rsp+C8h] [rbp-80h]
  char v137[8]; // [rsp+D0h] [rbp-78h] BYREF
  int v138; // [rsp+D8h] [rbp-70h] BYREF
  _QWORD *v139; // [rsp+E0h] [rbp-68h]
  int *v140; // [rsp+E8h] [rbp-60h]
  int *v141; // [rsp+F0h] [rbp-58h]
  __int64 v142; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v143; // [rsp+108h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v143 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v132 = 0;
    v133 = 0;
LABEL_3:
    v138 = 0;
    v139 = nullptr;
    v140 = &v138;
    v141 = &v138;
    v142 = 0;
LABEL_4:
    v3 = v133 - 1;
    if ( (int)v133 - 1 >= 0 )
    {
      v4 = 4LL * (int)v3;
      v5 = 4 * ((int)v3 - (unsigned __int64)v3);
      while ( 1 )
      {
        v6 = (__int64 *)(*(_QWORD *)a2 + 88LL * *(int *)(v132 + v4));
        v7 = v6[6];
        if ( v7 )
        {
          v6[7] = 0;
          qfree(v7, (const char *)v2);
        }
        v8 = v6[3];
        if ( v8 )
        {
          v6[4] = 0;
          qfree(v8, (const char *)v2);
        }
        v9 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v9, (const char *)v2);
        }
        v2 = (__int64)(v6 + 11);
        memmove(v6, v6 + 11, *(_QWORD *)a2 + 88LL * *(_QWORD *)(a2 + 8) - (_QWORD)v6 - 88);
        --*(_QWORD *)(a2 + 8);
        if ( v5 == v4 )
          break;
        v4 -= 4;
      }
    }
    v128 = 1;
    goto LABEL_15;
  }
  v128 = sub_443870(*(__int64 **)a2, v2, 1u);
  if ( !v128 )
    return v128;
  v11 = *(_QWORD *)(a2 + 8);
  v132 = 0;
  v133 = 0;
  if ( !v11 )
    goto LABEL_3;
  v2 = 0;
  v132 = qvector_reserve(&v132, 0, v11, 4);
  v140 = &v138;
  v141 = &v138;
  v138 = 0;
  v12 = *(_QWORD *)(a2 + 8) == 0;
  v139 = nullptr;
  v142 = 0;
  if ( v12 )
    goto LABEL_4;
  v127 = 0;
  v13 = nullptr;
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)a2 + 88 * v14;
    v2 = *(unsigned int *)(v15 + 80);
    if ( v13 )
    {
      v16 = &v138;
      do
      {
        while ( 1 )
        {
          v17 = v13[2];
          v18 = v13[3];
          if ( (int)v2 > *((_DWORD *)v13 + 8) )
            break;
          v16 = (int *)v13;
          v13 = (_QWORD *)v13[2];
          if ( !v17 )
            goto LABEL_27;
        }
        v13 = (_QWORD *)v13[3];
      }
      while ( v18 );
LABEL_27:
      if ( v16 != &v138 && (int)v2 >= v16[8] )
      {
        v21 = *((_QWORD **)v16 + 5);
        goto LABEL_44;
      }
    }
    v136 = *(_DWORD *)(v15 + 80);
    v2 = (__int64)&v131;
    v134 = 0;
    v19 = *(QT::QAbstractItemView **)(a1 + 16);
    v135 = 0;
    if ( (unsigned int)sub_449270(v19, &v131, (__int64)&v134, 1) )
    {
      if ( v134 )
      {
        *(_QWORD *)&v135 = 0;
        qfree(v134, (const char *)&v131);
      }
      v128 = 0;
      v96 = (__int64)v140;
      if ( v140 != &v138 )
        goto LABEL_149;
      goto LABEL_159;
    }
    v20 = (_QWORD *)operator new(0x38u);
    v20[6] = 0;
    v21 = v20;
    v20 += 6;
    *((_OWORD *)v20 - 2) = 0;
    v129 = v20;
    *v21 = v20;
    v22 = v139;
    v21[1] = 1;
    v21[4] = 1065353216;
    v21[5] = 0;
    if ( v22 )
    {
      v2 = *(unsigned int *)(v15 + 80);
      v23 = &v138;
      do
      {
        while ( 1 )
        {
          v24 = v22[2];
          v25 = v22[3];
          if ( (int)v2 > *((_DWORD *)v22 + 8) )
            break;
          v23 = (int *)v22;
          v22 = (_QWORD *)v22[2];
          if ( !v24 )
            goto LABEL_35;
        }
        v22 = (_QWORD *)v22[3];
      }
      while ( v25 );
LABEL_35:
      if ( v23 != &v138 && (int)v2 >= v23[8] )
        goto LABEL_85;
    }
    else
    {
      v23 = &v138;
    }
    v26 = operator new(0x30u);
    v27 = *(_DWORD *)(v15 + 80);
    *(_QWORD *)(v26 + 40) = 0;
    v28 = (void *)v26;
    *(_DWORD *)(v26 + 32) = v27;
    if ( v23 == &v138 )
    {
      if ( !v142 )
        goto LABEL_79;
      v29 = v141;
      v23 = nullptr;
      if ( v27 <= v141[8] )
        goto LABEL_79;
    }
    else
    {
      v2 = (unsigned int)v23[8];
      if ( v27 >= (int)v2 )
      {
        if ( v27 <= (int)v2 )
          goto LABEL_171;
        if ( v23 == v141 )
        {
LABEL_183:
          v29 = v23;
          if ( !v23 )
          {
LABEL_171:
            if ( v28 )
            {
              v2 = 48;
              operator delete(v28, 0x30u);
            }
            goto LABEL_85;
          }
          goto LABEL_184;
        }
        ne = v27;
        v102 = std::_Rb_tree_increment(v23);
        v27 = ne;
        v29 = (int *)v102;
        if ( ne >= *(_DWORD *)(v102 + 32) )
          goto LABEL_79;
        v2 = (unsigned int)v2;
        if ( !*((_QWORD *)v23 + 3) )
          goto LABEL_183;
        v23 = (int *)v102;
      }
      else
      {
        v29 = v23;
        if ( v23 == v140 )
          goto LABEL_80;
        v103 = v27;
        v30 = std::_Rb_tree_decrement(v23);
        v27 = v103;
        v29 = (int *)v30;
        if ( v103 <= *(_DWORD *)(v30 + 32) )
        {
LABEL_79:
          v2 = (unsigned int)v27;
          v105 = v27;
          v48 = sub_441560((__int64)v137, v27);
          v27 = v105;
          v23 = (int *)v48;
          goto LABEL_80;
        }
        if ( *(_QWORD *)(v30 + 24) )
          v29 = v23;
        else
          v23 = nullptr;
      }
    }
LABEL_80:
    if ( !v29 )
      goto LABEL_171;
    if ( !v23 && v29 != &v138 )
    {
      LODWORD(v2) = v29[8];
LABEL_184:
      v49 = (int)v2 > v27;
      goto LABEL_84;
    }
    v49 = 1;
LABEL_84:
    v2 = (__int64)v28;
    v23 = (int *)v28;
    std::_Rb_tree_insert_and_rebalance(v49, v28, v29, &v138);
    ++v142;
LABEL_85:
    v50 = v131;
    *((_QWORD *)v23 + 5) = v21;
    v106 = *v50;
    v121 = *v50 + 88 * v50[1];
    if ( v121 != *v50 )
    {
      while ( 1 )
      {
        v2 = v21[3];
        v51 = *(_QWORD *)(v106 + 56);
        if ( !v2 )
          break;
        v55 = *(const char **)(v106 + 48);
        v56 = (char *)&v55[v51];
        if ( &v55[v51] != v55 )
          goto LABEL_97;
        v60 = v21[1];
        v57 = 0xCBF29CE484222325LL;
        na = 0xCBF29CE484222325LL % v60;
LABEL_100:
        v61 = *(void **)(*v21 + 8 * na);
        if ( v61 )
        {
          v62 = *(_QWORD **)v61;
          if ( !*(_QWORD *)(*(_QWORD *)v61 + 16LL) )
            goto LABEL_102;
          v63 = *(void **)(*v21 + 8 * na);
          while ( 1 )
          {
            v2 = v62[1];
            v65 = &s1;
            if ( v51 )
              goto LABEL_104;
            v64 = v63;
            v66 = v62;
LABEL_105:
            v116 = v64;
            v126 = v51;
            v125 = v66;
            v124 = v55;
            v122 = v60;
            v118 = v62;
            v67 = strcmp(v65, (const char *)v2);
            v61 = v116;
            if ( !v67 )
              goto LABEL_133;
            v62 = (_QWORD *)*v118;
            if ( !*v118 )
              goto LABEL_115;
            v2 = v62[1];
            v68 = 0xCBF29CE484222325LL;
            v60 = v122;
            v55 = v124;
            v69 = v2 + v62[2];
            v63 = v125;
            v51 = v126;
            if ( v2 == v69 )
              break;
            do
            {
              v70 = *(char *)v2++;
              v68 = 0x100000001B3LL * (v70 ^ v68);
            }
            while ( v69 != v2 );
            if ( v68 % v122 != na )
              goto LABEL_115;
          }
          if ( na == 0xCBF29CE484222325LL % v122 )
          {
            v61 = v125;
LABEL_102:
            if ( v51 )
            {
              v63 = v61;
              v2 = (__int64)&s1;
LABEL_104:
              v64 = v63;
              v65 = v55;
              v66 = v62;
              goto LABEL_105;
            }
LABEL_133:
            if ( v61 && *(_QWORD *)v61 )
              goto LABEL_135;
          }
        }
LABEL_115:
        v117 = (_OWORD *)operator new(0x20u);
        *v117 = 0;
        v117[1] = 0;
        v71 = *(_QWORD *)(v106 + 56);
        v119 = v71;
        if ( v71 )
        {
          v90 = (void *)qalloc_or_throw(v71);
          *((_QWORD *)v117 + 1) = v90;
          *((_QWORD *)v117 + 3) = v119;
          memcpy(v90, *(const void **)(v106 + 48), v119);
          *((_QWORD *)v117 + 2) = v119;
        }
        v72 = v21[1];
        if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                (std::__detail::_Prime_rehash_policy *)(v21 + 4),
                                v72,
                                v21[3],
                                1u) )
        {
          v77 = v73;
          if ( v73 == 1 )
          {
            v21[6] = 0;
            v80 = v129;
          }
          else
          {
            if ( v73 > 0xFFFFFFFFFFFFFFFLL )
            {
              if ( v73 >> 61 )
                sub_162118(v21 + 4, v72, v73, v74, v75, v76);
              std::__throw_bad_alloc();
            }
            v123 = v73;
            nc = 8 * v73;
            v78 = (void *)operator new(8 * v73);
            v79 = memset(v78, 0, nc);
            v77 = v123;
            v80 = v79;
          }
          v81 = (_QWORD *)v21[2];
          v21[2] = 0;
          nb = 0;
          while ( v81 )
          {
            while ( 1 )
            {
              v82 = 0xCBF29CE484222325LL;
              v83 = v81;
              v81 = (_QWORD *)*v81;
              v84 = (char *)v83[1];
              for ( i = &v84[v83[2]]; i != v84; v82 = 0x100000001B3LL * (v86 ^ v82) )
                v86 = *v84++;
              v87 = v82 % v77;
              v88 = (_QWORD **)&v80[v82 % v77];
              if ( !*v88 )
                break;
              *v83 = **v88;
              **v88 = v83;
              if ( !v81 )
                goto LABEL_127;
            }
            *v83 = v21[2];
            v21[2] = v83;
            *v88 = v21 + 2;
            if ( *v83 )
              v80[nb] = v83;
            nb = v87;
          }
LABEL_127:
          if ( v129 != (_QWORD *)*v21 )
          {
            v120 = v77;
            nd = (size_t)v80;
            operator delete((void *)*v21, 8LL * v21[1]);
            v77 = v120;
            v80 = (_QWORD *)nd;
          }
          v21[1] = v77;
          *v21 = v80;
          na = v57 % v77;
        }
        else
        {
          v80 = (_QWORD *)*v21;
        }
        v2 = 8 * na;
        v89 = (_QWORD **)&v80[na];
        if ( *v89 )
        {
          *(_QWORD *)v117 = **v89;
          **v89 = v117;
        }
        else
        {
          v91 = v21[2];
          *(_QWORD *)v117 = v91;
          v21[2] = v117;
          if ( v91 )
          {
            v92 = *(char **)(v91 + 8);
            v93 = 0xCBF29CE484222325LL;
            for ( j = &v92[*(_QWORD *)(v91 + 16)]; j != v92; v93 = 0x100000001B3LL * (v95 ^ v93) )
              v95 = *v92++;
            v80[v93 % v21[1]] = v117;
            v89 = (_QWORD **)(v2 + *v21);
          }
          *v89 = v21 + 2;
        }
        ++v21[3];
LABEL_135:
        v106 += 88;
        if ( v106 == v121 )
          goto LABEL_136;
      }
      if ( v21[2] )
      {
        v115 = (void *)v15;
        v52 = (_QWORD *)v21[2];
        v53 = *(_QWORD *)(v106 + 56);
        while ( 1 )
        {
          if ( v52[2] )
          {
            v2 = v52[1];
            v54 = &s1;
            if ( !v53 )
              goto LABEL_90;
          }
          else
          {
            if ( !v53 )
            {
LABEL_142:
              v15 = (__int64)v115;
              goto LABEL_135;
            }
            v2 = (__int64)&s1;
          }
          v54 = *(const char **)(v106 + 48);
LABEL_90:
          if ( !strcmp(v54, (const char *)v2) )
            goto LABEL_142;
          v52 = (_QWORD *)*v52;
          if ( !v52 )
          {
            v15 = (__int64)v115;
            v51 = v53;
            v2 = 0;
            break;
          }
        }
      }
      v55 = *(const char **)(v106 + 48);
      v56 = (char *)&v55[v51];
      if ( v55 == &v55[v51] )
      {
        v57 = 0xCBF29CE484222325LL;
        na = 0xCBF29CE484222325LL % v21[1];
        goto LABEL_115;
      }
LABEL_97:
      v57 = 0xCBF29CE484222325LL;
      v58 = (char *)v55;
      do
      {
        v59 = *v58++;
        v57 = 0x100000001B3LL * (v59 ^ v57);
      }
      while ( v56 != v58 );
      v60 = v21[1];
      na = v57 % v60;
      if ( !v2 )
        goto LABEL_115;
      goto LABEL_100;
    }
LABEL_136:
    if ( v134 )
    {
      *(_QWORD *)&v135 = 0;
      qfree(v134, (const char *)v2);
    }
LABEL_44:
    if ( !v21[3] )
    {
      v31 = (_QWORD *)v21[2];
      if ( v31 )
      {
        v32 = *(_QWORD *)(v15 + 56);
        while ( v31[2] )
        {
          v2 = v31[1];
          v33 = &s1;
          if ( v32 )
            goto LABEL_53;
LABEL_48:
          if ( !strcmp(v33, (const char *)v2) )
            goto LABEL_56;
          v31 = (_QWORD *)*v31;
          if ( !v31 )
            goto LABEL_73;
        }
        if ( !v32 )
          goto LABEL_56;
        v2 = (__int64)&s1;
LABEL_53:
        v33 = *(const char **)(v15 + 48);
        goto LABEL_48;
      }
LABEL_73:
      v47 = v133;
      v2 = v132;
      if ( *((_QWORD *)&v133 + 1) < (unsigned __int64)(v133 + 1) )
      {
        v132 = qvector_reserve(&v132, v132, v133 + 1, 4);
        v2 = v132;
        v47 = v133;
      }
      *(_DWORD *)(v2 + 4 * v47) = v127;
      *(_QWORD *)&v133 = v133 + 1;
      goto LABEL_56;
    }
    v34 = v21[1];
    v35 = (_QWORD *)*v21;
    v36 = *(const char **)(v15 + 48);
    v37 = *(_QWORD *)(v15 + 56);
    v104 = v34;
    v38 = 0xCBF29CE484222325LL;
    if ( v36 != &v36[v37] )
    {
      v2 = (__int64)v36;
      do
      {
        v39 = *(char *)v2++;
        v38 = 0x100000001B3LL * (v39 ^ v38);
      }
      while ( &v36[v37] != (const char *)v2 );
    }
    v40 = (_QWORD *)v35[v38 % v104];
    v114 = v38 % v104;
    if ( !v40 )
      goto LABEL_73;
    v41 = (_QWORD *)*v40;
    if ( *(_QWORD *)(*v40 + 16LL) )
    {
      v42 = v40;
      while ( 1 )
      {
        v2 = v41[1];
        v43 = &s1;
        if ( v37 )
          goto LABEL_65;
        v40 = v42;
        v42 = v41;
LABEL_66:
        n = v41;
        if ( !strcmp(v43, (const char *)v2) )
          goto LABEL_54;
        v41 = (_QWORD *)*n;
        if ( !*n )
          goto LABEL_73;
        v2 = v41[1];
        v44 = 0xCBF29CE484222325LL;
        v45 = v2 + v41[2];
        if ( v2 == v45 )
          break;
        do
        {
          v46 = *(char *)v2++;
          v44 = 0x100000001B3LL * (v46 ^ v44);
        }
        while ( v2 != v45 );
        if ( v114 != v44 % v104 )
          goto LABEL_73;
      }
      if ( 0xCBF29CE484222325LL % v104 != v114 )
        goto LABEL_73;
      v40 = v42;
    }
    if ( v37 )
    {
      v42 = v40;
      v2 = (__int64)&s1;
LABEL_65:
      v40 = v42;
      v43 = v36;
      v42 = v41;
      goto LABEL_66;
    }
LABEL_54:
    if ( !v40 || !*v40 )
      goto LABEL_73;
LABEL_56:
    v14 = ++v127;
    if ( (unsigned __int64)v127 >= *(_QWORD *)(a2 + 8) )
      break;
    v13 = v139;
  }
  v96 = (__int64)v140;
  if ( v140 == &v138 )
    goto LABEL_4;
  do
  {
LABEL_149:
    v97 = *(_QWORD *)(v96 + 40);
    if ( v97 )
    {
      v98 = *(_QWORD **)(v97 + 16);
      while ( v98 )
      {
        v99 = v98;
        v98 = (_QWORD *)*v98;
        v100 = v99[1];
        if ( v100 )
        {
          v99[2] = 0;
          qfree(v100, (const char *)v2);
        }
        v2 = 32;
        operator delete(v99, 0x20u);
      }
      memset(*(void **)v97, 0, 8LL * *(_QWORD *)(v97 + 8));
      v101 = *(void **)v97;
      *(_QWORD *)(v97 + 24) = 0;
      *(_QWORD *)(v97 + 16) = 0;
      if ( v101 != (void *)(v97 + 48) )
        operator delete(v101, 8LL * *(_QWORD *)(v97 + 8));
      v2 = 56;
      operator delete((void *)v97, 0x38u);
    }
    v96 = std::_Rb_tree_increment(v96);
  }
  while ( (int *)v96 != &v138 );
  if ( v128 )
    goto LABEL_4;
LABEL_159:
  v128 = 0;
LABEL_15:
  sub_4418E0(v139);
  if ( v132 )
  {
    *(_QWORD *)&v133 = 0;
    qfree(v132, (const char *)v2);
  }
  return v128;
}
