__int64 __fastcall sub_77CB90(__int64 *a1, char a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  _BOOL4 v8; // r12d
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r12
  _BOOL4 v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  _BOOL4 v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  _BOOL4 v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  _BOOL4 v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // r12d
  __int64 v35; // rax
  char v36; // dl
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  int v41; // eax
  __int64 v42; // rbx
  _BYTE *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rbx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rbx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  void **v58; // rsi
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  void **v63; // rsi
  __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rbx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rbx
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rbx
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  void **v88; // rsi
  __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  unsigned __int8 *v93; // rax
  unsigned __int8 *v94; // r12
  void **v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rbx
  int v100; // eax
  unsigned int v101; // eax
  __int64 v102; // rdi
  __int64 v103; // rdi
  unsigned int v104; // eax
  __int64 v105; // rdi
  __int64 v106; // rdi
  int v107; // eax
  int v108; // eax
  char *v109; // rbx
  char *v110; // r13
  int v111; // eax
  int v112; // eax
  char *v113; // rax
  char *v114; // rbx
  __int64 v115; // r13
  char *v116; // r15
  char *v117; // r14
  __int64 v118; // rax
  __int16 v119; // dx
  __int64 v120; // rax
  int v121; // eax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  char v140[8]; // [rsp+0h] [rbp-88h] BYREF
  void *src[2]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v142; // [rsp+18h] [rbp-70h]
  char v143[8]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v144; // [rsp+28h] [rbp-60h]
  __int64 v145; // [rsp+38h] [rbp-50h]
  unsigned __int64 v146; // [rsp+48h] [rbp-40h]

  v146 = __readfsqword(0x28u);
  v2 = (unsigned __int8)(a2 + 80);
  switch ( (char)v2 )
  {
    case 0:
      v90 = a1[1];
      v91 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v91 + 32 * v90 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v92 = a1[1];
        if ( v92 )
        {
          v133 = v92 - 1;
          a1[1] = v133;
          free_idcv(*a1 + 32 * v133);
        }
        free_idcv(v143);
      }
      v93 = (unsigned __int8 *)deref_idcv(*a1 + 32 * a1[1] - 32, 2);
      v94 = v93;
      if ( *v93 == 7 )
      {
        v9 = idcv_string(v140);
        if ( v9 )
        {
LABEL_140:
          free_idcv(v140);
          return v9;
        }
        if ( src[1] )
        {
          v113 = (char *)src[1] - 1;
          v114 = (char *)src[1] - 1;
          if ( src[1] != (char *)&dword_0 + 1 )
          {
            v115 = (*((_QWORD *)v94 + 2) == 0) + *((_QWORD *)v94 + 2) - 1LL;
            v116 = &v113[v115];
            v117 = &v113[(*((_QWORD *)v94 + 2) == 0) + *((_QWORD *)v94 + 2)];
            if ( *((_QWORD *)v94 + 3) < (unsigned __int64)v117 )
              *((_QWORD *)v94 + 1) = qvector_reserve(
                                       v94 + 8,
                                       *((_QWORD *)v94 + 1),
                                       &v113[(*((_QWORD *)v94 + 2) == 0) + *((_QWORD *)v94 + 2)],
                                       1);
            v118 = *((_QWORD *)v94 + 1);
            *((_QWORD *)v94 + 2) = v117;
            v116[v118] = 0;
            memcpy((void *)(v115 + *((_QWORD *)v94 + 1)), src[0], (size_t)v114);
          }
        }
      }
      else
      {
        v95 = (void **)v140;
        switch ( sub_776FB0(v93, v140) )
        {
          case 2uLL:
            *((_DWORD *)v94 + 2) += LODWORD(src[0]);
            break;
          case 3uLL:
            v95 = src;
            v112 = eadd(v94 + 8, src, v94 + 8, 0);
            if ( v112 != 1 )
            {
              if ( v112 == 4 )
              {
                v106 = 86;
                goto LABEL_142;
              }
              if ( v112 == 5 )
              {
                v106 = 98;
                goto LABEL_142;
              }
              v106 = 97;
              if ( v112 == 2 )
                goto LABEL_142;
            }
            break;
          case 5uLL:
            if ( !(unsigned int)deep_copy_idcv(v94, v94) )
              sub_776520(*((_QWORD **)v94 + 1), *((_QWORD *)src[0] + 3), (__int64)src[0] + 8);
            break;
          case 6uLL:
          case 8uLL:
            v106 = 1531;
LABEL_142:
            set_qerrno(v106, v95);
            break;
          case 7uLL:
            if ( !(unsigned int)idcv_int64(v94, v140) && !(unsigned int)idcv_int64(v140, v140) )
              goto LABEL_182;
            break;
          case 9uLL:
LABEL_182:
            *((_QWORD *)v94 + 1) += src[0];
            break;
          default:
            goto LABEL_223;
        }
      }
      goto LABEL_223;
    case 1:
      v85 = a1[1];
      v86 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v86 + 32 * v85 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v87 = a1[1];
        if ( v87 )
        {
          v134 = v87 - 1;
          a1[1] = v134;
          free_idcv(*a1 + 32 * v134);
        }
        free_idcv(v143);
      }
      v88 = (void **)v140;
      v89 = *a1 + 32 * a1[1] - 32;
      switch ( sub_776FB0((unsigned __int8 *)v89, v140) )
      {
        case 2uLL:
          v9 = 0;
          *(_DWORD *)(v89 + 8) -= LODWORD(src[0]);
          break;
        case 3uLL:
          v88 = src;
          v111 = eadd(v89 + 8, src, v89 + 8, 1);
          switch ( v111 )
          {
            case 1:
              goto LABEL_147;
            case 4:
              v105 = 86;
              goto LABEL_139;
            case 5:
              v105 = 98;
              goto LABEL_139;
          }
          v105 = 97;
          if ( v111 == 2 )
            goto LABEL_139;
          v9 = 0;
          break;
        case 5uLL:
          v9 = deep_copy_idcv(v89, v89);
          if ( !v9 )
          {
            v109 = *((char **)src[0] + 3);
            v110 = (char *)src[0] + 8;
            if ( v109 == (char *)src[0] + 8 )
              goto LABEL_147;
            do
            {
              sub_77B910(*(_QWORD *)(v89 + 8), (__int64)(v109 + 32));
              v109 = (char *)std::_Rb_tree_increment();
            }
            while ( v109 != v110 );
            v9 = 0;
          }
          break;
        case 6uLL:
        case 8uLL:
          v105 = 1531;
LABEL_139:
          v9 = set_qerrno(v105, v88);
          break;
        case 7uLL:
          v9 = idcv_int64(v89, v140);
          if ( !v9 )
          {
            v9 = idcv_int64(v140, v140);
            if ( !v9 )
              goto LABEL_146;
          }
          break;
        case 9uLL:
LABEL_146:
          *(_QWORD *)(v89 + 8) -= src[0];
          goto LABEL_147;
        default:
LABEL_147:
          v9 = 0;
          break;
      }
      goto LABEL_140;
    case 2:
      v60 = a1[1];
      v61 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v61 + 32 * v60 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v62 = a1[1];
        if ( v62 )
        {
          v138 = v62 - 1;
          a1[1] = v138;
          free_idcv(*a1 + 32 * v138);
        }
        free_idcv(v143);
      }
      v63 = (void **)v140;
      v64 = *a1 + 32 * a1[1] - 32;
      switch ( sub_776FB0((unsigned __int8 *)v64, v140) )
      {
        case 2uLL:
          v9 = 0;
          *(_DWORD *)(v64 + 8) *= LODWORD(src[0]);
          break;
        case 3uLL:
          v63 = src;
          v108 = emul(v64 + 8, src, v64 + 8);
          switch ( v108 )
          {
            case 1:
              goto LABEL_156;
            case 4:
              v102 = 86;
              goto LABEL_132;
            case 5:
              v102 = 98;
              goto LABEL_132;
          }
          v102 = 97;
          if ( v108 == 2 )
            goto LABEL_132;
          v9 = 0;
          break;
        case 5uLL:
        case 6uLL:
        case 8uLL:
          v102 = 1531;
LABEL_132:
          v9 = set_qerrno(v102, v63);
          break;
        case 7uLL:
          v9 = idcv_int64(v64, v140);
          if ( !v9 )
          {
            v9 = idcv_int64(v140, v140);
            if ( !v9 )
              goto LABEL_155;
          }
          break;
        case 9uLL:
LABEL_155:
          *(_QWORD *)(v64 + 8) *= (_QWORD)src[0];
          goto LABEL_156;
        default:
LABEL_156:
          v9 = 0;
          break;
      }
      goto LABEL_140;
    case 3:
      v55 = a1[1];
      v56 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v56 + 32 * v55 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v57 = a1[1];
        if ( v57 )
        {
          v137 = v57 - 1;
          a1[1] = v137;
          free_idcv(*a1 + 32 * v137);
        }
        free_idcv(v143);
      }
      v58 = (void **)v140;
      v59 = *a1 + 32 * a1[1] - 32;
      switch ( sub_776FB0((unsigned __int8 *)v59, v140) )
      {
        case 2uLL:
          if ( !LODWORD(src[0]) )
            goto LABEL_228;
          v9 = 0;
          *(int *)(v59 + 8) /= SLODWORD(src[0]);
          goto LABEL_140;
        case 3uLL:
          v58 = src;
          v107 = ediv(v59 + 8, src, v59 + 8);
          switch ( v107 )
          {
            case 1:
              goto LABEL_152;
            case 4:
              v103 = 86;
              goto LABEL_135;
            case 5:
              v103 = 98;
              goto LABEL_135;
          }
          v103 = 97;
          if ( v107 == 2 )
            goto LABEL_135;
          v9 = 0;
          goto LABEL_140;
        case 5uLL:
        case 6uLL:
        case 8uLL:
          v103 = 1531;
LABEL_135:
          v104 = set_qerrno(v103, v58);
          goto LABEL_136;
        case 7uLL:
          v9 = idcv_int64(v59, v140);
          if ( !v9 )
          {
            v9 = idcv_int64(v140, v140);
            if ( !v9 )
              goto LABEL_150;
          }
          goto LABEL_140;
        case 9uLL:
LABEL_150:
          if ( src[0] )
          {
            *(__int64 *)(v59 + 8) /= (__int64)src[0];
LABEL_152:
            v9 = 0;
          }
          else
          {
LABEL_228:
            v104 = set_qerrno(86, v140);
LABEL_136:
            v9 = v104;
          }
          break;
        default:
          goto LABEL_152;
      }
      goto LABEL_140;
    case 4:
      v96 = a1[1];
      v97 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v97 + 32 * v96 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v98 = a1[1];
        if ( v98 )
        {
          v131 = v98 - 1;
          a1[1] = v131;
          free_idcv(*a1 + 32 * v131);
        }
        free_idcv(v143);
      }
      v99 = *a1 + 32 * a1[1] - 32;
      v100 = sub_776FB0((unsigned __int8 *)v99, v140);
      if ( v100 != 2 )
      {
        if ( v100 != 9 )
        {
          v101 = set_qerrno(61, v140);
LABEL_130:
          v9 = v101;
          free_idcv(v140);
          return v9;
        }
        if ( src[0] )
        {
          *(__int64 *)(v99 + 8) %= (__int64)src[0];
          goto LABEL_223;
        }
LABEL_226:
        v101 = set_qerrno(86, v140);
        goto LABEL_130;
      }
      if ( !LODWORD(src[0]) )
        goto LABEL_226;
      *(int *)(v99 + 8) %= SLODWORD(src[0]);
LABEL_223:
      free_idcv(v140);
      return 0;
    case 5:
      v80 = a1[1];
      v81 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v81 + 32 * v80 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v82 = a1[1];
        if ( v82 )
        {
          v130 = v82 - 1;
          a1[1] = v130;
          free_idcv(*a1 + 32 * v130);
        }
        free_idcv(v143);
      }
      v83 = *a1 + 32 * a1[1] - 32;
      v84 = sub_776FB0((unsigned __int8 *)v83, v140);
      if ( v84 == 2 )
      {
        *(_DWORD *)(v83 + 8) = (LODWORD(src[0]) | *(_DWORD *)(v83 + 8)) != 0;
      }
      else
      {
        if ( v84 != 9 )
          goto LABEL_111;
        *(_QWORD *)(v83 + 8) = ((__int64)src[0] | *(_QWORD *)(v83 + 8)) != 0;
      }
      goto LABEL_223;
    case 6:
      v44 = a1[1];
      v45 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v45 + 32 * v44 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v46 = a1[1];
        if ( v46 )
        {
          v136 = v46 - 1;
          a1[1] = v136;
          free_idcv(*a1 + 32 * v136);
        }
        free_idcv(v143);
      }
      v47 = *a1 + 32 * a1[1] - 32;
      v48 = sub_776FB0((unsigned __int8 *)v47, v140);
      if ( v48 == 2 )
      {
        v121 = *(_DWORD *)(v47 + 8);
        if ( v121 )
          v121 = LODWORD(src[0]) != 0;
        *(_DWORD *)(v47 + 8) = v121;
      }
      else
      {
        if ( v48 != 9 )
          goto LABEL_111;
        v120 = *(_QWORD *)(v47 + 8);
        if ( v120 )
          v120 = src[0] != nullptr;
        *(_QWORD *)(v47 + 8) = v120;
      }
      goto LABEL_223;
    case 7:
      v2 = 0;
      v42 = *a1 + 32 * a1[1] - 32;
      v43 = (_BYTE *)deref_idcv(v42, 0);
      if ( v43 && *v43 == 5 )
      {
        free_idcv(v42);
        *(_DWORD *)(v42 + 8) = 1;
      }
      if ( *(_BYTE *)v42 == 2 )
      {
        *(_DWORD *)(v42 + 8) = *(_DWORD *)(v42 + 8) == 0;
      }
      else
      {
        if ( *(_BYTE *)v42 != 9 )
          return set_qerrno(61, v2);
        *(_QWORD *)(v42 + 8) = *(_QWORD *)(v42 + 8) == 0;
      }
      return 0;
    case 8:
      v75 = a1[1];
      v76 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v76 + 32 * v75 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v77 = a1[1];
        if ( v77 )
        {
          v129 = v77 - 1;
          a1[1] = v129;
          free_idcv(*a1 + 32 * v129);
        }
        free_idcv(v143);
      }
      v78 = *a1 + 32 * a1[1] - 32;
      v79 = sub_776FB0((unsigned __int8 *)v78, v140);
      if ( v79 == 2 )
      {
        *(_DWORD *)(v78 + 8) |= LODWORD(src[0]);
      }
      else
      {
        if ( v79 != 9 )
          goto LABEL_111;
        *(_QWORD *)(v78 + 8) |= (unsigned __int64)src[0];
      }
      goto LABEL_223;
    case 9:
      v70 = a1[1];
      v71 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v71 + 32 * v70 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v72 = a1[1];
        if ( v72 )
        {
          v135 = v72 - 1;
          a1[1] = v135;
          free_idcv(*a1 + 32 * v135);
        }
        free_idcv(v143);
      }
      v73 = *a1 + 32 * a1[1] - 32;
      v74 = sub_776FB0((unsigned __int8 *)v73, v140);
      if ( v74 == 2 )
      {
        *(_DWORD *)(v73 + 8) &= LODWORD(src[0]);
      }
      else
      {
        if ( v74 != 9 )
          goto LABEL_111;
        *(_QWORD *)(v73 + 8) &= (unsigned __int64)src[0];
      }
      goto LABEL_223;
    case 10:
      v50 = a1[1];
      v51 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v51 + 32 * v50 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v52 = a1[1];
        if ( v52 )
        {
          v139 = v52 - 1;
          a1[1] = v139;
          free_idcv(*a1 + 32 * v139);
        }
        free_idcv(v143);
      }
      v53 = *a1 + 32 * a1[1] - 32;
      v54 = sub_776FB0((unsigned __int8 *)v53, v140);
      if ( v54 == 2 )
      {
        *(_DWORD *)(v53 + 8) ^= LODWORD(src[0]);
      }
      else
      {
        if ( v54 != 9 )
          goto LABEL_111;
        *(_QWORD *)(v53 + 8) ^= (unsigned __int64)src[0];
      }
      goto LABEL_223;
    case 11:
      v49 = *a1 + 32 * a1[1] - 32;
      if ( *(_BYTE *)v49 == 2 )
      {
        *(_DWORD *)(v49 + 8) = ~*(_DWORD *)(v49 + 8);
      }
      else
      {
        if ( *(_BYTE *)v49 != 9 )
          return set_qerrno(61, v2);
        *(_QWORD *)(v49 + 8) = ~*(_QWORD *)(v49 + 8);
      }
      return 0;
    case 12:
      v65 = a1[1];
      v66 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v66 + 32 * v65 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v67 = a1[1];
        if ( v67 )
        {
          v132 = v67 - 1;
          a1[1] = v132;
          free_idcv(*a1 + 32 * v132);
        }
        free_idcv(v143);
      }
      v68 = *a1 + 32 * a1[1] - 32;
      v69 = sub_776FB0((unsigned __int8 *)v68, v140);
      if ( v69 == 2 )
      {
        *(int *)(v68 + 8) >>= SLOBYTE(src[0]);
      }
      else
      {
        if ( v69 != 9 )
          goto LABEL_111;
        *(__int64 *)(v68 + 8) >>= SLOBYTE(src[0]);
      }
      goto LABEL_223;
    case 13:
      v37 = a1[1];
      v38 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v38 + 32 * v37 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v39 = a1[1];
        if ( v39 )
        {
          v122 = v39 - 1;
          a1[1] = v122;
          free_idcv(*a1 + 32 * v122);
        }
        free_idcv(v143);
      }
      v40 = *a1 + 32 * a1[1] - 32;
      v41 = sub_776FB0((unsigned __int8 *)v40, v140);
      if ( v41 == 2 )
      {
        *(_DWORD *)(v40 + 8) <<= SLOBYTE(src[0]);
      }
      else
      {
        if ( v41 != 9 )
        {
LABEL_111:
          v9 = set_qerrno(61, v140);
          free_idcv(v140);
          return v9;
        }
        *(_QWORD *)(v40 + 8) <<= SLOBYTE(src[0]);
      }
      goto LABEL_223;
    case 14:
      v35 = *a1 + 32 * a1[1] - 32;
      v36 = *(_BYTE *)v35;
      if ( *(_BYTE *)v35 == 3 )
      {
        v119 = *(_WORD *)(v35 + 22);
        if ( v119 )
          *(_WORD *)(v35 + 22) = v119 + 0x8000;
        return 0;
      }
      if ( v36 == 2 )
      {
        *(_DWORD *)(v35 + 8) = -*(_DWORD *)(v35 + 8);
        return 0;
      }
      if ( v36 == 9 )
      {
        *(_QWORD *)(v35 + 8) = -*(_QWORD *)(v35 + 8);
        return 0;
      }
      return set_qerrno(61, v2);
    case 15:
      return idcv_string(*a1 + 32 * a1[1] - 32);
    case 24:
      v25 = a1[1];
      v26 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v26 + 32 * v25 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v27 = a1[1];
        if ( v27 )
        {
          v125 = v27 - 1;
          a1[1] = v125;
          free_idcv(*a1 + 32 * v125);
        }
        free_idcv(v143);
      }
      v28 = *a1 + 32 * a1[1] - 32;
      v29 = sub_777130(v28, (__int64)v140) == 0;
      free_idcv(v28);
      free_idcv(v140);
      *(_DWORD *)(v28 + 8) = v29;
      free_idcv(v140);
      return 0;
    case 25:
      v20 = a1[1];
      v21 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v21 + 32 * v20 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v22 = a1[1];
        if ( v22 )
        {
          v127 = v22 - 1;
          a1[1] = v127;
          free_idcv(*a1 + 32 * v127);
        }
        free_idcv(v143);
      }
      v23 = *a1 + 32 * a1[1] - 32;
      v24 = sub_777130(v23, (__int64)v140) != 0;
      free_idcv(v23);
      free_idcv(v140);
      *(_DWORD *)(v23 + 8) = v24;
      free_idcv(v140);
      return 0;
    case 26:
      v15 = a1[1];
      v16 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v16 + 32 * v15 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v17 = a1[1];
        if ( v17 )
        {
          v128 = v17 - 1;
          a1[1] = v128;
          free_idcv(*a1 + 32 * v128);
        }
        free_idcv(v143);
      }
      v18 = *a1 + 32 * a1[1] - 32;
      v19 = sub_777130(v18, (__int64)v140) <= 0;
      free_idcv(v18);
      free_idcv(v140);
      *(_DWORD *)(v18 + 8) = v19;
      free_idcv(v140);
      return 0;
    case 27:
      v10 = a1[1];
      v11 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v11 + 32 * v10 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v12 = a1[1];
        if ( v12 )
        {
          v124 = v12 - 1;
          a1[1] = v124;
          free_idcv(*a1 + 32 * v124);
        }
        free_idcv(v143);
      }
      v13 = *a1 + 32 * a1[1] - 32;
      v14 = sub_777130(v13, (__int64)v140) >= 0;
      free_idcv(v13);
      free_idcv(v140);
      *(_DWORD *)(v13 + 8) = v14;
      free_idcv(v140);
      return 0;
    case 28:
      v30 = a1[1];
      v31 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v31 + 32 * v30 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v32 = a1[1];
        if ( v32 )
        {
          v123 = v32 - 1;
          a1[1] = v123;
          free_idcv(*a1 + 32 * v123);
        }
        free_idcv(v143);
      }
      v33 = *a1 + 32 * a1[1] - 32;
      v34 = (unsigned int)sub_777130(v33, (__int64)v140) >> 31;
      free_idcv(v33);
      free_idcv(v140);
      *(_DWORD *)(v33 + 8) = v34;
      free_idcv(v140);
      return 0;
    case 29:
      v4 = a1[1];
      v5 = *a1;
      v140[0] = 2;
      *(_OWORD *)src = 0;
      v142 = 0;
      if ( !(unsigned int)move_idcv(v140, v5 + 32 * v4 - 32) )
      {
        v143[0] = 2;
        v144 = 0;
        v145 = 0;
        copy_idcv(v143);
        v6 = a1[1];
        if ( v6 )
        {
          v126 = v6 - 1;
          a1[1] = v126;
          free_idcv(*a1 + 32 * v126);
        }
        free_idcv(v143);
      }
      v7 = *a1 + 32 * a1[1] - 32;
      v8 = sub_777130(v7, (__int64)v140) > 0;
      free_idcv(v7);
      free_idcv(v140);
      *(_DWORD *)(v7 + 8) = v8;
      free_idcv(v140);
      return 0;
    case 30:
      return idcv_long(*a1 + 32 * a1[1] - 32, v2);
    case 32:
      return idcv_float(*a1 + 32 * a1[1] - 32);
    case 33:
      return idcv_int64(*a1 + 32 * a1[1] - 32, v2);
    default:
      if ( !under_debugger )
        interr(1448);
      BUG();
  }
}

