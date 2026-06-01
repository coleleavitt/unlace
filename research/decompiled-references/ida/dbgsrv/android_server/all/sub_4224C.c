/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4224C
// Address: 0x000000000004224C

//----- (000000000004224C) ----------------------------------------------------
__int64 __fastcall sub_4224C(__int64 a1)
{
  __int64 v2; // x8
  unsigned int v3; // w20
  __int64 v4; // x10
  unsigned __int64 v5; // x8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v8; // x0
  __int64 align; // x1
  size_t v10; // x20
  __int64 v11; // x22
  __int64 v12; // x23
  unsigned __int64 v13; // x21
  _QWORD *v14; // x27
  char *v15; // x2
  struct __pthread_internal_list *v16; // x4
  char *v17; // x5
  char v18; // w21
  void *v19; // x0
  struct __pthread_internal_list *prev; // x0
  char *v21; // x2
  char *v22; // x3
  char *v23; // x4
  __int64 v25; // x24
  char *v26; // x2
  char *v27; // x4
  pthread_mutex_t ptr; // [xsp+10h] [xbp-1080h] BYREF
  __int64 v29; // [xsp+38h] [xbp-1058h]
  __int64 v30; // [xsp+1028h] [xbp-68h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_QWORD *)(a1 + 1040) )
  {
    v3 = 0;
    goto LABEL_39;
  }
  v2 = *(_QWORD *)(a1 + 1112);
  v3 = 0;
  if ( (unsigned __int64)(v2 - 1) < 3 || !v2 )
    goto LABEL_39;
  sub_4968C((pthread_mutex_t *)(&ptr.__align + 3), *(const void **)(a1 + 1104), 2u);
  v4 = *(_QWORD *)(a1 + 1112);
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  if ( v5 >= 2 )
    v6 = 2;
  else
    v6 = v5;
  if ( v4 )
    v7 = *(char **)(a1 + 1104);
  else
    v7 = &byte_F154B;
  sub_4968C(&ptr, &v7[v6], v5 - v6);
  v8 = __strlen_chk(".debug", 7);
  align = ptr.__align;
  v10 = v8;
  if ( *(&ptr.__align + 1) )
    v11 = *(&ptr.__align + 1) - 1;
  else
    v11 = 0;
  v12 = v11 + v8;
  v13 = v11 + v8 + 1;
  if ( *(&ptr.__align + 2) < v13 )
  {
    align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v13, 1u);
    ptr.__align = align;
  }
  *(&ptr.__align + 1) = v13;
  *(_BYTE *)(align + v12) = 0;
  memmove((void *)(ptr.__align + v11), ".debug", v10);
  if ( !(24LL * *(_QWORD *)(a1 + 1040)) )
  {
LABEL_32:
    v3 = 0;
    v18 = 1;
    v19 = (void *)ptr.__align;
    if ( ptr.__align )
      goto LABEL_37;
LABEL_33:
    prev = ptr.__list.__prev;
    if ( ptr.__list.__prev )
      goto LABEL_38;
LABEL_34:
    if ( (v18 & 1) == 0 )
      return v3;
    goto LABEL_39;
  }
  v14 = *(_QWORD **)(a1 + 1032);
  while ( 1 )
  {
    v15 = v14[1] ? (char *)*v14 : &byte_F154B;
    v16 = ptr.__list.__next ? ptr.__list.__prev : (struct __pthread_internal_list *)&byte_F154B;
    v17 = *(&ptr.__align + 1) ? (char *)ptr.__align : &byte_F154B;
    qmakepath(a1 + 8, 0x400u, v15, ".build-id", v16, v17, 0);
    v3 = (**(__int64 (__fastcall ***)(__int64, _QWORD))a1)(a1, 0);
    sub_4972C(
      a1,
      (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      (const char *)(a1 + 8),
      v3);
    if ( v3 )
      break;
    v14 += 3;
    if ( v14 == (_QWORD *)(*(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040)) )
      goto LABEL_32;
  }
  v18 = 0;
  v19 = (void *)ptr.__align;
  if ( !ptr.__align )
    goto LABEL_33;
LABEL_37:
  *(&ptr.__align + 1) = 0;
  qfree(v19);
  ptr.__align = 0;
  *(&ptr.__align + 2) = 0;
  prev = ptr.__list.__prev;
  if ( !ptr.__list.__prev )
    goto LABEL_34;
LABEL_38:
  ptr.__list.__next = nullptr;
  qfree(prev);
  ptr.__list.__prev = nullptr;
  v29 = 0;
  if ( (v18 & 1) == 0 )
    return v3;
LABEL_39:
  if ( *(_QWORD *)(a1 + 1088) >= 2u )
  {
    v21 = *(_QWORD *)(a1 + 1064) ? *(char **)(a1 + 1056) : &byte_F154B;
    if ( (qdirname(&ptr.__size[24], 0x1000u, v21) & 1) != 0 )
    {
      v22 = *(_QWORD *)(a1 + 1088) ? *(char **)(a1 + 1080) : &byte_F154B;
      qmakepath(a1 + 8, 0x400u, &ptr.__size[24], v22, 0);
      v3 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
      sub_4972C(
        a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        (const char *)(a1 + 8),
        v3);
      if ( !v3 )
      {
        v23 = *(_QWORD *)(a1 + 1088) ? *(char **)(a1 + 1080) : &byte_F154B;
        qmakepath(a1 + 8, 0x400u, &ptr.__size[24], ".debug", v23, 0);
        v3 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
        sub_4972C(
          a1,
          (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
          "DEBUGLINK",
          (const char *)(a1 + 8),
          v3);
        if ( !v3 )
        {
          if ( !(24LL * *(_QWORD *)(a1 + 1040)) )
            return 0;
          v25 = *(_QWORD *)(a1 + 1032);
          while ( 1 )
          {
            if ( *(_QWORD *)(v25 + 8) )
            {
              v26 = *(char **)v25;
              if ( *(_QWORD *)(a1 + 1088) )
                goto LABEL_57;
            }
            else
            {
              v26 = &byte_F154B;
              if ( *(_QWORD *)(a1 + 1088) )
              {
LABEL_57:
                v27 = *(char **)(a1 + 1080);
                goto LABEL_60;
              }
            }
            v27 = &byte_F154B;
LABEL_60:
            qmakepath(a1 + 8, 0x400u, v26, &ptr.__align + 3, v27, 0);
            v3 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
            sub_4972C(
              a1,
              (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
              "DEBUGLINK",
              (const char *)(a1 + 8),
              v3);
            if ( !v3 )
            {
              v25 += 24;
              if ( v25 != *(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040) )
                continue;
            }
            return v3;
          }
        }
      }
    }
  }
  return v3;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
