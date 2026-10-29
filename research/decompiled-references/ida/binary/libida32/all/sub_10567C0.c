__int64 __fastcall sub_10567C0(__int64 a1, const char **a2, __int64 a3)
{
  const char *v4; // rbp
  size_t v5; // rdx
  __int64 result; // rax
  int *v7; // rbp
  unsigned __int64 v8; // rdx
  int *v9; // r12
  _DWORD *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdx
  bool v13; // zf
  __int64 *v14; // r12
  __int64 v15; // r13
  int *v16; // r8
  unsigned __int64 v17; // rdx
  int *v18; // r14
  int v19; // ebp
  _DWORD *v20; // rax
  int *v21; // rbp
  __int64 v22; // rdx
  int *v23; // rax
  unsigned __int64 v24; // rcx
  int *v25; // rbp
  _DWORD *v26; // rdx
  __int64 v27; // r13
  int *v28; // r12
  __int64 v29; // rdx
  int *v30; // rax
  unsigned __int64 v31; // rcx
  int *v32; // rbp
  _DWORD *v33; // rdx
  __int64 v34; // r13
  int *v35; // r12
  __int64 v36; // rdx
  int *v37; // rax
  unsigned __int64 v38; // rcx
  int *v39; // rbp
  _DWORD *v40; // rdx
  __int64 v41; // r13
  int *v42; // r12
  __int64 v43; // rdx
  int *v44; // rbp
  _DWORD *v45; // rdx
  __int64 v46; // r13
  int *v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rbp
  int v50; // ecx
  __int64 v51; // rax
  char v52; // si
  int v53; // edx
  __int64 v54; // rbp
  int v55; // r15d
  __int64 v56; // rax
  char v57; // cl
  int v58; // edx
  unsigned __int64 v59; // rdx
  __int64 v60; // rbp
  __int64 v61; // rax
  char v62; // si
  int v63; // edx
  __int64 v64; // rbp
  __int64 v65; // rax
  char v66; // si
  int v67; // edx
  __int64 v68; // rbp
  __int64 v69; // rax
  char v70; // si
  int v71; // edx
  __int64 v72; // rbp
  __int64 v73; // rax
  char v74; // si
  int v75; // edx
  __int64 v76; // rbp
  __int64 v77; // rax
  char v78; // si
  int v79; // edx
  __int64 v80; // rbp
  __int64 v81; // rax
  char v82; // cl
  int v83; // edx
  __int64 v84; // rbp
  __int64 v85; // rax
  char v86; // cl
  int v87; // edx
  __int64 v88; // rbp
  __int64 v89; // rax
  char v90; // cl
  int v91; // edx
  __int64 v92; // rbp
  __int64 v93; // rax
  char v94; // cl
  int v95; // edx
  __int64 v96; // rbp
  __int64 v97; // rax
  char v98; // cl
  int v99; // edx
  unsigned __int64 v100; // rdx
  __int64 v101; // [rsp+24h] [rbp-44h] BYREF
  int v102; // [rsp+2Ch] [rbp-3Ch]
  char v103; // [rsp+30h] [rbp-38h] BYREF

  v4 = *a2;
  if ( !*a2 || (v5 = strlen(*a2), result = 0, v5 <= 1) )
  {
    switch ( *v4 )
    {
      case 'G':
        *(_DWORD *)a3 |= 0x10u;
        if ( *(_QWORD *)(a3 + 96) )
        {
          v72 = *(_QWORD *)(a3 + 72);
          if ( v72 )
          {
            while ( 1 )
            {
              v75 = *(_DWORD *)(v72 + 32);
              if ( v75 > 0 )
              {
                v73 = *(_QWORD *)(v72 + 16);
                v74 = 1;
              }
              else
              {
                v73 = *(_QWORD *)(v72 + 24);
                v74 = 0;
              }
              if ( !v73 )
                break;
              v72 = v73;
            }
            if ( !v74 )
            {
              if ( v75 >= 0 )
                return 1;
              goto LABEL_7;
            }
            if ( *(_QWORD *)(a3 + 80) == v72 )
              goto LABEL_7;
          }
          else if ( *(_QWORD *)(a3 + 80) == a3 + 64 )
          {
            goto LABEL_7;
          }
          if ( *(int *)(std::_Rb_tree_decrement() + 32) >= 0 )
            return 1;
        }
        else
        {
          v37 = *(int **)(a3 + 24);
          v38 = *(unsigned int *)(a3 + 32);
          v39 = &v37[v38];
          if ( v37 == v39 )
          {
            v41 = a3 + 64;
            if ( v38 <= 3 )
              goto LABEL_174;
          }
          else
          {
            if ( !*v37 )
              return 1;
            v40 = *(_DWORD **)(a3 + 24);
            while ( v39 != ++v40 )
            {
              if ( !*v40 )
                return 1;
            }
            if ( v38 <= 3 )
              goto LABEL_174;
            v41 = a3 + 64;
            v42 = *(int **)(a3 + 24);
            do
            {
              sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v42);
              if ( v43 )
              {
                *(_DWORD *)(operator new(0x28u) + 32) = *v42;
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)(a3 + 96);
              }
              ++v42;
            }
            while ( v39 != v42 );
          }
          v92 = *(_QWORD *)(a3 + 72);
          *(_DWORD *)(a3 + 32) = 0;
          if ( v92 )
          {
            while ( 1 )
            {
              v95 = *(_DWORD *)(v92 + 32);
              if ( v95 > 0 )
              {
                v93 = *(_QWORD *)(v92 + 16);
                v94 = 1;
              }
              else
              {
                v93 = *(_QWORD *)(v92 + 24);
                v94 = 0;
              }
              if ( !v93 )
                break;
              v92 = v93;
            }
            if ( !v94 )
            {
              if ( v95 >= 0 )
                return 1;
              goto LABEL_7;
            }
            if ( *(_QWORD *)(a3 + 80) == v92 )
              goto LABEL_7;
          }
          else if ( v41 == *(_QWORD *)(a3 + 80) )
          {
            goto LABEL_7;
          }
          if ( *(int *)(std::_Rb_tree_decrement() + 32) >= 0 )
            return 1;
        }
        goto LABEL_7;
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
        if ( *(_QWORD *)(a3 + 96) )
        {
          v68 = *(_QWORD *)(a3 + 72);
          if ( v68 )
          {
            while ( 1 )
            {
              v71 = *(_DWORD *)(v68 + 32);
              if ( v71 > 2 )
              {
                v69 = *(_QWORD *)(v68 + 16);
                v70 = 1;
              }
              else
              {
                v69 = *(_QWORD *)(v68 + 24);
                v70 = 0;
              }
              if ( !v69 )
                break;
              v68 = v69;
            }
            if ( !v70 )
            {
              if ( v71 > 1 )
                return 1;
              goto LABEL_158;
            }
            if ( *(_QWORD *)(a3 + 80) == v68 )
              goto LABEL_158;
          }
          else if ( a3 + 64 == *(_QWORD *)(a3 + 80) )
          {
            goto LABEL_158;
          }
          if ( *(int *)(std::_Rb_tree_decrement() + 32) > 1 )
            return 1;
LABEL_158:
          *(_DWORD *)(operator new(0x28u) + 32) = 2;
          goto LABEL_8;
        }
        v30 = *(int **)(a3 + 24);
        v31 = *(unsigned int *)(a3 + 32);
        v32 = &v30[v31];
        if ( v30 == v32 )
        {
          if ( v31 > 3 )
          {
            v34 = a3 + 64;
LABEL_188:
            v88 = *(_QWORD *)(a3 + 72);
            *(_DWORD *)(a3 + 32) = 0;
            if ( !v88 )
            {
              if ( v34 == *(_QWORD *)(a3 + 80) )
                goto LABEL_158;
LABEL_265:
              if ( *(int *)(std::_Rb_tree_decrement() + 32) <= 1 )
                goto LABEL_158;
              return 1;
            }
            while ( 1 )
            {
              v91 = *(_DWORD *)(v88 + 32);
              if ( v91 > 2 )
              {
                v89 = *(_QWORD *)(v88 + 16);
                v90 = 1;
              }
              else
              {
                v89 = *(_QWORD *)(v88 + 24);
                v90 = 0;
              }
              if ( !v89 )
                break;
              v88 = v89;
            }
            if ( v90 )
            {
              if ( *(_QWORD *)(a3 + 80) != v88 )
                goto LABEL_265;
            }
            else if ( v91 > 1 )
            {
              return 1;
            }
            goto LABEL_158;
          }
        }
        else
        {
          if ( *v30 == 2 )
            return 1;
          v33 = *(_DWORD **)(a3 + 24);
          while ( v32 != ++v33 )
          {
            if ( *v33 == 2 )
              return 1;
          }
          if ( v31 > 3 )
          {
            v34 = a3 + 64;
            v35 = *(int **)(a3 + 24);
            do
            {
              sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v35);
              if ( v36 )
              {
                *(_DWORD *)(operator new(0x28u) + 32) = *v35;
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)(a3 + 96);
              }
              ++v35;
            }
            while ( v32 != v35 );
            goto LABEL_188;
          }
        }
        if ( v31 + 1 > *(unsigned int *)(a3 + 36) )
        {
          sub_22134E0(a3 + 24, a3 + 40, v31 + 1, 4);
          v30 = *(int **)(a3 + 24);
          v31 = *(unsigned int *)(a3 + 32);
        }
        v30[v31] = 2;
        ++*(_DWORD *)(a3 + 32);
        return 1;
      case 'L':
        *(_DWORD *)a3 |= 0x10u;
        if ( *(_QWORD *)(a3 + 96) )
        {
          v76 = *(_QWORD *)(a3 + 72);
          if ( v76 )
          {
            while ( 1 )
            {
              v79 = *(_DWORD *)(v76 + 32);
              if ( v79 > 0 )
              {
                v77 = *(_QWORD *)(v76 + 16);
                v78 = 1;
              }
              else
              {
                v77 = *(_QWORD *)(v76 + 24);
                v78 = 0;
              }
              if ( !v77 )
                break;
              v76 = v77;
            }
            if ( !v78 )
            {
              if ( v79 >= 0 )
                return 1;
              goto LABEL_7;
            }
            if ( *(_QWORD *)(a3 + 80) == v76 )
              goto LABEL_7;
          }
          else if ( a3 + 64 == *(_QWORD *)(a3 + 80) )
          {
            goto LABEL_7;
          }
          if ( *(int *)(std::_Rb_tree_decrement() + 32) >= 0 )
            return 1;
          goto LABEL_7;
        }
        v37 = *(int **)(a3 + 24);
        v38 = *(unsigned int *)(a3 + 32);
        v44 = &v37[v38];
        if ( v37 == v44 )
        {
          v46 = a3 + 64;
          if ( v38 > 3 )
          {
LABEL_166:
            v80 = *(_QWORD *)(a3 + 72);
            *(_DWORD *)(a3 + 32) = 0;
            if ( !v80 )
            {
              if ( *(_QWORD *)(a3 + 80) == v46 )
                goto LABEL_7;
LABEL_256:
              if ( *(int *)(std::_Rb_tree_decrement() + 32) >= 0 )
                return 1;
              goto LABEL_7;
            }
            while ( 1 )
            {
              v83 = *(_DWORD *)(v80 + 32);
              if ( v83 > 0 )
              {
                v81 = *(_QWORD *)(v80 + 16);
                v82 = 1;
              }
              else
              {
                v81 = *(_QWORD *)(v80 + 24);
                v82 = 0;
              }
              if ( !v81 )
                break;
              v80 = v81;
            }
            if ( v82 )
            {
              if ( *(_QWORD *)(a3 + 80) == v80 )
                goto LABEL_7;
              goto LABEL_256;
            }
            if ( v83 >= 0 )
              return 1;
LABEL_7:
            *(_DWORD *)(operator new(0x28u) + 32) = 0;
            goto LABEL_8;
          }
        }
        else
        {
          if ( !*v37 )
            return 1;
          v45 = *(_DWORD **)(a3 + 24);
          while ( v44 != ++v45 )
          {
            if ( !*v45 )
              return 1;
          }
          if ( v38 > 3 )
          {
            v46 = a3 + 64;
            v47 = *(int **)(a3 + 24);
            do
            {
              sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v47);
              if ( v48 )
              {
                *(_DWORD *)(operator new(0x28u) + 32) = *v47;
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)(a3 + 96);
              }
              ++v47;
            }
            while ( v44 != v47 );
            goto LABEL_166;
          }
        }
LABEL_174:
        if ( v38 + 1 > *(unsigned int *)(a3 + 36) )
        {
          sub_22134E0(a3 + 24, a3 + 40, v38 + 1, 4);
          v37 = *(int **)(a3 + 24);
          v38 = *(unsigned int *)(a3 + 32);
        }
        v37[v38] = 0;
        ++*(_DWORD *)(a3 + 32);
        return 1;
      case 'M':
        *(_DWORD *)a3 |= 0x10u;
        *(_QWORD *)(a3 + 8) = 0xFF00000000LL;
        result = 1;
        *(_BYTE *)(a3 + 16) = 1;
        return result;
      case 'N':
        *(_DWORD *)a3 |= 0x10u;
        if ( *(_QWORD *)(a3 + 96) )
        {
          v64 = *(_QWORD *)(a3 + 72);
          if ( v64 )
          {
            while ( 1 )
            {
              v67 = *(_DWORD *)(v64 + 32);
              if ( v67 >= 0 )
              {
                v65 = *(_QWORD *)(v64 + 16);
                v66 = 1;
              }
              else
              {
                v65 = *(_QWORD *)(v64 + 24);
                v66 = 0;
              }
              if ( !v65 )
                break;
              v64 = v65;
            }
            if ( !v66 )
            {
              if ( v67 >= -1 )
                return 1;
              goto LABEL_161;
            }
            if ( *(_QWORD *)(a3 + 80) == v64 )
              goto LABEL_161;
          }
          else if ( *(_QWORD *)(a3 + 80) == a3 + 64 )
          {
            goto LABEL_161;
          }
          if ( *(int *)(std::_Rb_tree_decrement() + 32) >= -1 )
            return 1;
          goto LABEL_161;
        }
        v23 = *(int **)(a3 + 24);
        v24 = *(unsigned int *)(a3 + 32);
        v25 = &v23[v24];
        if ( v23 == v25 )
        {
          if ( v24 > 3 )
          {
            v27 = a3 + 64;
LABEL_204:
            v96 = *(_QWORD *)(a3 + 72);
            *(_DWORD *)(a3 + 32) = 0;
            if ( !v96 )
            {
              if ( *(_QWORD *)(a3 + 80) == v27 )
                goto LABEL_161;
LABEL_259:
              if ( *(int *)(std::_Rb_tree_decrement() + 32) >= -1 )
                return 1;
              goto LABEL_161;
            }
            while ( 1 )
            {
              v99 = *(_DWORD *)(v96 + 32);
              if ( v99 >= 0 )
              {
                v97 = *(_QWORD *)(v96 + 16);
                v98 = 1;
              }
              else
              {
                v97 = *(_QWORD *)(v96 + 24);
                v98 = 0;
              }
              if ( !v97 )
                break;
              v96 = v97;
            }
            if ( v98 )
            {
              if ( *(_QWORD *)(a3 + 80) == v96 )
                goto LABEL_161;
              goto LABEL_259;
            }
            if ( v99 >= -1 )
              return 1;
LABEL_161:
            *(_DWORD *)(operator new(0x28u) + 32) = -1;
            goto LABEL_8;
          }
        }
        else
        {
          if ( *v23 == -1 )
            return 1;
          v26 = *(_DWORD **)(a3 + 24);
          while ( v25 != ++v26 )
          {
            if ( *v26 == -1 )
              return 1;
          }
          if ( v24 > 3 )
          {
            v27 = a3 + 64;
            v28 = *(int **)(a3 + 24);
            do
            {
              sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v28);
              if ( v29 )
              {
                *(_DWORD *)(operator new(0x28u) + 32) = *v28;
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)(a3 + 96);
              }
              ++v28;
            }
            while ( v25 != v28 );
            goto LABEL_204;
          }
        }
        if ( v24 + 1 > *(unsigned int *)(a3 + 36) )
        {
          sub_22134E0(a3 + 24, a3 + 40, v24 + 1, 4);
          v23 = *(int **)(a3 + 24);
          v24 = *(unsigned int *)(a3 + 32);
        }
        v23[v24] = -1;
        ++*(_DWORD *)(a3 + 32);
        return 1;
      case 'O':
        *(_DWORD *)a3 |= 0x10u;
        v13 = *(_QWORD *)(a3 + 96) == 0;
        v14 = &v101;
        v101 = 0x1000000008LL;
        v15 = a3 + 64;
        v102 = 24;
        if ( v13 )
          goto LABEL_22;
LABEL_88:
        v49 = *(_QWORD *)(a3 + 72);
        if ( v49 )
        {
          v50 = *(_DWORD *)v14;
          while ( 1 )
          {
            v53 = *(_DWORD *)(v49 + 32);
            if ( v50 < v53 )
            {
              v51 = *(_QWORD *)(v49 + 16);
              v52 = 1;
            }
            else
            {
              v51 = *(_QWORD *)(v49 + 24);
              v52 = 0;
            }
            if ( !v51 )
              break;
            v49 = v51;
          }
          if ( !v52 )
          {
            if ( v50 <= v53 )
              goto LABEL_86;
            goto LABEL_85;
          }
          if ( *(_QWORD *)(a3 + 80) == v49 )
          {
LABEL_85:
            *(_DWORD *)(operator new(0x28u) + 32) = *(_DWORD *)v14;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(a3 + 96);
            goto LABEL_86;
          }
        }
        else if ( v15 == *(_QWORD *)(a3 + 80) )
        {
          goto LABEL_85;
        }
        if ( *(_DWORD *)(std::_Rb_tree_decrement() + 32) < *(_DWORD *)v14 )
          goto LABEL_85;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_86:
            v14 = (__int64 *)((char *)v14 + 4);
            if ( v14 == (__int64 *)&v103 )
              return 1;
            if ( *(_QWORD *)(a3 + 96) )
              goto LABEL_88;
LABEL_22:
            v16 = *(int **)(a3 + 24);
            v17 = *(unsigned int *)(a3 + 32);
            v18 = &v16[v17];
            if ( v16 == v18 )
              break;
            v19 = *(_DWORD *)v14;
            if ( *(_DWORD *)v14 != *v16 )
            {
              v20 = *(_DWORD **)(a3 + 24);
              while ( v18 != ++v20 )
              {
                if ( v19 == *v20 )
                  goto LABEL_86;
              }
              if ( v17 > 3 )
              {
                v21 = *(int **)(a3 + 24);
                sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v21);
                while ( 1 )
                {
                  if ( v22 )
                  {
                    *(_DWORD *)(operator new(0x28u) + 32) = *v21;
                    std::_Rb_tree_insert_and_rebalance();
                    ++*(_QWORD *)(a3 + 96);
                  }
                  if ( v18 == ++v21 )
                    break;
                  sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v21);
                }
                goto LABEL_95;
              }
LABEL_110:
              v59 = v17 + 1;
              if ( v59 > *(unsigned int *)(a3 + 36) )
              {
                sub_22134E0(a3 + 24, a3 + 40, v59, 4);
                v18 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
              }
              *v18 = v19;
              ++*(_DWORD *)(a3 + 32);
            }
          }
          if ( v17 <= 3 )
          {
            v19 = *(_DWORD *)v14;
            goto LABEL_110;
          }
LABEL_95:
          v54 = *(_QWORD *)(a3 + 72);
          *(_DWORD *)(a3 + 32) = 0;
          if ( v54 )
          {
            v55 = *(_DWORD *)v14;
            while ( 1 )
            {
              v58 = *(_DWORD *)(v54 + 32);
              if ( v55 < v58 )
              {
                v56 = *(_QWORD *)(v54 + 16);
                v57 = 1;
              }
              else
              {
                v56 = *(_QWORD *)(v54 + 24);
                v57 = 0;
              }
              if ( !v56 )
                break;
              v54 = v56;
            }
            if ( v57 )
            {
              if ( *(_QWORD *)(a3 + 80) == v54 )
                goto LABEL_85;
              goto LABEL_114;
            }
            if ( v55 > v58 )
              goto LABEL_85;
          }
          else
          {
            if ( v15 == *(_QWORD *)(a3 + 80) )
              goto LABEL_85;
            v55 = *(_DWORD *)v14;
LABEL_114:
            if ( v55 > *(_DWORD *)(std::_Rb_tree_decrement() + 32) )
              goto LABEL_85;
          }
        }
      case 'P':
        *(_DWORD *)a3 |= 0x10u;
        if ( !*(_QWORD *)(a3 + 96) )
        {
          v7 = *(int **)(a3 + 24);
          v8 = *(unsigned int *)(a3 + 32);
          v9 = &v7[v8];
          if ( v7 == v9 )
          {
            if ( v8 <= 3 )
            {
LABEL_246:
              v100 = v8 + 1;
              if ( v100 > *(unsigned int *)(a3 + 36) )
              {
                sub_22134E0(a3 + 24, a3 + 40, v100, 4);
                v9 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
              }
              *v9 = 1;
              ++*(_DWORD *)(a3 + 32);
              return 1;
            }
            v11 = a3 + 64;
          }
          else
          {
            if ( *v7 == 1 )
              return 1;
            v10 = *(_DWORD **)(a3 + 24);
            while ( v9 != ++v10 )
            {
              if ( *v10 == 1 )
                return 1;
            }
            v11 = a3 + 64;
            if ( v8 <= 3 )
              goto LABEL_246;
            do
            {
              sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v7);
              if ( v12 )
              {
                *(_DWORD *)(operator new(0x28u) + 32) = *v7;
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)(a3 + 96);
              }
              ++v7;
            }
            while ( v9 != v7 );
          }
          v84 = *(_QWORD *)(a3 + 72);
          *(_DWORD *)(a3 + 32) = 0;
          if ( !v84 )
          {
            if ( *(_QWORD *)(a3 + 80) == v11 )
              goto LABEL_164;
LABEL_262:
            if ( *(int *)(std::_Rb_tree_decrement() + 32) > 0 )
              return 1;
            goto LABEL_164;
          }
          while ( 1 )
          {
            v87 = *(_DWORD *)(v84 + 32);
            if ( v87 > 1 )
            {
              v85 = *(_QWORD *)(v84 + 16);
              v86 = 1;
            }
            else
            {
              v85 = *(_QWORD *)(v84 + 24);
              v86 = 0;
            }
            if ( !v85 )
              break;
            v84 = v85;
          }
          if ( !v86 )
          {
            if ( v87 > 0 )
              return 1;
            goto LABEL_164;
          }
          if ( *(_QWORD *)(a3 + 80) != v84 )
            goto LABEL_262;
LABEL_164:
          *(_DWORD *)(operator new(0x28u) + 32) = 1;
LABEL_8:
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(a3 + 96);
          return 1;
        }
        v60 = *(_QWORD *)(a3 + 72);
        if ( v60 )
        {
          while ( 1 )
          {
            v63 = *(_DWORD *)(v60 + 32);
            if ( v63 > 1 )
            {
              v61 = *(_QWORD *)(v60 + 16);
              v62 = 1;
            }
            else
            {
              v61 = *(_QWORD *)(v60 + 24);
              v62 = 0;
            }
            if ( !v61 )
              break;
            v60 = v61;
          }
          if ( !v62 )
          {
            if ( v63 > 0 )
              return 1;
            goto LABEL_164;
          }
          if ( v60 == *(_QWORD *)(a3 + 80) )
            goto LABEL_164;
        }
        else if ( a3 + 64 == *(_QWORD *)(a3 + 80) )
        {
          goto LABEL_164;
        }
        if ( *(int *)(std::_Rb_tree_decrement() + 32) > 0 )
          return 1;
        goto LABEL_164;
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

