__int64 __fastcall sub_5DABA0(__m128i *a1, __int64 a2, __int32 a3)
{
  __int64 v5; // rdi
  __int32 v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int32 v10; // eax
  unsigned int v11; // ebp
  unsigned int qerrno; // r13d
  __int64 v13; // rdx
  __int16 v14; // ax
  const char *v16; // rax
  _BYTE *v17; // rsi
  int inited; // eax
  void *ptr; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v20; // [rsp+8h] [rbp-1050h]
  _BYTE v21[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v22; // [rsp+1028h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( (a1[45].m128i_i8[8] & 0x40) != 0 )
  {
    inited = lex_init_file(a1[14].m128i_i64[1]);
    if ( inited )
    {
      v11 = 1;
      sub_5DA850((__int64)a1, inited);
      return v11;
    }
  }
  else
  {
    if ( (debug & 0x4000) != 0 )
      sub_383DA0();
    lex_init_string(a1[14].m128i_i64[1], a2, 0);
  }
  v5 = a1[14].m128i_i64[1];
  a1[31].m128i_i64[0] = 0;
  sub_7801F0(v5, sub_5D4EC0);
  v6 = a1[45].m128i_i32[2];
  if ( (v6 & 8) != 0 )
  {
    v16 = "h2til";
    if ( (v6 & 0x40) != 0 )
      v16 = (const char *)qbasename(a2);
    set_file_ext(v21, 4096, v16, "i");
    a1[31].m128i_i64[0] = sub_8181C0(v21);
  }
  v7 = sub_780200(a1[14].m128i_i64[1], sub_5D22A0);
  v8 = a1[14].m128i_i64[1];
  v9 = (__int64)sub_5CA5D0;
  a1[14].m128i_i64[0] = v7;
  sub_780210(v8, sub_5CA5D0);
  v10 = a1[45].m128i_i32[2];
  if ( (v10 & 1) != 0 )
  {
    v9 = (__int64)"__cplusplus";
    lex_define_macro(a1[14].m128i_i64[1], "__cplusplus", "1", 0, 0);
    v10 = a1[45].m128i_i32[2];
  }
  v11 = v10 & 0x80;
  if ( (v10 & 0x80) != 0 )
  {
    v9 = a1[15].m128i_i64[0];
    v11 = sub_5D22B0((__int64)a1, v9);
    v10 = a1[45].m128i_i32[2];
  }
  a1[4].m128i_i16[0] = 2;
  while ( (v10 & 0x200) != 0 || (int)v11 <= 19 )
  {
    a1[45].m128i_i32[1] = 0;
    a1[7].m128i_i64[1] = 0;
    set_qerrno(0, v9);
    a1[13].m128i_i32[1] = a3;
    v9 = 0;
    a1[13].m128i_i32[0] = 0;
    if ( (unsigned __int8)basic_parser_parse_0(a1, 0) )
    {
      if ( a1[4].m128i_i16[0] != 1 )
      {
        if ( !under_debugger )
          interr(476);
        BUG();
      }
    }
    else
    {
      qerrno = get_qerrno();
      if ( qerrno == 47 )
      {
        ptr = nullptr;
        v20 = 0;
        lex_print_token(&ptr, &a1[2].m128i_u64[1]);
        set_error_string();
        v13 = a1[7].m128i_i64[1];
        if ( (v13 || (v13 = a1[8].m128i_i64[0]) != 0 || (v13 = a1[7].m128i_i64[0]) != 0)
          && (unsigned __int8)((*(_BYTE *)(v13 + 186) & 0xF) - 2) <= 5u
          && a1[4].m128i_i16[0] == 42 )
        {
          v17 = sub_5C5F70(a1[15].m128i_i64[0], *(_BYTE **)v13, 1);
          set_error_string();
          qerrno = set_qerrno(67, v17);
        }
        if ( ptr )
        {
          *(_QWORD *)&v20 = 0;
          qfree(ptr);
        }
      }
      v9 = qerrno;
      ++v11;
      sub_5DA850((__int64)a1, qerrno);
      while ( 1 )
      {
        v14 = a1[4].m128i_i16[0];
        if ( v14 == 1 || v14 == 59 )
          break;
        if ( (unsigned int)sub_5CCDC0(a1, (const char *)qerrno) )
        {
          sub_5CBE90((__int64)a1);
          if ( a1[4].m128i_i16[0] != 1 )
            goto LABEL_12;
          return v11;
        }
      }
    }
    sub_5CBE90((__int64)a1);
    if ( a1[4].m128i_i16[0] == 1 )
      break;
LABEL_12:
    v10 = a1[45].m128i_i32[2];
  }
  return v11;
}

