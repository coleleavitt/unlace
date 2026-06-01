__int64 __fastcall sub_79CFF0(_QWORD *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  bool v12; // r12
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  bool v18; // bl
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  bool v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  bool v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  bool v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned int v38; // ebx
  __int64 v39; // rax
  char v40; // dl
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rbx
  _BYTE *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rbx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rbx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rbx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rbx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rbx
  int v82; // eax
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rbx
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // r12
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // r12
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  unsigned __int8 *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  unsigned __int8 *v105; // r12
  __int64 v106; // rdi
  unsigned int v107; // eax
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // rdi
  int v111; // eax
  __int64 v112; // rbx
  char *i; // r13
  int v114; // eax
  int v115; // eax
  int v116; // eax
  __int64 v117; // rax
  __int16 v118; // dx
  char *v119; // rax
  char *v120; // rbx
  __int64 v121; // r13
  char *v122; // r15
  char *v123; // r14
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
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  char v143[8]; // [rsp+0h] [rbp-88h] BYREF
  void *src[2]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v145; // [rsp+18h] [rbp-70h]
  char v146[8]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v147; // [rsp+28h] [rbp-60h]
  __int64 v148; // [rsp+38h] [rbp-50h]
  unsigned __int64 v149; // [rsp+48h] [rbp-40h]

  v149 = __readfsqword(0x28u);
  v6 = (unsigned __int8)(a2 + 80);
  switch ( (char)v6 )
  {
    case 0:
      v97 = a1[1];
      v98 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v98 + 32 * v97 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v99 = a1[1];
        if ( v99 )
        {
          v132 = v99 - 1;
          a1[1] = v132;
          free_idcv(*a1 + 32 * v132);
        }
        free_idcv(v146);
      }
      v100 = (unsigned __int8 *)deref_idcv(*a1 + 32LL * a1[1] - 32, 2);
      v105 = v100;
      if ( *v100 == 7 )
      {
        v13 = idcv_string(v143, 2, v101, v102, v103, v104);
        if ( !v13 )
        {
          if ( src[1] )
          {
            v119 = (char *)src[1] - 1;
            v120 = (char *)src[1] - 1;
            if ( src[1] != (char *)&dword_0 + 1 )
            {
              v121 = (*((_QWORD *)v105 + 2) == 0) + *((_QWORD *)v105 + 2) - 1LL;
              v122 = &v119[v121];
              v123 = &v119[(*((_QWORD *)v105 + 2) == 0) + *((_QWORD *)v105 + 2)];
              if ( *((_QWORD *)v105 + 3) < (unsigned __int64)v123 )
                *((_QWORD *)v105 + 1) = qvector_reserve(
                                          v105 + 8,
                                          *((_QWORD *)v105 + 1),
                                          &v119[(*((_QWORD *)v105 + 2) == 0) + *((_QWORD *)v105 + 2)],
                                          1);
              v124 = *((_QWORD *)v105 + 1);
              *((_QWORD *)v105 + 2) = v123;
              v122[v124] = 0;
              memcpy((void *)(v121 + *((_QWORD *)v105 + 1)), src[0], (size_t)v120);
            }
          }
          goto LABEL_157;
        }
LABEL_151:
        free_idcv(v143);
        return v13;
      }
      switch ( sub_7973F0(v100, v143) )
      {
        case 2uLL:
        case 9uLL:
          goto LABEL_156;
        case 3uLL:
          v116 = eadd(v105 + 8, src, v105 + 8, 0);
          switch ( v116 )
          {
            case 1:
              goto LABEL_157;
            case 4:
              v110 = 86;
              goto LABEL_159;
            case 5:
              v110 = 98;
              goto LABEL_159;
          }
          v110 = 97;
          if ( v116 == 2 )
LABEL_159:
            set_qerrno(v110);
LABEL_157:
          free_idcv(v143);
          return 0;
        case 5uLL:
          if ( !(unsigned int)deep_copy_idcv(v105, v105) )
            sub_796960(*((_QWORD **)v105 + 1), *((_QWORD *)src[0] + 3), (__int64)src[0] + 8);
          goto LABEL_157;
        case 6uLL:
        case 8uLL:
          v110 = 1531;
          goto LABEL_159;
        case 7uLL:
          if ( !(unsigned int)idcv_int64(v105) && !(unsigned int)idcv_int64(v143) )
LABEL_156:
            *((_QWORD *)v105 + 1) += src[0];
          goto LABEL_157;
        default:
          goto LABEL_157;
      }
    case 1:
      v89 = a1[1];
      v90 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v90 + 32 * v89 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v91 = a1[1];
        if ( v91 )
        {
          v137 = v91 - 1;
          a1[1] = v137;
          free_idcv(*a1 + 32 * v137);
        }
        free_idcv(v146);
      }
      v92 = *a1 + 32LL * a1[1] - 32;
      switch ( sub_7973F0((unsigned __int8 *)v92, v143) )
      {
        case 2uLL:
        case 9uLL:
          goto LABEL_149;
        case 3uLL:
          v114 = eadd(v92 + 8, src, v92 + 8, 1);
          switch ( v114 )
          {
            case 1:
              goto LABEL_150;
            case 4:
              v109 = 86;
              break;
            case 5:
              v109 = 98;
              break;
            default:
              v109 = 97;
              if ( v114 != 2 )
              {
LABEL_150:
                v13 = 0;
                goto LABEL_151;
              }
              break;
          }
LABEL_153:
          v13 = set_qerrno(v109);
          break;
        case 5uLL:
          v13 = deep_copy_idcv(v92, v92);
          if ( v13 )
            goto LABEL_151;
          v112 = *((_QWORD *)src[0] + 3);
          for ( i = (char *)src[0] + 8; (char *)v112 != i; v112 = std::_Rb_tree_increment(v112) )
            sub_79BD80(*(_QWORD *)(v92 + 8), v112 + 32);
          goto LABEL_150;
        case 6uLL:
        case 8uLL:
          v109 = 1531;
          goto LABEL_153;
        case 7uLL:
          v13 = idcv_int64(v92);
          if ( v13 )
            goto LABEL_151;
          v13 = idcv_int64(v143);
          if ( v13 )
            goto LABEL_151;
LABEL_149:
          *(_QWORD *)(v92 + 8) -= src[0];
          goto LABEL_150;
        default:
          goto LABEL_150;
      }
      goto LABEL_151;
    case 2:
      v93 = a1[1];
      v94 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v94 + 32 * v93 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v95 = a1[1];
        if ( v95 )
        {
          v135 = v95 - 1;
          a1[1] = v135;
          free_idcv(*a1 + 32 * v135);
        }
        free_idcv(v146);
      }
      v96 = *a1 + 32LL * a1[1] - 32;
      switch ( sub_7973F0((unsigned __int8 *)v96, v143) )
      {
        case 2uLL:
        case 9uLL:
          goto LABEL_145;
        case 3uLL:
          v111 = emul(v96 + 8, src, v96 + 8);
          switch ( v111 )
          {
            case 1:
              goto LABEL_146;
            case 4:
              v108 = 86;
              break;
            case 5:
              v108 = 98;
              break;
            default:
              v108 = 97;
              if ( v111 != 2 )
              {
                v13 = 0;
                goto LABEL_151;
              }
              break;
          }
LABEL_136:
          v13 = set_qerrno(v108);
          goto LABEL_151;
        case 5uLL:
        case 6uLL:
        case 8uLL:
          v108 = 1531;
          goto LABEL_136;
        case 7uLL:
          v13 = idcv_int64(v96);
          if ( v13 )
            goto LABEL_151;
          v13 = idcv_int64(v143);
          if ( v13 )
            goto LABEL_151;
LABEL_145:
          *(_QWORD *)(v96 + 8) *= (_QWORD)src[0];
LABEL_146:
          v13 = 0;
          goto LABEL_151;
        default:
          goto LABEL_146;
      }
    case 3:
      v69 = a1[1];
      v70 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v70 + 32 * v69 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v71 = a1[1];
        if ( v71 )
        {
          v139 = v71 - 1;
          a1[1] = v139;
          free_idcv(*a1 + 32 * v139);
        }
        free_idcv(v146);
      }
      v72 = *a1 + 32LL * a1[1] - 32;
      switch ( sub_7973F0((unsigned __int8 *)v72, v143) )
      {
        case 2uLL:
        case 9uLL:
          goto LABEL_140;
        case 3uLL:
          v115 = ediv(v72 + 8, src, v72 + 8);
          switch ( v115 )
          {
            case 1:
              goto LABEL_142;
            case 4:
              v106 = 86;
              break;
            case 5:
              v106 = 98;
              break;
            default:
              v106 = 97;
              if ( v115 != 2 )
              {
                v13 = 0;
                goto LABEL_151;
              }
              break;
          }
LABEL_132:
          v107 = set_qerrno(v106);
          goto LABEL_133;
        case 5uLL:
        case 6uLL:
        case 8uLL:
          v106 = 1531;
          goto LABEL_132;
        case 7uLL:
          v13 = idcv_int64(v72);
          if ( v13 )
            goto LABEL_151;
          v13 = idcv_int64(v143);
          if ( v13 )
            goto LABEL_151;
LABEL_140:
          if ( src[0] )
          {
            *(__int64 *)(v72 + 8) /= (__int64)src[0];
LABEL_142:
            v13 = 0;
          }
          else
          {
            v107 = set_qerrno(86);
LABEL_133:
            v13 = v107;
          }
          goto LABEL_151;
        default:
          goto LABEL_142;
      }
    case 4:
      v78 = a1[1];
      v79 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v79 + 32 * v78 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v80 = a1[1];
        if ( v80 )
        {
          v133 = v80 - 1;
          a1[1] = v133;
          free_idcv(*a1 + 32 * v133);
        }
        free_idcv(v146);
      }
      v81 = *a1 + 32LL * a1[1] - 32;
      v82 = sub_7973F0((unsigned __int8 *)v81, v143);
      if ( v82 == 2 || v82 == 9 )
      {
        if ( src[0] )
        {
          *(__int64 *)(v81 + 8) %= (__int64)src[0];
          free_idcv(v143);
          return 0;
        }
        v83 = set_qerrno(86);
      }
      else
      {
        v83 = set_qerrno(61);
      }
      v13 = v83;
      free_idcv(v143);
      return v13;
    case 5:
      v59 = a1[1];
      v60 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v60 + 32 * v59 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v61 = a1[1];
        if ( v61 )
        {
          v141 = v61 - 1;
          a1[1] = v141;
          free_idcv(*a1 + 32 * v141);
        }
        free_idcv(v146);
      }
      v62 = *a1 + 32LL * a1[1] - 32;
      v63 = sub_7973F0((unsigned __int8 *)v62, v143);
      if ( v63 != 2 && v63 != 9 )
        goto LABEL_114;
      *(_QWORD *)(v62 + 8) = ((__int64)src[0] | *(_QWORD *)(v62 + 8)) != 0;
      free_idcv(v143);
      return 0;
    case 6:
      v54 = a1[1];
      v55 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v55 + 32 * v54 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v56 = a1[1];
        if ( v56 )
        {
          v142 = v56 - 1;
          a1[1] = v142;
          free_idcv(*a1 + 32 * v142);
        }
        free_idcv(v146);
      }
      v57 = *a1 + 32LL * a1[1] - 32;
      v58 = sub_7973F0((unsigned __int8 *)v57, v143);
      if ( v58 != 2 && v58 != 9 )
        goto LABEL_114;
      v117 = *(_QWORD *)(v57 + 8);
      if ( v117 )
        v117 = src[0] != nullptr;
      *(_QWORD *)(v57 + 8) = v117;
      free_idcv(v143);
      return 0;
    case 7:
      v52 = *a1 + 32LL * a1[1] - 32;
      v53 = (_BYTE *)deref_idcv(v52, 0);
      if ( v53 && *v53 == 5 )
      {
        free_idcv(v52);
        *(_QWORD *)(v52 + 8) = 1;
      }
      if ( *(_BYTE *)v52 != 2 && *(_BYTE *)v52 != 9 )
        return set_qerrno(61);
      *(_QWORD *)(v52 + 8) = *(_QWORD *)(v52 + 8) == 0;
      return 0;
    case 8:
      v84 = a1[1];
      v85 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v85 + 32 * v84 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v86 = a1[1];
        if ( v86 )
        {
          v138 = v86 - 1;
          a1[1] = v138;
          free_idcv(*a1 + 32 * v138);
        }
        free_idcv(v146);
      }
      v87 = *a1 + 32LL * a1[1] - 32;
      v88 = sub_7973F0((unsigned __int8 *)v87, v143);
      if ( v88 != 2 && v88 != 9 )
        goto LABEL_114;
      *(_QWORD *)(v87 + 8) |= (unsigned __int64)src[0];
      free_idcv(v143);
      return 0;
    case 9:
      v64 = a1[1];
      v65 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v65 + 32 * v64 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v66 = a1[1];
        if ( v66 )
        {
          v140 = v66 - 1;
          a1[1] = v140;
          free_idcv(*a1 + 32 * v140);
        }
        free_idcv(v146);
      }
      v67 = *a1 + 32LL * a1[1] - 32;
      v68 = sub_7973F0((unsigned __int8 *)v67, v143);
      if ( v68 != 2 && v68 != 9 )
        goto LABEL_114;
      *(_QWORD *)(v67 + 8) &= (unsigned __int64)src[0];
      free_idcv(v143);
      return 0;
    case 10:
      v73 = a1[1];
      v74 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v74 + 32 * v73 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v75 = a1[1];
        if ( v75 )
        {
          v134 = v75 - 1;
          a1[1] = v134;
          free_idcv(*a1 + 32 * v134);
        }
        free_idcv(v146);
      }
      v76 = *a1 + 32LL * a1[1] - 32;
      v77 = sub_7973F0((unsigned __int8 *)v76, v143);
      if ( v77 != 2 && v77 != 9 )
        goto LABEL_114;
      *(_QWORD *)(v76 + 8) ^= (unsigned __int64)src[0];
      free_idcv(v143);
      return 0;
    case 11:
      v51 = *a1 + 32LL * a1[1] - 32;
      if ( *(_BYTE *)v51 != 2 && *(_BYTE *)v51 != 9 )
        return set_qerrno(61);
      *(_QWORD *)(v51 + 8) = ~*(_QWORD *)(v51 + 8);
      return 0;
    case 12:
      v46 = a1[1];
      v47 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v47 + 32 * v46 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v48 = a1[1];
        if ( v48 )
        {
          v126 = v48 - 1;
          a1[1] = v126;
          free_idcv(*a1 + 32 * v126);
        }
        free_idcv(v146);
      }
      v49 = *a1 + 32LL * a1[1] - 32;
      v50 = sub_7973F0((unsigned __int8 *)v49, v143);
      if ( v50 != 2 && v50 != 9 )
        goto LABEL_114;
      *(__int64 *)(v49 + 8) >>= SLOBYTE(src[0]);
      free_idcv(v143);
      return 0;
    case 13:
      v41 = a1[1];
      v42 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v42 + 32 * v41 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v43 = a1[1];
        if ( v43 )
        {
          v125 = v43 - 1;
          a1[1] = v125;
          free_idcv(*a1 + 32 * v125);
        }
        free_idcv(v146);
      }
      v44 = *a1 + 32LL * a1[1] - 32;
      v45 = sub_7973F0((unsigned __int8 *)v44, v143);
      if ( v45 != 2 && v45 != 9 )
      {
LABEL_114:
        v13 = set_qerrno(61);
        free_idcv(v143);
        return v13;
      }
      *(_QWORD *)(v44 + 8) <<= SLOBYTE(src[0]);
      free_idcv(v143);
      return 0;
    case 14:
      v39 = *a1 + 32LL * a1[1] - 32;
      v40 = *(_BYTE *)v39;
      if ( *(_BYTE *)v39 == 3 )
      {
        v118 = *(_WORD *)(v39 + 22);
        if ( v118 )
          *(_WORD *)(v39 + 22) = v118 + 0x8000;
        return 0;
      }
      if ( v40 == 2 || v40 == 9 )
      {
        *(_QWORD *)(v39 + 8) = -*(_QWORD *)(v39 + 8);
        return 0;
      }
      return set_qerrno(61);
    case 15:
      return idcv_string(*a1 + 32LL * a1[1] - 32, v6, *a1, a4, a5, a6);
    case 24:
      v29 = a1[1];
      v30 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v30 + 32 * v29 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v31 = a1[1];
        if ( v31 )
        {
          v128 = v31 - 1;
          a1[1] = v128;
          free_idcv(*a1 + 32 * v128);
        }
        free_idcv(v146);
      }
      v32 = *a1 + 32LL * a1[1] - 32;
      v33 = sub_797570(v32, (__int64)v143) == 0;
      free_idcv(v32);
      free_idcv(v143);
      *(_QWORD *)(v32 + 8) = v33;
      free_idcv(v143);
      return 0;
    case 25:
      v24 = a1[1];
      v25 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v25 + 32 * v24 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v26 = a1[1];
        if ( v26 )
        {
          v130 = v26 - 1;
          a1[1] = v130;
          free_idcv(*a1 + 32 * v130);
        }
        free_idcv(v146);
      }
      v27 = *a1 + 32LL * a1[1] - 32;
      v28 = sub_797570(v27, (__int64)v143) != 0;
      free_idcv(v27);
      free_idcv(v143);
      *(_QWORD *)(v27 + 8) = v28;
      free_idcv(v143);
      return 0;
    case 26:
      v19 = a1[1];
      v20 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v20 + 32 * v19 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v21 = a1[1];
        if ( v21 )
        {
          v131 = v21 - 1;
          a1[1] = v131;
          free_idcv(*a1 + 32 * v131);
        }
        free_idcv(v146);
      }
      v22 = *a1 + 32LL * a1[1] - 32;
      v23 = sub_797570(v22, (__int64)v143) <= 0;
      free_idcv(v22);
      free_idcv(v143);
      *(_QWORD *)(v22 + 8) = v23;
      free_idcv(v143);
      return 0;
    case 27:
      v14 = a1[1];
      v15 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v15 + 32 * v14 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v16 = a1[1];
        if ( v16 )
        {
          v127 = v16 - 1;
          a1[1] = v127;
          free_idcv(*a1 + 32 * v127);
        }
        free_idcv(v146);
      }
      v17 = *a1 + 32LL * a1[1] - 32;
      v18 = sub_797570(v17, (__int64)v143) >= 0;
      free_idcv(v17);
      free_idcv(v143);
      *(_QWORD *)(v17 + 8) = v18;
      free_idcv(v143);
      return 0;
    case 28:
      v34 = a1[1];
      v35 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v35 + 32 * v34 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v36 = a1[1];
        if ( v36 )
        {
          v136 = v36 - 1;
          a1[1] = v136;
          free_idcv(*a1 + 32 * v136);
        }
        free_idcv(v146);
      }
      v37 = *a1 + 32LL * a1[1] - 32;
      v38 = (unsigned int)sub_797570(v37, (__int64)v143) >> 31;
      free_idcv(v37);
      free_idcv(v143);
      *(_QWORD *)(v37 + 8) = (unsigned __int8)v38;
      free_idcv(v143);
      return 0;
    case 29:
      v8 = a1[1];
      v9 = *a1;
      v143[0] = 2;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( !(unsigned int)move_idcv(v143, v9 + 32 * v8 - 32) )
      {
        v146[0] = 2;
        v147 = 0;
        v148 = 0;
        copy_idcv(v146);
        v10 = a1[1];
        if ( v10 )
        {
          v129 = v10 - 1;
          a1[1] = v129;
          free_idcv(*a1 + 32 * v129);
        }
        free_idcv(v146);
      }
      v11 = *a1 + 32LL * a1[1] - 32;
      v12 = sub_797570(v11, (__int64)v143) > 0;
      free_idcv(v11);
      free_idcv(v143);
      *(_QWORD *)(v11 + 8) = v12;
      free_idcv(v143);
      return 0;
    case 30:
      return idcv_long(*a1 + 32LL * a1[1] - 32);
    case 32:
      return idcv_float(*a1 + 32LL * a1[1] - 32);
    case 33:
      return idcv_int64(*a1 + 32LL * a1[1] - 32);
    default:
      if ( !under_debugger )
        interr(1448);
      BUG();
  }
}
