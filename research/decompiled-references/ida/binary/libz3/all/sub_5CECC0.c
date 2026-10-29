__int64 __fastcall sub_5CECC0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 v6; // r11
  unsigned int *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int *v15; // rbx
  _DWORD *v16; // rsi
  unsigned int *v17; // r11
  _DWORD *v18; // rsi
  _DWORD *v19; // rdx
  __int64 v20; // r15
  unsigned int **v21; // rcx
  __int64 v22; // r10
  unsigned int *v23; // r9
  __int16 v24; // dx
  _DWORD *v25; // rsi
  char v26; // di
  unsigned int *v27; // r9
  __int64 v28; // rbp
  __int64 v29; // r12
  unsigned int *v30; // r9
  _DWORD *v31; // rdx
  char v32; // di
  unsigned int *v33; // r10
  _QWORD *v34; // rdx
  unsigned int *v35; // r14
  unsigned int *v36; // rdi
  unsigned int *v37; // rdx
  __int16 v38; // dx
  __int16 v39; // si
  __int64 v40; // rdx
  unsigned int v41; // esi
  __int64 v42; // rdx
  unsigned int v43; // edi
  unsigned int *v44; // rdi
  __int64 v45; // rdi
  unsigned int **v46; // rsi
  __int64 v47; // r8
  __int64 v48; // r13
  unsigned int v49; // ecx
  unsigned int *v50; // r11
  __int64 v51; // rbp
  bool v52; // zf
  __int64 v53; // rsi
  unsigned int *v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r10
  __int16 v57; // dx
  int v58; // edx
  __int16 v59; // dx
  unsigned int *v60; // rax
  unsigned int *v61; // rdx
  _DWORD *v62; // rdi
  _DWORD *v63; // rdx
  int v64; // edx
  _DWORD *v65; // rax
  _DWORD *v66; // rdx
  _DWORD *v67; // rdx
  __int16 v68; // dx
  _DWORD *v69; // rdi
  _DWORD *v70; // rdx
  __int16 v71; // di
  __int16 v72; // dx
  unsigned int *v73; // rdx
  unsigned int *v74; // rdi
  unsigned int v75; // edx
  int v76; // edx
  __int64 v77; // rdx
  __int64 v78; // rdx
  unsigned int v79; // edi
  _DWORD *v80; // rdx
  char v81; // dl
  __int64 v82; // r9
  unsigned int **v83; // r14
  __int64 v84; // rbx
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int16 v87; // ax
  _DWORD *v88; // rdx
  _DWORD *v89; // rax
  __int64 v90; // r9
  int v91; // r10d
  __int64 v92; // rbp
  __int64 v93; // rbx
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int16 v96; // ax
  _DWORD *v97; // rdx
  _DWORD *v98; // rax
  int v99; // eax
  int v100; // r11d
  _DWORD *v101; // rax
  _DWORD *v102; // rax
  _DWORD *v103; // rax
  _DWORD *v104; // rdx
  unsigned int *v105; // [rsp+8h] [rbp-90h]
  __int64 v106; // [rsp+8h] [rbp-90h]
  __int64 v107; // [rsp+10h] [rbp-88h]
  unsigned int *v108; // [rsp+10h] [rbp-88h]
  unsigned int **v109; // [rsp+18h] [rbp-80h]
  __int64 v110; // [rsp+18h] [rbp-80h]
  int v111; // [rsp+24h] [rbp-74h]
  unsigned int v112; // [rsp+24h] [rbp-74h]
  unsigned int *v113; // [rsp+28h] [rbp-70h]
  unsigned int *v114; // [rsp+28h] [rbp-70h]
  __int64 v115; // [rsp+30h] [rbp-68h]
  __int64 v116; // [rsp+30h] [rbp-68h]
  __int64 v117; // [rsp+38h] [rbp-60h]
  __int64 v118; // [rsp+38h] [rbp-60h]
  unsigned int *v119; // [rsp+40h] [rbp-58h]
  unsigned int *v120; // [rsp+40h] [rbp-58h]
  __int64 v121; // [rsp+48h] [rbp-50h]
  __int64 v122; // [rsp+50h] [rbp-48h]
  unsigned int *v123; // [rsp+58h] [rbp-40h]

  result = a1;
  v6 = a3 & 1;
  v8 = a4;
  v9 = (a3 - 1) / 2;
  if ( a2 >= v9 )
  {
    v21 = (unsigned int **)(a1 + 8 * a2);
    if ( v6 || a2 != (a3 - 2) / 2 )
      goto LABEL_39;
    v20 = a2;
    goto LABEL_77;
  }
  v10 = a2;
  v11 = a2;
  v12 = v9;
  v13 = v6;
  v14 = a3;
  v15 = a4;
LABEL_12:
  v20 = 2 * (v10 + 1);
  v21 = (unsigned int **)(result + 16 * (v10 + 1));
  v22 = (__int64)*(v21 - 1);
  v23 = *v21;
  if ( (unsigned int *)v22 == *v21 )
    goto LABEL_10;
  v24 = *(_WORD *)(v22 + 4);
  if ( *((_WORD *)v23 + 2) )
  {
    if ( v24 )
    {
      v17 = *v21;
LABEL_41:
      if ( *v17 >= *(_DWORD *)v22 )
        goto LABEL_10;
      --v20;
      v21 = (unsigned int **)(result + 8 * v20);
      v27 = *v21;
      goto LABEL_22;
    }
    v16 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
    if ( !v16 )
      goto LABEL_21;
    if ( *v16 )
    {
      if ( *((_WORD *)v23 + 2) )
        goto LABEL_21;
      v17 = *v21;
LABEL_8:
      v18 = *((_DWORD **)v17 + 2);
      v19 = *(_DWORD **)(v22 + 16);
      if ( v18 != v19 )
        goto LABEL_9;
      goto LABEL_70;
    }
    v17 = *v21;
    v26 = 0;
  }
  else
  {
    v25 = *(_DWORD **)(*((_QWORD *)v23 + 2) + 24LL);
    if ( v25 && !*v25 && v25[1] == 8 && v23[6] == 1 )
    {
      v17 = *((unsigned int **)v23 + 4);
      if ( v24 )
      {
        if ( (unsigned int *)v22 == v17 )
          goto LABEL_10;
LABEL_47:
        if ( !*((_WORD *)v17 + 2) )
          goto LABEL_10;
        goto LABEL_41;
      }
      v26 = 1;
    }
    else
    {
      v17 = *v21;
      v26 = 0;
      if ( v24 )
        goto LABEL_47;
    }
    v16 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
    if ( !v16 || *v16 )
    {
      if ( (unsigned int *)v22 == v17 )
        goto LABEL_10;
      if ( *((_WORD *)v17 + 2) )
        goto LABEL_21;
      goto LABEL_8;
    }
  }
  if ( v16[1] == 8 && *(_DWORD *)(v22 + 24) == 1 )
  {
    v22 = *(_QWORD *)(v22 + 32);
    if ( (unsigned int *)v22 == v17 )
    {
      if ( v26 )
        goto LABEL_10;
      goto LABEL_21;
    }
    v39 = *((_WORD *)v17 + 2);
    v24 = *(_WORD *)(v22 + 4);
  }
  else
  {
    if ( (unsigned int *)v22 == v17 )
      goto LABEL_10;
    v39 = *((_WORD *)v17 + 2);
  }
  if ( v39 )
  {
    if ( !v24 )
    {
      --v20;
      v21 = (unsigned int **)(result + 8 * v20);
      v27 = *v21;
      goto LABEL_22;
    }
    goto LABEL_41;
  }
  if ( v24 )
    goto LABEL_10;
  v18 = *((_DWORD **)v17 + 2);
  v19 = *(_DWORD **)(v22 + 16);
  if ( v18 != v19 )
  {
LABEL_9:
    if ( *v18 >= *v19 )
      goto LABEL_10;
LABEL_21:
    --v20;
    v21 = (unsigned int **)(result + 8 * v20);
    v27 = *v21;
    goto LABEL_22;
  }
LABEL_70:
  v40 = v17[6];
  v41 = *(_DWORD *)(v22 + 24);
  if ( (_DWORD)v40 == v41 )
  {
    if ( !(_DWORD)v40 )
      goto LABEL_41;
    v106 = v22;
    v53 = 32;
    v107 = 8 * v40 + 32;
    v111 = 0;
    v109 = (unsigned int **)(result + 16 * (v10 + 1));
    v54 = *v21;
    while ( 1 )
    {
      v55 = *(_QWORD *)((char *)v17 + v53);
      v56 = *(_QWORD *)(v106 + v53);
      v57 = *(_WORD *)(v56 + 4);
      if ( *(_WORD *)(v55 + 4) )
        break;
      v62 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL);
      if ( !v62 || *v62 )
      {
        if ( v57 )
        {
          if ( v55 != v56 )
            goto LABEL_110;
          goto LABEL_93;
        }
LABEL_138:
        v67 = *(_DWORD **)(*(_QWORD *)(v56 + 16) + 24LL);
        if ( v67 )
        {
          if ( !*v67 && v67[1] == 8 )
          {
            v76 = *(_DWORD *)(v56 + 24);
            if ( v76 == 1 )
            {
              v56 = *(_QWORD *)(v56 + 32);
              if ( v111 )
                v76 = v111;
              v111 = v76;
            }
          }
        }
        goto LABEL_140;
      }
      if ( v62[1] != 8 )
      {
        if ( v57 )
        {
          if ( v55 != v56 )
          {
            if ( v62[1] != 8 )
              goto LABEL_110;
LABEL_205:
            if ( *(_DWORD *)(v55 + 24) != 1 )
              goto LABEL_110;
            v55 = *(_QWORD *)(v55 + 32);
LABEL_207:
            if ( v55 == v56 || !*(_WORD *)(v55 + 4) )
            {
LABEL_110:
              v23 = v54;
              v21 = v109;
              goto LABEL_10;
            }
            goto LABEL_91;
          }
          goto LABEL_93;
        }
        goto LABEL_138;
      }
      if ( *(_DWORD *)(v55 + 24) != 1 )
      {
        if ( v57 )
        {
          if ( v55 != v56 )
            goto LABEL_205;
          goto LABEL_93;
        }
        goto LABEL_138;
      }
      v55 = *(_QWORD *)(v55 + 32);
      if ( !v57
        && (v104 = *(_DWORD **)(*(_QWORD *)(v56 + 16) + 24LL)) != nullptr
        && !*v104
        && v104[1] == 8
        && *(_DWORD *)(v56 + 24) == 1 )
      {
        v56 = *(_QWORD *)(v56 + 32);
      }
      else if ( !v111 )
      {
        v111 = -1;
      }
LABEL_140:
      if ( v55 == v56 )
        goto LABEL_93;
      v68 = *(_WORD *)(v56 + 4);
      if ( *(_WORD *)(v55 + 4) )
      {
        if ( v68 )
          goto LABEL_91;
        v70 = *(_DWORD **)(*(_QWORD *)(v56 + 16) + 24LL);
        if ( !v70 )
          goto LABEL_21;
        if ( *v70 )
          goto LABEL_148;
      }
      else
      {
        v69 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL);
        if ( v69 && !*v69 )
        {
          if ( v69[1] == 8 && *(_DWORD *)(v55 + 24) == 1 )
          {
            v55 = *(_QWORD *)(v55 + 32);
            if ( v68 )
              goto LABEL_207;
            v80 = *(_DWORD **)(*(_QWORD *)(v56 + 16) + 24LL);
            if ( !v80 )
            {
              if ( v55 == v56 )
                goto LABEL_110;
              if ( *(_WORD *)(v55 + 4) )
                goto LABEL_21;
LABEL_151:
              v73 = *(unsigned int **)(v55 + 16);
              v74 = *(unsigned int **)(v56 + 16);
              if ( v73 != v74 )
              {
                v75 = *v73;
                if ( *v74 < v75 )
                  goto LABEL_110;
                if ( *v74 != v75 )
                  goto LABEL_21;
                goto LABEL_93;
              }
              v78 = *(unsigned int *)(v55 + 24);
              v79 = *(_DWORD *)(v56 + 24);
              if ( (_DWORD)v78 != v79 )
              {
                v23 = v54;
                v21 = v109;
                if ( v79 >= (unsigned int)v78 )
                  goto LABEL_21;
LABEL_10:
                *(_QWORD *)(result + 8 * v10) = v23;
                if ( v20 >= v12 )
                  goto LABEL_23;
LABEL_11:
                v10 = v20;
                goto LABEL_12;
              }
              if ( (_DWORD)v78 )
              {
                v114 = v54;
                v122 = v53;
                v118 = result;
                v121 = v12;
                v123 = v17;
                v116 = v10;
                v92 = 8 * v78 + 32;
                v120 = v15;
                v93 = 32;
                do
                {
                  v94 = *(_QWORD *)(v55 + v93);
                  v95 = *(_QWORD *)(v56 + v93);
                  v96 = *(_WORD *)(v95 + 4);
                  if ( !*(_WORD *)(v94 + 4)
                    && (v97 = *(_DWORD **)(*(_QWORD *)(v94 + 16) + 24LL)) != nullptr
                    && !*v97
                    && v97[1] == 8
                    && *(_DWORD *)(v94 + 24) == 1 )
                  {
                    v94 = *(_QWORD *)(v94 + 32);
                    if ( !v96 )
                    {
                      v102 = *(_DWORD **)(*(_QWORD *)(v95 + 16) + 24LL);
                      if ( v102 )
                      {
                        if ( !*v102 && v102[1] == 8 && *(_DWORD *)(v95 + 24) == 1 )
                          v95 = *(_QWORD *)(v95 + 32);
                      }
                    }
                  }
                  else if ( !v96 )
                  {
                    v98 = *(_DWORD **)(*(_QWORD *)(v95 + 16) + 24LL);
                    if ( v98 )
                    {
                      if ( !*v98 && v98[1] == 8 && *(_DWORD *)(v95 + 24) == 1 )
                        v95 = *(_QWORD *)(v95 + 32);
                    }
                  }
                  v99 = sub_5C8360(v94, v95, 2);
                  if ( v99 )
                  {
                    v58 = v99;
                    v23 = v114;
                    v10 = v116;
                    v21 = v109;
                    result = v118;
                    v15 = v120;
                    v12 = v121;
                    goto LABEL_95;
                  }
                  v93 += 8;
                }
                while ( v93 != v92 );
                v58 = v100;
                v54 = v114;
                v53 = v122;
                v17 = v123;
                v10 = v116;
                result = v118;
                v15 = v120;
                v12 = v121;
                if ( !v58 )
                  goto LABEL_91;
                v23 = v114;
                v21 = v109;
                goto LABEL_95;
              }
              goto LABEL_91;
            }
            if ( *v80 || v80[1] != 8 )
            {
              if ( v55 == v56 )
                goto LABEL_110;
              goto LABEL_148;
            }
            v81 = 1;
            goto LABEL_239;
          }
          if ( v68 )
            goto LABEL_110;
          v70 = *(_DWORD **)(*(_QWORD *)(v56 + 16) + 24LL);
          if ( !v70 )
            goto LABEL_151;
          if ( *v70 )
            goto LABEL_148;
        }
        else
        {
          if ( v68 )
            goto LABEL_110;
          v70 = *(_DWORD **)(*(_QWORD *)(v56 + 16) + 24LL);
          if ( !v70 )
            goto LABEL_151;
          if ( *v70 )
            goto LABEL_148;
        }
      }
      if ( v70[1] != 8 )
        goto LABEL_148;
      v81 = 0;
LABEL_239:
      if ( *(_DWORD *)(v56 + 24) != 1 )
      {
        if ( v56 == v55 )
        {
          if ( v81 )
            goto LABEL_110;
          goto LABEL_93;
        }
LABEL_148:
        v71 = *(_WORD *)(v55 + 4);
        v72 = 0;
LABEL_149:
        if ( !v71 )
        {
          if ( v72 )
            goto LABEL_110;
          goto LABEL_151;
        }
        if ( !v72 )
          goto LABEL_21;
LABEL_91:
        if ( *(_DWORD *)v56 < *(_DWORD *)v55 )
          goto LABEL_110;
        if ( *(_DWORD *)v56 != *(_DWORD *)v55 )
          goto LABEL_21;
        goto LABEL_93;
      }
      v56 = *(_QWORD *)(v56 + 32);
      if ( v56 != v55 )
      {
        v71 = *(_WORD *)(v55 + 4);
        v72 = *(_WORD *)(v56 + 4);
        goto LABEL_149;
      }
      if ( !v81 )
        goto LABEL_21;
LABEL_93:
      v53 += 8;
      if ( v53 == v107 )
      {
        v58 = v111;
        v23 = v54;
        v22 = v106;
        v21 = v109;
        if ( !v111 )
          goto LABEL_41;
LABEL_95:
        if ( v58 == -1 )
          goto LABEL_21;
        goto LABEL_10;
      }
    }
    if ( v57 )
    {
      if ( v55 != v56 )
        goto LABEL_91;
      goto LABEL_93;
    }
    goto LABEL_138;
  }
  if ( v41 < (unsigned int)v40 )
    goto LABEL_10;
  --v20;
  v21 = (unsigned int **)(result + 8 * v20);
  v27 = *v21;
LABEL_22:
  *(_QWORD *)(result + 8 * v10) = v27;
  if ( v20 < v12 )
    goto LABEL_11;
LABEL_23:
  v8 = v15;
  a2 = v11;
  if ( !v13 && (v14 - 2) / 2 == v20 )
  {
LABEL_77:
    v44 = *(unsigned int **)(result + 8 * (2 * v20 + 2) - 8);
    v20 = 2 * v20 + 1;
    *v21 = v44;
    v21 = (unsigned int **)(result + 8 * v20);
  }
  v28 = (v20 - 1) / 2;
  if ( v20 <= a2 )
    goto LABEL_39;
  v29 = result;
  while ( 1 )
  {
    v21 = (unsigned int **)(v29 + 8 * v28);
    v30 = *v21;
    if ( v8 == *v21 )
      goto LABEL_37;
    if ( !*((_WORD *)v30 + 2)
      && (v31 = *(_DWORD **)(*((_QWORD *)v30 + 2) + 24LL)) != nullptr
      && !*v31
      && v31[1] == 8
      && v30[6] == 1 )
    {
      v33 = *((unsigned int **)v30 + 4);
      if ( *((_WORD *)v8 + 2) )
      {
        if ( v8 == v33 )
          goto LABEL_37;
LABEL_53:
        if ( !*((_WORD *)v33 + 2) )
          goto LABEL_37;
        v35 = v8;
LABEL_55:
        result = *v35;
        if ( *v33 >= (unsigned int)result )
          goto LABEL_37;
        goto LABEL_56;
      }
      v32 = 1;
    }
    else
    {
      v32 = 0;
      v33 = *v21;
      if ( *((_WORD *)v8 + 2) )
        goto LABEL_53;
    }
    v34 = *(_QWORD **)(*((_QWORD *)v8 + 2) + 24LL);
    if ( v34 )
    {
      result = *(unsigned int *)v34;
      if ( *v34 == 0x800000000LL && v8[6] == 1 )
        break;
    }
    if ( v8 == v33 )
      goto LABEL_37;
    v35 = v8;
    if ( !*((_WORD *)v33 + 2) )
      goto LABEL_35;
LABEL_56:
    *(_QWORD *)(v29 + 8 * v20) = v30;
    v20 = v28;
    if ( a2 >= v28 )
      goto LABEL_39;
    v28 = (v28 - 1) / 2;
  }
  v35 = *((unsigned int **)v8 + 4);
  if ( v35 == v33 )
  {
    if ( v32 )
      goto LABEL_37;
    goto LABEL_56;
  }
  v38 = *((_WORD *)v35 + 2);
  if ( *((_WORD *)v33 + 2) )
  {
    if ( !v38 )
      goto LABEL_56;
    goto LABEL_55;
  }
  if ( v38 )
    goto LABEL_37;
LABEL_35:
  v36 = *((unsigned int **)v33 + 2);
  v37 = *((unsigned int **)v35 + 2);
  if ( v36 != v37 )
  {
    result = *v37;
    if ( *v36 >= (unsigned int)result )
      goto LABEL_37;
    goto LABEL_56;
  }
  v42 = v33[6];
  v43 = v35[6];
  if ( (_DWORD)v42 != v43 )
  {
    if ( v43 < (unsigned int)v42 )
      goto LABEL_37;
    goto LABEL_56;
  }
  if ( !(_DWORD)v42 )
    goto LABEL_55;
  v105 = v8;
  v45 = 32;
  v46 = (unsigned int **)(v29 + 8 * v28);
  v47 = 8 * v42 + 32;
  v48 = v28;
  v49 = 0;
  while ( 2 )
  {
    v50 = *(unsigned int **)((char *)v33 + v45);
    v51 = *(_QWORD *)((char *)v35 + v45);
    result = *(unsigned __int16 *)(v51 + 4);
    if ( !*((_WORD *)v50 + 2) )
    {
      v63 = *(_DWORD **)(*((_QWORD *)v50 + 2) + 24LL);
      if ( !v63 || *v63 )
      {
        if ( (_WORD)result )
        {
          if ( v50 != (unsigned int *)v51 )
            goto LABEL_123;
          goto LABEL_115;
        }
        break;
      }
      if ( v63[1] == 8 )
      {
        if ( v50[6] == 1 )
        {
          v50 = *((unsigned int **)v50 + 4);
          if ( !(_WORD)result
            && (v103 = *(_DWORD **)(*(_QWORD *)(v51 + 16) + 24LL)) != nullptr
            && !*v103
            && v103[1] == 8
            && *(_DWORD *)(v51 + 24) == 1 )
          {
            v51 = *(_QWORD *)(v51 + 32);
          }
          else if ( !v49 )
          {
            v49 = -1;
          }
          goto LABEL_128;
        }
        if ( !(_WORD)result )
          break;
        if ( v50 == (unsigned int *)v51 )
          goto LABEL_115;
      }
      else
      {
        if ( !(_WORD)result )
          break;
        if ( v50 == (unsigned int *)v51 )
          goto LABEL_115;
        if ( v63[1] != 8 )
          goto LABEL_123;
      }
      if ( v50[6] != 1 )
        goto LABEL_123;
      v50 = *((unsigned int **)v50 + 4);
      goto LABEL_200;
    }
    if ( (_WORD)result )
    {
      if ( v50 != (unsigned int *)v51 )
        goto LABEL_83;
LABEL_115:
      v45 += 8;
      if ( v45 == v47 )
      {
        result = v49;
        v28 = v48;
        v21 = v46;
        v8 = v105;
        v64 = result;
        if ( !(_DWORD)result )
          goto LABEL_55;
LABEL_117:
        if ( v64 == -1 )
          goto LABEL_56;
        goto LABEL_37;
      }
      continue;
    }
    break;
  }
  v65 = *(_DWORD **)(*(_QWORD *)(v51 + 16) + 24LL);
  if ( v65 )
  {
    if ( !*v65 && v65[1] == 8 && *(_DWORD *)(v51 + 24) == 1 )
    {
      v51 = *(_QWORD *)(v51 + 32);
      if ( !v49 )
        v49 = 1;
    }
  }
LABEL_128:
  if ( v50 == (unsigned int *)v51 )
    goto LABEL_115;
  result = *(unsigned __int16 *)(v51 + 4);
  if ( *((_WORD *)v50 + 2) )
  {
    if ( (_WORD)result )
      goto LABEL_83;
    result = *(_QWORD *)(*(_QWORD *)(v51 + 16) + 24LL);
    if ( !result )
      goto LABEL_85;
    if ( !*(_DWORD *)result )
      goto LABEL_164;
    goto LABEL_100;
  }
  v66 = *(_DWORD **)(*((_QWORD *)v50 + 2) + 24LL);
  if ( v66 && !*v66 )
  {
    if ( v66[1] != 8 || v50[6] != 1 )
    {
      if ( (_WORD)result )
        goto LABEL_123;
      result = *(_QWORD *)(*(_QWORD *)(v51 + 16) + 24LL);
      if ( result )
      {
        if ( *(_DWORD *)result )
          goto LABEL_100;
        goto LABEL_164;
      }
      goto LABEL_103;
    }
    v50 = *((unsigned int **)v50 + 4);
    if ( !(_WORD)result )
    {
      result = *(_QWORD *)(*(_QWORD *)(v51 + 16) + 24LL);
      if ( !result )
      {
        if ( v50 == (unsigned int *)v51 )
          goto LABEL_105;
        if ( *((_WORD *)v50 + 2) )
        {
LABEL_85:
          v21 = v46;
          v28 = v48;
          v8 = v105;
          goto LABEL_56;
        }
        goto LABEL_103;
      }
      if ( !*(_DWORD *)result && *(_DWORD *)(result + 4) == 8 )
      {
        result = 1;
        goto LABEL_166;
      }
      if ( v50 == (unsigned int *)v51 )
      {
LABEL_105:
        v8 = v105;
        v21 = (unsigned int **)(v29 + 8 * v20);
        goto LABEL_39;
      }
LABEL_100:
      v59 = *((_WORD *)v50 + 2);
      result = 0;
      goto LABEL_101;
    }
LABEL_200:
    if ( v50 == (unsigned int *)v51 )
      goto LABEL_105;
    if ( !*((_WORD *)v50 + 2) )
    {
LABEL_123:
      v8 = v105;
      result = v29;
      goto LABEL_38;
    }
    goto LABEL_83;
  }
  if ( (_WORD)result )
    goto LABEL_123;
  result = *(_QWORD *)(*(_QWORD *)(v51 + 16) + 24LL);
  if ( result )
  {
    if ( *(_DWORD *)result )
      goto LABEL_100;
LABEL_164:
    if ( *(_DWORD *)(result + 4) != 8 )
      goto LABEL_100;
    result = 0;
LABEL_166:
    if ( *(_DWORD *)(v51 + 24) != 1 )
    {
      if ( (unsigned int *)v51 == v50 )
      {
        if ( (_BYTE)result )
          goto LABEL_105;
        goto LABEL_115;
      }
      goto LABEL_100;
    }
    v51 = *(_QWORD *)(v51 + 32);
    if ( (unsigned int *)v51 == v50 )
    {
      if ( !(_BYTE)result )
        goto LABEL_85;
      goto LABEL_115;
    }
    v59 = *((_WORD *)v50 + 2);
    result = *(unsigned __int16 *)(v51 + 4);
LABEL_101:
    if ( !v59 )
    {
      if ( (_WORD)result )
        goto LABEL_123;
      goto LABEL_103;
    }
    if ( !(_WORD)result )
      goto LABEL_85;
LABEL_83:
    result = *v50;
    v52 = *(_DWORD *)v51 == (_DWORD)result;
    if ( *(_DWORD *)v51 < (unsigned int)result )
      goto LABEL_105;
LABEL_84:
    if ( !v52 )
      goto LABEL_85;
    goto LABEL_115;
  }
LABEL_103:
  v60 = *((unsigned int **)v50 + 2);
  v61 = *(unsigned int **)(v51 + 16);
  if ( v60 != v61 )
  {
    result = *v60;
    v52 = *v61 == (_DWORD)result;
    if ( *v61 < (unsigned int)result )
      goto LABEL_105;
    goto LABEL_84;
  }
  v77 = v50[6];
  result = *(unsigned int *)(v51 + 24);
  if ( (_DWORD)v77 == (_DWORD)result )
  {
    if ( (_DWORD)v77 )
    {
      v112 = v49;
      v115 = v45;
      v117 = v47;
      v108 = v30;
      v82 = 32;
      v113 = v35;
      v83 = v46;
      v119 = v33;
      v110 = a2;
      v84 = 8 * v77 + 32;
      do
      {
        v85 = *(_QWORD *)((char *)v50 + v82);
        v86 = *(_QWORD *)(v51 + v82);
        v87 = *(_WORD *)(v86 + 4);
        if ( !*(_WORD *)(v85 + 4)
          && (v88 = *(_DWORD **)(*(_QWORD *)(v85 + 16) + 24LL)) != nullptr
          && !*v88
          && v88[1] == 8
          && *(_DWORD *)(v85 + 24) == 1 )
        {
          v85 = *(_QWORD *)(v85 + 32);
          if ( !v87 )
          {
            v101 = *(_DWORD **)(*(_QWORD *)(v86 + 16) + 24LL);
            if ( v101 )
            {
              if ( !*v101 && v101[1] == 8 && *(_DWORD *)(v86 + 24) == 1 )
                v86 = *(_QWORD *)(v86 + 32);
            }
          }
        }
        else if ( !v87 )
        {
          v89 = *(_DWORD **)(*(_QWORD *)(v86 + 16) + 24LL);
          if ( v89 )
          {
            if ( !*v89 && v89[1] == 8 && *(_DWORD *)(v86 + 24) == 1 )
              v86 = *(_QWORD *)(v86 + 32);
          }
        }
        result = sub_5C8360(v85, v86, 2);
        if ( (_DWORD)result )
        {
          v30 = v108;
          a2 = v110;
          v28 = v48;
          v64 = result;
          v8 = v105;
          v21 = v83;
          goto LABEL_117;
        }
        v82 = v90 + 8;
      }
      while ( v82 != v84 );
      v64 = v91;
      v46 = v83;
      v30 = v108;
      v49 = v112;
      v45 = v115;
      v47 = v117;
      v35 = v113;
      v33 = v119;
      a2 = v110;
      if ( !v64 )
        goto LABEL_83;
      v21 = v46;
      v28 = v48;
      v8 = v105;
      goto LABEL_117;
    }
    goto LABEL_83;
  }
  v21 = v46;
  v28 = v48;
  v8 = v105;
  if ( (unsigned int)result >= (unsigned int)v77 )
    goto LABEL_56;
LABEL_37:
  result = v29;
LABEL_38:
  v21 = (unsigned int **)(result + 8 * v20);
LABEL_39:
  *v21 = v8;
  return result;
}

