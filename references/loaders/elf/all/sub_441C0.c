__int64 __fastcall sub_441C0(_BOOL8 (__fastcall ***a1)(__int64 a1, int a2))
{
  bool v1; // zf
  _BOOL8 (__fastcall **v3)(__int64, int); // rbx
  _BOOL8 (__fastcall **v4)(__int64, int); // rax
  __int64 v5; // r12
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  _BOOL8 (__fastcall **v10)(__int64, int); // rbx
  const char *v11; // r9
  const char *v12; // r8
  const char *v13; // rdx
  _BOOL8 (__fastcall *v14)(__int64, int); // rax
  unsigned int v15; // r8d
  const char *v16; // rdx
  __int64 v17; // r9
  const char *v19; // rcx
  _BOOL8 (__fastcall *v20)(__int64, int); // rax
  const char *v21; // r8
  _BOOL8 (__fastcall *v22)(__int64, int); // rax
  const char *v23; // r8
  const char *v24; // rdx
  _BOOL8 (__fastcall *v25)(__int64, int); // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  _BOOL8 (__fastcall **v28)(__int64, int); // r12
  size_t v29; // rax
  size_t v30; // rbx
  void *v31; // rdi
  size_t v32; // r13
  int v33; // r13d
  int v34; // r13d
  __int64 v35; // [rsp+8h] [rbp-10A8h]
  int v36; // [rsp+14h] [rbp-109Ch]
  unsigned int v37; // [rsp+14h] [rbp-109Ch]
  unsigned int v38; // [rsp+28h] [rbp-1088h]
  unsigned int v39; // [rsp+28h] [rbp-1088h]
  _BOOL8 (__fastcall **v40)(__int64, int); // [rsp+28h] [rbp-1088h]
  __int64 v41; // [rsp+28h] [rbp-1088h]
  __int64 v42; // [rsp+28h] [rbp-1088h]
  unsigned int v43; // [rsp+28h] [rbp-1088h]
  unsigned int v44; // [rsp+28h] [rbp-1088h]
  unsigned int v45; // [rsp+28h] [rbp-1088h]
  __int64 v46; // [rsp+30h] [rbp-1080h] BYREF
  __int128 v47; // [rsp+38h] [rbp-1078h]
  __int64 v48; // [rsp+50h] [rbp-1060h] BYREF
  __int128 v49; // [rsp+58h] [rbp-1058h]
  _BYTE v50[4104]; // [rsp+70h] [rbp-1040h] BYREF
  unsigned __int64 v51; // [rsp+1078h] [rbp-38h]

  v1 = a1[130] == nullptr;
  v51 = __readfsqword(0x28u);
  if ( v1 || (unsigned __int64)a1[139] <= 3 )
    goto LABEL_28;
  v3 = a1[138];
  v46 = 0;
  v47 = 0;
  v46 = qvector_reserve(&v46, 0, 3, 1);
  *(_QWORD *)&v47 = 3;
  *(_WORD *)v46 = *(_WORD *)v3;
  *(_BYTE *)(v46 + 2) = 0;
  v4 = a1[139];
  if ( !v4 )
  {
    v48 = 0;
    v49 = 0;
LABEL_5:
    v5 = 6;
    v6 = 0;
    v7 = 7;
    v8 = 0;
LABEL_6:
    v48 = qvector_reserve(&v48, v6, v7, 1);
    v6 = v48;
    goto LABEL_7;
  }
  v26 = (unsigned __int64)v4 - 1;
  v27 = 2;
  v48 = 0;
  v28 = a1[138];
  v49 = 0;
  if ( v26 <= 2 )
    v27 = v26;
  v29 = v26 - v27;
  v30 = v29;
  if ( !v29 )
    goto LABEL_5;
  v31 = nullptr;
  v32 = v29 + 1;
  if ( v29 != -1 )
  {
    v48 = qvector_reserve(&v48, 0, v29 + 1, 1);
    v31 = (void *)v48;
  }
  *(_QWORD *)&v49 = v32;
  memmove(v31, (char *)v28 + v27, v30);
  *(_BYTE *)(v48 + v30) = 0;
  v6 = v48;
  if ( (_QWORD)v49 )
  {
    v5 = v49 + 5;
    v7 = v49 + 6;
    v8 = v49 - 1;
  }
  else
  {
    v8 = 0;
    v7 = 7;
    v5 = 6;
  }
  if ( *((_QWORD *)&v49 + 1) < v7 )
    goto LABEL_6;
LABEL_7:
  *(_QWORD *)&v49 = v7;
  *(_BYTE *)(v6 + v5) = 0;
  v9 = v8 + v48;
  *(_DWORD *)v9 = 1650811950;
  *(_WORD *)(v9 + 4) = 26485;
  v10 = a1[129];
  if ( !(24LL * (_QWORD)a1[130]) )
  {
LABEL_24:
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46);
    }
LABEL_28:
    if ( (unsigned __int64)a1[136] <= 1 )
      return 0;
    v16 = &s1;
    if ( a1[133] )
      v16 = (const char *)a1[132];
    if ( !(unsigned __int8)qdirname(v50, 4096, v16) )
      return 0;
    v19 = &s1;
    if ( a1[136] )
      v19 = (const char *)a1[135];
    qmakepath(a1 + 1, 1024, v50, v19, 0, v17);
    v20 = **a1;
    if ( v20 == sub_30A30 )
    {
      if ( (unsigned __int8)qfileexist(a1 + 1) )
      {
        v41 = open_linput(a1 + 1, 0);
        v33 = calc_file_crc32(v41);
        close_linput(v41);
        if ( v33 == *((_DWORD *)a1 + 282) )
        {
          sub_440F0(
            (__int64)a1,
            (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            (const char *)a1 + 8,
            1);
          return 1;
        }
      }
      sub_440F0(
        (__int64)a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        (const char *)a1 + 8,
        0);
    }
    else
    {
      v43 = v20((__int64)a1, 1);
      sub_440F0(
        (__int64)a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        (const char *)a1 + 8,
        v43);
      v15 = v43;
      if ( v43 )
        return v15;
    }
    v21 = &s1;
    if ( a1[136] )
      v21 = (const char *)a1[135];
    qmakepath(a1 + 1, 1024, v50, ".debug", v21, 0);
    v22 = **a1;
    if ( v22 == sub_30A30 )
    {
      if ( (unsigned __int8)qfileexist(a1 + 1) )
      {
        v42 = open_linput(a1 + 1, 0);
        v34 = calc_file_crc32(v42);
        close_linput(v42);
        if ( v34 == *((_DWORD *)a1 + 282) )
        {
LABEL_69:
          sub_440F0(
            (__int64)a1,
            (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            a1 + 1,
            1);
          return 1;
        }
      }
      sub_440F0(
        (__int64)a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        a1 + 1,
        0);
    }
    else
    {
      v45 = v22((__int64)a1, 1);
      sub_440F0(
        (__int64)a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        a1 + 1,
        v45);
      v15 = v45;
      if ( v45 )
        return v15;
    }
    v40 = a1[129];
    if ( 24LL * (_QWORD)a1[130] )
    {
      while ( 1 )
      {
        v23 = &s1;
        if ( a1[136] )
          v23 = (const char *)a1[135];
        v24 = &s1;
        if ( v40[1] )
          v24 = (const char *)*v40;
        qmakepath(a1 + 1, 1024, v24, v50, v23, 0);
        v25 = **a1;
        if ( v25 == sub_30A30 )
        {
          if ( (unsigned __int8)qfileexist(a1 + 1) )
          {
            v35 = open_linput(a1 + 1, 0);
            v36 = calc_file_crc32(v35);
            close_linput(v35);
            if ( v36 == *((_DWORD *)a1 + 282) )
              goto LABEL_69;
          }
          sub_440F0(
            (__int64)a1,
            (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            a1 + 1,
            0);
        }
        else
        {
          v37 = v25((__int64)a1, 1);
          sub_440F0(
            (__int64)a1,
            (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            a1 + 1,
            v37);
          v15 = v37;
          if ( v37 )
            return v15;
        }
        v40 += 3;
        if ( v40 == &a1[129][3 * (_QWORD)a1[130]] )
          return 0;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v11 = &s1;
    if ( (_QWORD)v49 )
      v11 = (const char *)v48;
    v12 = &s1;
    if ( (_QWORD)v47 )
      v12 = (const char *)v46;
    v13 = &s1;
    if ( v10[1] )
      v13 = (const char *)*v10;
    qmakepath(a1 + 1, 1024, v13, ".build-id", v12, v11);
    v14 = **a1;
    if ( v14 == sub_30A30 )
      break;
    v44 = v14((__int64)a1, 0);
    sub_440F0(
      (__int64)a1,
      (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      (const char *)a1 + 8,
      v44);
    v15 = v44;
    if ( v44 )
      goto LABEL_20;
LABEL_10:
    v10 += 3;
    if ( v10 == &a1[129][3 * (_QWORD)a1[130]] )
      goto LABEL_24;
  }
  if ( !(unsigned __int8)qfileexist(a1 + 1) )
  {
    sub_440F0(
      (__int64)a1,
      (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      (const char *)a1 + 8,
      0);
    goto LABEL_10;
  }
  sub_440F0(
    (__int64)a1,
    (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
    "BUILDID",
    (const char *)a1 + 8,
    1);
  v15 = 1;
LABEL_20:
  if ( v48 )
  {
    v38 = v15;
    *(_QWORD *)&v49 = 0;
    qfree(v48);
    v15 = v38;
  }
  if ( v46 )
  {
    v39 = v15;
    *(_QWORD *)&v47 = 0;
    qfree(v46);
    return v39;
  }
  return v15;
}
