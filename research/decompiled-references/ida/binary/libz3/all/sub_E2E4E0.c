__int64 __fastcall sub_E2E4E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  int *v8; // rax
  int v9; // edx
  bool v10; // zf
  __int64 v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rax
  _DWORD *v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rsi
  int *v25; // rdx
  int v26; // ecx
  _DWORD *v27; // rdx
  unsigned int v28; // ecx
  unsigned int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rdx
  _DWORD *v34; // rax
  _DWORD *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r9
  _DWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  _DWORD *v42; // rcx
  __int64 v43; // r10
  unsigned int *v44; // rdx
  _DWORD *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  _DWORD *v48; // rcx
  __int64 v49; // rax
  _DWORD *v50; // rdx
  __int64 v51; // rax
  _DWORD *v52; // rcx
  __int64 v53; // rax
  _DWORD *v54; // rdx
  int v55; // eax
  __int64 v56; // rsi
  __int64 v57; // rax
  _DWORD *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rsi
  _DWORD *v61; // rdx
  _DWORD *v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r10
  _DWORD *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // r9
  _DWORD *v71; // rsi
  __int64 v72; // r11
  __int64 v73; // rsi
  _DWORD *v74; // r11
  __int64 v75; // rsi
  _DWORD *v76; // r9
  int *v77; // rdx
  int v78; // eax
  int v79; // eax
  __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rcx
  _DWORD *v84; // r10
  __int64 v85; // rcx
  __int64 v86; // r10
  _DWORD *v87; // r8
  _DWORD *v88; // r8
  _DWORD *v89; // rcx
  __int64 v90; // rax
  _DWORD *v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rsi

  v5 = a2;
  result = *(_QWORD *)(sub_15D1F10(a2) + 24);
  if ( !result || *(_DWORD *)result != 5 )
    return result;
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_99;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(int **)(v7 + 24);
  if ( !v8 )
    goto LABEL_59;
  v9 = *v8;
  if ( *v8 == -1 )
    goto LABEL_59;
  if ( !v9 )
  {
    v11 = a2;
    if ( v8[1] == 4 )
      goto LABEL_59;
LABEL_104:
    if ( *v8 == 5 )
      goto LABEL_105;
LABEL_8:
    v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
    if ( v12 )
    {
      if ( *v12 == 5 && v12[1] == 10 )
      {
        v51 = *(_QWORD *)(v11 + 32);
        if ( !*(_WORD *)(v51 + 4) )
        {
          v52 = *(_DWORD **)(*(_QWORD *)(v51 + 16) + 24LL);
          if ( v52 )
          {
            if ( *v52 == 5 )
            {
              if ( v52[1] != 8
                || (v51 = *(_QWORD *)(v51 + 32), !*(_WORD *)(v51 + 4))
                && (v52 = *(_DWORD **)(*(_QWORD *)(v51 + 16) + 24LL)) != nullptr
                && *v52 == 5 )
              {
                if ( v52[1] != 18
                  || (v95 = *(_QWORD *)(v51 + 32), !*(_WORD *)(v95 + 4))
                  && (v52 = *(_DWORD **)(*(_QWORD *)(v95 + 16) + 24LL)) != nullptr
                  && *v52 == 5 )
                {
                  if ( !v52[1] )
                  {
                    v53 = *(_QWORD *)(v11 + 40);
                    if ( !*(_WORD *)(v53 + 4) )
                    {
                      v54 = *(_DWORD **)(*(_QWORD *)(v53 + 16) + 24LL);
                      if ( v54 )
                      {
                        if ( *v54 == 5 )
                        {
                          if ( v54[1] != 8
                            || (v53 = *(_QWORD *)(v53 + 32), !*(_WORD *)(v53 + 4))
                            && (v54 = *(_DWORD **)(*(_QWORD *)(v53 + 16) + 24LL)) != nullptr
                            && *v54 == 5 )
                          {
                            if ( v54[1] != 18
                              || (v104 = *(_QWORD *)(v53 + 32), !*(_WORD *)(v104 + 4))
                              && (v54 = *(_DWORD **)(*(_QWORD *)(v104 + 16) + 24LL)) != nullptr
                              && *v54 == 5 )
                            {
                              if ( !v54[1] )
                                goto LABEL_59;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_10;
  }
  v10 = v9 == 5;
  v11 = a2;
  if ( !v10 )
    goto LABEL_8;
  if ( v8[1] != 8 )
  {
LABEL_105:
    v46 = v11;
    if ( v8[1] != 8
      || (v46 = *(_QWORD *)(v11 + 32), !*(_WORD *)(v46 + 4))
      && (v8 = *(int **)(*(_QWORD *)(v46 + 16) + 24LL)) != nullptr
      && *v8 == 5 )
    {
      if ( v8[1] != 18
        || (v90 = *(_QWORD *)(v46 + 32), !*(_WORD *)(v90 + 4))
        && (v8 = *(int **)(*(_QWORD *)(v90 + 16) + 24LL)) != nullptr
        && *v8 == 5 )
      {
        if ( !v8[1] )
          goto LABEL_59;
      }
    }
    goto LABEL_8;
  }
  v11 = *(_QWORD *)(a2 + 32);
  if ( !*(_WORD *)(v11 + 4) )
  {
    v8 = *(int **)(*(_QWORD *)(v11 + 16) + 24LL);
    if ( !v8 )
      goto LABEL_8;
    goto LABEL_104;
  }
LABEL_10:
  v13 = *(_DWORD **)(v7 + 24);
  v14 = a2;
  if ( !v13 )
    goto LABEL_97;
  if ( *v13 != 5 )
    goto LABEL_12;
  v55 = v13[1];
  if ( v55 != 6 && v55 != 7 )
  {
LABEL_139:
    v14 = v5;
    if ( v13[1] == 8 )
    {
      v14 = *(_QWORD *)(v5 + 32);
      if ( *(_WORD *)(v14 + 4) )
        goto LABEL_99;
      v13 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
      if ( !v13 )
        goto LABEL_97;
    }
LABEL_12:
    if ( *v13 == 5 )
    {
      v15 = v14;
      if ( v13[1] != 8
        || (v15 = *(_QWORD *)(v14 + 32), !*(_WORD *)(v15 + 4))
        && (v13 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL)) != nullptr
        && *v13 == 5 )
      {
        if ( v13[1] != 18
          || (v81 = *(_QWORD *)(v15 + 32), !*(_WORD *)(v81 + 4))
          && (v13 = *(_DWORD **)(*(_QWORD *)(v81 + 16) + 24LL)) != nullptr
          && *v13 == 5 )
        {
          if ( !v13[1] )
            goto LABEL_16;
        }
      }
    }
LABEL_97:
    v45 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
    if ( v45 )
    {
      if ( *v45 == 5 && v45[1] == 10 )
      {
        v47 = *(_QWORD *)(v14 + 32);
        if ( !*(_WORD *)(v47 + 4) )
        {
          v48 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL);
          if ( v48 )
          {
            if ( *v48 == 5 )
            {
              if ( v48[1] != 8
                || (v47 = *(_QWORD *)(v47 + 32), !*(_WORD *)(v47 + 4))
                && (v48 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL)) != nullptr
                && *v48 == 5 )
              {
                if ( v48[1] != 18
                  || (v94 = *(_QWORD *)(v47 + 32), !*(_WORD *)(v94 + 4))
                  && (v48 = *(_DWORD **)(*(_QWORD *)(v94 + 16) + 24LL)) != nullptr
                  && *v48 == 5 )
                {
                  if ( !v48[1] )
                  {
                    v49 = *(_QWORD *)(v14 + 40);
                    if ( !*(_WORD *)(v49 + 4) )
                    {
                      v50 = *(_DWORD **)(*(_QWORD *)(v49 + 16) + 24LL);
                      if ( v50 )
                      {
                        if ( *v50 == 5 )
                        {
                          if ( v50[1] != 8
                            || (v49 = *(_QWORD *)(v49 + 32), !*(_WORD *)(v49 + 4))
                            && (v50 = *(_DWORD **)(*(_QWORD *)(v49 + 16) + 24LL)) != nullptr
                            && *v50 == 5 )
                          {
                            if ( v50[1] != 18
                              || (v101 = *(_QWORD *)(v49 + 32), !*(_WORD *)(v101 + 4))
                              && (v50 = *(_DWORD **)(*(_QWORD *)(v101 + 16) + 24LL)) != nullptr
                              && *v50 == 5 )
                            {
                              if ( !v50[1] )
                              {
LABEL_16:
                                v16 = a3;
                                a3 = v5;
                                v5 = v16;
                                goto LABEL_17;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_99:
    if ( *(_WORD *)(a3 + 4) )
      goto LABEL_100;
LABEL_17:
    v17 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( !v17 || *v17 != 5 )
      goto LABEL_403;
    if ( v17[1] == 8 )
    {
      a3 = *(_QWORD *)(a3 + 32);
      if ( *(_WORD *)(a3 + 4) )
        goto LABEL_100;
      v17 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v17 || *v17 != 5 )
        goto LABEL_403;
    }
    if ( (v63 = a3, v17[1] == 8)
      && ((v63 = *(_QWORD *)(a3 + 32), *(_WORD *)(v63 + 4))
       || (v17 = *(_DWORD **)(*(_QWORD *)(v63 + 16) + 24LL)) == nullptr
       || *v17 != 5)
      || v17[1] == 18
      && ((v82 = *(_QWORD *)(v63 + 32), *(_WORD *)(v82 + 4))
       || (v17 = *(_DWORD **)(*(_QWORD *)(v82 + 16) + 24LL)) == nullptr
       || *v17 != 5)
      || v17[1] )
    {
LABEL_403:
      v18 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v18 )
        goto LABEL_100;
      if ( *v18 != 5 )
        goto LABEL_100;
      if ( v18[1] != 10 )
        goto LABEL_100;
      v19 = *(_QWORD *)(a3 + 32);
      if ( *(_WORD *)(v19 + 4) )
        goto LABEL_100;
      v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
      if ( !v20 )
        goto LABEL_100;
      if ( *v20 != 5 )
        goto LABEL_100;
      if ( v20[1] == 8 )
      {
        v19 = *(_QWORD *)(v19 + 32);
        if ( *(_WORD *)(v19 + 4) )
          goto LABEL_100;
        v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
        if ( !v20 || *v20 != 5 )
          goto LABEL_100;
      }
      if ( v20[1] == 18 )
      {
        v97 = *(_QWORD *)(v19 + 32);
        if ( *(_WORD *)(v97 + 4) )
          goto LABEL_100;
        v20 = *(_DWORD **)(*(_QWORD *)(v97 + 16) + 24LL);
        if ( !v20 || *v20 != 5 )
          goto LABEL_100;
      }
      if ( v20[1] )
        goto LABEL_100;
      v21 = *(_QWORD *)(a3 + 40);
      if ( *(_WORD *)(v21 + 4) )
        goto LABEL_100;
      v22 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL);
      if ( !v22 )
        goto LABEL_100;
      if ( *v22 != 5 )
        goto LABEL_100;
      if ( v22[1] == 8 )
      {
        v21 = *(_QWORD *)(v21 + 32);
        if ( *(_WORD *)(v21 + 4) )
          goto LABEL_100;
        v22 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL);
        if ( !v22 || *v22 != 5 )
          goto LABEL_100;
      }
      if ( v22[1] == 18 )
      {
        v102 = *(_QWORD *)(v21 + 32);
        if ( *(_WORD *)(v102 + 4) )
          goto LABEL_100;
        v22 = *(_DWORD **)(*(_QWORD *)(v102 + 16) + 24LL);
        if ( !v22 || *v22 != 5 )
          goto LABEL_100;
      }
      if ( v22[1] )
        goto LABEL_100;
    }
    if ( *(_WORD *)(v5 + 4)
      || (v23 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) == nullptr
      || *v23 != 5
      || v23[1] != 7
      || *(_DWORD *)(v5 + 24) != 2
      || (result = *(_QWORD *)(v5 + 32), *(_WORD *)(result + 4)) )
    {
LABEL_100:
      sub_E2E330(a1, "logic only supports difference arithmetic");
    }
    v24 = *(_QWORD *)(v5 + 40);
    v25 = *(int **)(*(_QWORD *)(result + 16) + 24LL);
    if ( v25 )
    {
      v26 = *v25;
      if ( *v25 != -1 )
      {
        if ( v26 )
        {
LABEL_43:
          if ( v26 == 5 && v25[1] == 6 && !*(_WORD *)(v24 + 4) )
          {
            v27 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
            if ( v27 )
            {
              if ( *v27 == 5 && v27[1] == 6 )
              {
                v28 = *(_DWORD *)(result + 24);
                v29 = *(_DWORD *)(v24 + 24);
                if ( v28 == v29 )
                {
                  if ( v28 )
                  {
                    v30 = 0;
                    while ( (int)v30 + 1 < v28 )
                    {
                      ++v30;
                      if ( *(_QWORD *)(result + 32) != *(_QWORD *)(result + 8 * v30 + 32) )
                        goto LABEL_100;
                    }
                    result = 0;
                    while ( (int)result + 1 < v29 )
                    {
                      ++result;
                      if ( *(_QWORD *)(v24 + 32) != *(_QWORD *)(v24 + 8 * result + 32) )
                        goto LABEL_100;
                    }
                    return result;
                  }
                }
              }
            }
          }
          goto LABEL_100;
        }
        if ( v25[1] != 4 )
          goto LABEL_100;
      }
    }
    if ( *(_WORD *)(v24 + 4) )
      goto LABEL_100;
    v91 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
    if ( !v91 || *v91 == -1 || !*v91 && v91[1] == 4 )
      return result;
    if ( !v25 )
      goto LABEL_100;
    v26 = *v25;
    goto LABEL_43;
  }
  v64 = a2;
  while ( 2 )
  {
    v65 = *(unsigned int *)(v64 + 24);
    if ( !(_DWORD)v65 )
      goto LABEL_59;
    v66 = v64;
    v67 = v64 + 8 * v65;
    v64 = 0;
    do
    {
      v69 = *(_QWORD *)(v66 + 32);
      if ( !*(_WORD *)(v69 + 4) )
      {
        v70 = *(_QWORD *)(v66 + 32);
        v71 = *(_DWORD **)(*(_QWORD *)(v69 + 16) + 24LL);
        if ( !v71 || *v71 != 5 )
          goto LABEL_183;
        if ( v71[1] != 8 )
          goto LABEL_192;
        v70 = *(_QWORD *)(v69 + 32);
        if ( !*(_WORD *)(v70 + 4) )
        {
          v71 = *(_DWORD **)(*(_QWORD *)(v70 + 16) + 24LL);
          if ( v71 && *v71 == 5 )
          {
LABEL_192:
            v72 = v70;
            if ( v71[1] != 8
              || (v72 = *(_QWORD *)(v70 + 32), !*(_WORD *)(v72 + 4))
              && (v71 = *(_DWORD **)(*(_QWORD *)(v72 + 16) + 24LL)) != nullptr
              && *v71 == 5 )
            {
              if ( v71[1] != 18
                || (v80 = *(_QWORD *)(v72 + 32), !*(_WORD *)(v80 + 4))
                && (v71 = *(_DWORD **)(*(_QWORD *)(v80 + 16) + 24LL)) != nullptr
                && *v71 == 5 )
              {
                if ( !v71[1] )
                  goto LABEL_187;
              }
            }
          }
LABEL_183:
          v68 = *(_DWORD **)(*(_QWORD *)(v70 + 16) + 24LL);
          if ( v68 )
          {
            if ( *v68 == 5 && v68[1] == 10 )
            {
              v73 = *(_QWORD *)(v70 + 32);
              if ( !*(_WORD *)(v73 + 4) )
              {
                v74 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
                if ( v74 )
                {
                  if ( *v74 == 5 )
                  {
                    if ( v74[1] != 8
                      || (v73 = *(_QWORD *)(v73 + 32), !*(_WORD *)(v73 + 4))
                      && (v74 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL)) != nullptr
                      && *v74 == 5 )
                    {
                      if ( v74[1] != 18
                        || (v96 = *(_QWORD *)(v73 + 32), !*(_WORD *)(v96 + 4))
                        && (v74 = *(_DWORD **)(*(_QWORD *)(v96 + 16) + 24LL)) != nullptr
                        && *v74 == 5 )
                      {
                        if ( !v74[1] )
                        {
                          v75 = *(_QWORD *)(v70 + 40);
                          if ( !*(_WORD *)(v75 + 4) )
                          {
                            v76 = *(_DWORD **)(*(_QWORD *)(v75 + 16) + 24LL);
                            if ( v76 )
                            {
                              if ( *v76 == 5 )
                              {
                                if ( v76[1] != 8
                                  || (v75 = *(_QWORD *)(v75 + 32), !*(_WORD *)(v75 + 4))
                                  && (v76 = *(_DWORD **)(*(_QWORD *)(v75 + 16) + 24LL)) != nullptr
                                  && *v76 == 5 )
                                {
                                  if ( v76[1] != 18
                                    || (v105 = *(_QWORD *)(v75 + 32), !*(_WORD *)(v105 + 4))
                                    && (v76 = *(_DWORD **)(*(_QWORD *)(v105 + 16) + 24LL)) != nullptr
                                    && *v76 == 5 )
                                  {
                                    if ( !v76[1] )
                                      goto LABEL_187;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v64 )
        goto LABEL_96;
      v64 = *(_QWORD *)(v66 + 32);
LABEL_187:
      v66 += 8;
    }
    while ( v66 != v67 );
    if ( !v64 )
      goto LABEL_59;
    if ( *(_WORD *)(v64 + 4) )
      goto LABEL_96;
    v77 = *(int **)(*(_QWORD *)(v64 + 16) + 24LL);
    if ( !v77 )
      goto LABEL_59;
    v78 = *v77;
    if ( *v77 == -1 )
      goto LABEL_59;
    if ( v78 )
    {
      if ( v78 != 5 )
        goto LABEL_96;
      v79 = v77[1];
      if ( v79 != 6 && v79 != 7 )
        goto LABEL_96;
      continue;
    }
    break;
  }
  if ( v77[1] != 4 )
    goto LABEL_96;
LABEL_59:
  if ( *(_WORD *)(a3 + 4) )
    goto LABEL_95;
  v31 = *(_QWORD *)(a3 + 16);
  result = *(_QWORD *)(v31 + 24);
  if ( !result )
    return result;
  v32 = *(_DWORD *)result;
  if ( *(_DWORD *)result == -1 )
    return result;
  if ( !v32 )
  {
    if ( *(_DWORD *)(result + 4) != 4 )
    {
LABEL_64:
      v33 = a3;
      goto LABEL_65;
    }
    return result;
  }
  if ( v32 != 5 )
    goto LABEL_64;
  v56 = a3;
  if ( *(_DWORD *)(result + 4) != 8 )
  {
LABEL_144:
    v33 = v56;
    goto LABEL_145;
  }
  v33 = *(_QWORD *)(a3 + 32);
  if ( *(_WORD *)(v33 + 4) )
    goto LABEL_67;
  result = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 24LL);
  if ( result && *(_DWORD *)result == 5 )
  {
    if ( *(_DWORD *)(result + 4) != 8 )
    {
      v56 = *(_QWORD *)(a3 + 32);
      goto LABEL_144;
    }
    v56 = *(_QWORD *)(v33 + 32);
    if ( !*(_WORD *)(v56 + 4) )
    {
      result = *(_QWORD *)(*(_QWORD *)(v56 + 16) + 24LL);
      if ( result )
      {
        if ( *(_DWORD *)result == 5 )
        {
LABEL_145:
          if ( *(_DWORD *)(result + 4) == 18 )
          {
            v93 = *(_QWORD *)(v56 + 32);
            if ( *(_WORD *)(v93 + 4) )
              goto LABEL_65;
            result = *(_QWORD *)(*(_QWORD *)(v93 + 16) + 24LL);
            if ( !result || *(_DWORD *)result != 5 )
              goto LABEL_65;
          }
          if ( *(_DWORD *)(result + 4) )
            goto LABEL_65;
          return result;
        }
      }
    }
  }
LABEL_65:
  if ( (v34 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL)) == nullptr
    || *v34 != 5
    || v34[1] != 10
    || (v57 = *(_QWORD *)(v33 + 32), *(_WORD *)(v57 + 4))
    || (v58 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL)) == nullptr
    || *v58 != 5
    || v58[1] == 8
    && ((v57 = *(_QWORD *)(v57 + 32), *(_WORD *)(v57 + 4))
     || (v58 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL)) == nullptr
     || *v58 != 5)
    || v58[1] == 18
    && ((v103 = *(_QWORD *)(v57 + 32), *(_WORD *)(v103 + 4))
     || (v58 = *(_DWORD **)(*(_QWORD *)(v103 + 16) + 24LL)) == nullptr
     || *v58 != 5)
    || v58[1]
    || (v59 = *(_QWORD *)(v33 + 40), *(_WORD *)(v59 + 4))
    || (v60 = *(_QWORD *)(v59 + 16), (v61 = *(_DWORD **)(v60 + 24)) == nullptr) )
  {
LABEL_67:
    v35 = *(_DWORD **)(v31 + 24);
    if ( v35 )
    {
      if ( *v35 == 5 )
      {
        result = (unsigned int)v35[1];
        if ( (_DWORD)result == 6 || (_DWORD)result == 7 )
        {
          v36 = a3;
          while ( 1 )
          {
            v37 = *(unsigned int *)(v36 + 24);
            if ( !(_DWORD)v37 )
              return result;
            result = v36;
            v38 = v36 + 8 * v37;
            v36 = 0;
            do
            {
              v40 = *(_QWORD *)(result + 32);
              if ( !*(_WORD *)(v40 + 4) )
              {
                v41 = *(_QWORD *)(result + 32);
                v42 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
                if ( v42 && *v42 == 5 )
                {
                  if ( v42[1] != 8 )
                    goto LABEL_83;
                  v41 = *(_QWORD *)(v40 + 32);
                  if ( *(_WORD *)(v41 + 4) )
                    goto LABEL_76;
                  v42 = *(_DWORD **)(*(_QWORD *)(v41 + 16) + 24LL);
                  if ( v42 )
                  {
                    if ( *v42 == 5 )
                    {
LABEL_83:
                      v43 = v41;
                      if ( v42[1] != 8
                        || (v43 = *(_QWORD *)(v41 + 32), !*(_WORD *)(v43 + 4))
                        && (v42 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL)) != nullptr
                        && *v42 == 5 )
                      {
                        if ( v42[1] != 18
                          || (v92 = *(_QWORD *)(v43 + 32), !*(_WORD *)(v92 + 4))
                          && (v42 = *(_DWORD **)(*(_QWORD *)(v92 + 16) + 24LL)) != nullptr
                          && *v42 == 5 )
                        {
                          if ( !v42[1] )
                            goto LABEL_78;
                        }
                      }
                    }
                  }
                }
                v39 = *(_DWORD **)(*(_QWORD *)(v41 + 16) + 24LL);
                if ( !v39 )
                  goto LABEL_76;
                if ( *v39 != 5 )
                  goto LABEL_76;
                if ( v39[1] != 10 )
                  goto LABEL_76;
                v83 = *(_QWORD *)(v41 + 32);
                if ( *(_WORD *)(v83 + 4) )
                  goto LABEL_76;
                v84 = *(_DWORD **)(*(_QWORD *)(v83 + 16) + 24LL);
                if ( !v84 )
                  goto LABEL_76;
                if ( *v84 != 5 )
                  goto LABEL_76;
                if ( v84[1] == 8 )
                {
                  v83 = *(_QWORD *)(v83 + 32);
                  if ( *(_WORD *)(v83 + 4) )
                    goto LABEL_76;
                  v84 = *(_DWORD **)(*(_QWORD *)(v83 + 16) + 24LL);
                  if ( !v84 || *v84 != 5 )
                    goto LABEL_76;
                }
                if ( v84[1] == 18 )
                {
                  v100 = *(_QWORD *)(v83 + 32);
                  if ( *(_WORD *)(v100 + 4) )
                    goto LABEL_76;
                  v84 = *(_DWORD **)(*(_QWORD *)(v100 + 16) + 24LL);
                  if ( !v84 || *v84 != 5 )
                    goto LABEL_76;
                }
                if ( v84[1] )
                  goto LABEL_76;
                v85 = *(_QWORD *)(v41 + 40);
                if ( *(_WORD *)(v85 + 4) )
                  goto LABEL_76;
                v86 = *(_QWORD *)(v85 + 16);
                v87 = *(_DWORD **)(v86 + 24);
                if ( !v87 )
                  goto LABEL_76;
                if ( *v87 == 5 && v87[1] == 8 )
                {
                  v85 = *(_QWORD *)(v85 + 32);
                  if ( *(_WORD *)(v85 + 4) )
                    goto LABEL_76;
                  v88 = *(_DWORD **)(*(_QWORD *)(v85 + 16) + 24LL);
                  if ( !v88 )
                    goto LABEL_76;
                }
                else
                {
                  v88 = *(_DWORD **)(v86 + 24);
                }
                if ( *v88 != 5 || v88[1] != 18 )
                {
                  v89 = *(_DWORD **)(*(_QWORD *)(v85 + 16) + 24LL);
LABEL_264:
                  if ( *v89 == 5 && !v89[1] )
                    goto LABEL_78;
                  goto LABEL_76;
                }
                v99 = *(_QWORD *)(v85 + 32);
                if ( !*(_WORD *)(v99 + 4) )
                {
                  v89 = *(_DWORD **)(*(_QWORD *)(v99 + 16) + 24LL);
                  if ( v89 )
                    goto LABEL_264;
                }
              }
LABEL_76:
              if ( v36 )
                goto LABEL_95;
              v36 = *(_QWORD *)(result + 32);
LABEL_78:
              result += 8;
            }
            while ( result != v38 );
            if ( !v36 )
              return result;
            if ( *(_WORD *)(v36 + 4) )
              break;
            result = *(_QWORD *)(v36 + 16);
            v44 = *(unsigned int **)(result + 24);
            if ( !v44 )
              return result;
            result = *v44;
            switch ( (_DWORD)result )
            {
              case 0xFFFFFFFF:
                return result;
              case 0:
                if ( v44[1] != 4 )
                  goto LABEL_95;
                return result;
              case 5:
                result = v44[1];
                if ( (_DWORD)result == 6 || (_DWORD)result == 7 )
                  continue;
                break;
            }
            break;
          }
        }
      }
    }
LABEL_95:
    v13 = *(_DWORD **)(v7 + 24);
    if ( !v13 )
    {
      v14 = v5;
      goto LABEL_97;
    }
LABEL_96:
    v14 = v5;
    if ( *v13 != 5 )
      goto LABEL_97;
    goto LABEL_139;
  }
  if ( *v61 == 5 && v61[1] == 8 )
  {
    v59 = *(_QWORD *)(v59 + 32);
    if ( *(_WORD *)(v59 + 4) )
      goto LABEL_67;
    v62 = *(_DWORD **)(*(_QWORD *)(v59 + 16) + 24LL);
    if ( !v62 )
      goto LABEL_67;
  }
  else
  {
    v62 = *(_DWORD **)(v60 + 24);
  }
  if ( *v62 == 5 && v62[1] == 18 )
  {
    v98 = *(_QWORD *)(v59 + 32);
    if ( *(_WORD *)(v98 + 4) )
      goto LABEL_67;
    result = *(_QWORD *)(*(_QWORD *)(v98 + 16) + 24LL);
    if ( !result )
      goto LABEL_67;
  }
  else
  {
    result = *(_QWORD *)(*(_QWORD *)(v59 + 16) + 24LL);
  }
  if ( *(_DWORD *)result != 5 || *(_DWORD *)(result + 4) )
    goto LABEL_67;
  return result;
}

