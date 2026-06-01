/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_421F0
// Address: 0x00000000000421F0

//----- (00000000000421F0) ----------------------------------------------------
__int64 __fastcall sub_421F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  const char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  size_t v7; // r14
  __int64 v8; // rbp
  void *v9; // rax
  char v10; // bl
  __int64 v11; // r14
  const char *v12; // rdx
  const char *v13; // r8
  const char *v14; // r9
  const char *v15; // rdx
  const char *v16; // rcx
  const char *v17; // r8
  __int64 v19; // r12
  const char *v20; // rdx
  const char *v21; // r8
  void *ptr; // [rsp+8h] [rbp-1050h] BYREF
  __int64 v23; // [rsp+10h] [rbp-1048h]
  unsigned __int64 v24; // [rsp+18h] [rbp-1040h]
  void *dest; // [rsp+20h] [rbp-1038h] BYREF
  __int64 v26; // [rsp+28h] [rbp-1030h]
  __int64 v27; // [rsp+30h] [rbp-1028h]
  unsigned __int64 v28; // [rsp+1020h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  LODWORD(v1) = 0;
  if ( !*(_QWORD *)(a1 + 1040) )
    goto LABEL_57;
  v2 = *(_QWORD *)(a1 + 1112);
  if ( (unsigned __int64)(v2 - 1) < 3 || !v2 )
    goto LABEL_57;
  v3 = s1;
  v4 = 2;
  sub_4ABC0((__int64)&dest, *(const void **)(a1 + 1104), 2u);
  v5 = *(_QWORD *)(a1 + 1112);
  v6 = v5 - 1;
  if ( !v5 )
    v6 = 0;
  if ( v6 < 2 )
    v4 = v6;
  if ( v5 )
    v3 = *(const char **)(a1 + 1104);
  sub_4ABC0((__int64)&ptr, &v3[v4], v6 - v4);
  v7 = __strlen_chk(".debug", 7);
  v8 = v23 - 1;
  if ( !v23 )
    v8 = 0;
  v9 = ptr;
  if ( v24 < v7 + v8 + 1 )
  {
    v9 = qvector_reserve((__int64)&ptr, (char *)ptr, v7 + v8 + 1, 1u);
    ptr = v9;
  }
  v23 = v7 + v8 + 1;
  *((_BYTE *)v9 + v8 + v7) = 0;
  memmove((char *)ptr + v8, ".debug", v7);
  v10 = 1;
  if ( 24LL * *(_QWORD *)(a1 + 1040) )
  {
    v11 = *(_QWORD *)(a1 + 1032);
    while ( 1 )
    {
      v12 = s1;
      if ( *(_QWORD *)(v11 + 8) )
        v12 = *(const char **)v11;
      v13 = s1;
      if ( v26 )
        v13 = (const char *)dest;
      v14 = s1;
      if ( v23 )
        v14 = (const char *)ptr;
      qmakepath((char *)(a1 + 8), 1024, v12, ".build-id", v13, v14, 0);
      v1 = (**(unsigned int (__fastcall ***)(__int64, _QWORD))a1)(a1, 0);
      sub_4AC70(
        a1,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "BUILDID",
        a1 + 8,
        v1);
      if ( (_DWORD)v1 )
        break;
      v11 += 24;
      if ( v11 == *(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040) )
      {
        LODWORD(v1) = 0;
        v10 = 1;
        goto LABEL_27;
      }
    }
    v10 = 0;
  }
  else
  {
    LODWORD(v1) = 0;
  }
LABEL_27:
  if ( ptr )
  {
    v23 = 0;
    qfree(ptr);
    ptr = nullptr;
    v24 = 0;
  }
  if ( dest )
  {
    v26 = 0;
    qfree(dest);
    dest = nullptr;
    v27 = 0;
  }
  if ( v10 )
  {
LABEL_57:
    if ( *(_QWORD *)(a1 + 1088) >= 2u )
    {
      v15 = *(_QWORD *)(a1 + 1064) ? *(const char **)(a1 + 1056) : s1;
      if ( (unsigned __int8)qdirname((char *)&dest, 0x1000u, v15) )
      {
        v16 = *(_QWORD *)(a1 + 1088) ? *(const char **)(a1 + 1080) : s1;
        qmakepath((char *)(a1 + 8), 1024, (const char *)&dest, v16, 0);
        v1 = (**(unsigned int (__fastcall ***)(__int64, __int64))a1)(a1, 1);
        sub_4AC70(
          a1,
          (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
          "DEBUGLINK",
          a1 + 8,
          v1);
        if ( !(_DWORD)v1 )
        {
          v17 = *(_QWORD *)(a1 + 1088) ? *(const char **)(a1 + 1080) : s1;
          qmakepath((char *)(a1 + 8), 1024, (const char *)&dest, ".debug", v17, 0);
          v1 = (**(unsigned int (__fastcall ***)(__int64, __int64))a1)(a1, 1);
          sub_4AC70(
            a1,
            (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            a1 + 8,
            v1);
          if ( !(_DWORD)v1 )
          {
            LODWORD(v1) = 0;
            if ( 24LL * *(_QWORD *)(a1 + 1040) )
            {
              v19 = *(_QWORD *)(a1 + 1032);
              do
              {
                v20 = s1;
                if ( *(_QWORD *)(v19 + 8) )
                  v20 = *(const char **)v19;
                v21 = s1;
                if ( *(_QWORD *)(a1 + 1088) )
                  v21 = *(const char **)(a1 + 1080);
                qmakepath((char *)(a1 + 8), 1024, v20, &dest, v21, 0);
                v1 = (**(unsigned int (__fastcall ***)(__int64, __int64))a1)(a1, 1);
                sub_4AC70(
                  a1,
                  (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
                  "DEBUGLINK",
                  a1 + 8,
                  v1);
                if ( (_DWORD)v1 )
                  break;
                v19 += 24;
                LODWORD(v1) = 0;
              }
              while ( v19 != *(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040) );
            }
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
// 4224D: conditional instruction was optimized away because rax.8>=4u
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
