void __fastcall sub_5CCFA0(char *src, char *a2)
{
  char *v3; // rbx
  char *v4; // r12
  __int64 v5; // r10
  char v6; // di
  _DWORD *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r15
  __int16 v10; // ax
  _DWORD *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r10
  _DWORD *v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // r9
  __int16 v17; // r13
  char *v18; // rbp
  char *v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rsi
  _DWORD *v22; // rdi
  _DWORD *v23; // rdx
  __int16 v24; // dx
  __int64 v25; // rdx
  unsigned int v26; // edi
  _DWORD *v27; // rdx
  char v28; // cl
  __int64 v29; // rax
  unsigned int v30; // edx
  size_t v31; // rdx
  bool v32; // zf
  __int64 v33; // rdi
  __int64 v34; // rbp
  int v35; // ecx
  __int64 v36; // r9
  __int64 v37; // r11
  __int16 v38; // dx
  bool v39; // zf
  _DWORD *v40; // r8
  int v41; // edx
  _DWORD *v42; // rdx
  __int16 v43; // dx
  _DWORD *v44; // r8
  _DWORD *v45; // rdx
  __int16 v46; // r8
  __int16 v47; // dx
  unsigned int *v48; // rdx
  unsigned int *v49; // r8
  unsigned int v50; // edx
  __int16 v51; // dx
  unsigned int v52; // edx
  unsigned int v53; // r8d
  __int64 v54; // rsi
  int v55; // edi
  __int64 v56; // rax
  __int64 v57; // rbp
  __int64 v58; // r13
  __int16 v59; // dx
  int v60; // edx
  char v61; // dl
  _DWORD *v62; // rdx
  _DWORD *v63; // rcx
  _DWORD *v64; // rdx
  __int16 v65; // dx
  _DWORD *v66; // rcx
  _DWORD *v67; // rdx
  __int16 v68; // cx
  __int16 v69; // dx
  unsigned int *v70; // rdx
  unsigned int *v71; // rcx
  unsigned int v72; // edx
  __int64 v73; // rbx
  int v74; // ebp
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int16 v77; // ax
  _DWORD *v78; // rdx
  _DWORD *v79; // rax
  int v80; // eax
  __int64 v81; // r10
  _DWORD *v82; // rax
  __int64 v83; // rdx
  unsigned int v84; // ecx
  char *v85; // rax
  __int64 v86; // r12
  __int64 v87; // r11
  char *v88; // r13
  __int64 v89; // rbx
  __int64 v90; // r15
  __int64 v91; // r10
  int v92; // ebp
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int16 v95; // ax
  _DWORD *v96; // rdx
  _DWORD *v97; // rax
  int v98; // r9d
  char *v99; // rcx
  int v100; // r8d
  _DWORD *v101; // rdx
  char v102; // dl
  _DWORD *v103; // rdx
  _DWORD *v104; // rax
  _DWORD *v105; // rdx
  __int64 v106; // [rsp+0h] [rbp-80h]
  __int64 v107; // [rsp+0h] [rbp-80h]
  char *v108; // [rsp+8h] [rbp-78h]
  char *v109; // [rsp+8h] [rbp-78h]
  char *v110; // [rsp+10h] [rbp-70h]
  __int64 v111; // [rsp+10h] [rbp-70h]
  __int64 v112; // [rsp+18h] [rbp-68h]
  __int64 v113; // [rsp+18h] [rbp-68h]
  char *v114; // [rsp+20h] [rbp-60h]
  __int64 v115; // [rsp+20h] [rbp-60h]
  __int64 v116; // [rsp+28h] [rbp-58h]
  __int64 v117; // [rsp+28h] [rbp-58h]
  __int64 v118; // [rsp+30h] [rbp-50h]
  __int64 v119; // [rsp+38h] [rbp-48h]
  int v120; // [rsp+44h] [rbp-3Ch]

  if ( src == a2 || a2 == src + 8 )
    return;
  v3 = src + 8;
  v4 = src;
LABEL_10:
  while ( 2 )
  {
    v8 = *(_QWORD *)v4;
    v9 = *(_QWORD *)v3;
    if ( *(_QWORD *)v4 == *(_QWORD *)v3 )
      goto LABEL_19;
    v10 = *(_WORD *)(v8 + 4);
    if ( !*(_WORD *)(v9 + 4) )
    {
      v27 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( v27 && !*v27 && v27[1] == 8 && *(_DWORD *)(v9 + 24) == 1 )
      {
        v13 = *(_QWORD *)(v9 + 32);
        if ( v10 )
        {
          if ( v8 == v13 )
            goto LABEL_19;
LABEL_106:
          if ( !*(_WORD *)(v13 + 4) )
            goto LABEL_19;
          v12 = *(_QWORD *)v4;
          goto LABEL_62;
        }
        v28 = 1;
      }
      else
      {
        v13 = *(_QWORD *)v3;
        v28 = 0;
        if ( v10 )
          goto LABEL_106;
      }
      v11 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
      if ( !v11 || *v11 )
      {
        if ( v8 == v13 )
          goto LABEL_19;
        if ( *(_WORD *)(v13 + 4) )
          goto LABEL_57;
        v12 = *(_QWORD *)v4;
        v14 = *(_DWORD **)(v13 + 16);
        v15 = *(_DWORD **)(v8 + 16);
        if ( v14 != v15 )
        {
LABEL_18:
          if ( *v14 < *v15 )
            goto LABEL_57;
          goto LABEL_19;
        }
        goto LABEL_55;
      }
      goto LABEL_109;
    }
    if ( v10 )
    {
      v12 = *(_QWORD *)v4;
      v13 = *(_QWORD *)v3;
      goto LABEL_62;
    }
    v11 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
    if ( !v11 )
      goto LABEL_57;
    if ( !*v11 )
    {
      v13 = *(_QWORD *)v3;
      v28 = 0;
LABEL_109:
      if ( v11[1] == 8 && *(_DWORD *)(v8 + 24) == 1 )
      {
        v12 = *(_QWORD *)(v8 + 32);
        if ( v12 == v13 )
        {
          if ( !v28 )
            goto LABEL_57;
          goto LABEL_19;
        }
        v51 = *(_WORD *)(v13 + 4);
        v10 = *(_WORD *)(v12 + 4);
      }
      else
      {
        if ( v8 == v13 )
          goto LABEL_19;
        v51 = *(_WORD *)(v13 + 4);
        v12 = *(_QWORD *)v4;
      }
      if ( v51 )
      {
        if ( !v10 )
        {
          v31 = v3 - v4;
          v32 = v3 - v4 == 8;
          if ( v3 - v4 > 8 )
            goto LABEL_58;
          goto LABEL_130;
        }
        goto LABEL_62;
      }
      if ( v10 )
        goto LABEL_19;
      goto LABEL_17;
    }
    if ( *(_WORD *)(v9 + 4) )
      goto LABEL_57;
    v12 = *(_QWORD *)v4;
    v13 = *(_QWORD *)v3;
LABEL_17:
    v14 = *(_DWORD **)(v13 + 16);
    v15 = *(_DWORD **)(v12 + 16);
    if ( v14 != v15 )
      goto LABEL_18;
LABEL_55:
    v29 = *(unsigned int *)(v13 + 24);
    v30 = *(_DWORD *)(v12 + 24);
    if ( (_DWORD)v29 != v30 )
    {
      if ( v30 >= (unsigned int)v29 )
        goto LABEL_57;
      goto LABEL_19;
    }
    if ( !(_DWORD)v29 )
      goto LABEL_62;
    v54 = 8 * v29 + 32;
    v55 = 0;
    v56 = 32;
    while ( 1 )
    {
      v57 = *(_QWORD *)(v13 + v56);
      v58 = *(_QWORD *)(v12 + v56);
      v59 = *(_WORD *)(v58 + 4);
      if ( *(_WORD *)(v57 + 4) )
      {
        if ( v59 )
        {
          if ( v57 != v58 )
            goto LABEL_151;
          goto LABEL_153;
        }
        goto LABEL_179;
      }
      v63 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL);
      if ( !v63 || *v63 )
      {
        if ( v59 )
        {
          if ( v57 != v58 )
            goto LABEL_19;
          goto LABEL_153;
        }
        goto LABEL_179;
      }
      if ( v63[1] != 8 )
        break;
      if ( *(_DWORD *)(v57 + 24) != 1 )
      {
        if ( v59 )
        {
          if ( v57 != v58 )
            goto LABEL_238;
          goto LABEL_153;
        }
        goto LABEL_179;
      }
      v57 = *(_QWORD *)(v57 + 32);
      if ( !v59
        && (v105 = *(_DWORD **)(*(_QWORD *)(v58 + 16) + 24LL)) != nullptr
        && !*v105
        && v105[1] == 8
        && *(_DWORD *)(v58 + 24) == 1 )
      {
        v58 = *(_QWORD *)(v58 + 32);
      }
      else if ( !v55 )
      {
        v55 = -1;
      }
LABEL_181:
      if ( v57 == v58 )
        goto LABEL_153;
      v65 = *(_WORD *)(v58 + 4);
      if ( *(_WORD *)(v57 + 4) )
      {
        if ( v65 )
          goto LABEL_151;
        v67 = *(_DWORD **)(*(_QWORD *)(v58 + 16) + 24LL);
        if ( !v67 )
          goto LABEL_57;
LABEL_187:
        if ( !*v67 )
        {
LABEL_188:
          if ( v67[1] != 8 )
            goto LABEL_189;
          v102 = 0;
LABEL_271:
          if ( *(_DWORD *)(v58 + 24) != 1 )
          {
            if ( v58 == v57 )
            {
              if ( v102 )
                goto LABEL_19;
              goto LABEL_153;
            }
            goto LABEL_189;
          }
          v58 = *(_QWORD *)(v58 + 32);
          if ( v58 == v57 )
          {
            if ( !v102 )
              goto LABEL_57;
            goto LABEL_153;
          }
          v68 = *(_WORD *)(v57 + 4);
          v69 = *(_WORD *)(v58 + 4);
LABEL_190:
          if ( v68 )
          {
            if ( v69 )
              goto LABEL_151;
            goto LABEL_57;
          }
          if ( v69 )
            goto LABEL_19;
          goto LABEL_192;
        }
LABEL_189:
        v68 = *(_WORD *)(v57 + 4);
        v69 = 0;
        goto LABEL_190;
      }
      v66 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL);
      if ( v66 && !*v66 )
      {
        if ( v66[1] == 8 && *(_DWORD *)(v57 + 24) == 1 )
        {
          v57 = *(_QWORD *)(v57 + 32);
          if ( v65 )
            goto LABEL_240;
          v103 = *(_DWORD **)(*(_QWORD *)(v58 + 16) + 24LL);
          if ( v103 )
          {
            if ( !*v103 && v103[1] == 8 )
            {
              v102 = 1;
              goto LABEL_271;
            }
            if ( v57 == v58 )
              goto LABEL_19;
            goto LABEL_189;
          }
          if ( v57 == v58 )
            goto LABEL_19;
          if ( *(_WORD *)(v57 + 4) )
            goto LABEL_57;
        }
        else
        {
          if ( v65 )
            goto LABEL_19;
          v67 = *(_DWORD **)(*(_QWORD *)(v58 + 16) + 24LL);
          if ( v67 )
          {
            if ( !*v67 )
              goto LABEL_188;
            goto LABEL_189;
          }
        }
      }
      else
      {
        if ( v65 )
          goto LABEL_19;
        v67 = *(_DWORD **)(*(_QWORD *)(v58 + 16) + 24LL);
        if ( v67 )
          goto LABEL_187;
      }
LABEL_192:
      v70 = *(unsigned int **)(v57 + 16);
      v71 = *(unsigned int **)(v58 + 16);
      if ( v70 == v71 )
      {
        v83 = *(unsigned int *)(v57 + 24);
        v84 = *(_DWORD *)(v58 + 24);
        if ( (_DWORD)v83 != v84 )
        {
          if ( v84 >= (unsigned int)v83 )
            goto LABEL_57;
          goto LABEL_19;
        }
        if ( !(_DWORD)v83 )
          goto LABEL_151;
        v115 = v56;
        v85 = v4;
        v107 = 8 * v83 + 32;
        v86 = v12;
        v87 = v58;
        v109 = v3;
        v88 = v85;
        v89 = 32;
        v111 = v8;
        v113 = v9;
        v90 = v54;
        v117 = v13;
        v91 = v57;
        v92 = v55;
        do
        {
          v93 = *(_QWORD *)(v91 + v89);
          v94 = *(_QWORD *)(v87 + v89);
          v95 = *(_WORD *)(v94 + 4);
          if ( !*(_WORD *)(v93 + 4)
            && (v96 = *(_DWORD **)(*(_QWORD *)(v93 + 16) + 24LL)) != nullptr
            && !*v96
            && v96[1] == 8
            && *(_DWORD *)(v93 + 24) == 1 )
          {
            v93 = *(_QWORD *)(v93 + 32);
            if ( !v95 )
            {
              v104 = *(_DWORD **)(*(_QWORD *)(v94 + 16) + 24LL);
              if ( v104 )
              {
                if ( !*v104 && v104[1] == 8 && *(_DWORD *)(v94 + 24) == 1 )
                  v94 = *(_QWORD *)(v94 + 32);
              }
            }
          }
          else if ( !v95 )
          {
            v97 = *(_DWORD **)(*(_QWORD *)(v94 + 16) + 24LL);
            if ( v97 )
            {
              if ( !*v97 && v97[1] == 8 && *(_DWORD *)(v94 + 24) == 1 )
                v94 = *(_QWORD *)(v94 + 32);
            }
          }
          v60 = sub_5C8360(v93, v94, 2);
          if ( v60 )
          {
            v3 = v109;
            v8 = v111;
            v4 = v88;
            v9 = v113;
LABEL_155:
            if ( v60 == -1 )
              goto LABEL_57;
            goto LABEL_19;
          }
          v89 += 8;
        }
        while ( v107 != v89 );
        v99 = v88;
        v100 = v98;
        v54 = v90;
        v55 = v92;
        v58 = v87;
        v57 = v91;
        v12 = v86;
        v3 = v109;
        v9 = v113;
        v56 = v115;
        v4 = v99;
        v8 = v111;
        v13 = v117;
        if ( v100 )
        {
          v60 = v100;
          goto LABEL_155;
        }
LABEL_151:
        if ( *(_DWORD *)v58 < *(_DWORD *)v57 )
          goto LABEL_19;
        if ( *(_DWORD *)v58 == *(_DWORD *)v57 )
          goto LABEL_153;
LABEL_57:
        v31 = v3 - v4;
        v32 = v3 - v4 == 8;
        if ( v3 - v4 > 8 )
        {
LABEL_58:
          memmove(&v3[-v31 + 8], v4, v31);
          goto LABEL_59;
        }
LABEL_130:
        if ( v32 )
          *(_QWORD *)v3 = v8;
LABEL_59:
        v3 += 8;
        *(_QWORD *)v4 = v9;
        if ( a2 == v3 )
          return;
        goto LABEL_10;
      }
      v72 = *v70;
      if ( *v71 < v72 )
        goto LABEL_19;
      if ( *v71 != v72 )
        goto LABEL_57;
LABEL_153:
      v56 += 8;
      if ( v54 == v56 )
      {
        v60 = v55;
        if ( v55 )
          goto LABEL_155;
LABEL_62:
        if ( *(_DWORD *)v13 < *(_DWORD *)v12 )
          goto LABEL_57;
        v16 = *((_QWORD *)v3 - 1);
        if ( v9 != v16 )
          goto LABEL_20;
LABEL_64:
        v19 = v3;
        goto LABEL_9;
      }
    }
    if ( !v59 )
    {
LABEL_179:
      v64 = *(_DWORD **)(*(_QWORD *)(v58 + 16) + 24LL);
      if ( v64 )
      {
        if ( !*v64 && v64[1] == 8 && *(_DWORD *)(v58 + 24) == 1 )
        {
          v58 = *(_QWORD *)(v58 + 32);
          if ( !v55 )
            v55 = 1;
        }
      }
      goto LABEL_181;
    }
    if ( v57 == v58 )
      goto LABEL_153;
    if ( v63[1] == 8 )
    {
LABEL_238:
      if ( *(_DWORD *)(v57 + 24) == 1 )
      {
        v57 = *(_QWORD *)(v57 + 32);
LABEL_240:
        if ( v57 != v58 && *(_WORD *)(v57 + 4) )
          goto LABEL_151;
      }
    }
LABEL_19:
    v16 = *((_QWORD *)v3 - 1);
    if ( v9 == v16 )
      goto LABEL_64;
LABEL_20:
    v17 = *(_WORD *)(v9 + 4);
    v18 = v3 - 8;
    while ( 2 )
    {
      v19 = v18 + 8;
      if ( v17 )
      {
        v6 = 0;
        v5 = v9;
        if ( !*(_WORD *)(v16 + 4) )
          goto LABEL_23;
LABEL_7:
        if ( v16 == v5 || !*(_WORD *)(v5 + 4) )
          goto LABEL_9;
        v21 = v16;
LABEL_33:
        if ( *(_DWORD *)v5 >= *(_DWORD *)v21 )
          goto LABEL_9;
LABEL_29:
        *((_QWORD *)v18 + 1) = v16;
        v16 = *((_QWORD *)v18 - 1);
        if ( v9 == v16 )
        {
          v19 = v18;
          goto LABEL_9;
        }
        v18 -= 8;
        continue;
      }
      break;
    }
    v5 = v9;
    v6 = 0;
    v7 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( v7 && !*v7 && v7[1] == 8 && *(_DWORD *)(v9 + 24) == 1 )
    {
      v5 = *(_QWORD *)(v9 + 32);
      v6 = 1;
    }
    if ( *(_WORD *)(v16 + 4) )
      goto LABEL_7;
LABEL_23:
    v20 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
    if ( v20 && !*v20 && v20[1] == 8 && *(_DWORD *)(v16 + 24) == 1 )
    {
      v21 = *(_QWORD *)(v16 + 32);
      if ( v21 == v5 )
      {
        if ( v6 )
          goto LABEL_9;
        goto LABEL_29;
      }
      v24 = *(_WORD *)(v21 + 4);
      if ( *(_WORD *)(v5 + 4) )
      {
        if ( v24 )
          goto LABEL_33;
        goto LABEL_29;
      }
      if ( v24 )
        goto LABEL_9;
    }
    else
    {
      if ( v16 == v5 )
        goto LABEL_9;
      v21 = v16;
      if ( *(_WORD *)(v5 + 4) )
        goto LABEL_29;
    }
    v22 = *(_DWORD **)(v5 + 16);
    v23 = *(_DWORD **)(v21 + 16);
    if ( v22 != v23 )
    {
      if ( *v22 >= *v23 )
        goto LABEL_9;
      goto LABEL_29;
    }
    v25 = *(unsigned int *)(v5 + 24);
    v26 = *(_DWORD *)(v21 + 24);
    if ( (_DWORD)v25 != v26 )
    {
      if ( v26 < (unsigned int)v25 )
        goto LABEL_9;
      goto LABEL_29;
    }
    if ( !(_DWORD)v25 )
      goto LABEL_33;
    v108 = v18;
    v33 = 32;
    v34 = v16;
    v106 = 8 * v25 + 32;
    v35 = 0;
    while ( 2 )
    {
      v36 = *(_QWORD *)(v5 + v33);
      v37 = *(_QWORD *)(v21 + v33);
      v38 = *(_WORD *)(v37 + 4);
      if ( !*(_WORD *)(v36 + 4) )
      {
        v40 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
        if ( !v40 || *v40 )
        {
          if ( v38 )
          {
            if ( v36 != v37 )
              goto LABEL_9;
            goto LABEL_77;
          }
          break;
        }
        if ( v40[1] == 8 )
        {
          if ( *(_DWORD *)(v36 + 24) == 1 )
          {
            v36 = *(_QWORD *)(v36 + 32);
            if ( !v38
              && (v101 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL)) != nullptr
              && !*v101
              && v101[1] == 8
              && *(_DWORD *)(v37 + 24) == 1 )
            {
              v37 = *(_QWORD *)(v37 + 32);
            }
            else if ( !v35 )
            {
              v35 = -1;
            }
            goto LABEL_85;
          }
          if ( !v38 )
            break;
          if ( v36 == v37 )
            goto LABEL_77;
        }
        else
        {
          if ( !v38 )
            break;
          if ( v36 == v37 )
            goto LABEL_77;
          if ( v40[1] != 8 )
            goto LABEL_9;
        }
        if ( *(_DWORD *)(v36 + 24) != 1 )
          goto LABEL_9;
        v36 = *(_QWORD *)(v36 + 32);
        goto LABEL_140;
      }
      if ( v38 )
      {
        if ( v36 != v37 )
          goto LABEL_70;
LABEL_77:
        v33 += 8;
        if ( v106 == v33 )
        {
          v16 = v34;
          v41 = v35;
          v18 = v108;
          if ( !v35 )
            goto LABEL_33;
LABEL_79:
          if ( v41 == -1 )
            goto LABEL_29;
          goto LABEL_9;
        }
        continue;
      }
      break;
    }
    v42 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
    if ( v42 )
    {
      if ( !*v42 && v42[1] == 8 && *(_DWORD *)(v37 + 24) == 1 )
      {
        v37 = *(_QWORD *)(v37 + 32);
        if ( !v35 )
          v35 = 1;
      }
    }
LABEL_85:
    if ( v36 == v37 )
      goto LABEL_77;
    v43 = *(_WORD *)(v37 + 4);
    if ( *(_WORD *)(v36 + 4) )
    {
      if ( v43 )
        goto LABEL_70;
      v45 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
      if ( !v45 )
        goto LABEL_72;
LABEL_91:
      if ( *v45 )
        goto LABEL_93;
      goto LABEL_92;
    }
    v44 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
    if ( v44 && !*v44 )
    {
      if ( v44[1] == 8 && *(_DWORD *)(v36 + 24) == 1 )
      {
        v36 = *(_QWORD *)(v36 + 32);
        if ( !v43 )
        {
          v62 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
          if ( !v62 )
          {
            if ( v36 == v37 )
              goto LABEL_9;
            if ( *(_WORD *)(v36 + 4) )
            {
LABEL_72:
              v16 = v34;
              v18 = v108;
              goto LABEL_29;
            }
            goto LABEL_96;
          }
          if ( *v62 || v62[1] != 8 )
          {
            if ( v36 == v37 )
              goto LABEL_9;
            goto LABEL_93;
          }
          v61 = 1;
          goto LABEL_160;
        }
LABEL_140:
        if ( v36 == v37 || !*(_WORD *)(v36 + 4) )
          goto LABEL_9;
LABEL_70:
        v39 = *(_DWORD *)v37 == *(_DWORD *)v36;
        if ( *(_DWORD *)v37 < *(_DWORD *)v36 )
          goto LABEL_9;
        goto LABEL_71;
      }
      if ( v43 )
        goto LABEL_9;
      v45 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
      if ( !v45 )
        goto LABEL_96;
      if ( *v45 )
        goto LABEL_93;
LABEL_92:
      if ( v45[1] != 8 )
        goto LABEL_93;
      v61 = 0;
LABEL_160:
      if ( *(_DWORD *)(v37 + 24) == 1 )
      {
        v37 = *(_QWORD *)(v37 + 32);
        if ( v37 == v36 )
        {
          if ( !v61 )
            goto LABEL_72;
          goto LABEL_77;
        }
        v46 = *(_WORD *)(v36 + 4);
        v47 = *(_WORD *)(v37 + 4);
        goto LABEL_94;
      }
      if ( v37 == v36 )
      {
        if ( v61 )
          goto LABEL_9;
        goto LABEL_77;
      }
LABEL_93:
      v46 = *(_WORD *)(v36 + 4);
      v47 = 0;
LABEL_94:
      if ( !v46 )
      {
        if ( v47 )
          goto LABEL_9;
        goto LABEL_96;
      }
      if ( !v47 )
        goto LABEL_72;
      goto LABEL_70;
    }
    if ( v43 )
      goto LABEL_9;
    v45 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
    if ( v45 )
      goto LABEL_91;
LABEL_96:
    v48 = *(unsigned int **)(v36 + 16);
    v49 = *(unsigned int **)(v37 + 16);
    if ( v48 != v49 )
    {
      v50 = *v48;
      v39 = *v49 == v50;
      if ( *v49 < v50 )
        goto LABEL_9;
LABEL_71:
      if ( !v39 )
        goto LABEL_72;
      goto LABEL_77;
    }
    v52 = *(_DWORD *)(v36 + 24);
    v53 = *(_DWORD *)(v37 + 24);
    if ( v52 == v53 )
    {
      if ( v52 )
      {
        v116 = v33;
        v119 = v21;
        v120 = v35;
        v114 = v19;
        v110 = v3;
        v73 = 32;
        v112 = v34;
        v74 = 0;
        v118 = v5;
        do
        {
          v75 = *(_QWORD *)(v36 + v73);
          v76 = *(_QWORD *)(v37 + v73);
          v77 = *(_WORD *)(v76 + 4);
          if ( !*(_WORD *)(v75 + 4)
            && (v78 = *(_DWORD **)(*(_QWORD *)(v75 + 16) + 24LL)) != nullptr
            && !*v78
            && v78[1] == 8
            && *(_DWORD *)(v75 + 24) == 1 )
          {
            v75 = *(_QWORD *)(v75 + 32);
            if ( !v77
              && (v82 = *(_DWORD **)(*(_QWORD *)(v76 + 16) + 24LL)) != nullptr
              && !*v82
              && v82[1] == 8
              && *(_DWORD *)(v76 + 24) == 1 )
            {
              v76 = *(_QWORD *)(v76 + 32);
            }
            else if ( !v74 )
            {
              v74 = -1;
            }
          }
          else if ( !v77 )
          {
            v79 = *(_DWORD **)(*(_QWORD *)(v76 + 16) + 24LL);
            if ( v79 )
            {
              if ( !*v79 && v79[1] == 8 && *(_DWORD *)(v76 + 24) == 1 )
              {
                v76 = *(_QWORD *)(v76 + 32);
                if ( !v74 )
                  v74 = 1;
              }
            }
          }
          v80 = sub_5C8360(v75, v76, 2);
          if ( v80 )
          {
            v41 = v80;
            v3 = v110;
            v18 = v108;
            v16 = v112;
            v19 = v114;
            goto LABEL_79;
          }
          v73 += 8;
        }
        while ( v81 != v73 );
        v41 = v74;
        v3 = v110;
        v33 = v116;
        v5 = v118;
        v21 = v119;
        v34 = v112;
        v35 = v120;
        v19 = v114;
        if ( !v41 )
          goto LABEL_70;
        v16 = v112;
        v18 = v108;
        goto LABEL_79;
      }
      goto LABEL_70;
    }
    v16 = v34;
    v18 = v108;
    if ( v53 >= v52 )
      goto LABEL_29;
LABEL_9:
    v3 += 8;
    *(_QWORD *)v19 = v9;
    if ( a2 != v3 )
      continue;
    break;
  }
}

