__int64 __fastcall sub_379B50(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h] BYREF
  _QWORD vars10[2]; // [rsp+10h] [rbp+10h] BYREF
  void *vars20; // [rsp+20h] [rbp+20h]
  __int128 vars28; // [rsp+28h] [rbp+28h]
  void *ptr; // [rsp+38h] [rbp+38h]
  __int128 vars40; // [rsp+40h] [rbp+40h]
  _OWORD vars50[3]; // [rsp+50h] [rbp+50h] BYREF
  __int64 vars80; // [rsp+80h] [rbp+80h]
  int vars88; // [rsp+88h] [rbp+88h]
  __int64 vars90; // [rsp+90h] [rbp+90h]
  char vars98; // [rsp+98h] [rbp+98h]
  unsigned __int64 varsA8; // [rsp+A8h] [rbp+A8h]

  v2 = *(_QWORD *)(a1 + 40);
  varsA8 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  vars0 = 0;
  get_type_by_tid(&vars0, v4);
  vars10[0] = v2;
  vars10[1] = 0;
  vars20 = nullptr;
  ptr = nullptr;
  vars80 = 1;
  vars88 = -1;
  vars90 = 0;
  vars98 = 0;
  vars28 = 0;
  vars40 = 0;
  vars50[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member((int)vars10) == -1
    || !(unsigned __int8)get_idainfo_by_type(0, &vars8, 0, vars50, 0) )
  {
    v5 = -1;
  }
  else
  {
    v5 = vars8;
  }
  clear_tinfo_t(vars50);
  if ( ptr )
  {
    *(_QWORD *)&vars40 = 0;
    qfree(ptr);
  }
  if ( vars20 )
  {
    *(_QWORD *)&vars28 = 0;
    qfree(vars20);
  }
  clear_tinfo_t(&vars0);
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
