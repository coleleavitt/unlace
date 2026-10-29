/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047DC0
// Address: 0x0000000140047DC0

//----- (0000000140047DC0) ----------------------------------------------------
__int64 __fastcall sub_140047DC0(__int64 a1)
{
  unsigned int v2; // esi
  const char *v3; // r12
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  const char *v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  size_t v10; // rdi
  void *v11; // rax
  size_t v12; // rcx
  unsigned __int64 v13; // rdx
  size_t v14; // rdi
  __int64 v15; // rdi
  const char *v16; // rax
  const char *v17; // rcx
  char *v18; // r8
  __m128i *v19; // r8
  const char *v20; // r9
  unsigned int v21; // edi
  const char *v22; // rax
  __int64 v23; // rdi
  const char *v24; // rax
  char *v25; // r8
  void *Block; // [rsp+40h] [rbp-C0h] BYREF
  size_t v28; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v29; // [rsp+50h] [rbp-B0h]
  void *v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __m128i v33[17]; // [rsp+80h] [rbp-80h] BYREF

  v2 = 0;
  v3 = Str1;
  if ( *(_QWORD *)(a1 + 1040) )
  {
    v4 = *(_QWORD *)(a1 + 1112);
    v5 = v4 - 1;
    if ( !v4 )
      v5 = 0;
    if ( v5 > 2 )
    {
      v6 = 2;
      v7 = Str1;
      if ( v4 )
        v7 = *(const char **)(a1 + 1104);
      v30 = nullptr;
      v31 = 0;
      v32 = 0;
      v30 = sub_14005ABE0((__int64)&v30, nullptr, 3u, 1u);
      v31 = 3;
      memcpy(v30, v7, 2u);
      *((_BYTE *)v30 + 2) = 0;
      v8 = *(_QWORD *)(a1 + 1112);
      v9 = v8 - 1;
      if ( !v8 )
        v9 = 0;
      if ( v9 == -1 )
      {
        v9 = -1;
      }
      else if ( v9 <= 2 )
      {
        v6 = v9;
      }
      if ( v8 )
        v3 = *(const char **)(a1 + 1104);
      v10 = v9 - v6;
      v11 = nullptr;
      Block = nullptr;
      v12 = 0;
      v28 = 0;
      v13 = 0;
      v29 = 0;
      if ( v10 )
      {
        if ( v10 != -1 )
        {
          v11 = sub_14005ABE0((__int64)&Block, nullptr, v10 + 1, 1u);
          Block = v11;
        }
        v28 = v10 + 1;
        memcpy(v11, &v3[v6], v10);
        *((_BYTE *)Block + v10) = 0;
        v13 = v29;
        v12 = v28;
        v11 = Block;
      }
      v14 = v12 - 1;
      if ( !v12 )
        v14 = 0;
      if ( v14 + 7 > v13 )
      {
        v11 = sub_14005ABE0((__int64)&Block, v11, v14 + 7, 1u);
        Block = v11;
      }
      v28 = v14 + 7;
      *((_BYTE *)v11 + v14 + 6) = 0;
      memcpy((char *)Block + v14, ".debug", 6u);
      v15 = *(_QWORD *)(a1 + 1032);
      if ( v15 != v15 + 24LL * *(_QWORD *)(a1 + 1040) )
      {
        while ( 1 )
        {
          v16 = Str1;
          if ( v28 )
            v16 = (const char *)Block;
          v17 = Str1;
          if ( v31 )
            v17 = (const char *)v30;
          v18 = (char *)Str1;
          if ( *(_QWORD *)(v15 + 8) )
            v18 = *(char **)v15;
          sub_14005DE20((__int8 *)(a1 + 8), 1024, v18, ".build-id", v17, v16, 0);
          v2 = (**(__int64 (__fastcall ***)(__int64, _QWORD))a1)(a1, 0);
          sub_140048700(
            a1,
            (struct __crt_locale_pointers *)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "BUILDID",
            (const char *)(a1 + 8),
            v2);
          if ( v2 )
            break;
          v15 += 24;
          if ( v15 == *(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040) )
            goto LABEL_32;
        }
        if ( Block )
        {
          v28 = 0;
          j_free(Block);
          Block = nullptr;
          v29 = 0;
        }
        if ( v30 )
        {
          v31 = 0;
          j_free(v30);
        }
        return v2;
      }
LABEL_32:
      if ( Block )
      {
        v28 = 0;
        j_free(Block);
        Block = nullptr;
        v29 = 0;
      }
      if ( v30 )
      {
        v31 = 0;
        j_free(v30);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 1088) <= 1u )
    return v2;
  v19 = (__m128i *)Str1;
  if ( *(_QWORD *)(a1 + 1064) )
    v19 = *(__m128i **)(a1 + 1056);
  if ( !sub_14005DA20(v33, 0x104u, v19) )
    return v2;
  v20 = Str1;
  if ( *(_QWORD *)(a1 + 1088) )
    v20 = *(const char **)(a1 + 1080);
  sub_14005DE20((__int8 *)(a1 + 8), 1024, v33[0].m128i_i8, v20, 0);
  v21 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
  sub_140048700(
    a1,
    (struct __crt_locale_pointers *)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
    "DEBUGLINK",
    (const char *)(a1 + 8),
    v21);
  if ( !v21 )
  {
    v22 = Str1;
    if ( *(_QWORD *)(a1 + 1088) )
      v22 = *(const char **)(a1 + 1080);
    sub_14005DE20((__int8 *)(a1 + 8), 1024, v33[0].m128i_i8, ".debug", v22, 0);
    v2 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
    sub_140048700(
      a1,
      (struct __crt_locale_pointers *)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "DEBUGLINK",
      (const char *)(a1 + 8),
      v2);
    if ( !v2 )
    {
      v23 = *(_QWORD *)(a1 + 1032);
      if ( v23 != v23 + 24LL * *(_QWORD *)(a1 + 1040) )
      {
        do
        {
          v24 = Str1;
          if ( *(_QWORD *)(a1 + 1088) )
            v24 = *(const char **)(a1 + 1080);
          v25 = (char *)Str1;
          if ( *(_QWORD *)(v23 + 8) )
            v25 = *(char **)v23;
          sub_14005DE20((__int8 *)(a1 + 8), 1024, v25, v33, v24, 0);
          v2 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
          sub_140048700(
            a1,
            (struct __crt_locale_pointers *)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            (const char *)(a1 + 8),
            v2);
          if ( v2 )
            break;
          v23 += 24;
        }
        while ( v23 != *(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040) );
      }
    }
    return v2;
  }
  return v21;
}
