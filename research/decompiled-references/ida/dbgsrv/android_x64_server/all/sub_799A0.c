/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_799A0
// Address: 0x00000000000799A0

//----- (00000000000799A0) ----------------------------------------------------
__int64 __fastcall sub_799A0(__int64 *a1, char a2, double a3, __m128 a4)
{
  char *v5; // rax
  __int64 v6; // rbp
  int v7; // ebx
  char *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r12
  char *v12; // r15
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi
  char *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rbp
  char *v22; // rbx
  char *v23; // rax
  char *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdi
  char *v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdi
  char *v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdi
  char *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdi
  char *v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdi
  char *v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdi
  char *v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rdi
  char *v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rdi
  char *v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdi
  char *v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rdi
  char *v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rdi
  char *v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rdi
  char *v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rcx
  char v65; // dl
  __int64 v66; // rax
  __int64 v67; // rcx
  char v68; // dl
  __int16 v69; // dx
  char *v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rdi
  char *v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rbp
  __int64 v77; // rbx
  int v78; // eax
  char v79; // r14
  void *v80; // rdi
  __int64 v81; // rbx
  int v82; // eax
  __int64 v83; // rbx
  int v84; // eax
  __int64 v85; // rbx
  int v86; // eax
  __int64 v87; // rbx
  int v88; // eax
  __int64 v89; // rbx
  int v90; // eax
  __int64 v91; // rbx
  int v92; // eax
  __int64 v93; // rcx
  int v94; // eax
  __int64 v95; // rbx
  int v96; // eax
  __int64 v97; // r15
  __int64 v98; // rbp
  char *v99; // r12
  int v100; // eax
  __int64 v101; // r14
  __int64 v102; // rbp
  __int64 v103; // rbx
  int v104; // eax
  __int64 v105; // r14
  __int64 v106; // rbx
  int v107; // r15d
  void *v108; // rdi
  __int64 v109; // r14
  __int64 v110; // rbx
  unsigned int v111; // r15d
  __int64 v112; // r14
  __int64 v113; // rbx
  int v114; // r15d
  __int64 v115; // r14
  __int64 v116; // rbx
  int v117; // r15d
  __int64 v118; // r14
  __int64 v119; // rbp
  __int64 v120; // rbx
  int v121; // eax
  __int64 v122; // r14
  __int64 v123; // r15
  char *v124; // rbp
  int v125; // ebx
  __int64 v126; // r14
  __int64 v127; // rbx
  int v128; // r15d
  int v129; // eax
  unsigned int v130; // edi
  unsigned int v131; // edi
  char *v132; // r14
  _QWORD *v133; // rax
  _QWORD *v134; // r15
  _QWORD *v135; // r13
  _QWORD *v136; // rcx
  _QWORD *v137; // rax
  __int64 v138; // r15
  bool v139; // zf
  unsigned int v140; // edi
  __int64 v141; // rcx
  char *v142; // rbx
  char *v143; // r14
  __int64 ****v144; // rbp
  char *v145; // rcx
  char *v146; // rax
  __int64 v147; // rbx
  int v148; // eax
  unsigned int v149; // edi
  _QWORD **v150; // r14
  char *v151; // rbp
  char *v152; // r12
  char *v153; // rcx
  char *v154; // rax
  __int64 v155; // rbp
  void *v156; // rdi
  _QWORD *v157; // [rsp+0h] [rbp-88h]
  __int64 v158; // [rsp+8h] [rbp-80h]
  char v159[8]; // [rsp+10h] [rbp-78h] BYREF
  void *v160[2]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v161; // [rsp+28h] [rbp-60h]
  char v162[8]; // [rsp+30h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v164; // [rsp+48h] [rbp-40h]
  unsigned __int64 v165; // [rsp+50h] [rbp-38h]

  v165 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case -80:
      v162[0] = 2;
      *(_OWORD *)ptr = 0;
      v164 = 0;
      sub_7C770(a1, v162, 0.0, a4);
      v5 = deref_idcv((char *)(*a1 + 32 * a1[1] - 32), 2, 0.0, a4);
      v6 = (__int64)v5;
      if ( *v5 == 7 )
      {
        v7 = idcv_string((__int64)v162, 0.0, a4);
        if ( !v7 )
        {
          v7 = 0;
          if ( ptr[1] )
          {
            v8 = (char *)ptr[1] - 1;
            if ( ptr[1] != (char *)&dword_0 + 1 )
            {
              v9 = v6 + 8;
              v10 = *(_QWORD *)(v9 + 8);
              v11 = v10 - 1;
              if ( !v10 )
                v11 = 0;
              v12 = (char *)ptr[1] + v11;
              if ( *(_QWORD *)(v9 + 16) >= (unsigned __int64)ptr[1] + v11 )
              {
                v13 = *(char **)v9;
              }
              else
              {
                v13 = (char *)qvector_reserve(v9, *(char **)v9, (unsigned __int64)v12, 1u);
                *(_QWORD *)v9 = v13;
              }
              *(_QWORD *)(v9 + 8) = v12;
              v8[v11 + (_QWORD)v13] = 0;
              memcpy((void *)(*(_QWORD *)v9 + v11), ptr[0], (size_t)v8);
            }
          }
        }
      }
      else
      {
        v7 = 0;
        switch ( (unsigned int)sub_7C890((__int64)v5, (__int64)v162, 0.0, a4) )
        {
          case 2u:
          case 9u:
            goto LABEL_151;
          case 3u:
            v7 = 0;
            v148 = eadd((_WORD *)(v6 + 8), ptr, (_WORD *)(v6 + 8), 0, 0.0, a4);
            switch ( v148 )
            {
              case 2:
                v149 = 97;
                break;
              case 5:
                v149 = 98;
                break;
              case 4:
                v149 = 86;
                break;
              default:
                goto LABEL_431;
            }
            set_qerrno(v149);
            break;
          case 5u:
            if ( *(_BYTE *)v6 == 5 )
            {
              v150 = (_QWORD **)operator new(0x20u);
              sub_75290((__int64)v150, *(_QWORD *)(v6 + 8), 0.0, a4);
              free_idcv((char *)v6, 0.0, a4);
              *(_BYTE *)v6 = 5;
              *(_QWORD *)(v6 + 8) = v150;
            }
            else
            {
              v150 = *(_QWORD ***)(v6 + 8);
            }
            v151 = *(char **)ptr[0];
            v152 = (char *)ptr[0] + 8;
            if ( *(void **)ptr[0] != (char *)ptr[0] + 8 )
            {
              do
              {
                sub_80350(v150, v150 + 1, (__int64)(v151 + 32), (__int64)(v151 + 32), 0.0, a4);
                v153 = *((char **)v151 + 1);
                if ( v153 )
                {
                  do
                  {
                    v154 = v153;
                    v153 = *(char **)v153;
                  }
                  while ( v153 );
                }
                else
                {
                  v154 = *((char **)v151 + 2);
                  if ( *(char **)v154 != v151 )
                  {
                    v155 = (__int64)(v151 + 16);
                    do
                    {
                      v154 = *(char **)(*(_QWORD *)v155 + 16LL);
                      v139 = *(_QWORD *)v154 == *(_QWORD *)v155;
                      v155 = *(_QWORD *)v155 + 16LL;
                    }
                    while ( !v139 );
                  }
                }
                v151 = v154;
              }
              while ( v154 != v152 );
            }
            break;
          case 6u:
          case 8u:
            set_qerrno(0x5FBu);
            break;
          case 7u:
            if ( !(unsigned int)idcv_int64(v6, 0.0, a4) && !(unsigned int)idcv_int64((__int64)v162, 0.0, a4) )
LABEL_151:
              *(_QWORD *)(v6 + 8) += ptr[0];
            break;
          default:
            break;
        }
      }
LABEL_431:
      if ( v162[0] == 5 )
      {
        sub_72DD0((char **)ptr[0], v162, 0.0, a4);
      }
      else if ( v162[0] == 7 )
      {
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
      }
      goto LABEL_332;
    case -79:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v43 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v43, 0.0, a4);
        v44 = a1[1];
        if ( v44 )
        {
          v45 = v44 - 1;
          a1[1] = v45;
          free_idcv((char *)(*a1 + 32 * v45), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v97 = *a1;
      v98 = 32 * (a1[1] - 1);
      v99 = (char *)(*a1 + v98);
      v7 = 0;
      switch ( (unsigned int)sub_7C890((__int64)v99, (__int64)v159, 0.0, a4) )
      {
        case 2u:
        case 9u:
          goto LABEL_241;
        case 3u:
          v129 = eadd((_WORD *)(v97 + v98 + 8), v160, (_WORD *)(v97 + v98 + 8), 1, 0.0, a4);
          if ( v129 == 2 )
          {
            v130 = 97;
          }
          else if ( v129 == 5 )
          {
            v130 = 98;
          }
          else
          {
            v7 = 0;
            if ( v129 != 4 )
              goto LABEL_407;
            v130 = 86;
          }
          v100 = set_qerrno(v130);
LABEL_406:
          v7 = v100;
          goto LABEL_407;
        case 4u:
          goto LABEL_407;
        case 5u:
          if ( *v99 == 5 )
          {
            v132 = (char *)operator new(0x20u);
            v158 = v97;
            v133 = *(_QWORD **)(v97 + v98 + 8);
            *(_OWORD *)(v132 + 8) = 0;
            *(_QWORD *)v132 = v132 + 8;
            v134 = (_QWORD *)*v133;
            v157 = v133;
            v135 = v133 + 1;
            if ( (_QWORD *)*v133 != v133 + 1 )
            {
              do
              {
                sub_80350((_QWORD **)v132, (_QWORD *)v132 + 1, (__int64)(v134 + 4), (__int64)(v134 + 4), 0.0, a4);
                v136 = (_QWORD *)v134[1];
                if ( v136 )
                {
                  do
                  {
                    v137 = v136;
                    v136 = (_QWORD *)*v136;
                  }
                  while ( v136 );
                }
                else
                {
                  v137 = (_QWORD *)v134[2];
                  if ( (_QWORD *)*v137 != v134 )
                  {
                    v138 = (__int64)(v134 + 2);
                    do
                    {
                      v137 = *(_QWORD **)(*(_QWORD *)v138 + 16LL);
                      v139 = *v137 == *(_QWORD *)v138;
                      v138 = *(_QWORD *)v138 + 16LL;
                    }
                    while ( !v139 );
                  }
                }
                v134 = v137;
              }
              while ( v137 != v135 );
            }
            *((_DWORD *)v132 + 6) = 1;
            *((_DWORD *)v132 + 7) = *((_DWORD *)v157 + 7);
            free_idcv(v99, 0.0, a4);
            v97 = v158;
            *v99 = 5;
            *(_QWORD *)(v158 + v98 + 8) = v132;
          }
          else
          {
            v7 = copy_idcv(v99, v99, 0.0, a4);
            if ( v7 )
              goto LABEL_407;
          }
          v142 = *(char **)v160[0];
          v143 = (char *)v160[0] + 8;
          if ( *(void **)v160[0] != (char *)v160[0] + 8 )
          {
            v144 = (__int64 ****)(v97 + v98 + 8);
            do
            {
              sub_80DA0(*v144, (__int64)(v142 + 32), 0.0, a4);
              v145 = *((char **)v142 + 1);
              if ( v145 )
              {
                do
                {
                  v146 = v145;
                  v145 = *(char **)v145;
                }
                while ( v145 );
              }
              else
              {
                v146 = *((char **)v142 + 2);
                if ( *(char **)v146 != v142 )
                {
                  v147 = (__int64)(v142 + 16);
                  do
                  {
                    v146 = *(char **)(*(_QWORD *)v147 + 16LL);
                    v139 = *(_QWORD *)v146 == *(_QWORD *)v147;
                    v147 = *(_QWORD *)v147 + 16LL;
                  }
                  while ( !v139 );
                }
              }
              v142 = v146;
            }
            while ( v146 != v143 );
          }
LABEL_380:
          v7 = 0;
LABEL_407:
          if ( v159[0] == 5 )
            goto LABEL_427;
          if ( v159[0] == 7 )
          {
            v156 = v160[0];
            if ( v160[0] )
              goto LABEL_426;
          }
          goto LABEL_332;
        case 6u:
        case 8u:
          v100 = set_qerrno(0x5FBu);
          goto LABEL_406;
        case 7u:
          v7 = idcv_int64((__int64)v99, 0.0, a4);
          if ( !v7 )
          {
            v7 = idcv_int64((__int64)v159, 0.0, a4);
            if ( !v7 )
            {
LABEL_241:
              *(_QWORD *)(v97 + v98 + 8) -= v160[0];
              v7 = 0;
            }
          }
          goto LABEL_407;
        default:
          goto LABEL_380;
      }
    case -78:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v46 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v46, 0.0, a4);
        v47 = a1[1];
        if ( v47 )
        {
          v48 = v47 - 1;
          a1[1] = v48;
          free_idcv((char *)(*a1 + 32 * v48), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v101 = *a1;
      v102 = 32 * (a1[1] - 1);
      v103 = *a1 + v102;
      switch ( (unsigned int)sub_7C890(v103, (__int64)v159, 0.0, a4) )
      {
        case 2u:
        case 9u:
          goto LABEL_246;
        case 3u:
          v7 = 0;
          v131 = 97;
          switch ( (unsigned int)emul((_WORD *)(v101 + v102 + 8), (__int16 *)v160, v101 + v102 + 8, 0.0, a4) )
          {
            case 1u:
              goto LABEL_358;
            case 2u:
              goto LABEL_413;
            case 4u:
              v131 = 86;
              goto LABEL_413;
            case 5u:
              v131 = 98;
LABEL_413:
              v104 = set_qerrno(v131);
              goto LABEL_414;
            default:
              goto LABEL_415;
          }
        case 5u:
          v7 = set_qerrno(0x5FBu);
          if ( !v7 )
            goto LABEL_358;
          break;
        case 6u:
        case 8u:
          v104 = set_qerrno(0x5FBu);
LABEL_414:
          v7 = v104;
          break;
        case 7u:
          v7 = idcv_int64(v103, 0.0, a4);
          if ( !v7 )
          {
            v7 = idcv_int64((__int64)v159, 0.0, a4);
            if ( !v7 )
            {
LABEL_246:
              *(_QWORD *)(v101 + v102 + 8) *= (_QWORD)v160[0];
              v7 = 0;
            }
          }
          break;
        default:
LABEL_358:
          v7 = 0;
          break;
      }
LABEL_415:
      if ( v159[0] == 5 )
      {
LABEL_427:
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 )
      {
        v156 = v160[0];
        if ( v160[0] )
        {
LABEL_426:
          v160[1] = nullptr;
          qfree(v156);
          v160[0] = nullptr;
          v161 = 0;
        }
      }
      goto LABEL_332;
    case -77:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v61 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v61, 0.0, a4);
        v62 = a1[1];
        if ( v62 )
        {
          v63 = v62 - 1;
          a1[1] = v63;
          free_idcv((char *)(*a1 + 32 * v63), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v118 = *a1;
      v119 = 32 * (a1[1] - 1);
      v120 = *a1 + v119;
      switch ( (unsigned int)sub_7C890(v120, (__int64)v159, 0.0, a4) )
      {
        case 2u:
          v141 = (__int64)v160[0];
          if ( !v160[0] )
            goto LABEL_362;
          goto LABEL_366;
        case 3u:
          v7 = 0;
          v140 = 97;
          switch ( (unsigned int)ediv((__int16 *)(v118 + v119 + 8), v160, v118 + v119 + 8, 0.0, a4) )
          {
            case 1u:
              goto LABEL_368;
            case 2u:
              goto LABEL_421;
            case 4u:
              v140 = 86;
              goto LABEL_421;
            case 5u:
              v140 = 98;
LABEL_421:
              v121 = set_qerrno(v140);
              goto LABEL_422;
            default:
              goto LABEL_423;
          }
        case 5u:
          v7 = set_qerrno(0x5FBu);
          if ( !v7 )
            goto LABEL_368;
          goto LABEL_423;
        case 6u:
        case 8u:
          v121 = set_qerrno(0x5FBu);
          goto LABEL_422;
        case 7u:
          v7 = idcv_int64(v120, 0.0, a4);
          if ( !v7 )
          {
            v7 = idcv_int64((__int64)v159, 0.0, a4);
            if ( !v7 )
              goto LABEL_365;
          }
          goto LABEL_423;
        case 9u:
LABEL_365:
          v141 = (__int64)v160[0];
          if ( v160[0] )
          {
LABEL_366:
            *(__int64 *)(v118 + v119 + 8) /= v141;
LABEL_368:
            v7 = 0;
          }
          else
          {
LABEL_362:
            v121 = set_qerrno(0x56u);
LABEL_422:
            v7 = v121;
          }
LABEL_423:
          if ( v159[0] == 5 )
            goto LABEL_427;
          if ( v159[0] == 7 )
          {
            v156 = v160[0];
            if ( v160[0] )
              goto LABEL_426;
          }
          goto LABEL_332;
        default:
          goto LABEL_368;
      }
    case -76:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v37 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v37, 0.0, a4);
        v38 = a1[1];
        if ( v38 )
        {
          v39 = v38 - 1;
          a1[1] = v39;
          free_idcv((char *)(*a1 + 32 * v39), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v76 = *a1;
      v91 = 32 * (a1[1] - 1);
      v92 = sub_7C890(v91 + v76, (__int64)v159, 0.0, a4);
      if ( v92 == 2 )
      {
        v93 = (__int64)v160[0];
        if ( !v160[0] )
        {
LABEL_325:
          v94 = set_qerrno(0x56u);
          goto LABEL_326;
        }
LABEL_225:
        *(__int64 *)(v76 + v91 + 8) %= v93;
        v79 = 1;
        goto LABEL_327;
      }
      if ( v92 == 9 )
      {
        v93 = (__int64)v160[0];
        if ( !v160[0] )
          goto LABEL_325;
        goto LABEL_225;
      }
      v94 = set_qerrno(0x3Du);
LABEL_326:
      LODWORD(v76) = v94;
      v79 = 0;
LABEL_327:
      if ( v159[0] == 5 )
      {
LABEL_334:
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 )
      {
        v80 = v160[0];
        if ( v160[0] )
        {
LABEL_330:
          v160[1] = nullptr;
          qfree(v80);
          v160[0] = nullptr;
          v161 = 0;
        }
      }
LABEL_331:
      v7 = 0;
      if ( v79 )
LABEL_332:
        LODWORD(v76) = v7;
      return (unsigned int)v76;
    case -75:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v25 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v25, 0.0, a4);
        v26 = a1[1];
        if ( v26 )
        {
          v27 = v26 - 1;
          a1[1] = v27;
          free_idcv((char *)(*a1 + 32 * v27), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v76 = *a1;
      v83 = 32 * (a1[1] - 1);
      v84 = sub_7C890(v83 + v76, (__int64)v159, 0.0, a4);
      if ( v84 == 2 || v84 == 9 )
      {
        *(_QWORD *)(v76 + v83 + 8) = (*(_QWORD *)(v76 + v83 + 8) | (__int64)v160[0]) != 0;
        v79 = 1;
      }
      else
      {
        LODWORD(v76) = set_qerrno(0x3Du);
        v79 = 0;
      }
      if ( v159[0] == 5 )
        goto LABEL_334;
      if ( v159[0] == 7 )
      {
        v80 = v160[0];
        if ( v160[0] )
          goto LABEL_330;
      }
      goto LABEL_331;
    case -74:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v28 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v28, 0.0, a4);
        v29 = a1[1];
        if ( v29 )
        {
          v30 = v29 - 1;
          a1[1] = v30;
          free_idcv((char *)(*a1 + 32 * v30), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v76 = *a1;
      v85 = 32 * (a1[1] - 1);
      v86 = sub_7C890(v85 + v76, (__int64)v159, 0.0, a4);
      if ( v86 == 2 || v86 == 9 )
      {
        *(_QWORD *)(v76 + v85 + 8) = (*(_QWORD *)(v76 + v85 + 8) != 0) & (unsigned __int8)(v160[0] != nullptr);
        v79 = 1;
      }
      else
      {
        LODWORD(v76) = set_qerrno(0x3Du);
        v79 = 0;
      }
      if ( v159[0] == 5 )
        goto LABEL_334;
      if ( v159[0] == 7 )
      {
        v80 = v160[0];
        if ( v160[0] )
          goto LABEL_330;
      }
      goto LABEL_331;
    case -73:
      v20 = *a1;
      v21 = 32 * (a1[1] - 1);
      v22 = (char *)(*a1 + v21);
      v23 = deref_idcv(v22, 0, a3, a4);
      if ( v23 && *v23 == 5 )
      {
        free_idcv(v22, a3, a4);
        *(_QWORD *)(v20 + v21 + 8) = 1;
      }
      if ( *v22 != 9 && *v22 != 2 )
        return set_qerrno(0x3Du);
      *(_QWORD *)(v20 + v21 + 8) = *(_QWORD *)(v20 + v21 + 8) == 0;
      goto LABEL_324;
    case -72:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v34 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v34, 0.0, a4);
        v35 = a1[1];
        if ( v35 )
        {
          v36 = v35 - 1;
          a1[1] = v36;
          free_idcv((char *)(*a1 + 32 * v36), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v76 = *a1;
      v89 = 32 * (a1[1] - 1);
      v90 = sub_7C890(v89 + v76, (__int64)v159, 0.0, a4);
      if ( v90 == 2 || v90 == 9 )
      {
        *(_QWORD *)(v76 + v89 + 8) |= (unsigned __int64)v160[0];
        v79 = 1;
      }
      else
      {
        LODWORD(v76) = set_qerrno(0x3Du);
        v79 = 0;
      }
      if ( v159[0] == 5 )
        goto LABEL_334;
      if ( v159[0] == 7 )
      {
        v80 = v160[0];
        if ( v160[0] )
          goto LABEL_330;
      }
      goto LABEL_331;
    case -71:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v14 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v14, 0.0, a4);
        v15 = a1[1];
        if ( v15 )
        {
          v16 = v15 - 1;
          a1[1] = v16;
          free_idcv((char *)(*a1 + 32 * v16), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v76 = *a1;
      v77 = 32 * (a1[1] - 1);
      v78 = sub_7C890(v77 + v76, (__int64)v159, 0.0, a4);
      if ( v78 == 2 || v78 == 9 )
      {
        *(_QWORD *)(v76 + v77 + 8) &= (unsigned __int64)v160[0];
        v79 = 1;
      }
      else
      {
        LODWORD(v76) = set_qerrno(0x3Du);
        v79 = 0;
      }
      if ( v159[0] == 5 )
        goto LABEL_334;
      if ( v159[0] == 7 )
      {
        v80 = v160[0];
        if ( v160[0] )
          goto LABEL_330;
      }
      goto LABEL_331;
    case -70:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v31 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v31, 0.0, a4);
        v32 = a1[1];
        if ( v32 )
        {
          v33 = v32 - 1;
          a1[1] = v33;
          free_idcv((char *)(*a1 + 32 * v33), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v76 = *a1;
      v87 = 32 * (a1[1] - 1);
      v88 = sub_7C890(v87 + v76, (__int64)v159, 0.0, a4);
      if ( v88 == 2 || v88 == 9 )
      {
        *(_QWORD *)(v76 + v87 + 8) ^= (unsigned __int64)v160[0];
        v79 = 1;
      }
      else
      {
        LODWORD(v76) = set_qerrno(0x3Du);
        v79 = 0;
      }
      if ( v159[0] == 5 )
        goto LABEL_334;
      if ( v159[0] == 7 )
      {
        v80 = v160[0];
        if ( v160[0] )
          goto LABEL_330;
      }
      goto LABEL_331;
    case -69:
      v64 = 32 * (a1[1] - 1);
      v65 = *(_BYTE *)(*a1 + v64);
      if ( v65 != 9 && v65 != 2 )
        return set_qerrno(0x3Du);
      *(_QWORD *)(*a1 + v64 + 8) = ~*(_QWORD *)(*a1 + v64 + 8);
      goto LABEL_324;
    case -68:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v17 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v17, 0.0, a4);
        v18 = a1[1];
        if ( v18 )
        {
          v19 = v18 - 1;
          a1[1] = v19;
          free_idcv((char *)(*a1 + 32 * v19), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v76 = *a1;
      v81 = 32 * (a1[1] - 1);
      v82 = sub_7C890(v81 + v76, (__int64)v159, 0.0, a4);
      if ( v82 == 2 || v82 == 9 )
      {
        *(__int64 *)(v76 + v81 + 8) >>= SLOBYTE(v160[0]);
        v79 = 1;
      }
      else
      {
        LODWORD(v76) = set_qerrno(0x3Du);
        v79 = 0;
      }
      if ( v159[0] == 5 )
        goto LABEL_334;
      if ( v159[0] == 7 )
      {
        v80 = v160[0];
        if ( v160[0] )
          goto LABEL_330;
      }
      goto LABEL_331;
    case -67:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v40 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v40, 0.0, a4);
        v41 = a1[1];
        if ( v41 )
        {
          v42 = v41 - 1;
          a1[1] = v42;
          free_idcv((char *)(*a1 + 32 * v42), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v76 = *a1;
      v95 = 32 * (a1[1] - 1);
      v96 = sub_7C890(v95 + v76, (__int64)v159, 0.0, a4);
      if ( v96 == 2 || v96 == 9 )
      {
        *(_QWORD *)(v76 + v95 + 8) <<= SLOBYTE(v160[0]);
        v79 = 1;
      }
      else
      {
        LODWORD(v76) = set_qerrno(0x3Du);
        v79 = 0;
      }
      if ( v159[0] == 5 )
        goto LABEL_334;
      if ( v159[0] == 7 )
      {
        v80 = v160[0];
        if ( v160[0] )
          goto LABEL_330;
      }
      goto LABEL_331;
    case -66:
      v66 = *a1;
      v67 = 32 * (a1[1] - 1);
      v68 = *(_BYTE *)(*a1 + v67);
      if ( v68 == 2 || v68 == 9 )
      {
        *(_QWORD *)(v66 + v67 + 8) = -*(_QWORD *)(v66 + v67 + 8);
LABEL_324:
        v7 = 0;
      }
      else
      {
        if ( v68 != 3 )
          return set_qerrno(0x3Du);
        v69 = *(_WORD *)(v66 + v67 + 22);
        v7 = 0;
        if ( v69 )
          *(_WORD *)(v67 + v66 + 22) = v69 ^ 0x8000;
      }
      goto LABEL_332;
    case -65:
      return idcv_string(*a1 + 32 * a1[1] - 32, a3, a4);
    case -56:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v73 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v73, 0.0, a4);
        v74 = a1[1];
        if ( v74 )
        {
          v75 = v74 - 1;
          a1[1] = v75;
          free_idcv((char *)(*a1 + 32 * v75), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v126 = *a1;
      v127 = 32 * (a1[1] - 1);
      v128 = sub_7CA00(v126 + v127, (__int64)v159, 0.0, a4);
      free_idcv((char *)(v126 + v127), 0.0, a4);
      if ( v159[0] == 5 )
      {
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 && v160[0] )
      {
        v160[1] = nullptr;
        qfree(v160[0]);
        v160[0] = nullptr;
        v161 = 0;
      }
      v159[0] = 2;
      v160[0] = nullptr;
      *(_QWORD *)(v126 + v127 + 8) = v128 == 0;
      if ( v159[0] == 5 )
        goto LABEL_323;
      if ( v159[0] == 7 )
      {
        v108 = v160[0];
        if ( v160[0] )
          goto LABEL_322;
      }
      goto LABEL_324;
    case -55:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v49 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v49, 0.0, a4);
        v50 = a1[1];
        if ( v50 )
        {
          v51 = v50 - 1;
          a1[1] = v51;
          free_idcv((char *)(*a1 + 32 * v51), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v105 = *a1;
      v106 = 32 * (a1[1] - 1);
      v107 = sub_7CA00(v105 + v106, (__int64)v159, 0.0, a4);
      free_idcv((char *)(v105 + v106), 0.0, a4);
      if ( v159[0] == 5 )
      {
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 && v160[0] )
      {
        v160[1] = nullptr;
        qfree(v160[0]);
        v160[0] = nullptr;
        v161 = 0;
      }
      v159[0] = 2;
      v160[0] = nullptr;
      *(_QWORD *)(v105 + v106 + 8) = v107 != 0;
      if ( v159[0] == 5 )
        goto LABEL_323;
      if ( v159[0] == 7 )
      {
        v108 = v160[0];
        if ( v160[0] )
          goto LABEL_322;
      }
      goto LABEL_324;
    case -54:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v58 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v58, 0.0, a4);
        v59 = a1[1];
        if ( v59 )
        {
          v60 = v59 - 1;
          a1[1] = v60;
          free_idcv((char *)(*a1 + 32 * v60), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v115 = *a1;
      v116 = 32 * (a1[1] - 1);
      v117 = sub_7CA00(v115 + v116, (__int64)v159, 0.0, a4);
      free_idcv((char *)(v115 + v116), 0.0, a4);
      if ( v159[0] == 5 )
      {
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 && v160[0] )
      {
        v160[1] = nullptr;
        qfree(v160[0]);
        v160[0] = nullptr;
        v161 = 0;
      }
      v159[0] = 2;
      v160[0] = nullptr;
      *(_QWORD *)(v115 + v116 + 8) = v117 <= 0;
      if ( v159[0] == 5 )
        goto LABEL_323;
      if ( v159[0] == 7 )
      {
        v108 = v160[0];
        if ( v160[0] )
          goto LABEL_322;
      }
      goto LABEL_324;
    case -53:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v70 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v70, 0.0, a4);
        v71 = a1[1];
        if ( v71 )
        {
          v72 = v71 - 1;
          a1[1] = v72;
          free_idcv((char *)(*a1 + 32 * v72), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v122 = *a1;
      v123 = 32 * (a1[1] - 1);
      v124 = (char *)(*a1 + v123);
      v125 = sub_7CA00((__int64)v124, (__int64)v159, 0.0, a4);
      free_idcv(v124, 0.0, a4);
      if ( v159[0] == 5 )
      {
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 && v160[0] )
      {
        v160[1] = nullptr;
        qfree(v160[0]);
        v160[0] = nullptr;
        v161 = 0;
      }
      v159[0] = 2;
      v160[0] = nullptr;
      *(_QWORD *)(v122 + v123 + 8) = v125 >= 0;
      if ( v159[0] == 5 )
        goto LABEL_323;
      if ( v159[0] == 7 )
      {
        v108 = v160[0];
        if ( v160[0] )
          goto LABEL_322;
      }
      goto LABEL_324;
    case -52:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v52 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v52, 0.0, a4);
        v53 = a1[1];
        if ( v53 )
        {
          v54 = v53 - 1;
          a1[1] = v54;
          free_idcv((char *)(*a1 + 32 * v54), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v109 = *a1;
      v110 = 32 * (a1[1] - 1);
      v111 = sub_7CA00(v109 + v110, (__int64)v159, 0.0, a4);
      free_idcv((char *)(v109 + v110), 0.0, a4);
      if ( v159[0] == 5 )
      {
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 && v160[0] )
      {
        v160[1] = nullptr;
        qfree(v160[0]);
        v160[0] = nullptr;
        v161 = 0;
      }
      v159[0] = 2;
      v160[0] = nullptr;
      *(_QWORD *)(v109 + v110 + 8) = v111 >> 31;
      if ( v159[0] == 5 )
        goto LABEL_323;
      if ( v159[0] == 7 )
      {
        v108 = v160[0];
        if ( v160[0] )
          goto LABEL_322;
      }
      goto LABEL_324;
    case -51:
      v159[0] = 2;
      *(_OWORD *)v160 = 0;
      v161 = 0;
      if ( !(unsigned int)move_idcv(v159, (char *)(*a1 + 32 * a1[1] - 32), 0.0, a4) )
      {
        v55 = (char *)(*a1 + 32 * a1[1] - 32);
        v162[0] = 2;
        *(_OWORD *)ptr = 0;
        v164 = 0;
        copy_idcv(v162, v55, 0.0, a4);
        v56 = a1[1];
        if ( v56 )
        {
          v57 = v56 - 1;
          a1[1] = v57;
          free_idcv((char *)(*a1 + 32 * v57), 0.0, a4);
        }
        if ( v162[0] == 5 )
        {
          sub_72DD0((char **)ptr[0], v162, 0.0, a4);
        }
        else if ( v162[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v164 = 0;
        }
        v162[0] = 2;
        ptr[0] = nullptr;
      }
      v112 = *a1;
      v113 = 32 * (a1[1] - 1);
      v114 = sub_7CA00(v112 + v113, (__int64)v159, 0.0, a4);
      free_idcv((char *)(v112 + v113), 0.0, a4);
      if ( v159[0] == 5 )
      {
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 && v160[0] )
      {
        v160[1] = nullptr;
        qfree(v160[0]);
        v160[0] = nullptr;
        v161 = 0;
      }
      v159[0] = 2;
      v160[0] = nullptr;
      *(_QWORD *)(v112 + v113 + 8) = v114 > 0;
      if ( v159[0] == 5 )
      {
LABEL_323:
        sub_72DD0((char **)v160[0], v159, 0.0, a4);
      }
      else if ( v159[0] == 7 )
      {
        v108 = v160[0];
        if ( v160[0] )
        {
LABEL_322:
          v160[1] = nullptr;
          qfree(v108);
          v160[0] = nullptr;
          v161 = 0;
        }
      }
      goto LABEL_324;
    case -50:
      return idcv_long(*a1 + 32 * a1[1] - 32, a3, a4);
    case -48:
      return idcv_float(*a1 + 32 * a1[1] - 32, a3, a4);
    case -47:
      return idcv_int64(*a1 + 32 * a1[1] - 32, a3, a4);
    default:
      if ( !(_BYTE)under_debugger )
        interr(1448);
      BUG();
  }
}
// 0: using guessed type int dword_0;
// 158B40: using guessed type __int64 under_debugger;
