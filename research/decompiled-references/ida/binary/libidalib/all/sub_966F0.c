unsigned __int64 __fastcall sub_966F0(__int64 a1, __int64 a2, void **a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // r11d
  char v9; // r13
  int v10; // eax
  char v11; // r15
  int v12; // eax
  int v13; // r11d
  unsigned __int8 v14; // r15
  char v15; // r14
  int v16; // eax
  const char *path; // rax
  size_t v18; // rax
  size_t v19; // r13
  size_t v20; // r12
  const char *v21; // r13
  size_t v22; // r12
  size_t v23; // rax
  __int64 v24; // r12
  _BYTE *v25; // r13
  size_t v26; // r9
  size_t v27; // r8
  void *v28; // rdx
  char *v29; // rsi
  size_t v30; // rax
  size_t v31; // r12
  const char *v32; // rdi
  char v33; // r12
  char v34; // dl
  const char *v35; // rsi
  const char *v37; // rdi
  const char *v38; // r10
  const char *v39; // rsi
  void *v40; // rdi
  size_t v41; // r13
  const char *v42; // [rsp+0h] [rbp-520h]
  int v43; // [rsp+Ch] [rbp-514h]
  int v44; // [rsp+Ch] [rbp-514h]
  __int64 license_manager; // [rsp+10h] [rbp-510h]
  size_t v46; // [rsp+10h] [rbp-510h]
  char v47; // [rsp+10h] [rbp-510h]
  size_t v49; // [rsp+28h] [rbp-4F8h]
  int v50; // [rsp+30h] [rbp-4F0h]
  void *v51; // [rsp+30h] [rbp-4F0h]
  void *src; // [rsp+38h] [rbp-4E8h]
  const char *srca; // [rsp+38h] [rbp-4E8h]
  void *v54; // [rsp+50h] [rbp-4D0h] BYREF
  __int128 v55; // [rsp+58h] [rbp-4C8h]
  void *dest; // [rsp+70h] [rbp-4B0h]
  __int128 v57; // [rsp+78h] [rbp-4A8h]
  char *v58; // [rsp+90h] [rbp-490h] BYREF
  __int128 v59; // [rsp+98h] [rbp-488h]
  char v60[48]; // [rsp+B0h] [rbp-470h] BYREF
  char v61[1032]; // [rsp+E0h] [rbp-440h] BYREF
  unsigned __int64 v62; // [rsp+4E8h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  v6 = sub_174610();
  v7 = *(_QWORD *)(a2 + 104);
  if ( a3 )
    src = *a3;
  else
    src = *(void **)(a2 + 112);
  if ( v6 >= v7 || (v8 = 0, v7 == -1) )
  {
    v8 = 1;
    if ( src )
    {
      if ( v6 >= (__int64)src - 2592000 )
      {
        v8 = 2;
        if ( v6 >= (__int64)src - 1296000 )
        {
          v8 = 3;
          if ( v6 >= (__int64)src )
          {
            v8 = 4;
            if ( v6 >= (__int64)src + 1296000 )
              v8 = (v6 >= (__int64)src + 2592000) + 5;
          }
        }
      }
    }
  }
  v9 = *(_BYTE *)(a1 + 12);
  if ( v9 )
  {
    v9 = 0;
    v11 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 16);
    v11 = 1;
    if ( v10 != v8 )
    {
      if ( v10 == 6 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v11 = a4 ^ *(_BYTE *)(a1 + 20);
    if ( v10 != 6 )
LABEL_14:
      v9 = (a4 | (v8 == 6)) & (*(_BYTE *)(a1 + 20) ^ 1);
  }
LABEL_15:
  *(_DWORD *)(a1 + 16) = v8;
  *(_BYTE *)(a1 + 20) = a4;
  v50 = v8;
  v12 = reg_int_op();
  v13 = v50;
  v14 = (v12 + (__int64)*(int *)(a1 + 8) <= v6) | v11;
  if ( v14 )
  {
    reg_int_op();
    v13 = v50;
  }
  v15 = *(_BYTE *)(a1 + 12);
  v16 = debug & 0x200;
  if ( v15 )
  {
    *(_BYTE *)(a1 + 12) = 0;
    if ( !v16 )
      goto LABEL_19;
  }
  else if ( (debug & 0x200) == 0 )
  {
    goto LABEL_48;
  }
  v43 = v13;
  license_manager = get_license_manager();
  (*(void (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)license_manager + 112LL))(
    license_manager,
    v60,
    25,
    v6,
    1);
  (*(void (__fastcall **)(__int64, char *, __int64, void *, __int64))(*(_QWORD *)license_manager + 112LL))(
    license_manager,
    v61,
    25,
    src,
    1);
  v13 = v43;
  if ( (*(&debug + 1) & 2) != 0 )
  {
    switch ( v43 )
    {
      case 1:
        v38 = "valid";
        break;
      case 2:
        v38 = "starting to expire";
        break;
      case 3:
        v38 = "close to expiration";
        break;
      case 4:
        v38 = "within the grace period";
        break;
      case 5:
        v38 = "reaching the end of the grace period";
        break;
      case 6:
        v38 = "beyond the grace period";
        break;
      default:
        v38 = "not started yet";
        break;
    }
    v47 = 0;
    v39 = "<empty>";
    if ( *(_DWORD *)(a2 + 8) )
    {
      v42 = v38;
      v58 = nullptr;
      v59 = 0;
      sub_94440((__int64 *)&v58);
      v39 = s1;
      v13 = v43;
      v47 = 1;
      v38 = v42;
      if ( (_QWORD)v59 )
        v39 = v58;
    }
    v44 = v13;
    sub_91F80(
      (__int64)"Checking license %s: %s - (\"now\": %lu (%s UTC), \"end_time\": %lu (%s UTC)) \n",
      v39,
      v38,
      v6,
      v60,
      src,
      v61);
    v13 = v44;
    if ( v47 && v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree();
      v13 = v44;
    }
  }
LABEL_48:
  if ( !v14 && !v15 )
    return v62 - __readfsqword(0x28u);
LABEL_19:
  *(_BYTE *)(a1 + 12) = 0;
  if ( v13 <= 3 )
  {
    if ( v13 > 1 )
    {
      v58 = nullptr;
      v59 = 0;
      if ( ((__int64)src - v6) / 86400 )
      {
        sub_94440((__int64 *)&v58);
      }
      else
      {
        v58 = (char *)qvector_reserve();
        *(_QWORD *)&v59 = 9;
        strcpy(v58, "tomorrow");
      }
      qsnprintf();
      if ( !v58 )
        goto LABEL_26;
    }
    else
    {
      if ( v13 )
      {
LABEL_27:
        if ( !v9 )
          return v62 - __readfsqword(0x28u);
        v54 = nullptr;
        v55 = 0;
        sub_94440((__int64 *)&v54);
        goto LABEL_29;
      }
      v58 = nullptr;
      v59 = 0;
      if ( (*(_QWORD *)(a2 + 104) - v6) / 86400 )
      {
        sub_94440((__int64 *)&v58);
      }
      else
      {
        v58 = (char *)qvector_reserve();
        *(_QWORD *)&v59 = 9;
        strcpy(v58, "tomorrow");
      }
      qsnprintf();
      if ( !v58 )
      {
LABEL_26:
        sub_923A0(v61, v14, v15);
        goto LABEL_27;
      }
    }
LABEL_25:
    *(_QWORD *)&v59 = 0;
    qfree();
    goto LABEL_26;
  }
  if ( v13 != 6 )
  {
    v58 = nullptr;
    v59 = 0;
    if ( ((__int64)src - v6 + 2592000) / 86400 )
    {
      sub_94440((__int64 *)&v58);
    }
    else
    {
      v58 = (char *)qvector_reserve();
      *(_QWORD *)&v59 = 15;
      strcpy(v58, "until tomorrow");
    }
    qsnprintf();
    if ( !v58 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v54 = nullptr;
  v55 = 0;
  sub_94440((__int64 *)&v54);
  if ( !v9 )
  {
    v37 = s1;
    if ( (_QWORD)v55 )
      v37 = (const char *)v54;
    sub_923A0(v37, v14, v15);
    goto LABEL_69;
  }
LABEL_29:
  path = (const char *)get_path();
  srca = path;
  v58 = nullptr;
  v59 = 0;
  if ( path )
  {
    v18 = strlen(path);
    v19 = v18 + 1;
    v20 = v18;
    v58 = (char *)qvector_reserve();
    *(_QWORD *)&v59 = v19;
    memmove(v58, srca, v20);
    v58[v20] = 0;
  }
  v21 = (const char *)qsplitfile();
  time(nullptr);
  qstrftime();
  dest = nullptr;
  v57 = 0;
  if ( !v21 )
  {
    v24 = 0;
    v26 = strlen(v60);
    v28 = (void *)(v26 + 1);
    v27 = v26;
LABEL_72:
    v46 = v26;
    v49 = v27;
    v51 = v28;
    dest = (void *)qvector_reserve();
    v26 = v46;
    v25 = dest;
    v27 = v49;
    v28 = v51;
    goto LABEL_35;
  }
  v22 = strlen(v21);
  dest = (void *)qvector_reserve();
  *(_QWORD *)&v57 = v22 + 1;
  memmove(dest, v21, v22);
  *((_BYTE *)dest + v22) = 0;
  v23 = strlen(v60);
  v24 = v57;
  v25 = dest;
  v26 = v23;
  v27 = v23;
  if ( (_QWORD)v57 )
  {
    v24 = v57 - 1;
    v27 = v23 + v57 - 1;
  }
  v28 = (void *)(v27 + 1);
  if ( *((_QWORD *)&v57 + 1) < v27 + 1 )
    goto LABEL_72;
LABEL_35:
  *(_QWORD *)&v57 = v28;
  v25[v27] = 0;
  memmove((char *)dest + v24, v60, v26);
  v29 = (_BYTE *)(elf_gnu_hash_indexes + 400);
  set_file_ext();
  v30 = strlen(v61);
  v31 = v30;
  if ( v30 )
  {
    v40 = dest;
    v41 = v30 + 1;
    if ( *((_QWORD *)&v57 + 1) < v30 + 1 )
    {
      dest = (void *)qvector_reserve();
      v40 = dest;
    }
    v29 = v61;
    *(_QWORD *)&v57 = v41;
    memmove(v40, v61, v31);
    *((_BYTE *)dest + v31) = 0;
  }
  else
  {
    *(_QWORD *)&v57 = 0;
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  v32 = s1;
  if ( (_QWORD)v57 )
    v32 = (const char *)dest;
  v33 = sub_11B1E0(v32, v29);
  if ( v33 )
  {
    sub_96630((__int64 *)&v54);
    v34 = v15;
    v35 = (const char *)v14;
    if ( !(_QWORD)v55 )
    {
      sub_923A0(s1, v14, v15);
      goto LABEL_44;
    }
LABEL_83:
    sub_923A0((const char *)v54, (char)v35, v34);
    if ( v33 )
      goto LABEL_44;
    goto LABEL_86;
  }
  sub_96630((__int64 *)&v54);
  v34 = v15;
  v35 = (const char *)v14;
  if ( (_QWORD)v55 )
    goto LABEL_83;
  sub_923A0(s1, v14, v15);
  do
  {
LABEL_86:
    if ( (unsigned __int8)sub_11B1E0(0, v35) )
      break;
    v35 = "HIDECANCEL\nYour database is not saved.\nDo you want to save your database?";
  }
  while ( (unsigned int)sub_92580(
                          1u,
                          (__int64)"HIDECANCEL\nYour database is not saved.\nDo you want to save your database?") == 1 );
LABEL_44:
  if ( dest )
  {
    *(_QWORD *)&v57 = 0;
    qfree();
  }
LABEL_69:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  return v62 - __readfsqword(0x28u);
}

