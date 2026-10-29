__int64 __fastcall sub_498450(__int64 *src, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 *v5; // r13
  __int64 *v7; // rbx
  char *v8; // r14
  __int64 *v9; // r15
  __int64 *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 *v14; // r8
  unsigned __int16 v15; // dx
  _DWORD *v16; // r11
  unsigned __int16 v17; // dx
  __int64 v18; // rcx
  __int64 *v19; // r9
  char v20; // dl
  __int64 v21; // r10
  unsigned __int16 v22; // ax
  _DWORD *v23; // rax
  int *v24; // rdi
  int *v25; // rdx
  int v26; // eax
  bool v27; // al
  __int64 v28; // rcx
  bool v29; // al
  unsigned __int16 v30; // ax
  _DWORD *v31; // rax
  __int64 *v32; // rbp
  __int64 v33; // r14
  __int64 *v34; // rbx
  __int64 v35; // rbp
  __int64 v36; // r10
  __int64 *i; // r10
  __int64 *v38; // r10
  __int64 v39; // r11
  __int64 v40; // r12
  __int64 v41; // rbp
  __int64 *v42; // r8
  __int64 *v43; // r13
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rbx
  __int64 *v47; // rdi
  __int64 v48; // rax
  __int64 *v49; // r8
  __int64 *v50; // r13
  __int64 *v51; // rdi
  __int64 v52; // rax
  bool v53; // cf
  int v54; // edx
  __int64 v55; // r15
  _DWORD *v56; // rax
  _DWORD *v57; // rdx
  unsigned __int16 v58; // ax
  unsigned int v59; // edx
  unsigned int v60; // eax
  int v61; // eax
  _DWORD *v62; // rdx
  bool v63; // zf
  int v64; // edi
  _DWORD *v65; // rax
  _DWORD *v66; // rax
  int v67; // eax
  _DWORD *v68; // rdi
  int v69; // edi
  int v70; // edi
  int v71; // edi
  _DWORD *v72; // rax
  int v73; // eax
  _DWORD *v74; // rax
  _DWORD *v75; // rax
  _DWORD *v76; // rax
  int v77; // [rsp+0h] [rbp-78h]
  __int64 *v78; // [rsp+0h] [rbp-78h]
  __int64 *v79; // [rsp+0h] [rbp-78h]
  int v80; // [rsp+0h] [rbp-78h]
  __int64 v81; // [rsp+0h] [rbp-78h]
  __int64 v82; // [rsp+0h] [rbp-78h]
  __int64 v83; // [rsp+0h] [rbp-78h]
  __int64 v84; // [rsp+0h] [rbp-78h]
  __int64 v85; // [rsp+0h] [rbp-78h]
  __int64 v86; // [rsp+0h] [rbp-78h]
  __int64 v87; // [rsp+8h] [rbp-70h]
  __int64 *v88; // [rsp+8h] [rbp-70h]
  __int64 v89; // [rsp+10h] [rbp-68h]
  __int64 v92; // [rsp+28h] [rbp-50h]
  _DWORD *v93; // [rsp+28h] [rbp-50h]
  _DWORD *v94; // [rsp+28h] [rbp-50h]
  _DWORD *v95; // [rsp+28h] [rbp-50h]

  result = (char *)a2 - (char *)src;
  v5 = src;
  v7 = (__int64 *)((char *)a3 + (char *)a2 - (char *)src);
  v89 = a2 - src;
  if ( (char *)a2 - (char *)src <= 48 )
  {
    if ( a2 != src )
    {
      v32 = src + 1;
      if ( a2 != src + 1 )
        goto LABEL_44;
    }
    return result;
  }
  v87 = (char *)a2 - (char *)src;
  do
  {
    v8 = (char *)v5;
    v5 += 7;
    v9 = v7;
    v10 = v5 - 6;
    do
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( !sub_4910B0(*v10, *(v5 - 7)) )
          break;
        if ( (char *)v10 - v8 <= 8 )
        {
          if ( (char *)v10 - v8 == 8 )
            *v10 = v12;
        }
        else
        {
          memmove(v8 + 8, v8, (char *)v10 - v8);
        }
        ++v10;
        *(v5 - 7) = v11;
        if ( v5 == v10 )
          goto LABEL_41;
      }
      v13 = *(v10 - 1);
      v14 = v10 - 1;
      if ( v11 != v13 )
      {
        v15 = *(_WORD *)(v11 + 4);
        if ( !v15 )
        {
          v16 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
          while ( 1 )
          {
            v19 = v14 + 1;
            v20 = 0;
            v21 = v11;
            if ( v16 && !*v16 && v16[1] == 8 && *(_DWORD *)(v11 + 24) == 1 )
            {
              v21 = *(_QWORD *)(v11 + 32);
              v20 = 1;
            }
            v22 = *(_WORD *)(v13 + 4);
            if ( v22 )
            {
              if ( v21 == v13 )
                goto LABEL_40;
              v17 = *(_WORD *)(v21 + 4);
              v18 = v13;
              if ( v22 != v17 )
              {
LABEL_13:
                if ( v17 >= v22 )
                  goto LABEL_40;
                goto LABEL_14;
              }
LABEL_76:
              v53 = *(_DWORD *)v21 < *(_DWORD *)v18;
              goto LABEL_77;
            }
            v23 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
            if ( !v23 || *v23 || v23[1] != 8 || *(_DWORD *)(v13 + 24) != 1 )
            {
              if ( v21 == v13 || *(_WORD *)(v21 + 4) )
                goto LABEL_40;
              v18 = v13;
              goto LABEL_24;
            }
            v18 = *(_QWORD *)(v13 + 32);
            if ( v21 != v18 )
              break;
            if ( v20 )
              goto LABEL_40;
LABEL_14:
            v14[1] = v13;
            v13 = *(v14 - 1);
            if ( v11 == v13 )
              goto LABEL_69;
            --v14;
          }
          v22 = *(_WORD *)(v18 + 4);
          v17 = *(_WORD *)(v21 + 4);
          if ( v17 != v22 )
            goto LABEL_13;
          if ( v17 )
            goto LABEL_76;
LABEL_24:
          v24 = *(int **)(*(_QWORD *)(v21 + 16) + 24LL);
          v25 = *(int **)(*(_QWORD *)(v18 + 16) + 24LL);
          if ( v24 )
          {
            v77 = *v24;
            if ( v25 )
            {
              v26 = *v25;
              if ( v77 != *v25 )
                goto LABEL_27;
              v26 = v24[1];
              v54 = v25[1];
              if ( v26 != v54 )
              {
LABEL_91:
                v27 = v26 < v54;
                goto LABEL_28;
              }
              if ( v77 != 5 )
                goto LABEL_76;
              if ( v26 == 2 )
              {
                if ( *(_DWORD *)(v21 + 24) == 2 )
                {
                  v56 = *(_DWORD **)(v21 + 40);
                  v21 = *(_QWORD *)(v21 + 32);
                  if ( *(_DWORD *)(v18 + 24) == 2 )
                    goto LABEL_104;
                  goto LABEL_136;
                }
              }
              else
              {
                if ( v54 == 4 || v54 == 3 || v54 == 5 )
                {
                  v56 = nullptr;
                  if ( *(_DWORD *)(v21 + 24) == 2 )
                  {
                    v56 = *(_DWORD **)(v21 + 40);
                    v21 = *(_QWORD *)(v21 + 32);
                  }
                  if ( *(_DWORD *)(v18 + 24) == 2 )
                  {
LABEL_104:
                    v57 = *(_DWORD **)(v18 + 40);
                    v18 = *(_QWORD *)(v18 + 32);
                    if ( v56 )
                    {
                      if ( !v57 )
                        goto LABEL_40;
                      if ( v21 == v18 )
                      {
                        v27 = *v56 < *v57;
                        goto LABEL_28;
                      }
                      v58 = *(_WORD *)(v21 + 4);
                      v53 = v58 < *(_WORD *)(v18 + 4);
                      if ( v58 == *(_WORD *)(v18 + 4) )
                      {
                        if ( v58 )
                          goto LABEL_76;
                        v59 = *(unsigned __int16 *)(v21 + 28);
                        v60 = *(unsigned __int16 *)(v18 + 28);
                        v53 = v59 < v60;
                        if ( v59 == v60 )
                        {
                          v61 = *(_DWORD *)(v21 + 24);
                          v62 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL);
                          if ( !v61 )
                          {
                            if ( v62 )
                            {
                              v63 = *v62 == -1;
                              v62 = nullptr;
                              if ( v63 )
                                v62 = (_DWORD *)v21;
                            }
                            else
                            {
                              v62 = (_DWORD *)v21;
                            }
                            goto LABEL_114;
                          }
                          if ( !v62 )
                            goto LABEL_114;
                          if ( *v62 != 5 )
                          {
LABEL_172:
                            v62 = nullptr;
                            goto LABEL_114;
                          }
                          v70 = v62[1];
                          if ( v70 == 6 )
                          {
                            v85 = v18;
                            v75 = sub_490FE0(*(_QWORD *)(v21 + 32));
                            v18 = v85;
                            v62 = v75;
                            goto LABEL_114;
                          }
                          v62 = nullptr;
                          if ( v70 == 9 && v61 == 2 )
                          {
                            v62 = *(_DWORD **)(v21 + 40);
                            if ( !*((_WORD *)v62 + 2) )
                            {
                              v71 = v62[6];
                              v72 = *(_DWORD **)(*((_QWORD *)v62 + 2) + 24LL);
                              if ( v71 )
                              {
                                if ( !v72 )
                                {
                                  v62 = nullptr;
                                  goto LABEL_114;
                                }
                              }
                              else if ( !v72 || *v72 == -1 )
                              {
                                goto LABEL_114;
                              }
                              if ( *v72 == 5 )
                              {
                                v73 = v72[1];
                                if ( v73 == 6 )
                                {
                                  if ( v71 )
                                  {
                                    v86 = v18;
                                    v76 = sub_490FE0(*((_QWORD *)v62 + 4));
                                    v18 = v86;
                                    v62 = v76;
                                    goto LABEL_114;
                                  }
                                }
                                else if ( v73 == 9 && v71 == 2 )
                                {
                                  v84 = v18;
                                  v74 = sub_490FE0(*((_QWORD *)v62 + 5));
                                  v18 = v84;
                                  v62 = v74;
                                  goto LABEL_114;
                                }
                              }
                            }
                            goto LABEL_172;
                          }
LABEL_114:
                          v64 = *(_DWORD *)(v18 + 24);
                          v65 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
                          if ( v64 )
                          {
                            if ( v65 && *v65 == 5 )
                            {
                              v67 = v65[1];
                              if ( v67 == 6 )
                              {
                                v95 = v62;
                                v83 = v18;
                                v66 = sub_490FE0(*(_QWORD *)(v18 + 32));
                                v18 = v83;
                                v62 = v95;
                                goto LABEL_144;
                              }
                              if ( v67 == 9 && v64 == 2 )
                              {
                                v66 = *(_DWORD **)(v18 + 40);
                                if ( !*((_WORD *)v66 + 2) )
                                {
                                  v80 = v66[6];
                                  v68 = *(_DWORD **)(*((_QWORD *)v66 + 2) + 24LL);
                                  if ( v80 )
                                  {
                                    if ( !v68 )
                                      goto LABEL_117;
                                  }
                                  else if ( !v68 || *v68 == -1 )
                                  {
                                    goto LABEL_144;
                                  }
                                  if ( *v68 != 5 )
                                    goto LABEL_117;
                                  v69 = v68[1];
                                  if ( v69 == 6 )
                                  {
                                    if ( !v80 )
                                      goto LABEL_117;
                                    v94 = v62;
                                    v82 = v18;
                                    v66 = sub_490FE0(*((_QWORD *)v66 + 4));
                                    v18 = v82;
                                    v62 = v94;
                                    goto LABEL_144;
                                  }
                                  if ( v69 == 9 && v80 == 2 )
                                  {
                                    v93 = v62;
                                    v81 = v18;
                                    v66 = sub_490FE0(*((_QWORD *)v66 + 5));
                                    v18 = v81;
                                    v62 = v93;
                                    goto LABEL_144;
                                  }
                                }
                              }
                            }
LABEL_117:
                            if ( v62 )
                              goto LABEL_40;
                            goto LABEL_76;
                          }
                          if ( v65 && *v65 != -1 )
                            goto LABEL_117;
                          v66 = (_DWORD *)v18;
LABEL_144:
                          if ( v62 && v66 )
                          {
                            if ( v66 == v62 )
                              goto LABEL_76;
                            v27 = *v62 < *v66;
                          }
                          else
                          {
                            if ( v66 == v62 )
                              goto LABEL_76;
                            v27 = v62 < v66;
                          }
LABEL_28:
                          if ( !v27 )
                            goto LABEL_40;
                          goto LABEL_14;
                        }
                      }
LABEL_77:
                      v27 = v53;
                      goto LABEL_28;
                    }
LABEL_133:
                    if ( v57 )
                      goto LABEL_14;
                    goto LABEL_76;
                  }
LABEL_136:
                  if ( v56 )
                    goto LABEL_40;
                  goto LABEL_76;
                }
                if ( v54 != 2 )
                {
                  v56 = nullptr;
                  goto LABEL_136;
                }
              }
              if ( *(_DWORD *)(v18 + 24) != 2 )
                goto LABEL_76;
              v57 = *(_DWORD **)(v18 + 40);
              v18 = *(_QWORD *)(v18 + 32);
              goto LABEL_133;
            }
            v26 = -1;
            if ( v77 == -1 )
            {
              v26 = v24[1];
              v54 = -1;
              if ( v26 == -1 )
                goto LABEL_76;
              goto LABEL_91;
            }
          }
          else
          {
            if ( !v25 )
              goto LABEL_76;
            v26 = *v25;
            if ( *v25 == -1 )
            {
              v54 = v25[1];
              if ( v54 == -1 )
                goto LABEL_76;
              goto LABEL_91;
            }
            v77 = -1;
          }
LABEL_27:
          v27 = v26 > v77;
          goto LABEL_28;
        }
        while ( 2 )
        {
          v30 = *(_WORD *)(v13 + 4);
          v19 = v14 + 1;
          if ( !v30 )
          {
            v31 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
            if ( !v31 || *v31 || v31[1] != 8 || *(_DWORD *)(v13 + 24) != 1 )
              goto LABEL_40;
            v28 = *(_QWORD *)(v13 + 32);
            if ( v11 != v28 )
            {
              v30 = *(_WORD *)(v28 + 4);
LABEL_32:
              if ( v15 == v30 )
                v29 = *(_DWORD *)v11 < *(_DWORD *)v28;
              else
                v29 = v15 < v30;
              if ( !v29 )
                goto LABEL_40;
            }
            v14[1] = v13;
            v13 = *(v14 - 1);
            if ( v11 == v13 )
            {
LABEL_69:
              v19 = v14;
              goto LABEL_40;
            }
            --v14;
            continue;
          }
          break;
        }
        if ( v11 == v13 )
          goto LABEL_40;
        v28 = v13;
        goto LABEL_32;
      }
      v19 = v10;
LABEL_40:
      ++v10;
      *v19 = v11;
    }
    while ( v5 != v10 );
LABEL_41:
    v7 = v9;
  }
  while ( (char *)a2 - (char *)v5 > 48 );
  result = v87;
  if ( a2 != v5 )
  {
    v32 = (__int64 *)(v8 + 64);
    if ( a2 != (__int64 *)(v8 + 64) )
    {
LABEL_44:
      v78 = v7;
      v33 = result;
      v34 = v32;
      do
      {
        while ( 1 )
        {
          v35 = *v34;
          if ( sub_4910B0(*v34, *v5) )
            break;
          for ( i = v34; sub_4910B0(v35, *(i - 1)); i = v38 - 1 )
            *v38 = v39;
          ++v34;
          *v38 = v35;
          if ( a2 == v34 )
            goto LABEL_53;
        }
        if ( (char *)v34 - (char *)v5 <= 8 )
        {
          if ( (char *)v34 - (char *)v5 == 8 )
            *v34 = v36;
        }
        else
        {
          memmove(v5 + 1, v5, (char *)v34 - (char *)v5);
        }
        ++v34;
        *v5 = v35;
      }
      while ( a2 != v34 );
LABEL_53:
      v7 = v78;
      result = v33;
    }
  }
  if ( result > 56 )
  {
    v79 = a2;
    v40 = 7;
    while ( 1 )
    {
      v41 = 2 * v40;
      if ( v89 < 2 * v40 )
      {
        v48 = v89;
        v42 = a3;
        v43 = src;
      }
      else
      {
        v42 = a3;
        v88 = v7;
        v43 = src;
        v92 = v40;
        v44 = -8 * v40;
        v45 = 16 * v40;
        v46 = v44;
        do
        {
          v47 = v43;
          v43 = (__int64 *)((char *)v43 + v45);
          v42 = (__int64 *)sub_498020(v47, (__int64 *)((char *)v43 + v46), (__int64 *)((char *)v43 + v46), v43, v42);
          v48 = v79 - v43;
        }
        while ( v41 <= v48 );
        v7 = v88;
        v40 = v92;
      }
      if ( v48 > v40 )
        v48 = v40;
      v40 *= 4;
      sub_498020(v43, &v43[v48], &v43[v48], v79, v42);
      if ( v89 < v40 )
        break;
      v49 = src;
      v50 = a3;
      do
      {
        v51 = v50;
        v50 += v40;
        v49 = (__int64 *)sub_498020(
                           v51,
                           (__int64 *)((char *)v50 + 8 * v41 - 8 * v40),
                           (__int64 *)((char *)v50 + 8 * v41 - 8 * v40),
                           v50,
                           v49);
        v52 = v7 - v50;
      }
      while ( v40 <= v52 );
      if ( v52 > v41 )
        v52 = v41;
      result = sub_498020(v50, &v50[v52], &v50[v52], v7, v49);
      if ( v89 <= v40 )
        return result;
    }
    v55 = v89;
    if ( v89 > v41 )
      v55 = v41;
    sub_498020(a3, &a3[v55], &a3[v55], v7, src);
    return a4;
  }
  return result;
}

