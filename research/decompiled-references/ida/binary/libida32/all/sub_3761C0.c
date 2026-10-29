__int64 __fastcall sub_3761C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rsi
  int v5; // r13d
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h] BYREF
  _QWORD vars10[2]; // [rsp+10h] [rbp+10h] BYREF
  void *vars20; // [rsp+20h] [rbp+20h]
  __int128 vars28; // [rsp+28h] [rbp+28h]
  void *ptr; // [rsp+38h] [rbp+38h]
  __int128 vars40; // [rsp+40h] [rbp+40h]
  _OWORD vars50[2]; // [rsp+50h] [rbp+50h] BYREF
  __int64 vars70; // [rsp+70h] [rbp+70h]
  int vars78; // [rsp+78h] [rbp+78h]
  __int64 vars80; // [rsp+80h] [rbp+80h]
  char vars88; // [rsp+88h] [rbp+88h]
  unsigned __int64 vars98; // [rsp+98h] [rbp+98h]

  v2 = *(_DWORD *)(a1 + 40);
  vars98 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  vars0 = 0;
  get_type_by_tid(&vars0, v4);
  vars10[1] = 0;
  vars20 = nullptr;
  ptr = nullptr;
  vars70 = 1;
  vars78 = -1;
  vars80 = 0;
  vars88 = 0;
  vars10[0] = v2;
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
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}

