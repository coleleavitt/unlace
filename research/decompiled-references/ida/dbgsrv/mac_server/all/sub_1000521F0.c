/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000521F0
// Address: 0x00000001000521F0

//----- (00000001000521F0) ----------------------------------------------------
__int64 __fastcall sub_1000521F0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  _WORD *v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rcx
  bool v6; // cf
  unsigned __int64 v7; // rcx
  __int64 v8; // r13
  const char *v10; // r15
  unsigned __int64 v11; // rcx
  __int128 v12; // rax
  size_t v13; // r14
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r13
  char *v19; // r15
  const char *v20; // rdx
  const char *v21; // r8
  const char *v22; // r9
  bool v23; // bl
  bool v24; // zf
  char *v25; // rdx
  const char *v26; // rcx
  const char *v27; // r8
  __int64 v29; // r13
  const char *v30; // rdx
  const char *v31; // r8
  __int64 v32; // [rsp+8h] [rbp-458h]
  __int128 v33; // [rsp+10h] [rbp-450h] BYREF
  unsigned __int64 v34; // [rsp+20h] [rbp-440h]
  __int128 __dst; // [rsp+30h] [rbp-430h] BYREF
  __int64 v36; // [rsp+40h] [rbp-420h]

  v1 = (__int64)a1;
  LODWORD(v2) = 0;
  if ( !a1[130] || a1[139] < 4u )
    goto LABEL_62;
  v3 = (_WORD *)a1[138];
  __dst = 0;
  v36 = 0;
  *(_QWORD *)&__dst = qvector_reserve((__int64)&__dst, nullptr, 3u, 1u);
  *((_QWORD *)&__dst + 1) = 3;
  *(_WORD *)__dst = *v3;
  *(_BYTE *)(__dst + 2) = 0;
  v4 = 0;
  v5 = a1[139];
  v6 = v5 == 0;
  v7 = v5 - 1;
  if ( !v6 )
    v4 = v7;
  v8 = 2;
  if ( v4 < 2 )
    v8 = v4;
  if ( a1[139] )
    v10 = (const char *)a1[138];
  else
    v10 = _s1;
  v33 = 0;
  v34 = 0;
  v11 = 0;
  v12 = 0u;
  if ( v4 >= 3 )
  {
    v13 = v4 - v8;
    if ( v13 == -1 )
    {
      v14 = nullptr;
    }
    else
    {
      v14 = qvector_reserve((__int64)&v33, nullptr, v13 + 1, 1u);
      *(_QWORD *)&v33 = v14;
    }
    *((_QWORD *)&v33 + 1) = v13 + 1;
    memmove(v14, &v10[v8], v13);
    *(_BYTE *)(v33 + v13) = 0;
    v12 = v33;
    v11 = v34;
  }
  v32 = (__int64)a1;
  LODWORD(v2) = 0;
  v6 = *((_QWORD *)&v12 + 1) == 0;
  v15 = *((_QWORD *)&v12 + 1) - 1LL;
  v16 = 0;
  if ( !v6 )
    v16 = v15;
  if ( v11 < v16 + 7 )
  {
    *(_QWORD *)&v12 = qvector_reserve((__int64)&v33, (void *)v12, v16 + 7, 1u);
    *(_QWORD *)&v33 = v12;
  }
  *((_QWORD *)&v33 + 1) = v16 + 7;
  *(_BYTE *)(v12 + v16 + 6) = 0;
  v17 = v33;
  *(_WORD *)(v33 + v16 + 4) = 26485;
  *(_DWORD *)(v17 + v16) = 1650811950;
  if ( 24LL * *(_QWORD *)(v32 + 1040) )
  {
    v18 = *(_QWORD *)(v32 + 1032);
    v19 = (char *)(v32 + 8);
    while ( 1 )
    {
      v20 = _s1;
      if ( *(_QWORD *)(v18 + 8) )
        v20 = *(const char **)v18;
      v21 = _s1;
      if ( *((_QWORD *)&__dst + 1) )
        v21 = (const char *)__dst;
      v22 = _s1;
      if ( *((_QWORD *)&v33 + 1) )
        v22 = (const char *)v33;
      qmakepath(v19, 1024, (__int64)v20, ".build-id", v21, v22, 0);
      v2 = (**(unsigned int (__fastcall ***)(__int64, _QWORD))v32)(v32, 0);
      sub_10005CF20(
        v32,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "BUILDID",
        v19,
        v2);
      v23 = (_DWORD)v2 == 0;
      if ( (_DWORD)v2 )
        break;
      v18 += 24;
      if ( v18 == *(_QWORD *)(v32 + 1032) + 24LL * *(_QWORD *)(v32 + 1040) )
      {
        LODWORD(v2) = 0;
        break;
      }
    }
  }
  else
  {
    v23 = 1;
  }
  if ( (_QWORD)v33 )
  {
    *((_QWORD *)&v33 + 1) = 0;
    qfree((void *)v33);
  }
  if ( (_QWORD)__dst )
  {
    *((_QWORD *)&__dst + 1) = 0;
    qfree((void *)__dst);
  }
  v24 = !v23;
  v1 = v32;
  if ( !v24 )
  {
LABEL_62:
    if ( *(_QWORD *)(v1 + 1088) >= 2u )
    {
      v25 = *(_QWORD *)(v1 + 1064) ? *(char **)(v1 + 1056) : (char *)_s1;
      if ( (unsigned __int8)qdirname((char *)&__dst, 0x400u, v25) )
      {
        v26 = *(_QWORD *)(v1 + 1088) ? *(const char **)(v1 + 1080) : _s1;
        qmakepath((char *)(v1 + 8), 1024, (__int64)&__dst, v26, 0);
        v2 = (**(unsigned int (__fastcall ***)(__int64, __int64))v1)(v1, 1);
        sub_10005CF20(
          v1,
          (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
          "DEBUGLINK",
          v1 + 8,
          v2);
        if ( !(_DWORD)v2 )
        {
          v27 = *(_QWORD *)(v1 + 1088) ? *(const char **)(v1 + 1080) : _s1;
          qmakepath((char *)(v1 + 8), 1024, (__int64)&__dst, ".debug", v27, 0);
          v2 = (**(unsigned int (__fastcall ***)(__int64, __int64))v1)(v1, 1);
          sub_10005CF20(
            v1,
            (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            v1 + 8,
            v2);
          if ( !(_DWORD)v2 )
          {
            if ( 24LL * *(_QWORD *)(v1 + 1040) )
            {
              v29 = *(_QWORD *)(v1 + 1032);
              do
              {
                v30 = _s1;
                if ( *(_QWORD *)(v29 + 8) )
                  v30 = *(const char **)v29;
                v31 = _s1;
                if ( *(_QWORD *)(v1 + 1088) )
                  v31 = *(const char **)(v1 + 1080);
                qmakepath((char *)(v1 + 8), 1024, (__int64)v30, &__dst, v31, 0);
                v2 = (**(unsigned int (__fastcall ***)(__int64, __int64))v1)(v1, 1);
                sub_10005CF20(
                  v1,
                  (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
                  "DEBUGLINK",
                  v1 + 8,
                  v2);
                if ( (_DWORD)v2 )
                  break;
                v29 += 24;
                LODWORD(v2) = 0;
              }
              while ( v29 != *(_QWORD *)(v1 + 1032) + 24LL * *(_QWORD *)(v1 + 1040) );
            }
            else
            {
              LODWORD(v2) = 0;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
