__int64 __fastcall sub_3856A0(__int64 *a1)
{
  char v1; // bp
  const char *v2; // r12
  _BYTE *v4; // rax
  const char **v5; // r15
  __int64 v6; // r14
  char *v7; // rax
  const char *v8; // r13
  bool v9; // r12
  _BOOL8 v10; // rsi
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 license_manager; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 (__fastcall *v22)(__int64); // rdx
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // rbx
  size_t v25; // rbp
  const void **v26; // r14
  size_t v27; // r15
  void *v28; // rax
  void *v29; // r13
  unsigned int v30; // [rsp+14h] [rbp-84h] BYREF
  void *v31; // [rsp+18h] [rbp-80h]
  void *v32; // [rsp+20h] [rbp-78h] BYREF
  __int128 v33; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v35; // [rsp+48h] [rbp-50h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v1 = *((_BYTE *)a1 + 232);
  v36 = __readfsqword(0x28u);
  v31 = nullptr;
  if ( !v1 )
  {
    v2 = (const char *)a1[9];
    if ( !v2 || !strchr((const char *)a1[9], 43) )
    {
      if ( *((_DWORD *)a1 + 53) )
        *((_WORD *)a1 + 108) |= 1u;
      v4 = (_BYTE *)a1[1];
      if ( v4[213] )
        *((_WORD *)a1 + 108) |= 2u;
      if ( v4[212] )
        *((_WORD *)a1 + 108) |= 0x20u;
      if ( v4[214] )
        *((_WORD *)a1 + 108) |= 0x400u;
      v5 = (const char **)*a1;
      v6 = *(_QWORD *)(*a1 + 8);
      if ( v2 && (v7 = strchr(v2, 64)) != nullptr )
      {
        v8 = haystack;
        v9 = v7[1] != 0;
        v10 = v9;
        if ( v6 )
          v8 = *v5;
        v11 = (void *)open_linput(v8, v9);
        if ( v9 && v11 == nullptr )
        {
          if ( (v5[67][37] & 4) == 0 )
            callui();
          v31 = nullptr;
          qerrstr(-1);
          goto LABEL_22;
        }
      }
      else
      {
        v10 = 0;
        v9 = 0;
        if ( v6 )
          v11 = (void *)open_linput(*v5, 0);
        else
          v11 = (void *)open_linput(haystack, 0);
      }
      v31 = v11;
      if ( !v11 )
      {
        qerrstr(-1);
        if ( !v9 )
          sub_375400();
LABEL_22:
        sub_375400();
      }
      v26 = (const void **)*a1;
      v27 = *(_QWORD *)(*a1 + 8);
      if ( v27 )
      {
        v29 = (void *)qalloc_or_throw(*(_QWORD *)(*a1 + 8), v10, v12, v13, v14, v15);
        memcpy(v29, *v26, v27);
        if ( a1[8] )
          goto LABEL_36;
      }
      else if ( a1[8] )
      {
        goto LABEL_36;
      }
      a1[8] = build_loaders_list();
LABEL_36:
      v35 = 0;
      ptr = nullptr;
      callui();
    }
  }
  sub_590E10();
  sub_3842E0(a1, (__int64)v31);
  if ( (unsigned __int8)getinf_flag(2, 8) )
    goto LABEL_5;
  v30 = -1;
  netnode_check(&v30, "$ original user", 0, 1);
  license_manager = get_license_manager();
  v17 = license_manager;
  if ( !license_manager )
  {
    if ( !under_debugger )
      interr(3125);
LABEL_59:
    BUG();
  }
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  if ( !v21 )
  {
    if ( !under_debugger )
      interr(3126);
    goto LABEL_59;
  }
  v22 = sub_383B00;
  v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 104LL);
  if ( v23 == sub_383B00 )
    v24 = v17 + 360;
  else
    v24 = v23(v17);
  v32 = nullptr;
  v33 = 0;
  v25 = *(_QWORD *)(v24 + 8);
  if ( !v25 )
  {
    ptr = nullptr;
    v35 = 0;
    goto LABEL_29;
  }
  v28 = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 8), 0, v22, v18, v19, v20);
  *((_QWORD *)&v33 + 1) = v25;
  v32 = v28;
  memcpy(v28, *(const void **)v24, v25);
  *(_QWORD *)&v33 = v25;
  ptr = nullptr;
  v35 = 0;
  if ( !(unsigned __int8)sub_885F40((int)&v32, 0, (int)&ptr) )
  {
LABEL_29:
    if ( !under_debugger )
      interr(3127);
    goto LABEL_59;
  }
  if ( !(unsigned __int8)netnode_setblob(v30, v32, v33, 16, 83) )
  {
    if ( !under_debugger )
      interr(3128);
    goto LABEL_59;
  }
  if ( !(unsigned __int8)netnode_setblob(v30, v21, 6, 1, 83) )
  {
    if ( !under_debugger )
      interr(3129);
    goto LABEL_59;
  }
  if ( ptr )
  {
    *(_QWORD *)&v35 = 0;
    qfree(ptr);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
LABEL_5:
  flush_buffers();
  return 1;
}

