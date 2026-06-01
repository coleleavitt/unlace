__int64 __fastcall sub_389970(__int64 *a1)
{
  char v1; // bp
  const char *v2; // r12
  _BYTE *v4; // rax
  const char **v5; // r15
  __int64 v6; // r14
  char *v7; // rax
  const char *v8; // r13
  bool v9; // r12
  __int64 v10; // rax
  __int64 license_manager; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rbx
  size_t v16; // rbp
  const void **v17; // r14
  size_t v18; // r15
  void *v19; // rax
  void *v20; // r13
  __int64 v21; // r14
  const char *v22; // rsi
  void *v23; // [rsp+10h] [rbp-88h]
  __int64 v24; // [rsp+18h] [rbp-80h] BYREF
  void *v25; // [rsp+20h] [rbp-78h] BYREF
  __int128 v26; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v28; // [rsp+48h] [rbp-50h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v1 = *((_BYTE *)a1 + 280);
  v29 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v2 = (const char *)a1[9];
    if ( !v2 || !strchr((const char *)a1[9], 43) )
    {
      if ( *((_DWORD *)a1 + 65) )
        *((_WORD *)a1 + 132) |= 1u;
      v4 = (_BYTE *)a1[1];
      if ( v4[221] )
        *((_WORD *)a1 + 132) |= 2u;
      if ( v4[220] )
        *((_WORD *)a1 + 132) |= 0x20u;
      if ( v4[222] )
        *((_WORD *)a1 + 132) |= 0x400u;
      v5 = (const char **)*a1;
      v6 = *(_QWORD *)(*a1 + 8);
      if ( v2 && (v7 = strchr(v2, 64)) != nullptr )
      {
        v8 = haystack;
        v9 = v7[1] != 0;
        if ( v6 )
          v8 = *v5;
        v10 = open_linput(v8, v9);
        if ( v9 && v10 == 0 )
        {
          if ( (v5[78][37] & 4) == 0 )
            callui();
          qerrstr(-1);
          goto LABEL_22;
        }
      }
      else
      {
        v9 = 0;
        if ( v6 )
          v10 = open_linput(*v5, 0);
        else
          v10 = open_linput(haystack, 0);
      }
      v23 = (void *)v10;
      if ( !v10 )
      {
        qerrstr(-1);
        if ( !v9 )
          sub_378D50();
LABEL_22:
        sub_378D50();
      }
      v17 = (const void **)*a1;
      v18 = *(_QWORD *)(*a1 + 8);
      if ( v18 )
      {
        v20 = (void *)qalloc_or_throw(*(_QWORD *)(*a1 + 8));
        memcpy(v20, *v17, v18);
        v21 = *a1;
        if ( a1[8] )
          goto LABEL_36;
        if ( *(_QWORD *)(v21 + 8) )
        {
          v22 = *(const char **)v21;
LABEL_47:
          a1[8] = build_loaders_list(v23, v22);
LABEL_36:
          v28 = 0;
          ptr = nullptr;
          callui();
        }
      }
      else if ( a1[8] )
      {
        goto LABEL_36;
      }
      v22 = haystack;
      goto LABEL_47;
    }
  }
  sub_5AAFD0();
  sub_388060(a1, 0);
  if ( (unsigned __int8)getinf_flag(2, 8) )
    goto LABEL_5;
  v24 = -1;
  netnode_check(&v24, "$ original user", 0, 1);
  license_manager = get_license_manager();
  v12 = license_manager;
  if ( !license_manager )
  {
    if ( !under_debugger )
      interr(3125);
LABEL_61:
    BUG();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  if ( !v13 )
  {
    if ( !under_debugger )
      interr(3126);
    goto LABEL_61;
  }
  v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 104LL);
  if ( v14 == sub_387750 )
    v15 = v12 + 360;
  else
    v15 = v14(v12);
  v25 = nullptr;
  v26 = 0;
  v16 = *(_QWORD *)(v15 + 8);
  if ( !v16 )
  {
    ptr = nullptr;
    v28 = 0;
    goto LABEL_29;
  }
  v19 = (void *)qalloc_or_throw(*(_QWORD *)(v15 + 8));
  *((_QWORD *)&v26 + 1) = v16;
  v25 = v19;
  memcpy(v19, *(const void **)v15, v16);
  *(_QWORD *)&v26 = v16;
  ptr = nullptr;
  v28 = 0;
  if ( !(unsigned __int8)sub_8A98C0((int)&v25, 0, (int)&ptr) )
  {
LABEL_29:
    if ( !under_debugger )
      interr(3127);
    goto LABEL_61;
  }
  if ( !(unsigned __int8)netnode_setblob(v24, v25, v26, 16, 83) )
  {
    if ( !under_debugger )
      interr(3128);
    goto LABEL_61;
  }
  if ( !(unsigned __int8)netnode_setblob(v24, v13, 6, 1, 83) )
  {
    if ( !under_debugger )
      interr(3129);
    goto LABEL_61;
  }
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
LABEL_5:
  flush_buffers();
  return 1;
}
