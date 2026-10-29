void __fastcall sub_E2F6F0(_QWORD *a1, __int64 a2)
{
  int v2; // r12d
  int v5; // ebx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  int *v8; // rax
  int v9; // edx
  bool v10; // zf
  __int64 v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  _DWORD *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rsi
  _DWORD *v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // r9
  __int64 v31; // rdi
  _DWORD *v32; // rcx
  int *v33; // rax
  int v34; // edx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax

  v2 = *(_DWORD *)(a2 + 24);
  if ( !v2 )
    return;
  v5 = 0;
  while ( 2 )
  {
    v6 = *(_DWORD **)(sub_15D1F10(a2) + 24);
    if ( !v6 || *v6 != 5 )
      goto LABEL_3;
    if ( *(_WORD *)(a2 + 4) )
LABEL_7:
      sub_E2E330(a1, "logic only supports difference arithmetic");
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(int **)(v7 + 24);
    if ( !v8 )
      goto LABEL_3;
    v9 = *v8;
    if ( *v8 == -1 )
      goto LABEL_3;
    if ( !v9 )
    {
      v11 = a2;
      if ( v8[1] == 4 )
        goto LABEL_3;
LABEL_36:
      if ( *v8 == 5 )
        goto LABEL_37;
LABEL_13:
      v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
      if ( v12 )
      {
        if ( *v12 == 5 && v12[1] == 10 )
        {
          v25 = *(_QWORD *)(v11 + 32);
          if ( !*(_WORD *)(v25 + 4) )
          {
            v26 = *(_DWORD **)(*(_QWORD *)(v25 + 16) + 24LL);
            if ( v26 )
            {
              if ( *v26 == 5 )
              {
                if ( v26[1] != 8
                  || (v25 = *(_QWORD *)(v25 + 32), !*(_WORD *)(v25 + 4))
                  && (v26 = *(_DWORD **)(*(_QWORD *)(v25 + 16) + 24LL)) != nullptr
                  && *v26 == 5 )
                {
                  if ( v26[1] != 18
                    || (v41 = *(_QWORD *)(v25 + 32), !*(_WORD *)(v41 + 4))
                    && (v26 = *(_DWORD **)(*(_QWORD *)(v41 + 16) + 24LL)) != nullptr
                    && *v26 == 5 )
                  {
                    if ( !v26[1] )
                    {
                      v27 = *(_QWORD *)(v11 + 40);
                      if ( !*(_WORD *)(v27 + 4) )
                      {
                        v28 = *(_DWORD **)(*(_QWORD *)(v27 + 16) + 24LL);
                        if ( v28 )
                        {
                          if ( *v28 == 5 )
                          {
                            if ( v28[1] != 8
                              || (v27 = *(_QWORD *)(v27 + 32), !*(_WORD *)(v27 + 4))
                              && (v28 = *(_DWORD **)(*(_QWORD *)(v27 + 16) + 24LL)) != nullptr
                              && *v28 == 5 )
                            {
                              if ( v28[1] != 18
                                || (v40 = *(_QWORD *)(v27 + 32), !*(_WORD *)(v40 + 4))
                                && (v28 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL)) != nullptr
                                && *v28 == 5 )
                              {
                                if ( !v28[1] )
                                  goto LABEL_3;
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
      goto LABEL_15;
    }
    v10 = v9 == 5;
    v11 = a2;
    if ( !v10 )
      goto LABEL_13;
    if ( v8[1] != 8 )
    {
LABEL_37:
      v24 = v11;
      if ( v8[1] != 8
        || (v24 = *(_QWORD *)(v11 + 32), !*(_WORD *)(v24 + 4))
        && (v8 = *(int **)(*(_QWORD *)(v24 + 16) + 24LL)) != nullptr
        && *v8 == 5 )
      {
        if ( v8[1] != 18
          || (v37 = *(_QWORD *)(v24 + 32), !*(_WORD *)(v37 + 4))
          && (v8 = *(int **)(*(_QWORD *)(v37 + 16) + 24LL)) != nullptr
          && *v8 == 5 )
        {
          if ( !v8[1] )
            goto LABEL_3;
        }
      }
      goto LABEL_13;
    }
    v11 = *(_QWORD *)(a2 + 32);
    if ( !*(_WORD *)(v11 + 4) )
    {
      v8 = *(int **)(*(_QWORD *)(v11 + 16) + 24LL);
      if ( !v8 )
        goto LABEL_13;
      goto LABEL_36;
    }
LABEL_15:
    v13 = *(_DWORD **)(v7 + 24);
    if ( !v13 )
      goto LABEL_7;
    if ( *v13 != 5 )
      goto LABEL_7;
    v14 = v13[1];
    if ( v14 != 6 && v14 != 7 )
      goto LABEL_7;
    v15 = a2;
    while ( 2 )
    {
      v16 = *(unsigned int *)(v15 + 24);
      if ( !(_DWORD)v16 )
        goto LABEL_3;
      v17 = v15;
      v18 = v15 + 8 * v16;
      v15 = 0;
      do
      {
        v20 = *(_QWORD *)(v17 + 32);
        if ( !*(_WORD *)(v20 + 4) )
        {
          v21 = *(_QWORD *)(v17 + 32);
          v22 = *(_DWORD **)(*(_QWORD *)(v20 + 16) + 24LL);
          if ( !v22 || *v22 != 5 )
            goto LABEL_22;
          if ( v22[1] != 8 )
            goto LABEL_31;
          v21 = *(_QWORD *)(v20 + 32);
          if ( !*(_WORD *)(v21 + 4) )
          {
            v22 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL);
            if ( v22 && *v22 == 5 )
            {
LABEL_31:
              v23 = v21;
              if ( v22[1] != 8
                || (v23 = *(_QWORD *)(v21 + 32), !*(_WORD *)(v23 + 4))
                && (v22 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL)) != nullptr
                && *v22 == 5 )
              {
                if ( v22[1] != 18
                  || (v36 = *(_QWORD *)(v23 + 32), !*(_WORD *)(v36 + 4))
                  && (v22 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL)) != nullptr
                  && *v22 == 5 )
                {
                  if ( !v22[1] )
                    goto LABEL_26;
                }
              }
            }
LABEL_22:
            v19 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL);
            if ( v19 )
            {
              if ( *v19 == 5 && v19[1] == 10 )
              {
                v29 = *(_QWORD *)(v21 + 32);
                if ( !*(_WORD *)(v29 + 4) )
                {
                  v30 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL);
                  if ( v30 )
                  {
                    if ( *v30 == 5 )
                    {
                      if ( v30[1] != 8
                        || (v29 = *(_QWORD *)(v29 + 32), !*(_WORD *)(v29 + 4))
                        && (v30 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL)) != nullptr
                        && *v30 == 5 )
                      {
                        if ( v30[1] != 18
                          || (v38 = *(_QWORD *)(v29 + 32), !*(_WORD *)(v38 + 4))
                          && (v30 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL)) != nullptr
                          && *v30 == 5 )
                        {
                          if ( !v30[1] )
                          {
                            v31 = *(_QWORD *)(v21 + 40);
                            if ( !*(_WORD *)(v31 + 4) )
                            {
                              v32 = *(_DWORD **)(*(_QWORD *)(v31 + 16) + 24LL);
                              if ( v32 )
                              {
                                if ( *v32 == 5 )
                                {
                                  if ( v32[1] != 8
                                    || (v31 = *(_QWORD *)(v31 + 32), !*(_WORD *)(v31 + 4))
                                    && (v32 = *(_DWORD **)(*(_QWORD *)(v31 + 16) + 24LL)) != nullptr
                                    && *v32 == 5 )
                                  {
                                    if ( v32[1] != 18
                                      || (v39 = *(_QWORD *)(v31 + 32), !*(_WORD *)(v39 + 4))
                                      && (v32 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL)) != nullptr
                                      && *v32 == 5 )
                                    {
                                      if ( !v32[1] )
                                        goto LABEL_26;
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
        if ( v15 )
          goto LABEL_7;
        v15 = *(_QWORD *)(v17 + 32);
LABEL_26:
        v17 += 8;
      }
      while ( v17 != v18 );
      if ( !v15 )
        goto LABEL_3;
      if ( *(_WORD *)(v15 + 4) )
        goto LABEL_7;
      v33 = *(int **)(*(_QWORD *)(v15 + 16) + 24LL);
      if ( !v33 )
        goto LABEL_3;
      v34 = *v33;
      if ( *v33 == -1 )
        goto LABEL_3;
      if ( v34 )
      {
        if ( v34 != 5 )
          goto LABEL_7;
        v35 = v33[1];
        if ( v35 != 6 && v35 != 7 )
          goto LABEL_7;
        continue;
      }
      break;
    }
    if ( v33[1] != 4 )
      goto LABEL_7;
LABEL_3:
    if ( v2 != ++v5 )
      continue;
    break;
  }
}

