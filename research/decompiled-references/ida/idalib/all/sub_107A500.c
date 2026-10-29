__int64 __fastcall sub_107A500(__int64 a1, const char **a2, __int64 a3)
{
  const char *v4; // rbp
  size_t v5; // rdx
  __int64 result; // rax
  _BOOL4 v7; // r13d
  __int64 v8; // rax
  int *v9; // rbp
  unsigned __int64 v10; // rdx
  int *v11; // r12
  _DWORD *v12; // rax
  __int64 v13; // r13
  _BOOL4 v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // zf
  __int64 *v19; // r12
  __int64 v20; // r13
  int *v21; // r8
  unsigned __int64 v22; // rdx
  int *v23; // r14
  int v24; // ebp
  _DWORD *v25; // rax
  int *v26; // rbp
  __int64 i; // rax
  __int64 v28; // rdx
  _BOOL4 v29; // r15d
  __int64 v30; // rax
  int *v31; // rax
  unsigned __int64 v32; // rcx
  int *v33; // rbp
  _DWORD *v34; // rdx
  int *v35; // r12
  _BOOL4 v36; // r15d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  int *v40; // rax
  unsigned __int64 v41; // rcx
  int *v42; // rbp
  _DWORD *v43; // rdx
  int *v44; // r12
  _BOOL4 v45; // r15d
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  int *v49; // rax
  unsigned __int64 v50; // rcx
  int *v51; // rbp
  _DWORD *v52; // rdx
  int *v53; // r12
  _BOOL4 v54; // r15d
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  int *v58; // rbp
  _DWORD *v59; // rdx
  int *v60; // r12
  _BOOL4 v61; // r15d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  _BOOL4 v65; // r15d
  __int64 v66; // rax
  __int64 v67; // rbp
  int v68; // ecx
  __int64 v69; // rax
  char v70; // si
  int v71; // edx
  __int64 v72; // rbp
  int v73; // r15d
  __int64 v74; // rax
  char v75; // cl
  int v76; // edx
  _BOOL4 v77; // r14d
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  __int64 v80; // rbp
  __int64 v81; // r12
  __int64 v82; // rax
  char v83; // si
  int v84; // edx
  __int64 v85; // rax
  char v86; // si
  int v87; // edx
  __int64 v88; // rax
  char v89; // si
  int v90; // edx
  __int64 v91; // rax
  char v92; // si
  int v93; // edx
  __int64 v94; // rax
  char v95; // si
  int v96; // edx
  __int64 v97; // rbp
  __int64 v98; // rax
  char v99; // cl
  int v100; // edx
  __int64 v101; // rax
  char v102; // cl
  int v103; // edx
  __int64 v104; // rax
  char v105; // cl
  int v106; // edx
  __int64 v107; // rax
  char v108; // cl
  int v109; // edx
  __int64 v110; // rax
  char v111; // cl
  int v112; // edx
  _BOOL4 v113; // r12d
  __int64 v114; // rax
  unsigned __int64 v115; // rdx
  __int64 v116; // [rsp+8h] [rbp-60h]
  __int64 v117; // [rsp+8h] [rbp-60h]
  __int64 v118; // [rsp+8h] [rbp-60h]
  __int64 v119; // [rsp+8h] [rbp-60h]
  __int64 v120; // [rsp+8h] [rbp-60h]
  __int64 v121; // [rsp+10h] [rbp-58h]
  __int64 v122; // [rsp+24h] [rbp-44h] BYREF
  int v123; // [rsp+2Ch] [rbp-3Ch]
  char v124; // [rsp+30h] [rbp-38h] BYREF

  v4 = *a2;
  if ( !*a2 || (v5 = strlen(*a2), result = 0, v5 <= 1) )
  {
    switch ( *v4 )
    {
      case 'G':
        *(_DWORD *)a3 |= 0x10u;
        if ( !*(_QWORD *)(a3 + 96) )
        {
          v49 = *(int **)(a3 + 24);
          v50 = *(unsigned int *)(a3 + 32);
          v51 = &v49[v50];
          if ( v49 == v51 )
          {
            v13 = a3 + 64;
            if ( v50 <= 3 )
              goto LABEL_210;
LABEL_231:
            v97 = *(_QWORD *)(a3 + 72);
            *(_DWORD *)(a3 + 32) = 0;
            if ( !v97 )
            {
              v97 = v13;
              if ( v13 == *(_QWORD *)(a3 + 80) )
                goto LABEL_324;
              goto LABEL_298;
            }
            while ( 1 )
            {
              v109 = *(_DWORD *)(v97 + 32);
              if ( v109 > 0 )
              {
                v107 = *(_QWORD *)(v97 + 16);
                v108 = 1;
              }
              else
              {
                v107 = *(_QWORD *)(v97 + 24);
                v108 = 0;
              }
              if ( !v107 )
                break;
              v97 = v107;
            }
            if ( v108 )
            {
              if ( *(_QWORD *)(a3 + 80) != v97 )
              {
LABEL_298:
                if ( *(int *)(std::_Rb_tree_decrement(v97) + 32) >= 0 )
                  return 1;
              }
            }
            else if ( v109 >= 0 )
            {
              return 1;
            }
            v113 = 1;
            if ( v13 == v97 )
              goto LABEL_265;
            goto LABEL_287;
          }
          if ( !*v49 )
            return 1;
          v52 = *(_DWORD **)(a3 + 24);
          while ( v51 != ++v52 )
          {
            if ( !*v52 )
              return 1;
          }
          if ( v50 > 3 )
          {
            v13 = a3 + 64;
            v53 = *(int **)(a3 + 24);
            do
            {
              v56 = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v53);
              if ( v57 )
              {
                v54 = v56 || v13 == v57 || *v53 < *(_DWORD *)(v57 + 32);
                v119 = v57;
                v55 = operator new(0x28u);
                *(_DWORD *)(v55 + 32) = *v53;
                std::_Rb_tree_insert_and_rebalance(v54, v55, v119, a3 + 64);
                ++*(_QWORD *)(a3 + 96);
              }
              ++v53;
            }
            while ( v51 != v53 );
            goto LABEL_231;
          }
LABEL_210:
          if ( v50 + 1 > *(unsigned int *)(a3 + 36) )
          {
            sub_2237220(a3 + 24, a3 + 40, v50 + 1, 4);
            v49 = *(int **)(a3 + 24);
            v50 = *(unsigned int *)(a3 + 32);
          }
          v49[v50] = 0;
          ++*(_DWORD *)(a3 + 32);
          return 1;
        }
        v80 = *(_QWORD *)(a3 + 72);
        v81 = a3 + 64;
        if ( !v80 )
        {
          v80 = a3 + 64;
          if ( *(_QWORD *)(a3 + 80) == v81 )
            goto LABEL_313;
          goto LABEL_257;
        }
        while ( 1 )
        {
          v93 = *(_DWORD *)(v80 + 32);
          if ( v93 > 0 )
          {
            v91 = *(_QWORD *)(v80 + 16);
            v92 = 1;
          }
          else
          {
            v91 = *(_QWORD *)(v80 + 24);
            v92 = 0;
          }
          if ( !v91 )
            break;
          v80 = v91;
        }
        if ( v92 )
        {
          if ( *(_QWORD *)(a3 + 80) != v80 )
          {
LABEL_257:
            if ( *(int *)(std::_Rb_tree_decrement(v80) + 32) >= 0 )
              return 1;
          }
        }
        else if ( v93 >= 0 )
        {
          return 1;
        }
        v7 = 1;
        if ( v80 != v81 )
          goto LABEL_183;
        goto LABEL_8;
      case 'I':
        *(_DWORD *)a3 |= 0x10u;
        *(_QWORD *)(a3 + 8) = 0x4000000000LL;
        result = 1;
        *(_BYTE *)(a3 + 16) = 1;
        return result;
      case 'J':
        *(_DWORD *)a3 |= 0x10u;
        *(_QWORD *)(a3 + 8) = 4294967233LL;
        result = 1;
        *(_BYTE *)(a3 + 16) = 1;
        return result;
      case 'K':
        *(_DWORD *)a3 |= 0x10u;
        if ( !*(_QWORD *)(a3 + 96) )
        {
          v40 = *(int **)(a3 + 24);
          v41 = *(unsigned int *)(a3 + 32);
          v42 = &v40[v41];
          if ( v40 == v42 )
          {
            if ( v41 > 3 )
            {
              v13 = a3 + 64;
              goto LABEL_224;
            }
          }
          else
          {
            if ( *v40 == 2 )
              return 1;
            v43 = *(_DWORD **)(a3 + 24);
            while ( v42 != ++v43 )
            {
              if ( *v43 == 2 )
                return 1;
            }
            if ( v41 > 3 )
            {
              v13 = a3 + 64;
              v44 = *(int **)(a3 + 24);
              do
              {
                v47 = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v44);
                if ( v48 )
                {
                  v45 = v47 || v48 == v13 || *v44 < *(_DWORD *)(v48 + 32);
                  v118 = v48;
                  v46 = operator new(0x28u);
                  *(_DWORD *)(v46 + 32) = *v44;
                  std::_Rb_tree_insert_and_rebalance(v45, v46, v118, a3 + 64);
                  ++*(_QWORD *)(a3 + 96);
                }
                ++v44;
              }
              while ( v42 != v44 );
LABEL_224:
              v97 = *(_QWORD *)(a3 + 72);
              *(_DWORD *)(a3 + 32) = 0;
              if ( v97 )
              {
                while ( 1 )
                {
                  v106 = *(_DWORD *)(v97 + 32);
                  if ( v106 > 2 )
                  {
                    v104 = *(_QWORD *)(v97 + 16);
                    v105 = 1;
                  }
                  else
                  {
                    v104 = *(_QWORD *)(v97 + 24);
                    v105 = 0;
                  }
                  if ( !v104 )
                    break;
                  v97 = v104;
                }
                if ( !v105 )
                {
                  if ( v106 > 1 )
                    return 1;
                  goto LABEL_281;
                }
                if ( *(_QWORD *)(a3 + 80) == v97 )
                {
LABEL_281:
                  v113 = 1;
                  if ( v13 != v97 )
                    v113 = *(_DWORD *)(v97 + 32) > 2;
                  goto LABEL_283;
                }
              }
              else
              {
                v97 = v13;
                if ( v13 == *(_QWORD *)(a3 + 80) )
                {
                  v113 = 1;
LABEL_283:
                  v114 = operator new(0x28u);
                  *(_DWORD *)(v114 + 32) = 2;
                  goto LABEL_266;
                }
              }
              if ( *(int *)(std::_Rb_tree_decrement(v97) + 32) > 1 )
                return 1;
              goto LABEL_281;
            }
          }
          if ( v41 + 1 > *(unsigned int *)(a3 + 36) )
          {
            sub_2237220(a3 + 24, a3 + 40, v41 + 1, 4);
            v40 = *(int **)(a3 + 24);
            v41 = *(unsigned int *)(a3 + 32);
          }
          v40[v41] = 2;
          ++*(_DWORD *)(a3 + 32);
          return 1;
        }
        v80 = *(_QWORD *)(a3 + 72);
        v81 = a3 + 64;
        if ( v80 )
        {
          while ( 1 )
          {
            v90 = *(_DWORD *)(v80 + 32);
            if ( v90 > 2 )
            {
              v88 = *(_QWORD *)(v80 + 16);
              v89 = 1;
            }
            else
            {
              v88 = *(_QWORD *)(v80 + 24);
              v89 = 0;
            }
            if ( !v88 )
              break;
            v80 = v88;
          }
          if ( !v89 )
          {
            if ( v90 > 1 )
              return 1;
            goto LABEL_188;
          }
          if ( *(_QWORD *)(a3 + 80) == v80 )
          {
LABEL_188:
            v7 = 1;
            if ( v81 != v80 )
              v7 = *(_DWORD *)(v80 + 32) > 2;
            goto LABEL_190;
          }
        }
        else
        {
          v80 = a3 + 64;
          if ( v81 == *(_QWORD *)(a3 + 80) )
          {
            v7 = 1;
LABEL_190:
            v8 = operator new(0x28u);
            *(_DWORD *)(v8 + 32) = 2;
            goto LABEL_9;
          }
        }
        if ( *(int *)(std::_Rb_tree_decrement(v80) + 32) <= 1 )
          goto LABEL_188;
        return 1;
      case 'L':
        *(_DWORD *)a3 |= 0x10u;
        if ( !*(_QWORD *)(a3 + 96) )
        {
          v49 = *(int **)(a3 + 24);
          v50 = *(unsigned int *)(a3 + 32);
          v58 = &v49[v50];
          if ( v49 == v58 )
          {
            v13 = a3 + 64;
            if ( v50 <= 3 )
              goto LABEL_210;
          }
          else
          {
            if ( !*v49 )
              return 1;
            v59 = *(_DWORD **)(a3 + 24);
            while ( v58 != ++v59 )
            {
              if ( !*v59 )
                return 1;
            }
            if ( v50 <= 3 )
              goto LABEL_210;
            v13 = a3 + 64;
            v60 = *(int **)(a3 + 24);
            do
            {
              v63 = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v60);
              if ( v64 )
              {
                v61 = v63 || v13 == v64 || *v60 < *(_DWORD *)(v64 + 32);
                v120 = v64;
                v62 = operator new(0x28u);
                *(_DWORD *)(v62 + 32) = *v60;
                std::_Rb_tree_insert_and_rebalance(v61, v62, v120, a3 + 64);
                ++*(_QWORD *)(a3 + 96);
              }
              ++v60;
            }
            while ( v58 != v60 );
          }
          v97 = *(_QWORD *)(a3 + 72);
          *(_DWORD *)(a3 + 32) = 0;
          if ( !v97 )
          {
            v97 = v13;
            if ( *(_QWORD *)(a3 + 80) == v13 )
            {
LABEL_324:
              v113 = 1;
              goto LABEL_265;
            }
LABEL_301:
            if ( *(int *)(std::_Rb_tree_decrement(v97) + 32) >= 0 )
              return 1;
LABEL_264:
            v113 = 1;
            if ( v97 == v13 )
            {
LABEL_265:
              v114 = operator new(0x28u);
              *(_DWORD *)(v114 + 32) = 0;
LABEL_266:
              std::_Rb_tree_insert_and_rebalance(v113, v114, v97, v13);
              ++*(_QWORD *)(a3 + 96);
              return 1;
            }
LABEL_287:
            v113 = *(_DWORD *)(v97 + 32) > 0;
            goto LABEL_265;
          }
          while ( 1 )
          {
            v100 = *(_DWORD *)(v97 + 32);
            if ( v100 > 0 )
            {
              v98 = *(_QWORD *)(v97 + 16);
              v99 = 1;
            }
            else
            {
              v98 = *(_QWORD *)(v97 + 24);
              v99 = 0;
            }
            if ( !v98 )
              break;
            v97 = v98;
          }
          if ( v99 )
          {
            if ( *(_QWORD *)(a3 + 80) == v97 )
              goto LABEL_264;
            goto LABEL_301;
          }
          if ( v100 < 0 )
            goto LABEL_264;
          return 1;
        }
        v80 = *(_QWORD *)(a3 + 72);
        v81 = a3 + 64;
        if ( v80 )
        {
          while ( 1 )
          {
            v96 = *(_DWORD *)(v80 + 32);
            if ( v96 > 0 )
            {
              v94 = *(_QWORD *)(v80 + 16);
              v95 = 1;
            }
            else
            {
              v94 = *(_QWORD *)(v80 + 24);
              v95 = 0;
            }
            if ( !v94 )
              break;
            v80 = v94;
          }
          if ( !v95 )
          {
            if ( v96 >= 0 )
              return 1;
            goto LABEL_182;
          }
          if ( *(_QWORD *)(a3 + 80) == v80 )
          {
LABEL_182:
            v7 = 1;
            if ( v81 != v80 )
LABEL_183:
              v7 = *(_DWORD *)(v80 + 32) > 0;
            goto LABEL_8;
          }
        }
        else
        {
          v80 = a3 + 64;
          if ( v81 == *(_QWORD *)(a3 + 80) )
          {
LABEL_313:
            v7 = 1;
LABEL_8:
            v8 = operator new(0x28u);
            *(_DWORD *)(v8 + 32) = 0;
            goto LABEL_9;
          }
        }
        if ( *(int *)(std::_Rb_tree_decrement(v80) + 32) >= 0 )
          return 1;
        goto LABEL_182;
      case 'M':
        *(_DWORD *)a3 |= 0x10u;
        *(_QWORD *)(a3 + 8) = 0xFF00000000LL;
        result = 1;
        *(_BYTE *)(a3 + 16) = 1;
        return result;
      case 'N':
        *(_DWORD *)a3 |= 0x10u;
        if ( !*(_QWORD *)(a3 + 96) )
        {
          v31 = *(int **)(a3 + 24);
          v32 = *(unsigned int *)(a3 + 32);
          v33 = &v31[v32];
          if ( v31 == v33 )
          {
            if ( v32 > 3 )
            {
              v13 = a3 + 64;
              goto LABEL_240;
            }
          }
          else
          {
            if ( *v31 == -1 )
              return 1;
            v34 = *(_DWORD **)(a3 + 24);
            while ( v33 != ++v34 )
            {
              if ( *v34 == -1 )
                return 1;
            }
            if ( v32 > 3 )
            {
              v13 = a3 + 64;
              v35 = *(int **)(a3 + 24);
              do
              {
                v38 = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v35);
                if ( v39 )
                {
                  v36 = v38 || v39 == v13 || *v35 < *(_DWORD *)(v39 + 32);
                  v117 = v39;
                  v37 = operator new(0x28u);
                  *(_DWORD *)(v37 + 32) = *v35;
                  std::_Rb_tree_insert_and_rebalance(v36, v37, v117, a3 + 64);
                  ++*(_QWORD *)(a3 + 96);
                }
                ++v35;
              }
              while ( v33 != v35 );
LABEL_240:
              v97 = *(_QWORD *)(a3 + 72);
              *(_DWORD *)(a3 + 32) = 0;
              if ( v97 )
              {
                while ( 1 )
                {
                  v112 = *(_DWORD *)(v97 + 32);
                  if ( v112 >= 0 )
                  {
                    v110 = *(_QWORD *)(v97 + 16);
                    v111 = 1;
                  }
                  else
                  {
                    v110 = *(_QWORD *)(v97 + 24);
                    v111 = 0;
                  }
                  if ( !v110 )
                    break;
                  v97 = v110;
                }
                if ( !v111 )
                {
                  if ( v112 >= -1 )
                    return 1;
                  goto LABEL_276;
                }
                if ( *(_QWORD *)(a3 + 80) == v97 )
                {
LABEL_276:
                  v113 = 1;
                  if ( v97 != v13 )
                    v113 = *(_DWORD *)(v97 + 32) >= 0;
                  goto LABEL_278;
                }
              }
              else
              {
                v97 = v13;
                if ( *(_QWORD *)(a3 + 80) == v13 )
                {
                  v113 = 1;
LABEL_278:
                  v114 = operator new(0x28u);
                  *(_DWORD *)(v114 + 32) = -1;
                  goto LABEL_266;
                }
              }
              if ( *(int *)(std::_Rb_tree_decrement(v97) + 32) >= -1 )
                return 1;
              goto LABEL_276;
            }
          }
          if ( v32 + 1 > *(unsigned int *)(a3 + 36) )
          {
            sub_2237220(a3 + 24, a3 + 40, v32 + 1, 4);
            v31 = *(int **)(a3 + 24);
            v32 = *(unsigned int *)(a3 + 32);
          }
          v31[v32] = -1;
          ++*(_DWORD *)(a3 + 32);
          return 1;
        }
        v80 = *(_QWORD *)(a3 + 72);
        v81 = a3 + 64;
        if ( !v80 )
        {
          v80 = a3 + 64;
          if ( *(_QWORD *)(a3 + 80) == v81 )
          {
            v7 = 1;
LABEL_195:
            v8 = operator new(0x28u);
            *(_DWORD *)(v8 + 32) = -1;
            goto LABEL_9;
          }
          goto LABEL_248;
        }
        while ( 1 )
        {
          v87 = *(_DWORD *)(v80 + 32);
          if ( v87 >= 0 )
          {
            v85 = *(_QWORD *)(v80 + 16);
            v86 = 1;
          }
          else
          {
            v85 = *(_QWORD *)(v80 + 24);
            v86 = 0;
          }
          if ( !v85 )
            break;
          v80 = v85;
        }
        if ( v86 )
        {
          if ( *(_QWORD *)(a3 + 80) != v80 )
          {
LABEL_248:
            if ( *(int *)(std::_Rb_tree_decrement(v80) + 32) >= -1 )
              return 1;
          }
        }
        else if ( v87 >= -1 )
        {
          return 1;
        }
        v7 = 1;
        if ( v81 != v80 )
          v7 = *(_DWORD *)(v80 + 32) >= 0;
        goto LABEL_195;
      case 'O':
        *(_DWORD *)a3 |= 0x10u;
        v18 = *(_QWORD *)(a3 + 96) == 0;
        v19 = &v122;
        v122 = 0x1000000008LL;
        v20 = a3 + 64;
        v123 = 24;
        if ( v18 )
          goto LABEL_27;
LABEL_115:
        v67 = *(_QWORD *)(a3 + 72);
        if ( v67 )
        {
          v68 = *(_DWORD *)v19;
          while ( 1 )
          {
            v71 = *(_DWORD *)(v67 + 32);
            if ( v68 < v71 )
            {
              v69 = *(_QWORD *)(v67 + 16);
              v70 = 1;
            }
            else
            {
              v69 = *(_QWORD *)(v67 + 24);
              v70 = 0;
            }
            if ( !v69 )
              break;
            v67 = v69;
          }
          if ( !v70 )
          {
            if ( v68 <= v71 )
              goto LABEL_113;
            goto LABEL_110;
          }
          if ( *(_QWORD *)(a3 + 80) == v67 )
          {
LABEL_110:
            v65 = 1;
            if ( v20 != v67 )
              v65 = *(_DWORD *)v19 < *(_DWORD *)(v67 + 32);
            goto LABEL_112;
          }
        }
        else
        {
          v67 = a3 + 64;
          if ( v20 == *(_QWORD *)(a3 + 80) )
          {
            v65 = 1;
LABEL_112:
            v66 = operator new(0x28u);
            *(_DWORD *)(v66 + 32) = *(_DWORD *)v19;
            std::_Rb_tree_insert_and_rebalance(v65, v66, v67, a3 + 64);
            ++*(_QWORD *)(a3 + 96);
            goto LABEL_113;
          }
        }
        if ( *(_DWORD *)(std::_Rb_tree_decrement(v67) + 32) < *(_DWORD *)v19 )
          goto LABEL_110;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_113:
            v19 = (__int64 *)((char *)v19 + 4);
            if ( v19 == (__int64 *)&v124 )
              return 1;
            if ( *(_QWORD *)(a3 + 96) )
              goto LABEL_115;
LABEL_27:
            v21 = *(int **)(a3 + 24);
            v22 = *(unsigned int *)(a3 + 32);
            v23 = &v21[v22];
            if ( v21 == v23 )
              break;
            v24 = *(_DWORD *)v19;
            if ( *(_DWORD *)v19 != *v21 )
            {
              v25 = *(_DWORD **)(a3 + 24);
              while ( v23 != ++v25 )
              {
                if ( v24 == *v25 )
                  goto LABEL_113;
              }
              if ( v22 > 3 )
              {
                v26 = *(int **)(a3 + 24);
                for ( i = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v26);
                      ;
                      i = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v26) )
                {
                  if ( v28 )
                  {
                    v29 = i || v28 == v20 || *v26 < *(_DWORD *)(v28 + 32);
                    v121 = v28;
                    v30 = operator new(0x28u);
                    *(_DWORD *)(v30 + 32) = *v26;
                    std::_Rb_tree_insert_and_rebalance(v29, v30, v121, a3 + 64);
                    ++*(_QWORD *)(a3 + 96);
                  }
                  if ( v23 == ++v26 )
                    break;
                }
                goto LABEL_122;
              }
LABEL_139:
              v79 = v22 + 1;
              if ( v79 > *(unsigned int *)(a3 + 36) )
              {
                sub_2237220(a3 + 24, a3 + 40, v79, 4);
                v23 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
              }
              *v23 = v24;
              ++*(_DWORD *)(a3 + 32);
            }
          }
          if ( v22 <= 3 )
          {
            v24 = *(_DWORD *)v19;
            goto LABEL_139;
          }
LABEL_122:
          v72 = *(_QWORD *)(a3 + 72);
          *(_DWORD *)(a3 + 32) = 0;
          if ( v72 )
          {
            v73 = *(_DWORD *)v19;
            while ( 1 )
            {
              v76 = *(_DWORD *)(v72 + 32);
              if ( v73 < v76 )
              {
                v74 = *(_QWORD *)(v72 + 16);
                v75 = 1;
              }
              else
              {
                v74 = *(_QWORD *)(v72 + 24);
                v75 = 0;
              }
              if ( !v74 )
                break;
              v72 = v74;
            }
            if ( v75 )
            {
              if ( *(_QWORD *)(a3 + 80) == v72 )
                goto LABEL_134;
              goto LABEL_143;
            }
            if ( v73 > v76 )
              goto LABEL_134;
          }
          else
          {
            v72 = a3 + 64;
            if ( v20 == *(_QWORD *)(a3 + 80) )
            {
              v77 = 1;
              goto LABEL_136;
            }
            v73 = *(_DWORD *)v19;
LABEL_143:
            if ( v73 > *(_DWORD *)(std::_Rb_tree_decrement(v72) + 32) )
            {
LABEL_134:
              v77 = 1;
              if ( v20 != v72 )
                v77 = v73 < *(_DWORD *)(v72 + 32);
LABEL_136:
              v78 = operator new(0x28u);
              *(_DWORD *)(v78 + 32) = *(_DWORD *)v19;
              std::_Rb_tree_insert_and_rebalance(v77, v78, v72, a3 + 64);
              ++*(_QWORD *)(a3 + 96);
            }
          }
        }
      case 'P':
        *(_DWORD *)a3 |= 0x10u;
        if ( !*(_QWORD *)(a3 + 96) )
        {
          v9 = *(int **)(a3 + 24);
          v10 = *(unsigned int *)(a3 + 32);
          v11 = &v9[v10];
          if ( v9 == v11 )
          {
            if ( v10 <= 3 )
            {
LABEL_291:
              v115 = v10 + 1;
              if ( v115 > *(unsigned int *)(a3 + 36) )
              {
                sub_2237220(a3 + 24, a3 + 40, v115, 4);
                v11 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
              }
              *v11 = 1;
              ++*(_DWORD *)(a3 + 32);
              return 1;
            }
            v13 = a3 + 64;
          }
          else
          {
            if ( *v9 == 1 )
              return 1;
            v12 = *(_DWORD **)(a3 + 24);
            while ( v11 != ++v12 )
            {
              if ( *v12 == 1 )
                return 1;
            }
            v13 = a3 + 64;
            if ( v10 <= 3 )
              goto LABEL_291;
            do
            {
              v16 = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v9);
              if ( v17 )
              {
                v14 = v16 || v17 == v13 || *v9 < *(_DWORD *)(v17 + 32);
                v116 = v17;
                v15 = operator new(0x28u);
                *(_DWORD *)(v15 + 32) = *v9;
                std::_Rb_tree_insert_and_rebalance(v14, v15, v116, a3 + 64);
                ++*(_QWORD *)(a3 + 96);
              }
              ++v9;
            }
            while ( v11 != v9 );
          }
          v97 = *(_QWORD *)(a3 + 72);
          *(_DWORD *)(a3 + 32) = 0;
          if ( !v97 )
          {
            v97 = v13;
            if ( *(_QWORD *)(a3 + 80) == v13 )
            {
              v113 = 1;
LABEL_273:
              v114 = operator new(0x28u);
              *(_DWORD *)(v114 + 32) = 1;
              goto LABEL_266;
            }
            goto LABEL_307;
          }
          while ( 1 )
          {
            v103 = *(_DWORD *)(v97 + 32);
            if ( v103 > 1 )
            {
              v101 = *(_QWORD *)(v97 + 16);
              v102 = 1;
            }
            else
            {
              v101 = *(_QWORD *)(v97 + 24);
              v102 = 0;
            }
            if ( !v101 )
              break;
            v97 = v101;
          }
          if ( v102 )
          {
            if ( *(_QWORD *)(a3 + 80) != v97 )
            {
LABEL_307:
              if ( *(int *)(std::_Rb_tree_decrement(v97) + 32) > 0 )
                return 1;
            }
          }
          else if ( v103 > 0 )
          {
            return 1;
          }
          v113 = 1;
          if ( v97 != v13 )
            v113 = *(_DWORD *)(v97 + 32) > 1;
          goto LABEL_273;
        }
        v80 = *(_QWORD *)(a3 + 72);
        v81 = a3 + 64;
        if ( !v80 )
        {
          v80 = a3 + 64;
          if ( v81 == *(_QWORD *)(a3 + 80) )
          {
            v7 = 1;
            goto LABEL_200;
          }
          goto LABEL_260;
        }
        while ( 1 )
        {
          v84 = *(_DWORD *)(v80 + 32);
          if ( v84 > 1 )
          {
            v82 = *(_QWORD *)(v80 + 16);
            v83 = 1;
          }
          else
          {
            v82 = *(_QWORD *)(v80 + 24);
            v83 = 0;
          }
          if ( !v82 )
            break;
          v80 = v82;
        }
        if ( v83 )
        {
          if ( v80 != *(_QWORD *)(a3 + 80) )
          {
LABEL_260:
            if ( *(int *)(std::_Rb_tree_decrement(v80) + 32) > 0 )
              return 1;
          }
        }
        else if ( v84 > 0 )
        {
          return 1;
        }
        v7 = 1;
        if ( v80 != v81 )
          v7 = *(_DWORD *)(v80 + 32) > 1;
LABEL_200:
        v8 = operator new(0x28u);
        *(_DWORD *)(v8 + 32) = 1;
LABEL_9:
        std::_Rb_tree_insert_and_rebalance(v7, v8, v80, v81);
        ++*(_QWORD *)(a3 + 96);
        return 1;
      case 'Q':
        return 1;
      case 'R':
        *(_DWORD *)a3 |= 0x10u;
        *(_QWORD *)(a3 + 8) = 0x5FFFFFFFALL;
        result = 1;
        *(_BYTE *)(a3 + 16) = 1;
        return result;
      case 'X':
      case 'Y':
      case 'Z':
      case 'a':
      case 'b':
      case 'd':
      case 'e':
      case 'l':
      case 'q':
      case 'r':
      case 't':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
        *(_DWORD *)a3 |= 2u;
        return 1;
      default:
        return 0;
    }
  }
  return result;
}
