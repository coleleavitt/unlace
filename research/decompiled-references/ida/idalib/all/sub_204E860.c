__int64 __fastcall sub_204E860(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r12
  unsigned __int8 v9; // al
  void *p_ptr; // rdi
  unsigned int v11; // r13d
  void **v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rax
  int v19; // edx
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // rsi
  void *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r12d
  bool v27; // al
  unsigned __int8 *v28; // r12
  __int64 v29; // r12
  __int64 v30; // r13
  unsigned int v31; // eax
  unsigned int v32; // r12d
  unsigned __int64 v33; // r14
  void *v34; // rax
  void *v35; // r14
  char v36; // r12
  unsigned int v37; // r12d
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rbp
  __int64 v43; // rax
  char v44; // al
  int v45; // r8d
  void **v46; // r9
  __int64 v47; // r8
  unsigned __int8 **v48; // r12
  unsigned __int8 **v49; // rbp
  unsigned __int8 *v50; // r14
  unsigned int v51; // eax
  void **v52; // rdi
  _DWORD *v53; // r8
  __int64 v54; // rax
  unsigned __int8 **v55; // r12
  unsigned __int8 **v56; // rbp
  unsigned __int8 *v57; // r14
  unsigned int v58; // eax
  int v59; // r8d
  void **v60; // r9
  __int64 v61; // r8
  unsigned __int8 **v62; // r12
  unsigned __int8 **v63; // rbp
  unsigned __int8 *v64; // r14
  unsigned int v65; // eax
  void **v66; // rdi
  _DWORD *v67; // r8
  __int64 v68; // rax
  unsigned __int8 **v69; // r12
  unsigned __int8 **v70; // rbp
  unsigned __int8 *v71; // r14
  unsigned int v72; // eax
  _BYTE *v73; // rax
  unsigned __int8 *v74; // rbx
  _QWORD *v75; // rax
  __int64 v76; // rax
  unsigned __int8 *v77; // rsi
  unsigned __int8 *v78; // rsi
  unsigned __int8 *v79; // rsi
  unsigned __int8 *v80; // rsi
  unsigned __int8 *v81; // rsi
  void *v82; // rdi
  unsigned int v83; // ebp
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rcx
  unsigned int v86; // ebp
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rcx
  unsigned int v89; // ebp
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rcx
  unsigned int v92; // ebp
  __int64 v94; // rdi
  unsigned int v95; // eax
  unsigned __int64 v96; // rdx
  void *v97; // rdx
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rdx
  unsigned int v100; // ebp
  __int64 v102; // rdx
  int v103; // eax
  __int64 v104; // r12
  __int64 v105; // r14
  __int64 v106; // rcx
  unsigned __int64 v107; // rdx
  unsigned int v108; // eax
  char v109; // bp
  char v110; // bp
  unsigned int v111; // ebp
  char v112; // bp
  __int64 v113; // r12
  __int64 v114; // rax
  unsigned int v115; // ebp
  __int64 v116; // rax
  __int64 v117; // rax
  _QWORD *j; // rbx
  char *v119; // rdx
  __int64 v120; // rdi
  char *v121; // rax
  char *v122; // rcx
  char v123; // si
  char *v124; // rcx
  char *v125; // rax
  char *v126; // rdx
  int v127; // edx
  char *v128; // rdx
  __int64 v129; // rdi
  char *v130; // rax
  char *v131; // rcx
  char v132; // si
  char *v133; // rcx
  char *v134; // rax
  char *v135; // rdx
  int v136; // edx
  int v137; // r13d
  char v138; // r14
  unsigned int k; // r12d
  _BYTE *v140; // rax
  __int64 v141; // rdx
  _BYTE *v142; // rbp
  char v143; // al
  _BYTE *v144; // rbp
  unsigned int v145; // eax
  unsigned int v146; // ebx
  unsigned int v147; // eax
  unsigned int v148; // ebx
  char *v149; // rdx
  __int64 v150; // rsi
  char *v151; // rax
  char *v152; // rdi
  char v153; // cl
  char *v154; // rdx
  char *v155; // rax
  char *v156; // rsi
  int v157; // edx
  char *v158; // rdx
  __int64 v159; // rsi
  char *v160; // rax
  char *v161; // rdi
  char v162; // cl
  char *v163; // rdx
  char *v164; // rax
  char *v165; // rsi
  int v166; // edx
  _BYTE *v167; // rax
  char v168; // dl
  char v169; // dl
  _QWORD *i; // r12
  unsigned int v171; // eax
  __int64 v172; // r12
  int v173; // r12d
  unsigned int m; // r13d
  __int64 v175; // rax
  unsigned int v176; // ebp
  char v177; // dl
  int v178; // r12d
  unsigned int n; // r13d
  __int64 v180; // rax
  unsigned int v181; // ebp
  char v182; // dl
  void **v183; // [rsp+8h] [rbp-150h]
  void **v184; // [rsp+8h] [rbp-150h]
  __int64 v185; // [rsp+8h] [rbp-150h]
  __int64 v186; // [rsp+8h] [rbp-150h]
  __int64 v187; // [rsp+8h] [rbp-150h]
  __int64 v188; // [rsp+8h] [rbp-150h]
  __int64 v189; // [rsp+8h] [rbp-150h]
  __int64 v190; // [rsp+8h] [rbp-150h]
  __int64 v191; // [rsp+8h] [rbp-150h]
  __int64 v192; // [rsp+8h] [rbp-150h]
  __int64 v193; // [rsp+10h] [rbp-148h]
  void **v194; // [rsp+10h] [rbp-148h]
  void **v195; // [rsp+10h] [rbp-148h]
  void **v196; // [rsp+10h] [rbp-148h]
  void **v197; // [rsp+10h] [rbp-148h]
  void **v198; // [rsp+10h] [rbp-148h]
  void **v199; // [rsp+10h] [rbp-148h]
  void **v200; // [rsp+10h] [rbp-148h]
  void **v201; // [rsp+10h] [rbp-148h]
  __int64 v202; // [rsp+18h] [rbp-140h]
  __int64 v203; // [rsp+20h] [rbp-138h]
  void *v204; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v205; // [rsp+38h] [rbp-120h]
  void *v206; // [rsp+40h] [rbp-118h] BYREF
  __int64 v207; // [rsp+48h] [rbp-110h]
  _BYTE v208[64]; // [rsp+50h] [rbp-108h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v210; // [rsp+98h] [rbp-C0h]
  int v211; // [rsp+A0h] [rbp-B8h] BYREF
  char v212; // [rsp+A4h] [rbp-B4h]
  _BYTE v213[176]; // [rsp+A8h] [rbp-B0h] BYREF

  v4 = a1;
  v6 = sub_2060520(a1, *(_QWORD *)(a2 + 8), 0, 0);
  if ( v6 )
  {
    if ( v6 == a2 )
      return (__int64)a3;
    if ( (unsigned __int8 *)v6 == a3 )
      return a2;
  }
  else
  {
    v25 = sub_2060520((unsigned int)a1, *(_QWORD *)(a2 + 8), 1, 0);
    if ( (unsigned __int8 *)v25 == a3 && v25 )
      return a2;
  }
  v8 = *(_QWORD **)(a2 + 8);
  v9 = *(_BYTE *)a2;
  p_ptr = v8;
  if ( *(_BYTE *)a2 == 1 )
    return sub_2058290(v8);
  v11 = *a3;
  v12 = (void **)*a3;
  if ( (_BYTE)v11 == 1 )
    return sub_2058290(v8);
  v13 = *((unsigned __int8 *)v8 + 8);
  if ( (_BYTE)v13 == 17 )
  {
LABEL_7:
    if ( (_BYTE)v11 != 5 )
    {
      if ( v9 == 5 && v4 <= 0x1E )
      {
        if ( ((1LL << v4) & 0x70066000) != 0 )
        {
          if ( (unsigned __int8)sub_2051B90(v4, v12) )
            return sub_205EA20(v4, a3, a2, 0, 0);
          return sub_204E860(v4, a3, a2);
        }
        goto LABEL_19;
      }
      if ( v9 == 5 )
      {
LABEL_20:
        if ( sub_20604D0(v4, p_ptr, 1) != a2 )
          goto LABEL_21;
        return a2;
      }
      goto LABEL_32;
    }
    v12 = *((void ***)a3 + 1);
    p_ptr = (void *)v4;
    if ( (unsigned __int8 *)sub_20604D0(v4, v12, 0) != a3 )
    {
      switch ( v4 )
      {
        case 0x13u:
        case 0x14u:
          v26 = *((_DWORD *)a3 + 8);
          if ( v26 <= 0x40 )
          {
            v27 = *((_QWORD *)a3 + 3) == 0;
          }
          else
          {
            p_ptr = a3 + 24;
            v27 = (unsigned int)sub_2206780(a3 + 24) == v26;
          }
          if ( !v27 )
            goto LABEL_52;
          return sub_2058290(*((_QWORD *)a3 + 1));
        case 0x16u:
        case 0x17u:
          v37 = *((_DWORD *)a3 + 8);
          if ( v37 <= 0x40 )
          {
            v116 = *((_QWORD *)a3 + 3);
            LOBYTE(v13) = v116 == 0;
            if ( v116 != 1 )
            {
LABEL_83:
              if ( (_BYTE)v13 )
                return sub_2058290(*((_QWORD *)a3 + 1));
              goto LABEL_52;
            }
          }
          else
          {
            p_ptr = a3 + 24;
            v38 = sub_2206780(a3 + 24);
            LOBYTE(v13) = v38 == v37;
            if ( v37 - 1 != v38 )
              goto LABEL_83;
          }
          return sub_205FC70(*((_QWORD *)a3 + 1));
        case 0x1Cu:
          v9 = *(_BYTE *)a2;
          if ( *(_BYTE *)a2 != 18 )
            goto LABEL_53;
          if ( *(_WORD *)(a2 + 2) != 47 )
            goto LABEL_21;
          v29 = *(_QWORD *)(a2 - 32LL * (*(_DWORD *)(a2 + 4) & 0x7FFFFFF));
          if ( (unsigned __int8)(*(_BYTE *)v29 - 13) > 3u )
            goto LABEL_21;
          v30 = *(_QWORD *)(v29 + 40);
          if ( v30 )
          {
            v12 = (void **)(v30 + 312);
            p_ptr = *(void **)(a2 - 32LL * (*(_DWORD *)(a2 + 4) & 0x7FFFFFF));
            LOBYTE(v31) = sub_20CAC80(p_ptr, v30 + 312);
            if ( *(_BYTE *)v29 != 13 || *(_BYTE *)(v30 + 331) )
            {
              v13 = 1LL << v31;
              if ( (unsigned __int64)(1LL << v31) <= 1 )
                goto LABEL_52;
            }
            else
            {
              LOBYTE(v31) = 2;
            }
          }
          else
          {
            if ( *(_BYTE *)v29 != 16 )
              goto LABEL_21;
            LOWORD(v31) = (*(_WORD *)(v29 + 34) >> 1) & 0x3F;
            if ( !(_WORD)v31 )
              goto LABEL_21;
            LOBYTE(v31) = v31 - 1;
            if ( !(_BYTE)v31 )
              goto LABEL_21;
          }
          v31 = (unsigned __int8)v31;
          v205 = *((_DWORD *)a3 + 8);
          v13 = v205;
          if ( (unsigned __int8)v31 > v205 )
            v31 = v205;
          v32 = v31;
          if ( v205 > 0x40 )
          {
            p_ptr = &v204;
            v12 = nullptr;
            sub_2205470(&v204, 0, 0);
          }
          else
          {
            v204 = nullptr;
          }
          if ( v32 )
          {
            if ( v32 > 0x40 )
            {
              p_ptr = &v204;
              v12 = nullptr;
              sub_2205F20(&v204, 0, v32);
            }
            else
            {
              v13 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v32);
              if ( v205 > 0x40 )
                *(_QWORD *)v204 |= v13;
              else
                v204 = (void *)(v13 | (unsigned __int64)v204);
            }
          }
          LODWORD(v207) = *((_DWORD *)a3 + 8);
          if ( (unsigned int)v207 > 0x40 )
          {
            p_ptr = &v206;
            v12 = (void **)(a3 + 24);
            sub_2205510(&v206);
            if ( (unsigned int)v207 > 0x40 )
            {
              v12 = &v204;
              p_ptr = &v206;
              sub_2205B60(&v206, &v204);
              v171 = v207;
              v35 = v206;
              LODWORD(v207) = 0;
              LODWORD(v210) = v171;
              ptr = v206;
              if ( v171 > 0x40 )
              {
                v12 = (void **)(a3 + 24);
                p_ptr = &ptr;
                v36 = sub_2205D70(&ptr, a3 + 24);
                if ( v35 )
                {
                  p_ptr = v35;
                  operator delete[](v35);
                }
                goto LABEL_74;
              }
              v34 = *((void **)a3 + 3);
LABEL_73:
              v36 = v35 == v34;
LABEL_74:
              if ( (unsigned int)v207 > 0x40 )
              {
                p_ptr = v206;
                if ( v206 )
                  operator delete[](v206);
              }
              if ( v36 )
              {
                result = sub_205FC70(*((_QWORD *)a3 + 1));
                if ( v205 <= 0x40 )
                  return result;
                v82 = v204;
                if ( !v204 )
                  return result;
                goto LABEL_169;
              }
              if ( v205 > 0x40 )
              {
                p_ptr = v204;
                if ( v204 )
                  operator delete[](v204);
              }
LABEL_52:
              v9 = *(_BYTE *)a2;
LABEL_53:
              if ( v9 == 5 )
              {
                if ( *a3 == 5 )
                {
                  v28 = a3 + 24;
                  switch ( v4 )
                  {
                    case 0xDu:
                      LODWORD(v207) = *(_DWORD *)(a2 + 32);
                      if ( (unsigned int)v207 > 0x40 )
                        sub_2205510(&v206);
                      else
                        v206 = *(void **)(a2 + 24);
                      sub_22059A0(&v206, a3 + 24);
                      LODWORD(v210) = v207;
                      ptr = v206;
                      goto LABEL_198;
                    case 0xFu:
                      LODWORD(v207) = *(_DWORD *)(a2 + 32);
                      if ( (unsigned int)v207 > 0x40 )
                        sub_2205510(&v206);
                      else
                        v206 = *(void **)(a2 + 24);
                      sub_2205A70(&v206, a3 + 24);
                      LODWORD(v210) = v207;
                      ptr = v206;
                      goto LABEL_198;
                    case 0x11u:
                      sub_2209CE0(&ptr, a2 + 24, v28);
                      goto LABEL_167;
                    case 0x13u:
                      sub_22078F0(&ptr);
                      goto LABEL_167;
                    case 0x14u:
                      v100 = *((_DWORD *)a3 + 8);
                      if ( v100 )
                      {
                        if ( !(v100 <= 0x40
                             ? 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v100) == *((_QWORD *)a3 + 3)
                             : v100 == (unsigned int)sub_2206980(a3 + 24)) )
                          goto LABEL_222;
                      }
                      v145 = *(_DWORD *)(a2 + 32);
                      v146 = v145 - 1;
                      if ( v145 <= 0x40 )
                      {
                        if ( *(_QWORD *)(a2 + 24) == 1LL << v146 )
                          return sub_2058290(*(_QWORD *)(a2 + 8));
                      }
                      else if ( ((1LL << v146) & *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v146 >> 6))) != 0
                             && v146 == (unsigned int)sub_22068B0(a2 + 24) )
                      {
                        return sub_2058290(*(_QWORD *)(a2 + 8));
                      }
LABEL_222:
                      sub_2207BA0(&ptr);
                      goto LABEL_167;
                    case 0x16u:
                      sub_2207ED0(&ptr, a2 + 24, v28);
                      goto LABEL_167;
                    case 0x17u:
                      v92 = *((_DWORD *)a3 + 8);
                      if ( v92 )
                      {
                        if ( !(v92 <= 0x40
                             ? 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v92) == *((_QWORD *)a3 + 3)
                             : v92 == (unsigned int)sub_2206980(a3 + 24)) )
                          goto LABEL_194;
                      }
                      v147 = *(_DWORD *)(a2 + 32);
                      v148 = v147 - 1;
                      if ( v147 <= 0x40 )
                      {
                        if ( *(_QWORD *)(a2 + 24) == 1LL << v148 )
                          return sub_2058290(*(_QWORD *)(a2 + 8));
                      }
                      else if ( ((1LL << v148) & *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v148 >> 6))) != 0
                             && (unsigned int)sub_22068B0(a2 + 24) == v148 )
                      {
                        return sub_2058290(*(_QWORD *)(a2 + 8));
                      }
LABEL_194:
                      sub_2208110(&ptr, a2 + 24, v28);
LABEL_167:
                      result = sub_205FAF0(*(_QWORD *)(a2 + 8), &ptr);
                      if ( (unsigned int)v210 > 0x40 )
                        goto LABEL_168;
                      return result;
                    case 0x19u:
                      v89 = *((_DWORD *)a3 + 8);
                      if ( v89 > 0x40 )
                      {
                        if ( v89 - (unsigned int)sub_2206780(a3 + 24) > 0x40 )
                          return sub_2058290(*(_QWORD *)(a2 + 8));
                        v90 = **((_QWORD **)a3 + 3);
                      }
                      else
                      {
                        v90 = *((_QWORD *)a3 + 3);
                      }
                      v91 = *(unsigned int *)(a2 + 32);
                      if ( v91 <= v90 )
                        return sub_2058290(*(_QWORD *)(a2 + 8));
                      LODWORD(v210) = *(_DWORD *)(a2 + 32);
                      if ( (unsigned int)v91 > 0x40 )
                        sub_2205510(&ptr);
                      else
                        ptr = *(void **)(a2 + 24);
                      sub_220A570(&ptr, a3 + 24);
                      goto LABEL_176;
                    case 0x1Au:
                      v86 = *((_DWORD *)a3 + 8);
                      if ( v86 > 0x40 )
                      {
                        if ( v86 - (unsigned int)sub_2206780(a3 + 24) > 0x40 )
                          return sub_2058290(*(_QWORD *)(a2 + 8));
                        v87 = **((_QWORD **)a3 + 3);
                      }
                      else
                      {
                        v87 = *((_QWORD *)a3 + 3);
                      }
                      v88 = *(unsigned int *)(a2 + 32);
                      if ( v88 <= v87 )
                        return sub_2058290(*(_QWORD *)(a2 + 8));
                      LODWORD(v210) = *(_DWORD *)(a2 + 32);
                      if ( (unsigned int)v88 > 0x40 )
                        sub_2205510(&ptr);
                      else
                        ptr = *(void **)(a2 + 24);
                      sub_220AE00(&ptr, a3 + 24);
                      goto LABEL_176;
                    case 0x1Bu:
                      v83 = *((_DWORD *)a3 + 8);
                      if ( v83 > 0x40 )
                      {
                        if ( v83 - (unsigned int)sub_2206780(a3 + 24) > 0x40 )
                          return sub_2058290(*(_QWORD *)(a2 + 8));
                        v84 = **((_QWORD **)a3 + 3);
                      }
                      else
                      {
                        v84 = *((_QWORD *)a3 + 3);
                      }
                      v85 = *(unsigned int *)(a2 + 32);
                      if ( v85 <= v84 )
                        return sub_2058290(*(_QWORD *)(a2 + 8));
                      LODWORD(v210) = *(_DWORD *)(a2 + 32);
                      if ( (unsigned int)v85 > 0x40 )
                        sub_2205510(&ptr);
                      else
                        ptr = *(void **)(a2 + 24);
                      sub_2206E30(&ptr, a3 + 24);
LABEL_176:
                      result = sub_205FAF0(*(_QWORD *)(a2 + 8), &ptr);
                      if ( (unsigned int)v210 <= 0x40 )
                        return result;
LABEL_168:
                      v82 = ptr;
                      if ( !ptr )
                        return result;
                      break;
                    case 0x1Cu:
                      v95 = *(_DWORD *)(a2 + 32);
                      LODWORD(v207) = v95;
                      if ( v95 <= 0x40 )
                      {
                        v99 = *(_QWORD *)(a2 + 24);
LABEL_217:
                        v97 = (void *)(*((_QWORD *)a3 + 3) & v99);
                        v206 = v97;
                        goto LABEL_210;
                      }
                      sub_2205510(&v206);
                      v95 = v207;
                      if ( (unsigned int)v207 <= 0x40 )
                      {
                        v99 = (unsigned __int64)v206;
                        goto LABEL_217;
                      }
                      sub_2205B60(&v206, a3 + 24);
                      v97 = v206;
                      v95 = v207;
                      goto LABEL_210;
                    case 0x1Du:
                      v95 = *(_DWORD *)(a2 + 32);
                      LODWORD(v207) = v95;
                      if ( v95 <= 0x40 )
                      {
                        v96 = *(_QWORD *)(a2 + 24);
LABEL_209:
                        v97 = (void *)(*((_QWORD *)a3 + 3) | v96);
                        v206 = v97;
                        goto LABEL_210;
                      }
                      sub_2205510(&v206);
                      v95 = v207;
                      if ( (unsigned int)v207 <= 0x40 )
                      {
                        v96 = (unsigned __int64)v206;
                        goto LABEL_209;
                      }
                      sub_2205C10(&v206, a3 + 24);
                      v97 = v206;
                      v95 = v207;
                      goto LABEL_210;
                    case 0x1Eu:
                      v95 = *(_DWORD *)(a2 + 32);
                      LODWORD(v207) = v95;
                      if ( v95 <= 0x40 )
                      {
                        v98 = *(_QWORD *)(a2 + 24);
LABEL_214:
                        v97 = (void *)(*((_QWORD *)a3 + 3) ^ v98);
                        v206 = v97;
                        goto LABEL_210;
                      }
                      sub_2205510(&v206);
                      v95 = v207;
                      if ( (unsigned int)v207 <= 0x40 )
                      {
                        v98 = (unsigned __int64)v206;
                        goto LABEL_214;
                      }
                      sub_2205CC0(&v206, a3 + 24);
                      v97 = v206;
                      v95 = v207;
LABEL_210:
                      LODWORD(v210) = v95;
                      ptr = v97;
LABEL_198:
                      v94 = *(_QWORD *)(a2 + 8);
                      LODWORD(v207) = 0;
                      result = sub_205FAF0(v94, &ptr);
                      if ( (unsigned int)v210 > 0x40 && ptr )
                      {
                        v187 = result;
                        operator delete[](ptr);
                        result = v187;
                      }
                      if ( (unsigned int)v207 <= 0x40 )
                        return result;
                      v82 = v206;
                      if ( !v206 )
                        return result;
                      break;
                    default:
                      p_ptr = *(void **)(a2 + 8);
                      goto LABEL_20;
                  }
LABEL_169:
                  v186 = result;
                  operator delete[](v82);
                  return v186;
                }
                v8 = *(_QWORD **)(a2 + 8);
LABEL_19:
                p_ptr = v8;
                goto LABEL_20;
              }
LABEL_32:
              if ( v9 == 6 )
              {
                v20 = *a3;
                if ( *a3 == 6 )
                {
                  v21 = sub_21F90D0(p_ptr, v12, v13);
                  v22 = a2 + 24;
                  v23 = (void *)v21;
                  if ( *(_QWORD *)(a2 + 24) == v21 )
                    sub_21FFE60(&ptr, v22);
                  else
                    sub_21F97A0(&ptr, v22);
                  switch ( v4 )
                  {
                    case 0xEu:
                      v80 = a3 + 24;
                      if ( v23 == ptr )
                        sub_2200B70(&ptr, v80, 1);
                      else
                        sub_21FD860(&ptr, v80, 1);
                      break;
                    case 0x10u:
                      v81 = a3 + 24;
                      if ( v23 == ptr )
                        sub_2200970(&ptr, v81, 1);
                      else
                        sub_21FD850(&ptr, v81, 1);
                      break;
                    case 0x12u:
                      v79 = a3 + 24;
                      if ( v23 == ptr )
                        sub_22018C0(&ptr, v79, 1);
                      else
                        sub_21FEB40(&ptr, v79, 1);
                      break;
                    case 0x15u:
                      v78 = a3 + 24;
                      if ( v23 == ptr )
                        sub_22014F0(&ptr, v78, 1);
                      else
                        sub_21FD480(&ptr, v78, 1);
                      break;
                    case 0x18u:
                      v77 = a3 + 24;
                      if ( v23 == ptr )
                        sub_2201370(&ptr, v77, v24, ptr);
                      else
                        sub_21FF980(&ptr, v77, v24, ptr);
                      break;
                    default:
                      if ( v23 == ptr )
                      {
                        if ( v210 )
                        {
                          for ( i = (_QWORD *)(v210 + 24LL * *(_QWORD *)(v210 - 8)); (_QWORD *)v210 != i; sub_9955A0(i) )
                            i -= 3;
                          operator delete[](i - 1, 24LL * *(i - 1) + 8);
                        }
                      }
                      else
                      {
                        sub_21F9830(&ptr);
                      }
                      goto LABEL_21;
                  }
                  result = sub_205F9D0(*(_QWORD *)(a2 + 8), &ptr);
                  if ( v23 == ptr )
                  {
                    if ( v210 )
                    {
                      for ( j = (_QWORD *)(v210 + 24LL * *(_QWORD *)(v210 - 8)); (_QWORD *)v210 != j; result = v191 )
                      {
                        j -= 3;
                        v191 = result;
                        sub_9955A0(j);
                      }
                      v192 = result;
                      operator delete[](j - 1, 24LL * *(j - 1) + 8);
                      return v192;
                    }
                  }
                  else
                  {
                    v185 = result;
                    sub_21F9830(&ptr);
                    return v185;
                  }
                  return result;
                }
                v8 = *(_QWORD **)(a2 + 8);
                if ( (unsigned int)*((unsigned __int8 *)v8 + 8) - 17 > 1 )
                {
LABEL_240:
                  if ( v4 > 0x1E || v20 != 18 || ((1LL << v4) & 0x70066000) == 0 )
                    goto LABEL_47;
                  return sub_204E860(v4, a3, a2);
                }
LABEL_22:
                v16 = sub_205FD90(a3, 0);
                if ( !v16 )
                {
LABEL_228:
                  if ( *((_BYTE *)v8 + 8) == 17 )
                  {
                    v210 = 0x1000000000LL;
                    ptr = &v211;
                    v202 = sub_20C3F60(*v8, 32);
                    v103 = *((_DWORD *)v8 + 8);
                    if ( v103 )
                    {
                      v104 = 0;
                      v203 = (unsigned int)(v103 - 1);
                      while ( 1 )
                      {
                        v105 = sub_205FB40(v202, v104, 0);
                        v193 = sub_205EAD0(a2, v105, 0);
                        v188 = sub_205EAD0(a3, v105, 0);
                        result = (unsigned __int8)sub_2051B90(v4, v105)
                               ? sub_205EA20(v4, v193, v188, 0, 0)
                               : sub_204E860(v4, v193, v188);
                        if ( !result )
                          break;
                        v106 = (unsigned int)v210;
                        v107 = (unsigned int)v210 + 1LL;
                        if ( v107 > HIDWORD(v210) )
                        {
                          v190 = result;
                          sub_2237220(&ptr, &v211, v107, 8);
                          v106 = (unsigned int)v210;
                          result = v190;
                        }
                        *((_QWORD *)ptr + v106) = result;
                        v102 = v104 + 1;
                        v108 = v210 + 1;
                        LODWORD(v210) = v210 + 1;
                        if ( v203 == v104 )
                          goto LABEL_245;
                        ++v104;
                      }
                    }
                    else
                    {
                      v108 = v210;
LABEL_245:
                      result = sub_205D2F0(ptr, v108, v102);
                    }
                    if ( ptr != &v211 )
                    {
                      v189 = result;
                      free(ptr);
                      return v189;
                    }
                    return result;
                  }
                  goto LABEL_43;
                }
                if ( v4 - 19 > 1 && v4 - 22 > 1 || !(unsigned __int8)sub_20510E0(v16) )
                {
                  v17 = sub_205FD90(a2, 0);
                  if ( v17 )
                  {
                    if ( (unsigned __int8)sub_2051B90(v4, 0) )
                      v18 = sub_205EA20(v4, v17, v16, 0, 0);
                    else
                      v18 = sub_204E860(v4, v17, v16);
                    if ( v18 )
                    {
                      v19 = *((_DWORD *)v8 + 8);
                      BYTE4(ptr) = *((_BYTE *)v8 + 8) == 18;
                      LODWORD(ptr) = v19;
                      return sub_205EF10((size_t)ptr);
                    }
                    return 0;
                  }
                  goto LABEL_228;
                }
                return sub_2058290(v8);
              }
LABEL_21:
              v8 = *(_QWORD **)(a2 + 8);
              if ( (unsigned int)*((unsigned __int8 *)v8 + 8) - 17 > 1 )
              {
LABEL_43:
                if ( *(_BYTE *)a2 == 18 )
                {
                  if ( (((v4 - 13) & 0xFFFFFFFB) == 0 || v4 - 28 <= 2) && v4 == *(unsigned __int16 *)(a2 + 2) )
                  {
                    v117 = sub_205EA20(v4, *(_QWORD *)(a2 + 32 * (1LL - (*(_DWORD *)(a2 + 4) & 0x7FFFFFF))), a3, 0, 0);
                    if ( *(_BYTE *)v117 != 18 || v4 != *(unsigned __int16 *)(v117 + 2) )
                      return sub_205EA20(v4, *(_QWORD *)(a2 - 32LL * (*(_DWORD *)(a2 + 4) & 0x7FFFFFF)), v117, 0, 0);
                  }
LABEL_47:
                  if ( (unsigned __int8)sub_20C2F40(*(_QWORD *)(a2 + 8), 1) )
                  {
                    switch ( v4 )
                    {
                      case 0xDu:
                      case 0xFu:
                        result = sub_205EA70(a2, a3);
                        break;
                      case 0x13u:
                      case 0x14u:
                      case 0x19u:
                      case 0x1Au:
                      case 0x1Bu:
                        return a2;
                      case 0x16u:
                      case 0x17u:
                        v76 = sub_20CB0D0(a2);
                        result = sub_20552D0(v76);
                        break;
                      default:
                        return 0;
                    }
                    return result;
                  }
                  return 0;
                }
                v20 = *a3;
                goto LABEL_240;
              }
              goto LABEL_22;
            }
            v33 = (unsigned __int64)v206;
            v34 = *((void **)a3 + 3);
          }
          else
          {
            v33 = *((_QWORD *)a3 + 3);
            v34 = (void *)v33;
          }
          v35 = (void *)((unsigned __int64)v204 & v33);
          LODWORD(v207) = 0;
          v206 = v35;
          goto LABEL_73;
        default:
          goto LABEL_52;
      }
    }
    return (__int64)a3;
  }
  v15 = v9;
  v13 = (unsigned int)(v13 - 17);
  if ( v9 )
  {
    if ( (unsigned __int8)v11 <= 1u )
    {
      v7 = v4 - 13;
      switch ( v4 )
      {
        case 0xDu:
        case 0xFu:
          return sub_2057E60(*(_QWORD *)(a2 + 8));
        case 0xEu:
        case 0x12u:
        case 0x15u:
        case 0x18u:
          return sub_205F870(p_ptr, 0, 0, v15, v7);
        case 0x10u:
          goto LABEL_100;
        case 0x11u:
          if ( v9 != 5 )
            goto LABEL_142;
          v74 = (unsigned __int8 *)(a2 + 24);
          break;
        case 0x13u:
        case 0x14u:
        case 0x16u:
        case 0x17u:
          return sub_2058290(*((_QWORD *)a3 + 1));
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
          goto LABEL_41;
        case 0x1Cu:
          if ( v9 <= 1u )
            goto LABEL_136;
          return sub_205FC70(*(_QWORD *)(a2 + 8));
        case 0x1Du:
          if ( v9 <= 1u )
            goto LABEL_139;
          return sub_20603A0(*(_QWORD *)(a2 + 8));
        case 0x1Eu:
          if ( v9 <= 1u )
            goto LABEL_86;
          return sub_2057E60(*(_QWORD *)(a2 + 8));
        default:
          goto LABEL_7;
      }
LABEL_146:
      v75 = *(_QWORD **)v74;
      if ( *((_DWORD *)v74 + 2) > 0x40u )
        v75 = (_QWORD *)*v75;
      if ( ((unsigned __int8)v75 & 1) != 0 )
        return sub_2057E60(p_ptr);
      else
        return sub_205FC70(p_ptr);
    }
    goto LABEL_7;
  }
  v15 = v4 - 13;
  switch ( v4 )
  {
    case 0xDu:
    case 0xFu:
      return sub_2057E60(*(_QWORD *)(a2 + 8));
    case 0xEu:
    case 0x12u:
    case 0x15u:
    case 0x18u:
      goto LABEL_97;
    case 0x10u:
LABEL_100:
      if ( v9 == 6 )
      {
        if ( *(_QWORD *)(a2 + 24) == sub_21F90D0(v8, v12, v13) )
          v43 = *(_QWORD *)(a2 + 32);
        else
          v43 = a2 + 24;
        v44 = *(_BYTE *)(v43 + 20);
        if ( (v44 & 7) != 3 || (v44 & 8) == 0 )
          goto LABEL_104;
        goto LABEL_295;
      }
      if ( (unsigned int)v13 > 1 )
      {
LABEL_95:
        if ( v9 <= 1u )
        {
          LOBYTE(v11) = *a3;
LABEL_97:
          if ( (unsigned __int8)v11 <= 1u )
            return a2;
          p_ptr = *(void **)(a2 + 8);
          return sub_205F870(p_ptr, 0, 0, v15, v7);
        }
        v8 = *(_QWORD **)(a2 + 8);
LABEL_104:
        p_ptr = v8;
        return sub_205F870(p_ptr, 0, 0, v15, v7);
      }
      v39 = sub_205FD90(a2, 0);
      v41 = v39;
      if ( v39 && *(_BYTE *)v39 == 6 )
      {
        if ( *(_QWORD *)(v39 + 24) == sub_21F90D0(a2, 0, v40) )
          v42 = *(_QWORD *)(v41 + 32);
        else
          v42 = v41 + 24;
        if ( (*(_BYTE *)(v42 + 20) & 7) == 3 && (*(_BYTE *)(v42 + 20) & 8) != 0 )
        {
LABEL_348:
          LOBYTE(v11) = *a3;
LABEL_295:
          result = (__int64)a3;
          if ( (unsigned __int8)v11 <= 1u )
            return result;
        }
      }
      else if ( *((_BYTE *)v8 + 8) == 17 )
      {
        v137 = *((_DWORD *)v8 + 8);
        if ( v137 )
        {
          v138 = 0;
          for ( k = 0; k != v137; ++k )
          {
            v140 = (_BYTE *)sub_2060180(a2, k);
            v142 = v140;
            if ( !v140 )
              goto LABEL_94;
            v143 = *v140;
            if ( v143 != 1 )
            {
              if ( v143 != 6 )
                goto LABEL_94;
              v144 = *((_QWORD *)v142 + 3) == sub_21F90D0(a2, k, v141) ? *((_BYTE **)v142 + 4) : v142 + 24;
              if ( (v144[20] & 7) != 3 || (v144[20] & 8) == 0 )
                goto LABEL_94;
              v138 = 1;
            }
          }
          if ( v138 )
            goto LABEL_348;
        }
      }
LABEL_94:
      v9 = *(_BYTE *)a2;
      goto LABEL_95;
    case 0x11u:
      result = a2;
      if ( (unsigned __int8)v11 <= 1u )
        return result;
LABEL_142:
      if ( (unsigned int)v13 > 1 )
        goto LABEL_298;
      v73 = (_BYTE *)sub_205FD90(a2, 0);
      if ( v73 && *v73 == 5 )
      {
        p_ptr = *(void **)(a2 + 8);
        v74 = v73 + 24;
        goto LABEL_146;
      }
      LOBYTE(v12) = *a3;
LABEL_298:
      if ( (_BYTE)v12 == 5 )
      {
        v74 = a3 + 24;
        p_ptr = *(void **)(a2 + 8);
        goto LABEL_146;
      }
      if ( (unsigned int)*(unsigned __int8 *)(*((_QWORD *)a3 + 1) + 8LL) - 17 > 1 )
        goto LABEL_261;
      v167 = (_BYTE *)sub_205FD90(a3, 0);
      if ( !v167 || *v167 != 5 )
        goto LABEL_261;
      p_ptr = *(void **)(a2 + 8);
      v74 = v167 + 24;
      goto LABEL_146;
    case 0x13u:
    case 0x14u:
      if ( v11 <= 1 )
        return sub_2058290(*((_QWORD *)a3 + 1));
      if ( v11 - 10 > 2 )
        goto LABEL_256;
      v45 = *((_DWORD *)a3 + 1);
      v46 = &v206;
      v212 = 1;
      ptr = v213;
      v206 = v208;
      v47 = 4LL * (v45 & 0x7FFFFFF);
      v210 = 8;
      v48 = (unsigned __int8 **)&a3[-(v47 * 8)];
      v211 = 0;
      v207 = 0x800000000LL;
      if ( (a3[7] & 0x40) != 0 )
        v48 = *((unsigned __int8 ***)a3 - 1);
      v49 = &v48[v47];
      if ( v48 == &v48[v47] )
        return sub_2058290(*((_QWORD *)a3 + 1));
      do
      {
        v50 = *v48;
        v51 = **v48;
        if ( v51 <= 1 )
          goto LABEL_111;
        if ( v51 - 10 > 2 )
        {
LABEL_250:
          v52 = (void **)v206;
          v109 = 0;
          goto LABEL_251;
        }
        if ( v212 )
        {
          v158 = (char *)ptr;
          v159 = 8LL * HIDWORD(v210);
          v160 = (char *)ptr;
          v161 = (char *)ptr + v159;
          if ( ptr != (char *)ptr + v159 )
          {
            if ( v50 == *(unsigned __int8 **)ptr )
            {
LABEL_490:
              v162 = 0;
              goto LABEL_394;
            }
            while ( 1 )
            {
              v160 += 8;
              if ( v161 == v160 )
                break;
              if ( v50 == *(unsigned __int8 **)v160 )
                goto LABEL_490;
            }
          }
          if ( HIDWORD(v210) < (unsigned int)v210 )
          {
            ++HIDWORD(v210);
            v162 = 1;
            *(_QWORD *)v161 = v50;
            v158 = (char *)ptr;
            v160 = (char *)ptr + v159;
LABEL_394:
            v163 = &v158[8 * HIDWORD(v210)];
            goto LABEL_395;
          }
        }
        v196 = v46;
        v160 = (char *)sub_2236760(&ptr, *v48);
        v46 = v196;
        v162 = v177;
        v158 = (char *)ptr;
        if ( v212 )
          goto LABEL_394;
        v163 = (char *)ptr + 8 * (unsigned int)v210;
LABEL_395:
        if ( v163 != v160 && *(_QWORD *)v160 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v164 = v160 + 8;
          do
          {
            v165 = v164;
            if ( v163 == v164 )
              break;
            v164 += 8;
          }
          while ( *(_QWORD *)v165 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v162 )
        {
          v166 = v207;
          if ( (unsigned int)v207 >= (unsigned __int64)HIDWORD(v207) )
          {
            if ( HIDWORD(v207) < (unsigned __int64)(unsigned int)v207 + 1 )
            {
              v199 = v46;
              sub_2237220(v46, v208, (unsigned int)v207 + 1LL, 8);
              v46 = v199;
            }
            *((_QWORD *)v206 + (unsigned int)v207) = v50;
            LODWORD(v207) = v207 + 1;
          }
          else
          {
            *((_QWORD *)v206 + (unsigned int)v207) = v50;
            LODWORD(v207) = v166 + 1;
          }
        }
LABEL_111:
        v48 += 4;
      }
      while ( v49 != v48 );
      v52 = (void **)v206;
      v183 = v46 + 2;
      while ( (_DWORD)v207 )
      {
        v53 = v52[(unsigned int)v207 - 1];
        LODWORD(v207) = v207 - 1;
        v54 = 32LL * (v53[1] & 0x7FFFFFF);
        if ( (*((_BYTE *)v53 + 7) & 0x40) != 0 )
        {
          v55 = *((unsigned __int8 ***)v53 - 1);
          v56 = &v55[(unsigned __int64)v54 / 8];
        }
        else
        {
          v56 = (unsigned __int8 **)v53;
          v55 = (unsigned __int8 **)&v53[v54 / 0xFFFFFFFFFFFFFFFCLL];
        }
        if ( v55 != v56 )
        {
          do
          {
            v57 = *v55;
            v58 = **v55;
            if ( v58 <= 1 )
              goto LABEL_118;
            if ( v58 - 10 > 2 )
              goto LABEL_250;
            if ( v212 )
            {
              v128 = (char *)ptr;
              v129 = 8LL * HIDWORD(v210);
              v130 = (char *)ptr;
              v131 = (char *)ptr + v129;
              if ( ptr != (char *)ptr + v129 )
              {
                if ( v57 == *(unsigned __int8 **)ptr )
                {
LABEL_437:
                  v132 = 0;
                  goto LABEL_326;
                }
                while ( 1 )
                {
                  v130 += 8;
                  if ( v131 == v130 )
                    break;
                  if ( v57 == *(unsigned __int8 **)v130 )
                    goto LABEL_437;
                }
              }
              if ( HIDWORD(v210) < (unsigned int)v210 )
              {
                ++HIDWORD(v210);
                v132 = 1;
                *(_QWORD *)v131 = v57;
                v128 = (char *)ptr;
                v130 = (char *)ptr + v129;
LABEL_326:
                v133 = &v128[8 * HIDWORD(v210)];
                goto LABEL_327;
              }
            }
            v195 = v46;
            v130 = (char *)sub_2236760(&ptr, *v55);
            v46 = v195;
            v132 = v169;
            v128 = (char *)ptr;
            if ( v212 )
              goto LABEL_326;
            v133 = (char *)ptr + 8 * (unsigned int)v210;
LABEL_327:
            if ( v133 != v130 && *(_QWORD *)v130 >= 0xFFFFFFFFFFFFFFFELL )
            {
              v134 = v130 + 8;
              do
              {
                v135 = v134;
                if ( v133 == v134 )
                  break;
                v134 += 8;
              }
              while ( *(_QWORD *)v135 >= 0xFFFFFFFFFFFFFFFELL );
            }
            if ( v132 )
            {
              v136 = v207;
              if ( (unsigned int)v207 >= (unsigned __int64)HIDWORD(v207) )
              {
                if ( HIDWORD(v207) < (unsigned __int64)(unsigned int)v207 + 1 )
                {
                  v200 = v46;
                  sub_2237220(v46, v183, (unsigned int)v207 + 1LL, 8);
                  v46 = v200;
                }
                *((_QWORD *)v206 + (unsigned int)v207) = v57;
                LODWORD(v207) = v207 + 1;
              }
              else
              {
                *((_QWORD *)v206 + (unsigned int)v207) = v57;
                LODWORD(v207) = v136 + 1;
              }
            }
LABEL_118:
            v55 += 4;
          }
          while ( v56 != v55 );
          v52 = (void **)v206;
        }
      }
      v109 = 1;
LABEL_251:
      if ( v52 != v46 + 2 )
        free(v52);
      if ( !v212 )
        free(ptr);
      if ( v109 )
        return sub_2058290(*((_QWORD *)a3 + 1));
LABEL_256:
      v110 = sub_20510E0(a3);
      if ( v110 )
        return sub_2058290(*((_QWORD *)a3 + 1));
      if ( *a3 == 5 )
      {
LABEL_258:
        v111 = *((_DWORD *)a3 + 8);
        if ( v111 <= 0x40 )
          v110 = *((_QWORD *)a3 + 3) == 0;
        else
          v110 = v111 == (unsigned int)sub_2206780(a3 + 24);
        goto LABEL_260;
      }
      v172 = *((_QWORD *)a3 + 1);
      if ( (unsigned int)*(unsigned __int8 *)(v172 + 8) - 17 > 1 )
        goto LABEL_261;
      v114 = sub_205FD90(a3, 0);
      if ( v114 && *(_BYTE *)v114 == 5 )
        goto LABEL_274;
      if ( *(_BYTE *)(v172 + 8) != 17 )
        goto LABEL_261;
      v173 = *(_DWORD *)(v172 + 32);
      for ( m = 0; v173 != m; ++m )
      {
        v175 = sub_2060180(a3, m);
        if ( !v175 )
          goto LABEL_261;
        if ( *(_BYTE *)v175 != 1 )
        {
          if ( *(_BYTE *)v175 != 5 )
            goto LABEL_261;
          v176 = *(_DWORD *)(v175 + 32);
          v110 = v176 <= 0x40 ? *(_QWORD *)(v175 + 24) == 0 : v176 == (unsigned int)sub_2206780(v175 + 24);
          if ( !v110 )
            goto LABEL_261;
        }
      }
LABEL_260:
      if ( !v110 )
      {
LABEL_261:
        p_ptr = *(void **)(a2 + 8);
        return sub_205FC70(p_ptr);
      }
      return sub_2058290(*((_QWORD *)a3 + 1));
    case 0x16u:
    case 0x17u:
      if ( v11 <= 1 )
        return sub_2058290(*((_QWORD *)a3 + 1));
      if ( v11 - 10 > 2 )
        goto LABEL_269;
      v59 = *((_DWORD *)a3 + 1);
      v60 = &v206;
      v212 = 1;
      ptr = v213;
      v206 = v208;
      v61 = 4LL * (v59 & 0x7FFFFFF);
      v210 = 8;
      v62 = (unsigned __int8 **)&a3[-(v61 * 8)];
      v211 = 0;
      v207 = 0x800000000LL;
      if ( (a3[7] & 0x40) != 0 )
        v62 = *((unsigned __int8 ***)a3 - 1);
      v63 = &v62[v61];
      if ( v62 == &v62[v61] )
        return sub_2058290(*((_QWORD *)a3 + 1));
      break;
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
LABEL_41:
      if ( (unsigned __int8)v11 <= 1u )
        return sub_2058290(*((_QWORD *)a3 + 1));
      return sub_205FC70(*(_QWORD *)(a2 + 8));
    case 0x1Cu:
LABEL_136:
      if ( (unsigned __int8)v11 > 1u )
        return sub_205FC70(*(_QWORD *)(a2 + 8));
      return a2;
    case 0x1Du:
LABEL_139:
      if ( (unsigned __int8)v11 <= 1u )
        return a2;
      return sub_20603A0(*(_QWORD *)(a2 + 8));
    case 0x1Eu:
LABEL_86:
      if ( (unsigned __int8)v11 <= 1u )
        return sub_205FC70(*(_QWORD *)(a2 + 8));
      else
        return sub_2057E60(*(_QWORD *)(a2 + 8));
    default:
      goto LABEL_7;
  }
  while ( 1 )
  {
    v64 = *v62;
    v65 = **v62;
    if ( v65 > 1 )
      break;
LABEL_126:
    v62 += 4;
    if ( v63 == v62 )
    {
      v66 = (void **)v206;
      v184 = v60 + 2;
      do
      {
LABEL_128:
        if ( !(_DWORD)v207 )
        {
          v112 = 1;
LABEL_264:
          if ( v66 != v60 + 2 )
            free(v66);
          if ( !v212 )
            free(ptr);
          if ( v112 )
            return sub_2058290(*((_QWORD *)a3 + 1));
LABEL_269:
          v110 = sub_20510E0(a3);
          if ( v110 )
            return sub_2058290(*((_QWORD *)a3 + 1));
          if ( *a3 == 5 )
            goto LABEL_258;
          v113 = *((_QWORD *)a3 + 1);
          if ( (unsigned int)*(unsigned __int8 *)(v113 + 8) - 17 > 1 )
            goto LABEL_261;
          v114 = sub_205FD90(a3, 0);
          if ( !v114 || *(_BYTE *)v114 != 5 )
          {
            if ( *(_BYTE *)(v113 + 8) == 17 )
            {
              v178 = *(_DWORD *)(v113 + 32);
              for ( n = 0; ; ++n )
              {
                if ( v178 == n )
                  goto LABEL_260;
                v180 = sub_2060180(a3, n);
                if ( !v180 )
                  break;
                if ( *(_BYTE *)v180 != 1 )
                {
                  if ( *(_BYTE *)v180 != 5 )
                    break;
                  v181 = *(_DWORD *)(v180 + 32);
                  v110 = v181 <= 0x40 ? *(_QWORD *)(v180 + 24) == 0 : v181 == (unsigned int)sub_2206780(v180 + 24);
                  if ( !v110 )
                    break;
                }
              }
            }
            goto LABEL_261;
          }
LABEL_274:
          v115 = *(_DWORD *)(v114 + 32);
          if ( v115 <= 0x40 )
            v110 = *(_QWORD *)(v114 + 24) == 0;
          else
            v110 = v115 == (unsigned int)sub_2206780(v114 + 24);
          goto LABEL_260;
        }
        v67 = v66[(unsigned int)v207 - 1];
        LODWORD(v207) = v207 - 1;
        v68 = 32LL * (v67[1] & 0x7FFFFFF);
        if ( (*((_BYTE *)v67 + 7) & 0x40) != 0 )
        {
          v69 = *((unsigned __int8 ***)v67 - 1);
          v70 = &v69[(unsigned __int64)v68 / 8];
        }
        else
        {
          v70 = (unsigned __int8 **)v67;
          v69 = (unsigned __int8 **)&v67[v68 / 0xFFFFFFFFFFFFFFFCLL];
        }
      }
      while ( v70 == v69 );
      while ( 2 )
      {
        v71 = *v69;
        v72 = **v69;
        if ( v72 <= 1 )
        {
LABEL_133:
          v69 += 4;
          if ( v70 == v69 )
          {
            v66 = (void **)v206;
            goto LABEL_128;
          }
          continue;
        }
        break;
      }
      if ( v72 - 10 > 2 )
        goto LABEL_263;
      if ( v212 )
      {
        v119 = (char *)ptr;
        v120 = 8LL * HIDWORD(v210);
        v121 = (char *)ptr;
        v122 = (char *)ptr + v120;
        if ( ptr != (char *)ptr + v120 )
        {
          if ( v71 == *(unsigned __int8 **)ptr )
          {
LABEL_435:
            v123 = 0;
LABEL_309:
            v124 = &v119[8 * HIDWORD(v210)];
            goto LABEL_310;
          }
          while ( 1 )
          {
            v121 += 8;
            if ( v122 == v121 )
              break;
            if ( v71 == *(unsigned __int8 **)v121 )
              goto LABEL_435;
          }
        }
        if ( HIDWORD(v210) < (unsigned int)v210 )
        {
          ++HIDWORD(v210);
          v123 = 1;
          *(_QWORD *)v122 = v71;
          v119 = (char *)ptr;
          v121 = (char *)ptr + v120;
          goto LABEL_309;
        }
      }
      v194 = v60;
      v121 = (char *)sub_2236760(&ptr, *v69);
      v60 = v194;
      v123 = v168;
      v119 = (char *)ptr;
      if ( v212 )
        goto LABEL_309;
      v124 = (char *)ptr + 8 * (unsigned int)v210;
LABEL_310:
      if ( v124 != v121 && *(_QWORD *)v121 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v125 = v121 + 8;
        do
        {
          v126 = v125;
          if ( v124 == v125 )
            break;
          v125 += 8;
        }
        while ( *(_QWORD *)v126 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v123 )
      {
        v127 = v207;
        if ( (unsigned int)v207 >= (unsigned __int64)HIDWORD(v207) )
        {
          if ( HIDWORD(v207) < (unsigned __int64)(unsigned int)v207 + 1 )
          {
            v198 = v60;
            sub_2237220(v60, v184, (unsigned int)v207 + 1LL, 8);
            v60 = v198;
          }
          *((_QWORD *)v206 + (unsigned int)v207) = v71;
          LODWORD(v207) = v207 + 1;
        }
        else
        {
          *((_QWORD *)v206 + (unsigned int)v207) = v71;
          LODWORD(v207) = v127 + 1;
        }
      }
      goto LABEL_133;
    }
  }
  if ( v65 - 10 > 2 )
  {
LABEL_263:
    v66 = (void **)v206;
    v112 = 0;
    goto LABEL_264;
  }
  if ( !v212 )
    goto LABEL_486;
  v149 = (char *)ptr;
  v150 = 8LL * HIDWORD(v210);
  v151 = (char *)ptr;
  v152 = (char *)ptr + v150;
  if ( ptr != (char *)ptr + v150 )
  {
    if ( *(unsigned __int8 **)ptr == v64 )
    {
LABEL_488:
      v153 = 0;
      goto LABEL_372;
    }
    while ( 1 )
    {
      v151 += 8;
      if ( v152 == v151 )
        break;
      if ( v64 == *(unsigned __int8 **)v151 )
        goto LABEL_488;
    }
  }
  if ( HIDWORD(v210) < (unsigned int)v210 )
  {
    ++HIDWORD(v210);
    v153 = 1;
    *(_QWORD *)v152 = v64;
    v149 = (char *)ptr;
    v151 = (char *)ptr + v150;
  }
  else
  {
LABEL_486:
    v197 = v60;
    v151 = (char *)sub_2236760(&ptr, *v62);
    v60 = v197;
    v153 = v182;
    v149 = (char *)ptr;
    if ( !v212 )
    {
      v154 = (char *)ptr + 8 * (unsigned int)v210;
LABEL_373:
      if ( v154 != v151 && *(_QWORD *)v151 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v155 = v151 + 8;
        do
        {
          v156 = v155;
          if ( v154 == v155 )
            break;
          v155 += 8;
        }
        while ( *(_QWORD *)v156 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v153 )
      {
        v157 = v207;
        if ( (unsigned int)v207 >= (unsigned __int64)HIDWORD(v207) )
        {
          if ( HIDWORD(v207) < (unsigned __int64)(unsigned int)v207 + 1 )
          {
            v201 = v60;
            sub_2237220(v60, v208, (unsigned int)v207 + 1LL, 8);
            v60 = v201;
          }
          *((_QWORD *)v206 + (unsigned int)v207) = v64;
          LODWORD(v207) = v207 + 1;
        }
        else
        {
          *((_QWORD *)v206 + (unsigned int)v207) = v64;
          LODWORD(v207) = v157 + 1;
        }
      }
      goto LABEL_126;
    }
  }
LABEL_372:
  v154 = &v149[8 * HIDWORD(v210)];
  goto LABEL_373;
}
