unsigned __int64 __fastcall sub_79A240(__int64 *a1, char *a2, const char *a3, int a4, _QWORD *a5)
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
  __int64 v20; // rbp
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
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rax
  char v35; // cl
  bool v36; // dl
  __int64 v37; // rax
  _BYTE *v38; // r15
  __int64 v39; // r8
  unsigned __int64 v40; // r15
  __int64 v41; // rsi
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rcx
  char *v44; // rax
  char v45; // dl
  int i; // r14d
  __int64 v47; // r12
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rax
  char v50; // r9
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  const char *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r12
  __int64 v62; // r15
  unsigned __int64 v63; // r14
  __int64 v64; // rsi
  __int64 v65; // r12
  int v66; // ecx
  int v67; // r8d
  int v68; // r9d
  __int64 idcv_attr; // r14
  char v70; // al
  __int64 v71; // rdx
  __int64 j; // r12
  __int64 v73; // rbp
  unsigned __int64 v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // r14
  unsigned __int64 v80; // r12
  __int64 v81; // rsi
  __int64 v82; // r9
  unsigned __int64 v83; // r15
  __int64 v84; // r8
  __int64 v85; // rsi
  _QWORD *v86; // rdi
  _QWORD *v87; // r13
  _QWORD *v88; // rbp
  unsigned __int64 v89; // rax
  _QWORD *v90; // rdx
  size_t v91; // r12
  __int64 v92; // rbx
  unsigned __int64 v93; // r12
  __int64 v94; // r14
  __int64 v95; // rsi
  __int64 v96; // r12
  const char *v97; // r14
  __int64 v98; // rbp
  unsigned __int64 v99; // r15
  __int64 v100; // rsi
  __int64 v101; // rax
  bool v102; // al
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  _QWORD *k; // rax
  __int64 v108; // rsi
  __int64 v109; // rcx
  _QWORD *v110; // rdi
  void *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // rax
  size_t v115; // r9
  unsigned __int64 v116; // rdx
  __int64 v117; // r8
  unsigned __int64 v118; // r15
  __int64 v119; // rsi
  __int64 v120; // rax
  char v122; // [rsp+0h] [rbp-528h]
  unsigned int v123; // [rsp+0h] [rbp-528h]
  __int64 v124; // [rsp+0h] [rbp-528h]
  __int64 v125; // [rsp+0h] [rbp-528h]
  unsigned __int64 v126; // [rsp+0h] [rbp-528h]
  __int64 v127; // [rsp+8h] [rbp-520h]
  bool v128; // [rsp+8h] [rbp-520h]
  unsigned __int64 v129; // [rsp+8h] [rbp-520h]
  __int64 v130; // [rsp+8h] [rbp-520h]
  __int64 v131; // [rsp+8h] [rbp-520h]
  size_t v132; // [rsp+8h] [rbp-520h]
  size_t v133; // [rsp+10h] [rbp-518h]
  __int64 v134; // [rsp+10h] [rbp-518h]
  __int64 v135; // [rsp+10h] [rbp-518h]
  unsigned __int64 v136; // [rsp+18h] [rbp-510h]
  void *v137; // [rsp+20h] [rbp-508h] BYREF
  __int128 v138; // [rsp+28h] [rbp-500h]
  __int64 v139; // [rsp+40h] [rbp-4E8h] BYREF
  int v140; // [rsp+48h] [rbp-4E0h] BYREF
  _QWORD *v141; // [rsp+50h] [rbp-4D8h]
  int *v142; // [rsp+58h] [rbp-4D0h]
  int *v143; // [rsp+60h] [rbp-4C8h]
  __int64 v144; // [rsp+68h] [rbp-4C0h]
  void *ptr; // [rsp+70h] [rbp-4B8h] BYREF
  __int128 v146; // [rsp+78h] [rbp-4B0h] BYREF
  __int128 *v147; // [rsp+88h] [rbp-4A0h]
  __int128 *v148; // [rsp+90h] [rbp-498h]
  __int64 v149; // [rsp+98h] [rbp-490h]
  char v150[8]; // [rsp+A0h] [rbp-488h] BYREF
  __int128 v151; // [rsp+A8h] [rbp-480h]
  __int64 v152; // [rsp+B8h] [rbp-470h]
  char v153[8]; // [rsp+C0h] [rbp-468h] BYREF
  __int128 v154; // [rsp+C8h] [rbp-460h]
  __int64 v155; // [rsp+D8h] [rbp-450h]
  _BYTE v156[64]; // [rsp+E0h] [rbp-448h] BYREF
  char v157; // [rsp+120h] [rbp-408h] BYREF
  unsigned __int64 v158; // [rsp+4E8h] [rbp-40h]

  v158 = __readfsqword(0x28u);
  if ( !a3 )
    goto LABEL_16;
  if ( a4 > 0 )
  {
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
        goto LABEL_9;
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
      v134 = v11;
      v129 = v10;
      v77 = qvector_reserve(a1, v13, v10, 1);
      v11 = v134;
      v10 = v129;
      *a1 = v77;
      v13 = v77;
    }
    a1[1] = v10;
    *(_BYTE *)(v13 + v11) = 0;
    goto LABEL_8;
  }
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
    v133 = v17;
    v127 = v17 + 1;
    v25 = qvector_reserve(a1, v18, v19, 1);
    v17 = v133;
    v19 = v127;
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
LABEL_18:
    v24 = qvector_reserve(a1, v21, v22, 1);
    *a1 = v24;
    v21 = v24;
    goto LABEL_15;
  }
  v21 = *a1;
  v22 = 3;
  v23 = 2;
  if ( (unsigned __int64)a1[2] < 3 )
    goto LABEL_18;
LABEL_15:
  a1[1] = v22;
  *(_BYTE *)(v21 + v23) = 0;
  *(_WORD *)(*a1 + v20) = 8250;
LABEL_16:
  v150[0] = 2;
  v152 = 0;
  v151 = 0;
  switch ( *a2 )
  {
    case 2:
      v42 = *((_QWORD *)a2 + 1);
      sub_35A910(a1);
      v43 = 0x8000000000000000LL;
      v44 = v156;
      do
      {
        v45 = 48 - (((v43 & v42) == 0) - 1);
        ++v44;
        v43 >>= 1;
        *(v44 - 1) = v45;
      }
      while ( &v157 != v44 );
      v157 = 0;
      sub_35A910(a1);
      for ( i = 0; i != 64; i += 8 )
      {
        v47 = a1[1];
        v48 = 2;
        v49 = v42 >> i;
        if ( (unsigned __int8)((v42 >> i) - 32) > 0xDEu )
          LOBYTE(v49) = 46;
        v50 = v49;
        if ( v47 )
          v48 = v47-- + 1;
        v51 = *a1;
        if ( a1[2] < v48 )
        {
          v122 = v49;
          v52 = qvector_reserve(a1, v51, v48, 1);
          *a1 = v52;
          v50 = v122;
          v51 = v52;
        }
        a1[1] = v48;
        *(_BYTE *)(v51 + v47) = v50;
        *(_BYTE *)(*a1 + v47 + 1) = 0;
      }
      v92 = a1[1];
      if ( v92 )
      {
        v93 = v92 + 1;
        v94 = a1[1];
        --v92;
      }
      else
      {
        v93 = 2;
        v94 = 1;
      }
      v95 = *a1;
      if ( a1[2] < v93 )
      {
        v106 = qvector_reserve(a1, v95, v93, 1);
        *a1 = v106;
        v95 = v106;
      }
      a1[1] = v93;
      *(_BYTE *)(v95 + v94) = 0;
      *(_BYTE *)(*a1 + v92) = 39;
      goto LABEL_54;
    case 3:
      copy_idcv(v150);
      idcv_string(v150, a2, v57, v58, v59, v60);
      a2 = v150;
      goto LABEL_55;
    case 5:
      v61 = a1[1];
      if ( v61 )
      {
        v62 = v61 + 5;
        v63 = v61 + 6;
        --v61;
      }
      else
      {
        v63 = 7;
        v62 = 6;
      }
      v64 = *a1;
      if ( a1[2] < v63 )
      {
        v104 = qvector_reserve(a1, v64, v63, 1);
        *a1 = v104;
        v64 = v104;
      }
      a1[1] = v63;
      *(_BYTE *)(v64 + v62) = 0;
      v65 = *a1 + v61;
      *(_DWORD *)v65 = 1701470831;
      *(_WORD *)(v65 + 4) = 29795;
      v140 = 0;
      v141 = nullptr;
      v142 = &v140;
      v143 = &v140;
      v144 = 0;
      LODWORD(v146) = 0;
      *((_QWORD *)&v146 + 1) = 0;
      v147 = &v146;
      v148 = &v146;
      v149 = 0;
      idcv_attr = first_idcv_attr(a2);
      if ( !idcv_attr )
        goto LABEL_71;
      while ( 1 )
      {
        v70 = *(_BYTE *)idcv_attr;
        if ( !*(_BYTE *)idcv_attr )
          goto LABEL_97;
        v71 = idcv_attr;
        if ( v70 != 48 )
          break;
        if ( *(_BYTE *)(idcv_attr + 1) )
          goto LABEL_97;
LABEL_69:
        qsscanf(idcv_attr, (unsigned int)"%llu", (unsigned int)&v137, v66, v67, v68);
        sub_42FD40(&v139, (unsigned __int64 *)&v137);
LABEL_70:
        idcv_attr = next_idcv_attr(a2, idcv_attr);
        if ( !idcv_attr )
        {
LABEL_71:
          for ( j = (__int64)v142; (int *)j != &v140; j = std::_Rb_tree_increment(j) )
          {
            qsnprintf((unsigned int)v156, 1024, (unsigned int)"%llu", *(_QWORD *)(j + 32), v67, v68);
            v73 = a1[1];
            v74 = 2;
            if ( v73 )
              v74 = v73-- + 1;
            v75 = *a1;
            if ( a1[2] < v74 )
            {
              v136 = v74;
              v76 = qvector_reserve(a1, v75, v74, 1);
              *a1 = v76;
              v74 = v136;
              v75 = v76;
            }
            a1[1] = v74;
            *(_BYTE *)(v75 + v73) = 10;
            *(_BYTE *)(*a1 + v73 + 1) = 0;
            v153[0] = 2;
            v155 = 0;
            v154 = 0;
            get_idcv_attr(v153, a2, v156, 1);
            print_idcv(a1, v153, v156, (unsigned int)(a4 + 2));
            free_idcv(v153);
          }
          v96 = (__int64)v147;
          if ( v147 != &v146 )
          {
            v123 = a4 + 2;
            do
            {
              v97 = haystack;
              if ( *(_QWORD *)(v96 + 40) )
                v97 = *(const char **)(v96 + 32);
              v98 = a1[1];
              v99 = 2;
              if ( v98 )
                v99 = v98-- + 1;
              v100 = *a1;
              if ( a1[2] < v99 )
              {
                v101 = qvector_reserve(a1, v100, v99, 1);
                *a1 = v101;
                v100 = v101;
              }
              a1[1] = v99;
              *(_BYTE *)(v100 + v98) = 10;
              *(_BYTE *)(*a1 + v98 + 1) = 0;
              v153[0] = 2;
              v155 = 0;
              v154 = 0;
              get_idcv_attr(v153, a2, v97, 1);
              print_idcv(a1, v153, v97, v123);
              free_idcv(v153);
              v96 = std::_Rb_tree_increment(v96);
            }
            while ( (__int128 *)v96 != &v146 );
          }
          sub_791470(*((_QWORD **)&v146 + 1));
          sub_790E10(v141);
          goto LABEL_54;
        }
      }
      while ( (unsigned __int8)(v70 - 48) <= 9u )
      {
        v70 = *(_BYTE *)++v71;
        if ( !v70 )
          goto LABEL_69;
      }
LABEL_97:
      v137 = nullptr;
      v138 = 0;
      v91 = strlen((const char *)idcv_attr);
      v137 = (void *)qvector_reserve(&v137, 0, v91 + 1, 1);
      *(_QWORD *)&v138 = v91 + 1;
      memmove(v137, (const void *)idcv_attr, v91);
      *((_BYTE *)v137 + v91) = 0;
      sub_791F80(&ptr, (__int64)&v137);
      if ( v137 )
      {
        *(_QWORD *)&v138 = 0;
        qfree(v137);
      }
      goto LABEL_70;
    case 6:
    case 8:
    case 9:
      sub_35A910(a1);
      goto LABEL_54;
    case 7:
LABEL_55:
      v54 = *((_QWORD *)a2 + 2);
      v55 = 0;
      v56 = haystack;
      ptr = nullptr;
      v146 = 0;
      if ( v54 )
      {
        v56 = *((const char **)a2 + 1);
        v55 = (unsigned int)(v54 - 1);
      }
      qstr2user(&ptr, v56, v55);
      sub_35A910(a1);
      if ( ptr )
      {
        *(_QWORD *)&v146 = 0;
        qfree(ptr);
      }
      goto LABEL_54;
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
        v130 = v27;
        v105 = qvector_reserve(a1, v29, v28, 1);
        *a1 = v105;
        v27 = v130;
        v29 = v105;
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
          {
LABEL_33:
            v36 = 1;
            if ( v31 != v32 )
              v36 = (unsigned __int64)a2 < v31[4];
            goto LABEL_35;
          }
          v33 = *(_QWORD *)(std::_Rb_tree_decrement(v31) + 32);
        }
        if ( v33 >= (unsigned __int64)a2 )
          goto LABEL_84;
        goto LABEL_33;
      }
      if ( v32 != (_QWORD *)a5[3] && *(_QWORD *)(std::_Rb_tree_decrement(a5 + 1) + 32) >= (unsigned __int64)a2 )
        goto LABEL_84;
      v31 = a5 + 1;
      v36 = 1;
LABEL_35:
      v128 = v36;
      v37 = operator new(0x28u);
      *(_QWORD *)(v37 + 32) = a2;
      std::_Rb_tree_insert_and_rebalance(v128, v37, v31, a5 + 1);
      ++a5[5];
      v38 = (_BYTE *)deref_idcv(a2, 1);
      if ( v38 )
      {
        sub_79A240(a1, v38, 0, (unsigned int)(a4 + 4), a5);
        if ( a4 <= 0 || *v38 != 5 )
          goto LABEL_38;
        v114 = a1[1];
        v115 = a4;
        if ( v114 )
        {
          v118 = v114 - 1;
          v117 = a4 + v114 - 1;
          v116 = a4 + v114;
          if ( v114 >= v116 )
          {
LABEL_147:
            memset((void *)(v118 + *a1), 32, v115);
LABEL_38:
            v39 = a1[1];
            v40 = 2;
            if ( v39 )
              v40 = v39-- + 1;
            v41 = *a1;
            if ( a1[2] < v40 )
            {
              v125 = v39;
              v113 = qvector_reserve(a1, v41, v40, 1);
              *a1 = v113;
              v39 = v125;
              v41 = v113;
            }
            a1[1] = v40;
            *(_BYTE *)(v41 + v39) = 41;
            *(_BYTE *)(*a1 + v39 + 1) = 0;
            goto LABEL_89;
          }
        }
        else
        {
          v116 = a4 + 1LL;
          v117 = a4;
          v118 = 0;
        }
        v119 = *a1;
        if ( a1[2] < v116 )
        {
          v135 = v117;
          v132 = a4;
          v126 = v116;
          v120 = qvector_reserve(a1, v119, v116, 1);
          v117 = v135;
          v116 = v126;
          *a1 = v120;
          v119 = v120;
          v115 = v132;
        }
        a1[1] = v116;
        *(_BYTE *)(v119 + v117) = 0;
        goto LABEL_147;
      }
LABEL_84:
      v82 = a1[1];
      if ( v82 )
      {
        v84 = v82 + 1;
        v83 = v82 + 2;
        --v82;
      }
      else
      {
        v83 = 3;
        v84 = 2;
      }
      v85 = *a1;
      if ( a1[2] < v83 )
      {
        v131 = v82;
        v124 = v84;
        v112 = qvector_reserve(a1, v85, v83, 1);
        v82 = v131;
        v84 = v124;
        *a1 = v112;
        v85 = v112;
      }
      a1[1] = v83;
      *(_BYTE *)(v85 + v84) = 0;
      *(_WORD *)(*a1 + v82) = 10559;
LABEL_89:
      v86 = (_QWORD *)a5[2];
      v87 = a5 + 1;
      if ( !v86 )
      {
        v102 = 1;
        goto LABEL_120;
      }
      v88 = (_QWORD *)a5[2];
      while ( 1 )
      {
        v89 = v88[4];
        if ( v89 >= (unsigned __int64)a2 )
          break;
        v88 = (_QWORD *)v88[3];
LABEL_92:
        if ( !v88 )
        {
          v102 = v32 == v87;
LABEL_120:
          if ( (_QWORD *)a5[3] != v87 || !v102 )
            goto LABEL_54;
          goto LABEL_122;
        }
      }
      v90 = (_QWORD *)v88[2];
      if ( (unsigned __int64)a2 < v89 )
      {
        v87 = v88;
        v88 = (_QWORD *)v88[2];
        goto LABEL_92;
      }
      for ( k = (_QWORD *)v88[3]; k; k = (_QWORD *)k[2] )
      {
        while ( 1 )
        {
          v108 = k[3];
          if ( (unsigned __int64)a2 < k[4] )
            break;
          k = (_QWORD *)k[3];
          if ( !v108 )
            goto LABEL_129;
        }
        v87 = k;
      }
LABEL_129:
      while ( v90 )
      {
        while ( 1 )
        {
          v109 = v90[3];
          if ( v90[4] >= (unsigned __int64)a2 )
            break;
          v90 = (_QWORD *)v90[3];
          if ( !v109 )
            goto LABEL_132;
        }
        v88 = v90;
        v90 = (_QWORD *)v90[2];
      }
LABEL_132:
      if ( (_QWORD *)a5[3] == v88 && v87 == v32 )
      {
LABEL_122:
        sub_7912A0(v86);
        a5[3] = v32;
        a5[2] = 0;
        a5[4] = v32;
        a5[5] = 0;
        goto LABEL_54;
      }
      for ( ; v87 != v88; --a5[5] )
      {
        v110 = v88;
        v88 = (_QWORD *)std::_Rb_tree_increment(v88);
        v111 = (void *)std::_Rb_tree_rebalance_for_erase(v110, a5 + 1);
        operator delete(v111, 0x28u);
      }
LABEL_54:
      free_idcv(v150);
      return v158 - __readfsqword(0x28u);
    default:
      v78 = a1[1];
      if ( v78 )
      {
        v79 = v78 + 3;
        v80 = v78 + 4;
        --v78;
      }
      else
      {
        v80 = 5;
        v79 = 4;
      }
      v81 = *a1;
      if ( a1[2] < v80 )
      {
        v103 = qvector_reserve(a1, v81, v80, 1);
        *a1 = v103;
        v81 = v103;
      }
      a1[1] = v80;
      *(_BYTE *)(v81 + v79) = 0;
      *(_DWORD *)(*a1 + v78) = 1063543138;
      goto LABEL_54;
  }
}
