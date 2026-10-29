__int64 __fastcall sub_485BD0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 *v12; // r15
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // r14
  _DWORD *v16; // rax
  __int64 v17; // rsi
  char v18; // al
  void *v19; // r13
  int v20; // edx
  int v21; // edx
  __int64 v22; // r13
  _DWORD *v23; // rdx
  __int64 v24; // rsi
  char v25; // al
  void *v26; // r14
  __int64 v27; // rcx
  _DWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rsi
  _QWORD *v31; // rcx
  __int64 v32; // r13
  _DWORD *v33; // rdx
  __int64 v34; // rsi
  char v35; // al
  void *v36; // r14
  __int64 v37; // rdx
  _DWORD *v38; // rcx
  __int64 *v39; // r9
  __int64 v40; // rdx
  __int64 *v41; // r13
  __int64 *v42; // r15
  __int64 v43; // r14
  _DWORD *v44; // rax
  __int64 v45; // rsi
  char v46; // al
  __int64 v47; // rsi
  _DWORD *v48; // rdx
  _QWORD *v49; // rdx
  __int64 v50; // rdi
  _QWORD *v51; // rsi
  void *v52; // [rsp-8h] [rbp-88h]
  void *v53; // [rsp+8h] [rbp-78h]
  char v54; // [rsp+27h] [rbp-59h] BYREF
  __int64 v55; // [rsp+28h] [rbp-58h] BYREF
  __int64 v56; // [rsp+30h] [rbp-50h]
  __int64 v57; // [rsp+38h] [rbp-48h] BYREF
  __int64 v58; // [rsp+40h] [rbp-40h]

  if ( *(_WORD *)(a3 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v4 )
    return 0;
  if ( *v4 != 5 )
    goto LABEL_4;
  v20 = v4[1];
  if ( v20 == 3 )
  {
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_108;
  }
  else
  {
    if ( v20 != 5 )
      goto LABEL_43;
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_74;
  }
  if ( a2 == *(_QWORD *)(a3 + 32) )
    return 1;
LABEL_43:
  if ( v20 == 2 || v20 == 4 )
  {
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_46;
    if ( a2 == *(_QWORD *)(a3 + 40) )
      return 1;
  }
  if ( v20 == 3 )
  {
LABEL_108:
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_46;
    v32 = *(_QWORD *)(a3 + 40);
    if ( *(_WORD *)(v32 + 4) )
      goto LABEL_4;
    goto LABEL_76;
  }
  if ( v20 != 5 )
    goto LABEL_46;
LABEL_74:
  if ( *(_DWORD *)(a3 + 24) != 2 )
    goto LABEL_46;
  v32 = *(_QWORD *)(a3 + 40);
  if ( *(_WORD *)(v32 + 4) )
    goto LABEL_46;
LABEL_76:
  v33 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL);
  if ( v33 && *v33 == 5 && v33[1] == 9 && *(_DWORD *)(v32 + 24) == 2 )
  {
    v34 = *(_QWORD *)(v32 + 32);
    v55 = 0;
    v56 = 0;
    v57 = 1;
    v58 = 0;
    v35 = sub_1666AE0(a1 + 24, v34, &v55, &v54);
    v36 = qword_1C7F2C0;
    if ( v35 && (v55 & 0x100000000LL) == 0 && (_DWORD)v55 == -1 && (v57 & 0x100000000LL) == 0 && (_DWORD)v57 == 1 )
    {
      sub_182CBA0(qword_1C7F2C0, &v55);
      sub_182CBA0(v36, &v57);
      if ( a2 == *(_QWORD *)(v32 + 40) )
        return 1;
    }
    else
    {
      sub_182CBA0(qword_1C7F2C0, &v55);
      sub_182CBA0(v36, &v57);
    }
    if ( *(_WORD *)(a3 + 4) )
      return 0;
    v4 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( !v4 )
      return 0;
  }
LABEL_4:
  if ( *v4 != 5 )
    goto LABEL_5;
LABEL_46:
  v21 = v4[1];
  if ( v21 != 2 )
  {
    if ( v21 != 4 )
      goto LABEL_6;
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_6;
    v22 = *(_QWORD *)(a3 + 32);
    if ( *(_WORD *)(v22 + 4) )
      goto LABEL_6;
LABEL_50:
    v23 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
    if ( v23 && *v23 == 5 && v23[1] == 9 && *(_DWORD *)(v22 + 24) == 2 )
    {
      v24 = *(_QWORD *)(v22 + 32);
      v55 = 0;
      v56 = 0;
      v57 = 1;
      v58 = 0;
      v25 = sub_1666AE0(a1 + 24, v24, &v55, &v54);
      v26 = qword_1C7F2C0;
      if ( v25 && (v55 & 0x100000000LL) == 0 && (_DWORD)v55 == -1 && (v57 & 0x100000000LL) == 0 && (_DWORD)v57 == 1 )
      {
        sub_182CBA0(qword_1C7F2C0, &v55);
        sub_182CBA0(v26, &v57);
        if ( a2 == *(_QWORD *)(v22 + 40) )
          return 1;
      }
      else
      {
        sub_182CBA0(qword_1C7F2C0, &v55);
        sub_182CBA0(v26, &v57);
      }
      if ( *(_WORD *)(a3 + 4) )
        return 0;
      v4 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v4 )
        return 0;
    }
LABEL_5:
    if ( *v4 )
      goto LABEL_6;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a3 + 24) != 2 )
    goto LABEL_6;
  v22 = *(_QWORD *)(a3 + 32);
  if ( !*(_WORD *)(v22 + 4) )
    goto LABEL_50;
  if ( *v4 )
    goto LABEL_6;
LABEL_10:
  if ( v4[1] != 8 || *(_DWORD *)(a3 + 24) != 1 )
    goto LABEL_7;
  if ( (unsigned __int8)sub_486480(a1, a2, v52) )
    return 1;
  if ( *(_WORD *)(a3 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v4 )
    return 0;
LABEL_6:
  if ( *v4 != 5 )
    goto LABEL_7;
  v8 = v4[1];
  if ( v8 == 3 )
  {
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_116;
  }
  else
  {
    if ( v8 != 5 )
      goto LABEL_18;
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_88;
  }
  v47 = *(_QWORD *)(a3 + 32);
  if ( *(_WORD *)(v47 + 4)
    || (v48 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL)) == nullptr
    || *v48 != 5
    || v48[1] != 6
    || (v49 = (_QWORD *)(v47 + 32), v50 = 8LL * *(unsigned int *)(v47 + 24), v51 = (_QWORD *)(v47 + 32 + v50), !v50) )
  {
LABEL_18:
    if ( v8 != 3 )
    {
      if ( v8 != 5 )
        goto LABEL_20;
LABEL_88:
      if ( *(_DWORD *)(a3 + 24) != 2 )
        goto LABEL_20;
      v37 = *(_QWORD *)(a3 + 40);
      if ( *(_WORD *)(v37 + 4) )
        goto LABEL_20;
LABEL_90:
      v38 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
      if ( v38 )
      {
        if ( *v38 == 5 && v38[1] == 6 )
        {
          v39 = (__int64 *)(v37 + 32);
          v40 = *(unsigned int *)(v37 + 24);
          v41 = &v39[v40];
          if ( v40 * 8 )
          {
            v42 = v39;
            do
            {
              v43 = *v42;
              if ( !*(_WORD *)(*v42 + 4) )
              {
                v44 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL);
                if ( v44 )
                {
                  if ( *v44 == 5 && v44[1] == 9 && *(_DWORD *)(v43 + 24) == 2 )
                  {
                    v45 = *(_QWORD *)(v43 + 32);
                    v55 = 0;
                    v56 = 0;
                    v57 = 1;
                    v58 = 0;
                    v46 = sub_1666AE0(a1 + 24, v45, &v55, &v54);
                    v53 = qword_1C7F2C0;
                    if ( v46
                      && (v55 & 0x100000000LL) == 0
                      && (_DWORD)v55 == -1
                      && (v57 & 0x100000000LL) == 0
                      && (_DWORD)v57 == 1 )
                    {
                      sub_182CBA0(qword_1C7F2C0, &v55);
                      sub_182CBA0(v53, &v57);
                      if ( a2 == *(_QWORD *)(v43 + 40) )
                        return 1;
                    }
                    else
                    {
                      sub_182CBA0(qword_1C7F2C0, &v55);
                      sub_182CBA0(v53, &v57);
                    }
                  }
                }
              }
              ++v42;
            }
            while ( v41 != v42 );
            if ( *(_WORD *)(a3 + 4) )
              return 0;
            v4 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
            if ( !v4 )
              return 0;
          }
        }
      }
LABEL_7:
      if ( *v4 != 5 )
        return 0;
LABEL_20:
      v9 = v4[1];
      if ( v9 != 2 && v9 != 4 )
        goto LABEL_22;
      if ( *(_DWORD *)(a3 + 24) != 2 )
        goto LABEL_24;
      v27 = *(_QWORD *)(a3 + 40);
      if ( *(_WORD *)(v27 + 4)
        || (v28 = *(_DWORD **)(*(_QWORD *)(v27 + 16) + 24LL)) == nullptr
        || *v28 != 5
        || v28[1] != 6
        || (v29 = (_QWORD *)(v27 + 32), v30 = 8LL * *(unsigned int *)(v27 + 24), v31 = (_QWORD *)(v27 + 32 + v30), !v30) )
      {
LABEL_22:
        if ( v9 != 2 && v9 != 4 )
          return 0;
LABEL_24:
        if ( *(_DWORD *)(a3 + 24) == 2 )
        {
          v10 = *(_QWORD *)(a3 + 32);
          if ( !*(_WORD *)(v10 + 4) )
          {
            v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
            if ( v11 )
            {
              if ( *v11 == 5 && v11[1] == 6 )
              {
                v12 = (__int64 *)(v10 + 32);
                v13 = *(unsigned int *)(v10 + 24);
                v14 = &v12[v13];
                if ( v13 * 8 )
                {
                  while ( 1 )
                  {
                    v15 = *v12;
                    if ( !*(_WORD *)(*v12 + 4) )
                    {
                      v16 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
                      if ( v16 )
                      {
                        if ( *v16 == 5 && v16[1] == 9 && *(_DWORD *)(v15 + 24) == 2 )
                        {
                          v17 = *(_QWORD *)(v15 + 32);
                          v55 = 0;
                          v56 = 0;
                          v57 = 1;
                          v58 = 0;
                          v18 = sub_1666AE0(a1 + 24, v17, &v55, &v54);
                          v19 = qword_1C7F2C0;
                          if ( v18
                            && (v55 & 0x100000000LL) == 0
                            && (_DWORD)v55 == -1
                            && (v57 & 0x100000000LL) == 0
                            && (_DWORD)v57 == 1 )
                          {
                            sub_182CBA0(qword_1C7F2C0, &v55);
                            sub_182CBA0(v19, &v57);
                            if ( a2 == *(_QWORD *)(v15 + 40) )
                              return 1;
                          }
                          else
                          {
                            sub_182CBA0(qword_1C7F2C0, &v55);
                            sub_182CBA0(v19, &v57);
                          }
                        }
                      }
                    }
                    if ( v14 == ++v12 )
                      return 0;
                  }
                }
              }
            }
          }
        }
        return 0;
      }
      while ( a2 != *v29 )
      {
        if ( v31 == ++v29 )
          goto LABEL_22;
      }
      return 1;
    }
LABEL_116:
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_20;
    v37 = *(_QWORD *)(a3 + 40);
    if ( *(_WORD *)(v37 + 4) )
    {
      if ( *v4 != 5 )
        return 0;
      goto LABEL_20;
    }
    goto LABEL_90;
  }
  while ( a2 != *v49 )
  {
    if ( v51 == ++v49 )
      goto LABEL_18;
  }
  return 1;
}

