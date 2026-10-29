unsigned __int64 sub_78E3C0()
{
  __int64 v0; // rax
  _QWORD *v1; // rbx
  __int64 lexer; // rax
  __int64 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // rdi
  void *ptr; // [rsp+0h] [rbp-1048h] BYREF
  __int128 v9; // [rsp+8h] [rbp-1040h]
  _BYTE v10[4104]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v11; // [rsp+1028h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  qatexit(sub_78E7B0);
  qword_2CD4690 = (void *)qmutex_create();
  v0 = qmutex_create();
  qword_2CD4560 = v0;
  if ( !qword_2CD4690 || !v0 )
  {
    if ( !under_debugger )
      interr(486);
LABEL_17:
    BUG();
  }
  v1 = (_QWORD *)sub_78C130();
  lexer = create_lexer(0, 0, 0, 0);
  v1[4] = lexer;
  sub_7A04F0(lexer, sub_7840D0);
  v1[6] = unk_2C7C620;
  v1[5] = off_2C7C628;
  add_idc_class("object", 0);
  add_idc_class("typeinfo", 0);
  add_idc_class("exception", 0);
  if ( off_2C7C640 )
    off_2C7C640();
  if ( unk_2C81928 )
  {
    v3 = off_2C81CA0();
    v4 = sub_7A0100(v3, v10, 4096, "idc.idc", 0, 0);
    if ( v4 )
    {
      ptr = nullptr;
      v9 = 0;
      if ( !(unsigned __int8)compile_idc_file(v4, &ptr, 0) )
        sub_378D50();
      v5 = sub_7A78A0(v1[4]);
      v6 = ptr;
      v1[3] = v5;
      if ( v6 )
      {
        *(_QWORD *)&v9 = 0;
        qfree(v6);
      }
    }
  }
  if ( (unsigned int)install_extlang((__int64)&unk_2C81C20) )
  {
    if ( !under_debugger )
      interr(1447);
    goto LABEL_17;
  }
  return v11 - __readfsqword(0x28u);
}
