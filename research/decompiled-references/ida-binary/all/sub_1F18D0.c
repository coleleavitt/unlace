__int64 __fastcall sub_1F18D0(__int64 a1, __int64 a2, __int64 a3, const char *a4, _QWORD *a5)
{
  const char *v5; // r9
  unsigned __int8 v7; // r14
  bool v10; // zf
  unsigned __int8 v11; // si
  int v13; // edx
  unsigned __int8 v14; // al
  int (**v15)(const char *, const char *); // r13
  unsigned __int8 v16; // cl
  unsigned int v17; // ebx
  const char *v19; // rsi
  char *v20; // r14
  char *v21; // r12
  __int64 v22; // r15
  char *v23; // rax
  size_t v24; // rax
  size_t v25; // r14
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r14
  char *v28; // r15
  char v29; // al
  unsigned __int64 v30; // rdx
  char *v31; // rax
  unsigned int v32; // ebp
  char valid; // al
  __int64 func; // r15
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 regvar; // rax
  __int64 v38; // r12
  char *v39; // r15
  int v40; // eax
  const char *v41; // rsi
  __int64 v42; // rax
  const void *v43; // r14
  size_t v44; // rax
  size_t v45; // r12
  int v46; // eax
  char *v47; // rdx
  void *v48; // rdx
  char *v49; // rdi
  size_t v50; // r15
  const char *v51; // rsi
  __int64 v52; // rax
  char *v53; // r15
  unsigned __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int8 srcc; // [rsp+0h] [rbp-98h]
  const char *src; // [rsp+0h] [rbp-98h]
  char srca; // [rsp+0h] [rbp-98h]
  const char *srcb; // [rsp+0h] [rbp-98h]
  void *srcd; // [rsp+0h] [rbp-98h]
  __int64 v63; // [rsp+8h] [rbp-90h]
  char v64; // [rsp+14h] [rbp-84h]
  char *s1; // [rsp+20h] [rbp-78h] BYREF
  __int128 v67; // [rsp+28h] [rbp-70h]
  char *v68; // [rsp+40h] [rbp-58h] BYREF
  __int128 v69; // [rsp+48h] [rbp-50h]
  unsigned __int64 v70; // [rsp+58h] [rbp-40h]

  v5 = a4;
  v7 = 0;
  v10 = *(_QWORD *)(a2 + 16) == 0;
  v11 = *a4;
  v70 = __readfsqword(0x28u);
  if ( !v10 )
    v7 = **(_BYTE **)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 72);
  if ( (v13 & 8) != 0 )
  {
    v64 = *(_DWORD *)(a2 + 72);
    srcc = toupper(v11);
    v14 = toupper(v7);
    v15 = &strcasecmp;
    v16 = srcc;
    LOBYTE(v13) = v64;
    v7 = v14;
    v5 = a4;
  }
  else
  {
    v15 = &strcmp;
    v16 = v11;
  }
  if ( (v13 & 2) != 0 )
  {
    s1 = nullptr;
    v67 = 0;
    if ( (unsigned __int64)v5 >= a3 + 2 && *(v5 - 2) == 1 && *(v5 - 1) == 33 )
    {
      if ( v11 )
      {
        src = v5;
        v23 = strchr(v5, 2);
        v5 = src;
        if ( v23 )
        {
          v68 = nullptr;
          v24 = v23 - src;
          v69 = 0;
          v25 = v24;
          if ( v24 )
          {
            v49 = nullptr;
            v50 = v24 + 1;
            if ( v24 != -1 )
            {
              v68 = (char *)qvector_reserve(&v68, 0, v24 + 1, 1);
              v5 = src;
              v49 = v68;
            }
            v51 = v5;
            *(_QWORD *)&v69 = v50;
            srcb = v5;
            memmove(v49, v5, v25);
            v5 = srcb;
            v68[v25] = 0;
            v52 = *((_QWORD *)&v69 + 1);
            v53 = v68;
            v68 = nullptr;
            v54 = v69;
            v69 = 0;
            v63 = v52;
            if ( s1 )
            {
              qfree(s1, v51);
              s1 = v53;
              *(_QWORD *)&v67 = v54;
              v5 = srcb;
              *((_QWORD *)&v67 + 1) = v63;
              if ( v68 )
              {
                *(_QWORD *)&v69 = 0;
                qfree(v68, v51, v55, v56, v57, srcb);
                v54 = v67;
                v5 = srcb;
              }
            }
            else
            {
              s1 = v53;
              *(_QWORD *)&v67 = v54;
              *((_QWORD *)&v67 + 1) = v52;
            }
            if ( v54 > 1 )
              goto LABEL_11;
          }
          else
          {
            v67 = 0u;
          }
        }
      }
    }
    v19 = v5;
    tag_remove(&s1, v5, 0x3FFFFFFF);
    if ( (unsigned __int64)v67 <= 1 )
    {
LABEL_34:
      v17 = 0;
      goto LABEL_20;
    }
LABEL_11:
    v20 = s1;
    if ( unk_8CD7E8 != a1 )
    {
      v21 = s1;
      v22 = 0;
      goto LABEL_13;
    }
    func = get_func(xmmword_8CC810);
    if ( !func )
      goto LABEL_77;
    v19 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a5 + 128LL))(*a5);
    v35 = *(_QWORD *)(a2 + 56);
    v36 = *(_QWORD *)(a2 + 64);
    if ( v35 < v36 && ((unsigned __int64)v19 >= v36 || (unsigned __int64)v19 < v35) )
      goto LABEL_34;
    regvar = find_regvar(func, v19, v19 + 1, 0, v20);
    v38 = regvar;
    if ( !regvar )
      goto LABEL_77;
    v39 = *(char **)(regvar + 16);
    v40 = sub_1E73C0(0x3F0u, &v68, 0, v39);
    if ( v40 )
    {
      if ( v40 == 1 )
      {
        v39 = v68;
        goto LABEL_50;
      }
    }
    else if ( (unsigned int)str2reg(v39) != -1 )
    {
LABEL_50:
      if ( *(_QWORD *)(a2 + 56) >= *(_QWORD *)(a2 + 64) || !v39 )
        goto LABEL_55;
      v41 = &::s1;
      if ( *(_QWORD *)(a2 + 40) )
        v41 = *(const char **)(a2 + 32);
      if ( !((int (__fastcall *)(const char *, const char *))v15)(v39, v41) )
        goto LABEL_55;
LABEL_77:
      v21 = v20;
      v22 = 0;
      v20[sub_32C7D0(v20, 0, 2 * (unsigned int)*(unsigned __int8 *)(a1 + 741)) >> 32] = 0;
      goto LABEL_59;
    }
LABEL_55:
    v42 = qustrlen(v20);
    v43 = *(const void **)(v38 + 16);
    v22 = v42;
    if ( v43 && (v44 = strlen(*(const char **)(v38 + 16)), (v45 = v44) != 0) )
    {
      v48 = (void *)(v44 + 1);
      if ( *((_QWORD *)&v67 + 1) < v44 + 1 )
      {
        srcd = (void *)(v44 + 1);
        s1 = (char *)qvector_reserve(&s1, s1, v48, 1);
        v48 = srcd;
      }
      *(_QWORD *)&v67 = v48;
      memmove(s1, v43, v45);
      s1[v45] = 0;
    }
    else
    {
      *(_QWORD *)&v67 = 0;
    }
    v21 = s1;
LABEL_59:
    if ( unk_8CD7E8 == a1 )
    {
      v46 = sub_1E73C0(0x3F0u, &v68, 0, v21);
      if ( v46 )
      {
        if ( v46 == 1 )
        {
          v20 = v68;
          goto LABEL_13;
        }
LABEL_79:
        v20 = v21;
        goto LABEL_15;
      }
      v20 = v21;
      if ( (unsigned int)str2reg(v21) == -1 )
        goto LABEL_79;
    }
    else
    {
      v20 = v21;
    }
LABEL_13:
    if ( !v20 )
      v20 = v21;
LABEL_15:
    v19 = &::s1;
    if ( *(_QWORD *)(a2 + 40) )
      v19 = *(const char **)(a2 + 32);
    if ( !((int (__fastcall *)(const char *, const char *))v15)(v20, v19) )
    {
      v17 = v22;
      if ( !v22 )
        v17 = qustrlen(v21);
      goto LABEL_20;
    }
    goto LABEL_34;
  }
  if ( v16 != v7 )
    return 0;
  v19 = v5;
  s1 = nullptr;
  v67 = 0;
  v26 = tag_remove(&s1, v5, 0x3FFFFFFF);
  v27 = *(_QWORD *)(a2 + 16);
  v28 = s1;
  v29 = *(_BYTE *)(a2 + 72) & 1;
  if ( !v27 )
  {
    if ( !v29 )
    {
      if ( !v26 )
        goto LABEL_64;
      v47 = s1;
      goto LABEL_69;
    }
    v31 = s1;
    goto LABEL_37;
  }
  v30 = v27 - 1;
  if ( v29 )
  {
    if ( v26 < v30 )
      goto LABEL_32;
    v31 = &s1[v30];
    --v27;
LABEL_37:
    v32 = *v31;
    v19 = (_BYTE *)(&dword_0 + 2);
    srca = *(_BYTE *)(a1 + 741);
    valid = is_valid_cp(v32, 2, 0);
    if ( v32 == 32 || !valid || v32 == 46 && !srca )
      goto LABEL_75;
    v30 = v27++;
LABEL_32:
    if ( (int)v26 < v27 || v28[v30] != 64 || v28[v27] != 60 )
      goto LABEL_34;
    v27 = v30;
LABEL_75:
    v47 = &v28[v27];
    if ( v27 >= v26 )
    {
LABEL_70:
      if ( *(_QWORD *)(a2 + 16) )
        goto LABEL_71;
LABEL_64:
      v19 = &::s1;
      goto LABEL_65;
    }
LABEL_69:
    *v47 = 0;
    goto LABEL_70;
  }
  if ( v30 < v26 )
  {
    v47 = &s1[v30];
    goto LABEL_69;
  }
LABEL_71:
  v19 = *(const char **)(a2 + 8);
LABEL_65:
  if ( ((int (__fastcall *)(const char *, const char *))v15)(v28, v19) )
    goto LABEL_34;
  v17 = qustrlen(v28);
LABEL_20:
  if ( s1 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(s1, v19);
  }
  return v17;
}
