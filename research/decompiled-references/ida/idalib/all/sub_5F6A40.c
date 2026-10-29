__int64 __fastcall sub_5F6A40(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebp
  int qerrno; // r13d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int16 v14; // ax
  const char *v16; // rax
  _BYTE *v17; // rax
  int inited; // eax
  void *ptr; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v20; // [rsp+8h] [rbp-1050h]
  _BYTE v21[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v22; // [rsp+1028h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 744) & 0x40) != 0 )
  {
    inited = lex_init_file(*(_QWORD *)(a1 + 240));
    if ( inited )
    {
      v10 = 1;
      sub_5F66F0(a1, inited);
      return v10;
    }
  }
  else
  {
    if ( (debug & 0x4000) != 0 )
      sub_3879F0();
    lex_init_string(*(_QWORD *)(a1 + 240), a2, 0);
  }
  v5 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 504) = 0;
  sub_7A04F0(v5, sub_5F0CE0);
  v6 = *(_DWORD *)(a1 + 744);
  if ( (v6 & 8) != 0 )
  {
    v16 = "h2til";
    if ( (v6 & 0x40) != 0 )
      v16 = (const char *)qbasename(a2);
    set_file_ext(v21, 4096, v16, "i");
    *(_QWORD *)(a1 + 504) = sub_83B580(v21);
  }
  v7 = sub_7A0500(*(_QWORD *)(a1 + 240), sub_5EE0C0);
  v8 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = v7;
  sub_7A0510(v8, sub_5E6370);
  v9 = *(_DWORD *)(a1 + 744);
  if ( (v9 & 1) != 0 )
  {
    lex_define_macro(*(_QWORD *)(a1 + 240), "__cplusplus", "1", 0, 0);
    v9 = *(_DWORD *)(a1 + 744);
  }
  v10 = v9 & 0x80;
  if ( (v9 & 0x80) != 0 )
  {
    v10 = sub_5EE0D0(a1, *(_QWORD *)(a1 + 248));
    v9 = *(_DWORD *)(a1 + 744);
  }
  *(_WORD *)(a1 + 64) = 2;
  while ( (v9 & 0x200) != 0 || (int)v10 <= 19 )
  {
    *(_DWORD *)(a1 + 740) = 0;
    *(_QWORD *)(a1 + 128) = 0;
    set_qerrno(0);
    *(_DWORD *)(a1 + 220) = a3;
    *(_DWORD *)(a1 + 216) = 0;
    if ( (unsigned __int8)basic_parser_parse_0(a1, 0) )
    {
      if ( *(_WORD *)(a1 + 64) != 1 )
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
        v12 = lex_print_token(&ptr, a1 + 40);
        set_error_string(0, v12);
        v13 = *(_QWORD *)(a1 + 128);
        if ( (v13 || (v13 = *(_QWORD *)(a1 + 136)) != 0 || (v13 = *(_QWORD *)(a1 + 120)) != 0)
          && (unsigned __int8)((*(_BYTE *)(v13 + 186) & 0xF) - 2) <= 5u
          && *(_WORD *)(a1 + 64) == 42 )
        {
          v17 = sub_5E1C70(*(_QWORD *)(a1 + 248), *(_BYTE **)v13, 1);
          set_error_string(0, v17);
          qerrno = set_qerrno(67);
        }
        if ( ptr )
        {
          *(_QWORD *)&v20 = 0;
          qfree(ptr);
        }
      }
      ++v10;
      sub_5F66F0(a1, qerrno);
      while ( 1 )
      {
        v14 = *(_WORD *)(a1 + 64);
        if ( v14 == 1 || v14 == 59 )
          break;
        if ( (unsigned int)sub_5E8BB0(a1) )
        {
          sub_5E7C70(a1);
          if ( *(_WORD *)(a1 + 64) != 1 )
            goto LABEL_12;
          return v10;
        }
      }
    }
    sub_5E7C70(a1);
    if ( *(_WORD *)(a1 + 64) == 1 )
      break;
LABEL_12:
    v9 = *(_DWORD *)(a1 + 744);
  }
  return v10;
}
