// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_EF8F0(__int64 a1, char *a2, int a3, __int64 a4)
{
  const char *file_ext; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  _QWORD *v10; // r12
  const char **v11; // rbp
  const char *v12; // r15
  size_t v13; // r14
  size_t v14; // r14
  size_t v15; // r9
  __int64 v16; // r8
  size_t v17; // r10
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rsi
  char *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+0h] [rbp-1128h]
  char v31; // [rsp+8h] [rbp-1120h]
  size_t v32; // [rsp+8h] [rbp-1120h]
  __int64 v33; // [rsp+18h] [rbp-1110h]
  __int64 v34; // [rsp+30h] [rbp-10F8h]
  __int128 v35; // [rsp+38h] [rbp-10F0h]
  void *src; // [rsp+50h] [rbp-10D8h]
  size_t v37; // [rsp+58h] [rbp-10D0h]
  char v38; // [rsp+E0h] [rbp-1048h] BYREF
  unsigned __int64 v39; // [rsp+10E8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  file_ext = (const char *)get_file_ext();
  if ( file_ext && !strcmp(file_ext, "i64") )
  {
    a2 = &v38;
    getinf_buf();
  }
  v8 = parse_dbgopts();
  if ( !(_BYTE)v8 )
  {
    sub_92200((__int64)"Invalid -r switch, could not parse", a1);
    return 0;
  }
  v31 = 0;
  v9 = sub_BF800((char *)s1, 0);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL) )
      goto LABEL_51;
  }
  else
  {
    v27 = sub_BF800((char *)s1, 1);
    v10 = (_QWORD *)v27;
    if ( !v27 )
    {
      if ( sub_BF800((char *)s1, 0) )
        sub_92200(
          (__int64)"Could not find the remote debugger '%s'\n"
                   "If you wanted to use local debugger, please remove the hostname",
          s1);
      else
        sub_92200((__int64)"Could not find debugger '%s'", s1);
      return 0;
    }
    v28 = *(_QWORD *)(v27 + 8);
    if ( (*(_WORD *)(v28 + 32) & 0x2002) == 0 )
    {
      sub_92200(
        (__int64)"Could not find the local debugger '%s'\n"
                 "If you wanted to use remote debugger, please specify the hostname",
        s1);
      return 0;
    }
    v31 = v8;
    if ( !*(_QWORD *)(v28 + 24) )
    {
      sub_E7590(a2, "Path", 0);
      goto LABEL_42;
    }
  }
  if ( !(unsigned __int8)set_processor_type() )
    return 0;
LABEL_51:
  sub_E7590(a2, "Path", 0);
  if ( !v31 )
  {
    if ( a3 <= 1 )
      goto LABEL_31;
LABEL_10:
    v11 = (const char **)(a4 + 8);
    v34 = 0;
    v35 = 0;
    v30 = a4 + 8LL * (unsigned int)(a3 - 2) + 16;
    while ( 1 )
    {
      v12 = *v11;
      src = nullptr;
      v37 = 0;
      if ( *v11 )
      {
        v13 = strlen(v12);
        src = (void *)qvector_reserve();
        v37 = v13 + 1;
        memmove(src, v12, v13);
        *((_BYTE *)src + v13) = 0;
      }
      quote_cmdline_arg();
      v14 = v37;
      if ( v37 )
      {
        v15 = v37 - 1;
        if ( v37 != 1 )
        {
          v16 = v35;
          v17 = v37 - 1;
          if ( (_QWORD)v35 )
          {
            v16 = v35 - 1;
            v17 = v15 + v35 - 1;
            v14 = v37 + v35 - 1;
          }
          v18 = v34;
          if ( v14 )
          {
            v33 = v16;
            v32 = v17;
            v34 = qvector_reserve();
            v16 = v33;
            v18 = v34;
            v15 = v37 - 1;
            v17 = v32;
          }
          *(_QWORD *)&v35 = v14;
          *(_BYTE *)(v18 + v17) = 0;
          memcpy((void *)(v16 + v34), src, v15);
        }
      }
      if ( src )
        qfree();
      v19 = v35;
      if ( (const char **)v30 == ++v11 )
        break;
      if ( (unsigned __int64)v35 > 1 )
      {
        v20 = v34;
        if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
        {
          v34 = qvector_reserve();
          v20 = v34;
        }
        *(_QWORD *)&v35 = v35 + 1;
        *(_BYTE *)(v20 + v19 - 1) = 32;
        *(_BYTE *)(v34 + v19) = 0;
      }
    }
    v21 = (char *)s1;
    if ( (_QWORD)v35 )
      v21 = (char *)v34;
    sub_E7590(v21, "Parameters", 0);
    if ( v34 )
      qfree();
    goto LABEL_31;
  }
LABEL_42:
  sub_E7B80(s1, s1, 0);
  if ( a3 > 1 )
    goto LABEL_10;
LABEL_31:
  sub_E7D10(v10, 1, v22, v23, v24, v25);
  byte_252751 = 1;
  if ( (unsigned int)sub_EDA00(-1) == 1 )
  {
    do
      v26 = sub_E2CA0(256);
    while ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 1
         && dword_25274C > 0
         && !qword_252278
         && byte_2526BA != 1
         && v26 != -1 );
  }
  else
  {
    sub_BB740(-1, 1);
    v8 = 0;
  }
  byte_252751 = 0;
  return v8;
}

