unsigned __int64 __fastcall sub_779E00(__int64 *a1, char *a2, const char *a3, int a4, _QWORD *a5)
{
  unsigned __int64 v8; // rax
  size_t v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  size_t v14; // rax
  __int64 v15; // r14
  size_t v16; // r15
  size_t v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r8
  unsigned __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // r14
  _QWORD *v31; // r15
  _QWORD *v32; // r14
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rax
  char v35; // si
  _BYTE *v36; // r15
  __int64 v37; // r8
  unsigned __int64 v38; // r15
  __int64 v39; // rsi
  unsigned int v40; // ebx
  unsigned int v41; // ecx
  char *v42; // rax
  char v43; // dl
  int i; // r14d
  __int64 v45; // r9
  unsigned __int64 v46; // r15
  unsigned int v47; // eax
  char v48; // bp
  __int64 v49; // rsi
  __int64 v50; // rbx
  unsigned __int64 v51; // rbp
  __int64 v52; // r14
  __int64 v53; // rsi
  __int64 v55; // rax
  __int64 v56; // rdx
  const char *v57; // rsi
  __int64 v58; // rbp
  __int64 v59; // r15
  unsigned __int64 v60; // r14
  __int64 v61; // rsi
  __int64 v62; // rbp
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  __int64 idcv_attr; // r14
  char v67; // al
  __int64 v68; // rdx
  int *v69; // r12
  __int64 v70; // rbp
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // r14
  unsigned __int64 v77; // rbp
  __int64 v78; // rsi
  __int64 v79; // r9
  unsigned __int64 v80; // r15
  __int64 v81; // r8
  __int64 v82; // rsi
  _QWORD *v83; // rdi
  _QWORD *v84; // r13
  _QWORD *v85; // r12
  unsigned __int64 v86; // rax
  _QWORD *v87; // rdx
  size_t v88; // r12
  __int64 v89; // rax
  __int64 v90; // r12
  const char *v91; // r14
  __int64 v92; // rbp
  unsigned __int64 v93; // r15
  __int64 v94; // rsi
  __int64 v95; // rax
  bool v96; // al
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  _QWORD *j; // rax
  __int64 v102; // rsi
  __int64 v103; // rcx
  __int64 v104; // r12
  void *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned __int64 v108; // rax
  size_t v109; // r9
  unsigned __int64 v110; // rdx
  __int64 v111; // r8
  unsigned __int64 v112; // r15
  __int64 v113; // rsi
  __int64 v114; // rax
  int v115; // [rsp+0h] [rbp-528h]
  __int64 v116; // [rsp+0h] [rbp-528h]
  unsigned int v117; // [rsp+0h] [rbp-528h]
  __int64 v118; // [rsp+0h] [rbp-528h]
  __int64 v119; // [rsp+0h] [rbp-528h]
  unsigned __int64 v120; // [rsp+0h] [rbp-528h]
  __int64 v121; // [rsp+8h] [rbp-520h]
  unsigned __int64 v122; // [rsp+8h] [rbp-520h]
  __int64 v123; // [rsp+8h] [rbp-520h]
  __int64 v124; // [rsp+8h] [rbp-520h]
  size_t v125; // [rsp+8h] [rbp-520h]
  size_t v126; // [rsp+10h] [rbp-518h]
  unsigned int v127; // [rsp+10h] [rbp-518h]
  __int64 v128; // [rsp+10h] [rbp-518h]
  __int64 v129; // [rsp+10h] [rbp-518h]
  unsigned __int64 v130; // [rsp+18h] [rbp-510h]
  void *v131; // [rsp+20h] [rbp-508h] BYREF
  __int128 v132; // [rsp+28h] [rbp-500h]
  __int64 v133; // [rsp+40h] [rbp-4E8h] BYREF
  int v134; // [rsp+48h] [rbp-4E0h] BYREF
  _QWORD *v135; // [rsp+50h] [rbp-4D8h]
  int *v136; // [rsp+58h] [rbp-4D0h]
  int *v137; // [rsp+60h] [rbp-4C8h]
  __int64 v138; // [rsp+68h] [rbp-4C0h]
  void *ptr; // [rsp+70h] [rbp-4B8h] BYREF
  __int128 v140; // [rsp+78h] [rbp-4B0h] BYREF
  __int128 *v141; // [rsp+88h] [rbp-4A0h]
  __int128 *v142; // [rsp+90h] [rbp-498h]
  __int64 v143; // [rsp+98h] [rbp-490h]
  char v144[8]; // [rsp+A0h] [rbp-488h] BYREF
  __int128 v145; // [rsp+A8h] [rbp-480h]
  __int64 v146; // [rsp+B8h] [rbp-470h]
  char v147[8]; // [rsp+C0h] [rbp-468h] BYREF
  __int128 v148; // [rsp+C8h] [rbp-460h]
  __int64 v149; // [rsp+D8h] [rbp-450h]
  _BYTE v150[32]; // [rsp+E0h] [rbp-448h] BYREF
  char v151; // [rsp+100h] [rbp-428h] BYREF
  unsigned __int64 v152; // [rsp+4E8h] [rbp-40h]

  v115 = a4;
  v152 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( a4 <= 0 )
      goto LABEL_9;
    v8 = a1[1];
    v9 = a4;
    if ( v8 )
    {
      v12 = v8 - 1;
      v11 = a4 + v8 - 1;
      v10 = a4 + v8;
      if ( v8 >= v10 )
      {
LABEL_8:
        memset((void *)(v12 + *a1), 32, v9);
LABEL_9:
        v14 = strlen(a3);
        v15 = a1[1];
        v16 = v14;
        v17 = v14;
        if ( v15 )
        {
          --v15;
          v17 = v14 + v15;
        }
        v18 = *a1;
        v19 = v17 + 1;
        if ( a1[2] < v17 + 1 )
        {
          v126 = v17;
          v121 = v17 + 1;
          v25 = qvector_reserve(a1, v18, v19, 1);
          v17 = v126;
          v19 = v121;
          *a1 = v25;
          v18 = v25;
        }
        a1[1] = v19;
        *(_BYTE *)(v18 + v17) = 0;
        memmove((void *)(v15 + *a1), a3, v16);
        v20 = a1[1];
        if ( v20 )
        {
          v23 = v20 + 1;
          v22 = v20 + 2;
          v21 = *a1;
          --v20;
          if ( a1[2] >= v22 )
            goto LABEL_15;
        }
        else
        {
          v21 = *a1;
          v22 = 3;
          v23 = 2;
          if ( (unsigned __int64)a1[2] >= 3 )
          {
LABEL_15:
            a1[1] = v22;
            *(_BYTE *)(v21 + v23) = 0;
            *(_WORD *)(*a1 + v20) = 8250;
            goto LABEL_16;
          }
        }
        v24 = qvector_reserve(a1, v21, v22, 1);
        *a1 = v24;
        v21 = v24;
        goto LABEL_15;
      }
    }
    else
    {
      v10 = a4 + 1LL;
      v11 = a4;
      v12 = 0;
    }
    v13 = *a1;
    if ( a1[2] < v10 )
    {
      v128 = v11;
      v122 = v10;
      v74 = qvector_reserve(a1, v13, v10, 1);
      v11 = v128;
      v10 = v122;
      *a1 = v74;
      v13 = v74;
    }
    a1[1] = v10;
    *(_BYTE *)(v13 + v11) = 0;
    goto LABEL_8;
  }
LABEL_16:
  v144[0] = 2;
  v146 = 0;
  v145 = 0;
  switch ( *a2 )
  {
    case 2:
      v40 = *((_DWORD *)a2 + 2);
      sub_357520(a1);
      v41 = 0x80000000;
      v42 = v150;
      do
      {
        v43 = 48 - (((v41 & v40) == 0) - 1);
        ++v42;
        v41 >>= 1;
        *(v42 - 1) = v43;
      }
      while ( &v151 != v42 );
      v151 = 0;
      sub_357520(a1);
      for ( i = 0; i != 32; i += 8 )
      {
        v45 = a1[1];
        v46 = 2;
        v47 = v40 >> i;
        if ( (unsigned __int8)((v40 >> i) - 32) > 0xDEu )
          LOBYTE(v47) = 46;
        v48 = v47;
        if ( v45 )
          v46 = v45-- + 1;
        v49 = *a1;
        if ( a1[2] < v46 )
        {
          v116 = v45;
          v89 = qvector_reserve(a1, v49, v46, 1);
          *a1 = v89;
          v45 = v116;
          v49 = v89;
        }
        a1[1] = v46;
        *(_BYTE *)(v49 + v45) = v48;
        *(_BYTE *)(*a1 + v45 + 1) = 0;
      }
      v50 = a1[1];
      if ( v50 )
      {
        v51 = v50 + 1;
        v52 = a1[1];
        --v50;
      }
      else
      {
        v51 = 2;
        v52 = 1;
      }
      v53 = *a1;
      if ( a1[2] < v51 )
      {
        v99 = qvector_reserve(a1, v53, v51, 1);
        *a1 = v99;
        v53 = v99;
      }
      a1[1] = v51;
      *(_BYTE *)(v53 + v52) = 0;
      *(_BYTE *)(*a1 + v50) = 39;
      goto LABEL_56;
    case 3:
      copy_idcv(v144);
      idcv_string(v144);
      a2 = v144;
      goto LABEL_58;
    case 5:
      v58 = a1[1];
      if ( v58 )
      {
        v59 = v58 + 5;
        v60 = v58 + 6;
        --v58;
      }
      else
      {
        v60 = 7;
        v59 = 6;
      }
      v61 = *a1;
      if ( a1[2] < v60 )
      {
        v98 = qvector_reserve(a1, v61, v60, 1);
        *a1 = v98;
        v61 = v98;
      }
      a1[1] = v60;
      *(_BYTE *)(v61 + v59) = 0;
      v62 = *a1 + v58;
      *(_DWORD *)v62 = 1701470831;
      *(_WORD *)(v62 + 4) = 29795;
      v134 = 0;
      v135 = nullptr;
      v136 = &v134;
      v137 = &v134;
      v138 = 0;
      LODWORD(v140) = 0;
      *((_QWORD *)&v140 + 1) = 0;
      v141 = &v140;
      v142 = &v140;
      v143 = 0;
      idcv_attr = first_idcv_attr(a2);
      if ( !idcv_attr )
        goto LABEL_73;
      while ( 1 )
      {
        v67 = *(_BYTE *)idcv_attr;
        if ( !*(_BYTE *)idcv_attr )
          goto LABEL_100;
        v68 = idcv_attr;
        if ( v67 != 48 )
          break;
        if ( *(_BYTE *)(idcv_attr + 1) )
          goto LABEL_100;
LABEL_71:
        qsscanf(idcv_attr, (int)"%u", (int)&v131, v63, v64, v65, v115);
        sub_41BFC0(&v133, (unsigned int *)&v131);
LABEL_72:
        idcv_attr = next_idcv_attr();
        if ( !idcv_attr )
        {
LABEL_73:
          v69 = v136;
          if ( v136 != &v134 )
          {
            v127 = v115 + 2;
            do
            {
              qsnprintf((int)v150, 1024, (int)"%u", v69[8], v64, v65, v115);
              v70 = a1[1];
              v71 = 2;
              if ( v70 )
                v71 = v70-- + 1;
              v72 = *a1;
              if ( a1[2] < v71 )
              {
                v130 = v71;
                v73 = qvector_reserve(a1, v72, v71, 1);
                *a1 = v73;
                v71 = v130;
                v72 = v73;
              }
              a1[1] = v71;
              *(_BYTE *)(v72 + v70) = 10;
              *(_BYTE *)(*a1 + v70 + 1) = 0;
              v147[0] = 2;
              v149 = 0;
              v148 = 0;
              get_idcv_attr();
              print_idcv(a1, v147, v150, v127);
              free_idcv(v147);
              v69 = (int *)std::_Rb_tree_increment();
            }
            while ( v69 != &v134 );
          }
          v90 = (__int64)v141;
          if ( v141 != &v140 )
          {
            v117 = v115 + 2;
            do
            {
              v91 = haystack;
              if ( *(_QWORD *)(v90 + 40) )
                v91 = *(const char **)(v90 + 32);
              v92 = a1[1];
              v93 = 2;
              if ( v92 )
                v93 = v92-- + 1;
              v94 = *a1;
              if ( a1[2] < v93 )
              {
                v95 = qvector_reserve(a1, v94, v93, 1);
                *a1 = v95;
                v94 = v95;
              }
              a1[1] = v93;
              *(_BYTE *)(v94 + v92) = 10;
              *(_BYTE *)(*a1 + v92 + 1) = 0;
              v147[0] = 2;
              v149 = 0;
              v148 = 0;
              get_idcv_attr();
              print_idcv(a1, v147, v91, v117);
              free_idcv(v147);
              v90 = std::_Rb_tree_increment();
            }
            while ( (__int128 *)v90 != &v140 );
          }
          sub_771030(*((_QWORD **)&v140 + 1));
          sub_7709D0(v135);
          goto LABEL_56;
        }
      }
      while ( (unsigned __int8)(v67 - 48) <= 9u )
      {
        v67 = *(_BYTE *)++v68;
        if ( !v67 )
          goto LABEL_71;
      }
LABEL_100:
      v131 = nullptr;
      v132 = 0;
      v88 = strlen((const char *)idcv_attr);
      v131 = (void *)qvector_reserve(&v131, 0, v88 + 1, 1);
      *(_QWORD *)&v132 = v88 + 1;
      memmove(v131, (const void *)idcv_attr, v88);
      *((_BYTE *)v131 + v88) = 0;
      sub_771B40(&ptr, (__int64)&v131);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      goto LABEL_72;
    case 6:
    case 8:
    case 9:
      sub_357520(a1);
      goto LABEL_56;
    case 7:
LABEL_58:
      v55 = *((_QWORD *)a2 + 2);
      v56 = 0;
      v57 = haystack;
      ptr = nullptr;
      v140 = 0;
      if ( v55 )
      {
        v57 = *((const char **)a2 + 1);
        v56 = (unsigned int)(v55 - 1);
      }
      qstr2user(&ptr, v57, v56);
      sub_357520(a1);
      if ( ptr )
      {
        *(_QWORD *)&v140 = 0;
        qfree(ptr);
      }
      goto LABEL_56;
    case 10:
      v26 = a1[1];
      if ( v26 )
      {
        v27 = v26 + 4;
        v28 = v26 + 5;
        --v26;
      }
      else
      {
        v28 = 6;
        v27 = 5;
      }
      v29 = *a1;
      if ( a1[2] < v28 )
      {
        v123 = v27;
        v100 = qvector_reserve(a1, v29, v28, 1);
        *a1 = v100;
        v27 = v123;
        v29 = v100;
      }
      a1[1] = v28;
      *(_BYTE *)(v29 + v27) = 0;
      v30 = *a1 + v26;
      *(_DWORD *)v30 = 543581554;
      *(_BYTE *)(v30 + 4) = 40;
      v31 = (_QWORD *)a5[2];
      v32 = a5 + 1;
      if ( v31 )
      {
        while ( 1 )
        {
          v33 = v31[4];
          v34 = (_QWORD *)v31[2];
          v35 = 1;
          if ( (unsigned __int64)a2 >= v33 )
          {
            v34 = (_QWORD *)v31[3];
            v35 = 0;
          }
          if ( !v34 )
            break;
          v31 = v34;
        }
        if ( v35 )
        {
          if ( v31 == (_QWORD *)a5[3] )
            goto LABEL_33;
          v33 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
        }
        if ( v33 >= (unsigned __int64)a2 )
          goto LABEL_87;
      }
      else if ( v32 != (_QWORD *)a5[3] && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= (unsigned __int64)a2 )
      {
        goto LABEL_87;
      }
LABEL_33:
      *(_QWORD *)(operator new(0x28u) + 32) = a2;
      std::_Rb_tree_insert_and_rebalance();
      ++a5[5];
      v36 = (_BYTE *)deref_idcv(a2, 1);
      if ( v36 )
      {
        sub_779E00(a1, v36, 0, (unsigned int)(v115 + 4), a5);
        if ( v115 <= 0 || *v36 != 5 )
          goto LABEL_36;
        v108 = a1[1];
        v109 = v115;
        if ( v108 )
        {
          v112 = v108 - 1;
          v111 = v115 + v108 - 1;
          v110 = v115 + v108;
          if ( v108 >= v110 )
          {
LABEL_145:
            memset((void *)(v112 + *a1), 32, v109);
LABEL_36:
            v37 = a1[1];
            v38 = 2;
            if ( v37 )
              v38 = v37-- + 1;
            v39 = *a1;
            if ( a1[2] < v38 )
            {
              v119 = v37;
              v107 = qvector_reserve(a1, v39, v38, 1);
              *a1 = v107;
              v37 = v119;
              v39 = v107;
            }
            a1[1] = v38;
            *(_BYTE *)(v39 + v37) = 41;
            *(_BYTE *)(*a1 + v37 + 1) = 0;
            goto LABEL_92;
          }
        }
        else
        {
          v110 = v115 + 1LL;
          v111 = v115;
          v112 = 0;
        }
        v113 = *a1;
        if ( a1[2] < v110 )
        {
          v129 = v111;
          v125 = v115;
          v120 = v110;
          v114 = qvector_reserve(a1, v113, v110, 1);
          v111 = v129;
          v110 = v120;
          *a1 = v114;
          v113 = v114;
          v109 = v125;
        }
        a1[1] = v110;
        *(_BYTE *)(v113 + v111) = 0;
        goto LABEL_145;
      }
LABEL_87:
      v79 = a1[1];
      if ( v79 )
      {
        v81 = v79 + 1;
        v80 = v79 + 2;
        --v79;
      }
      else
      {
        v80 = 3;
        v81 = 2;
      }
      v82 = *a1;
      if ( a1[2] < v80 )
      {
        v124 = v79;
        v118 = v81;
        v106 = qvector_reserve(a1, v82, v80, 1);
        v79 = v124;
        v81 = v118;
        *a1 = v106;
        v82 = v106;
      }
      a1[1] = v80;
      *(_BYTE *)(v82 + v81) = 0;
      *(_WORD *)(*a1 + v79) = 10559;
LABEL_92:
      v83 = (_QWORD *)a5[2];
      v84 = a5 + 1;
      if ( !v83 )
      {
        v96 = 1;
        goto LABEL_118;
      }
      v85 = (_QWORD *)a5[2];
      break;
    default:
      v75 = a1[1];
      if ( v75 )
      {
        v76 = v75 + 3;
        v77 = v75 + 4;
        --v75;
      }
      else
      {
        v77 = 5;
        v76 = 4;
      }
      v78 = *a1;
      if ( a1[2] < v77 )
      {
        v97 = qvector_reserve(a1, v78, v77, 1);
        *a1 = v97;
        v78 = v97;
      }
      a1[1] = v77;
      *(_BYTE *)(v78 + v76) = 0;
      *(_DWORD *)(*a1 + v75) = 1063543138;
      goto LABEL_56;
  }
  while ( 1 )
  {
    v86 = v85[4];
    if ( v86 >= (unsigned __int64)a2 )
      break;
    v85 = (_QWORD *)v85[3];
LABEL_95:
    if ( !v85 )
    {
      v96 = v32 == v84;
LABEL_118:
      if ( (_QWORD *)a5[3] != v84 || !v96 )
        goto LABEL_56;
      goto LABEL_120;
    }
  }
  v87 = (_QWORD *)v85[2];
  if ( (unsigned __int64)a2 < v86 )
  {
    v84 = v85;
    v85 = (_QWORD *)v85[2];
    goto LABEL_95;
  }
  for ( j = (_QWORD *)v85[3]; j; j = (_QWORD *)j[2] )
  {
    while ( 1 )
    {
      v102 = j[3];
      if ( (unsigned __int64)a2 < j[4] )
        break;
      j = (_QWORD *)j[3];
      if ( !v102 )
        goto LABEL_127;
    }
    v84 = j;
  }
LABEL_127:
  while ( v87 )
  {
    while ( 1 )
    {
      v103 = v87[3];
      if ( v87[4] >= (unsigned __int64)a2 )
        break;
      v87 = (_QWORD *)v87[3];
      if ( !v103 )
        goto LABEL_130;
    }
    v85 = v87;
    v87 = (_QWORD *)v87[2];
  }
LABEL_130:
  if ( (_QWORD *)a5[3] == v85 && v84 == v32 )
  {
LABEL_120:
    sub_770E60(v83);
    a5[3] = v32;
    a5[2] = 0;
    a5[4] = v32;
    a5[5] = 0;
    goto LABEL_56;
  }
  if ( v85 != v84 )
  {
    do
    {
      v104 = std::_Rb_tree_increment();
      v105 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v105, 0x28u);
      --a5[5];
    }
    while ( v84 != (_QWORD *)v104 );
  }
LABEL_56:
  free_idcv(v144);
  return v152 - __readfsqword(0x28u);
}

