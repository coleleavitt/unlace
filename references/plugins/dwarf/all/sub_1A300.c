__int64 __fastcall sub_1A300(__int64 a1)
{
  bool v1; // zf
  _WORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  const char *v11; // r9
  const char *v12; // r8
  const char *v13; // rdx
  unsigned int v14; // r13d
  const char *v15; // rdx
  __int64 v16; // r9
  const char *v18; // rcx
  const char *v19; // r8
  __int64 v20; // r15
  const char *v21; // r8
  const char *v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r12
  size_t v26; // rax
  __int64 v27; // r15
  size_t v28; // rbx
  void *v29; // rdi
  size_t v30; // r13
  __int64 v31; // [rsp+10h] [rbp-1080h] BYREF
  __int128 v32; // [rsp+18h] [rbp-1078h]
  __int64 v33; // [rsp+30h] [rbp-1060h] BYREF
  __int128 v34; // [rsp+38h] [rbp-1058h]
  _BYTE v35[4104]; // [rsp+50h] [rbp-1040h] BYREF
  unsigned __int64 v36; // [rsp+1058h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 1040) == 0;
  v36 = __readfsqword(0x28u);
  if ( v1 || *(_QWORD *)(a1 + 1112) <= 3u )
    goto LABEL_25;
  v3 = *(_WORD **)(a1 + 1104);
  v31 = 0;
  v32 = 0;
  v31 = qvector_reserve(&v31, 0, 3, 1);
  *(_QWORD *)&v32 = 3;
  *(_WORD *)v31 = *v3;
  *(_BYTE *)(v31 + 2) = 0;
  v4 = *(_QWORD *)(a1 + 1112);
  if ( v4 )
  {
    v23 = v4 - 1;
    v24 = 2;
    v33 = 0;
    v25 = *(_QWORD *)(a1 + 1104);
    v34 = 0;
    if ( v23 <= 2 )
      v24 = v23;
    v26 = v23 - v24;
    v27 = v24;
    v28 = v26;
    if ( v26 )
    {
      v29 = nullptr;
      v30 = v26 + 1;
      if ( v26 != -1 )
      {
        v33 = qvector_reserve(&v33, 0, v26 + 1, 1);
        v29 = (void *)v33;
      }
      *(_QWORD *)&v34 = v30;
      memmove(v29, (const void *)(v25 + v27), v28);
      *(_BYTE *)(v33 + v28) = 0;
      v6 = v33;
      if ( (_QWORD)v34 )
      {
        v8 = v34 + 5;
        v7 = v34 + 6;
        v5 = v34 - 1;
      }
      else
      {
        v5 = 0;
        v7 = 7;
        v8 = 6;
      }
      if ( *((_QWORD *)&v34 + 1) >= v7 )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  else
  {
    v33 = 0;
    v34 = 0;
  }
  v5 = 0;
  v6 = 0;
  v7 = 7;
  v8 = 6;
LABEL_6:
  v33 = qvector_reserve(&v33, v6, v7, 1);
  v6 = v33;
LABEL_7:
  *(_QWORD *)&v34 = v7;
  *(_BYTE *)(v6 + v8) = 0;
  v9 = v5 + v33;
  *(_DWORD *)v9 = 1650811950;
  *(_WORD *)(v9 + 4) = 26485;
  v10 = *(_QWORD *)(a1 + 1032);
  if ( 24LL * *(_QWORD *)(a1 + 1040) )
  {
    while ( 1 )
    {
      v11 = src;
      if ( (_QWORD)v34 )
        v11 = (const char *)v33;
      v12 = src;
      if ( (_QWORD)v32 )
        v12 = (const char *)v31;
      v13 = src;
      if ( *(_QWORD *)(v10 + 8) )
        v13 = *(const char **)v10;
      qmakepath(a1 + 8, 1024, v13, ".build-id", v12, v11);
      v14 = (**(__int64 (__fastcall ***)(__int64, _QWORD))a1)(a1, 0);
      sub_1A230(a1, (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n");
      if ( v14 )
        break;
      v10 += 24;
      if ( v10 == *(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040) )
        goto LABEL_21;
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
    return v14;
  }
LABEL_21:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
LABEL_25:
  if ( *(_QWORD *)(a1 + 1088) <= 1u )
    return 0;
  v15 = src;
  if ( *(_QWORD *)(a1 + 1064) )
    v15 = *(const char **)(a1 + 1056);
  if ( !(unsigned __int8)qdirname(v35, 4096, v15) )
    return 0;
  v18 = src;
  if ( *(_QWORD *)(a1 + 1088) )
    v18 = *(const char **)(a1 + 1080);
  qmakepath(a1 + 8, 1024, v35, v18, 0, v16);
  v14 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
  sub_1A230(a1, (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n");
  if ( !v14 )
  {
    v19 = src;
    if ( *(_QWORD *)(a1 + 1088) )
      v19 = *(const char **)(a1 + 1080);
    qmakepath(a1 + 8, 1024, v35, ".debug", v19, 0);
    v14 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
    sub_1A230(a1, (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n");
    if ( !v14 )
    {
      v20 = *(_QWORD *)(a1 + 1032);
      if ( !(24LL * *(_QWORD *)(a1 + 1040)) )
        return 0;
      while ( 1 )
      {
        v21 = src;
        if ( *(_QWORD *)(a1 + 1088) )
          v21 = *(const char **)(a1 + 1080);
        v22 = src;
        if ( *(_QWORD *)(v20 + 8) )
          v22 = *(const char **)v20;
        qmakepath(a1 + 8, 1024, v22, v35, v21, 0);
        v14 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
        sub_1A230(a1, (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n");
        if ( v14 )
          break;
        v20 += 24;
        if ( v20 == *(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040) )
          return 0;
      }
    }
  }
  return v14;
}
