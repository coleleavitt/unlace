unsigned __int64 sub_76DF80()
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
  qatexit(sub_76E370);
  qword_2CAA770 = (void *)qmutex_create();
  v0 = qmutex_create();
  qword_2CAA640 = v0;
  if ( !qword_2CAA770 || !v0 )
  {
    if ( !under_debugger )
      interr(486);
LABEL_17:
    BUG();
  }
  v1 = (_QWORD *)sub_76BCD0();
  lexer = create_lexer(0, 0, 0, 0);
  v1[4] = lexer;
  sub_7801F0(lexer, sub_763C90);
  v1[6] = unk_2C52600;
  v1[5] = off_2C52608;
  add_idc_class("object", 0);
  add_idc_class("typeinfo", 0);
  add_idc_class("exception", 0);
  if ( off_2C52620 )
    off_2C52620();
  if ( unk_2C57908 )
  {
    v3 = off_2C57DA0();
    v4 = sub_77FE00(v3, v10, 4096, "idc.idc", 0, 0);
    if ( v4 )
    {
      ptr = nullptr;
      v9 = 0;
      if ( !(unsigned __int8)compile_idc_file(v4, &ptr, 0) )
        sub_375400();
      v5 = sub_787580(v1[4]);
      v6 = ptr;
      v1[3] = v5;
      if ( v6 )
      {
        *(_QWORD *)&v9 = 0;
        qfree(v6);
      }
    }
  }
  if ( (unsigned int)install_extlang(&unk_2C57D20) )
  {
    if ( !under_debugger )
      interr(1447);
    goto LABEL_17;
  }
  return v11 - __readfsqword(0x28u);
}

