__int64 __fastcall sub_162840(__int64 a1, __int64 a2, __int64 a3, const char *a4, _QWORD *a5)
{
  const char *v5; // r9
  unsigned __int8 v7; // r14
  bool v10; // zf
  unsigned __int8 v11; // si
  int v13; // edx
  unsigned __int8 v14; // al
  int (**v15)(const char *, const char *); // r13
  char v16; // cl
  unsigned int v17; // ebx
  const char *v19; // rsi
  const char *v20; // r14
  char *v21; // r12
  __int64 v22; // r15
  const char *v23; // rsi
  char *v24; // rax
  size_t v25; // rax
  size_t v26; // r14
  unsigned __int64 v27; // r12
  _BYTE *v28; // r14
  char v29; // al
  _BYTE *v30; // rdx
  char *v31; // rax
  int v32; // ebp
  char valid; // al
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 regvar; // rax
  __int64 v38; // r12
  const char *v39; // r15
  int v40; // eax
  const char *v41; // rsi
  __int64 v42; // rax
  const void *v43; // r14
  size_t v44; // rax
  size_t v45; // r12
  int v46; // eax
  const char *v47; // rsi
  char *v48; // rdi
  size_t v49; // r15
  char *v50; // r15
  char srcb; // [rsp+0h] [rbp-98h]
  const char *src; // [rsp+0h] [rbp-98h]
  char srca; // [rsp+0h] [rbp-98h]
  const char *srcc; // [rsp+0h] [rbp-98h]
  char v55; // [rsp+14h] [rbp-84h]
  char *s1; // [rsp+20h] [rbp-78h]
  __int128 v58; // [rsp+28h] [rbp-70h]
  char *v59; // [rsp+40h] [rbp-58h]
  __int128 v60; // [rsp+48h] [rbp-50h]

  v5 = a4;
  v7 = 0;
  v10 = *(_QWORD *)(a2 + 16) == 0;
  v11 = *a4;
  if ( !v10 )
    v7 = **(_BYTE **)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 72);
  if ( (v13 & 8) != 0 )
  {
    v55 = *(_DWORD *)(a2 + 72);
    srcb = toupper(v11);
    v14 = toupper(v7);
    v15 = &strcasecmp;
    v16 = srcb;
    LOBYTE(v13) = v55;
    v7 = v14;
    v5 = a4;
  }
  else
  {
    v15 = &strcmp;
    v16 = *a4;
  }
  if ( (v13 & 2) == 0 )
  {
    if ( v16 != v7 )
      return 0;
    s1 = nullptr;
    v27 = tag_remove();
    v28 = *(_BYTE **)(a2 + 16);
    v29 = *(_BYTE *)(a2 + 72) & 1;
    if ( v28 )
    {
      v30 = v28 - 1;
      if ( !v29 )
      {
        if ( (unsigned __int64)v30 >= v27 )
        {
LABEL_69:
          v47 = *(const char **)(a2 + 8);
LABEL_64:
          if ( !((int (__fastcall *)(const char *, const char *))v15)(nullptr, v47) )
          {
LABEL_19:
            v17 = qustrlen();
            goto LABEL_20;
          }
          goto LABEL_34;
        }
        goto LABEL_67;
      }
      if ( v27 < (unsigned __int64)v30 )
        goto LABEL_32;
      v31 = --v28;
    }
    else
    {
      if ( !v29 )
      {
        if ( !v27 )
          goto LABEL_63;
        v30 = nullptr;
        goto LABEL_67;
      }
      v31 = nullptr;
    }
    v32 = *v31;
    srca = *(_BYTE *)(a1 + 773);
    valid = is_valid_cp();
    if ( v32 == 32 || !valid || v32 == 46 && !srca )
      goto LABEL_73;
    v30 = v28++;
LABEL_32:
    if ( (int)v27 < (unsigned __int64)v28 || *v30 != 64 || *v28 != 60 )
      goto LABEL_34;
    v28 = v30;
LABEL_73:
    v30 = v28;
    if ( (unsigned __int64)v28 >= v27 )
    {
LABEL_68:
      if ( *(_QWORD *)(a2 + 16) )
        goto LABEL_69;
LABEL_63:
      v47 = ::s1;
      goto LABEL_64;
    }
LABEL_67:
    *v30 = 0;
    goto LABEL_68;
  }
  s1 = nullptr;
  v58 = 0;
  if ( (unsigned __int64)v5 >= a3 + 2 && *(v5 - 2) == 1 && *(v5 - 1) == 33 )
  {
    if ( v11 )
    {
      src = v5;
      v24 = strchr(v5, 2);
      v5 = src;
      if ( v24 )
      {
        v59 = nullptr;
        v25 = v24 - src;
        v60 = 0;
        v26 = v25;
        if ( v25 )
        {
          v48 = nullptr;
          v49 = v25 + 1;
          if ( v25 != -1 )
          {
            v59 = (char *)qvector_reserve();
            v5 = src;
            v48 = v59;
          }
          v19 = v5;
          *(_QWORD *)&v60 = v49;
          srcc = v5;
          memmove(v48, v5, v26);
          v5 = srcc;
          v59[v26] = 0;
          v50 = v59;
          v59 = nullptr;
          s1 = v50;
          v58 = v60;
          if ( (unsigned __int64)v60 > 1 )
            goto LABEL_11;
        }
        else
        {
          v58 = 0u;
        }
      }
    }
  }
  v19 = v5;
  tag_remove();
  if ( (unsigned __int64)v58 <= 1 )
    goto LABEL_34;
LABEL_11:
  v20 = s1;
  if ( qword_254470 != a1 )
  {
    v21 = s1;
    v22 = 0;
    goto LABEL_13;
  }
  if ( !get_func() )
    goto LABEL_75;
  v34 = (*(__int64 (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a5 + 128LL))(*a5, v19);
  v35 = *(_QWORD *)(a2 + 56);
  v36 = *(_QWORD *)(a2 + 64);
  if ( v35 < v36 && (v34 >= v36 || v34 < v35) )
    goto LABEL_34;
  regvar = find_regvar();
  v38 = regvar;
  if ( !regvar )
    goto LABEL_75;
  v39 = *(const char **)(regvar + 16);
  v40 = sub_9E360();
  if ( v40 )
  {
    if ( v40 == 1 )
    {
      v39 = v59;
      goto LABEL_50;
    }
  }
  else if ( (unsigned int)str2reg() != -1 )
  {
LABEL_50:
    if ( *(_QWORD *)(a2 + 56) >= *(_QWORD *)(a2 + 64) || !v39 )
      goto LABEL_55;
    v41 = ::s1;
    if ( *(_QWORD *)(a2 + 40) )
      v41 = *(const char **)(a2 + 32);
    if ( !((int (__fastcall *)(const char *, const char *))v15)(v39, v41) )
      goto LABEL_55;
LABEL_75:
    v21 = s1;
    v22 = 0;
    s1[sub_139ED0((unsigned __int64)s1, 0, 2 * *(_BYTE *)(a1 + 773)) >> 32] = 0;
    goto LABEL_58;
  }
LABEL_55:
  v42 = qustrlen();
  v43 = *(const void **)(v38 + 16);
  v22 = v42;
  if ( v43 )
  {
    v44 = strlen(*(const char **)(v38 + 16));
    v45 = v44;
    if ( v44 )
    {
      if ( *((_QWORD *)&v58 + 1) < v44 + 1 )
        s1 = (char *)qvector_reserve();
      memmove(s1, v43, v45);
      s1[v45] = 0;
    }
  }
  v21 = s1;
LABEL_58:
  if ( qword_254470 == a1 )
  {
    v46 = sub_9E360();
    if ( v46 )
    {
      if ( v46 == 1 )
      {
        v20 = v59;
        goto LABEL_13;
      }
LABEL_77:
      v20 = v21;
      goto LABEL_15;
    }
    v20 = v21;
    if ( (unsigned int)str2reg() == -1 )
      goto LABEL_77;
  }
  else
  {
    v20 = v21;
  }
LABEL_13:
  if ( !v20 )
    v20 = v21;
LABEL_15:
  v23 = ::s1;
  if ( *(_QWORD *)(a2 + 40) )
    v23 = *(const char **)(a2 + 32);
  if ( !((int (__fastcall *)(const char *, const char *))v15)(v20, v23) )
  {
    v17 = v22;
    if ( v22 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_34:
  v17 = 0;
LABEL_20:
  if ( s1 )
    qfree();
  return v17;
}

