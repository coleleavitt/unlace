__int64 __fastcall sub_40D8B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  const char *v6; // rsi
  char *v7; // rbx
  char *v8; // rdi
  int v9; // eax
  std::logic_error *exception; // rbp
  __int64 *v12; // rax
  const char *v13; // rsi
  __int64 v14; // rdi
  int v15; // [rsp+Ch] [rbp-8Ch]
  __int64 v16; // [rsp+10h] [rbp-88h] BYREF
  __int128 v17; // [rsp+18h] [rbp-80h]
  char *s1; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+38h] [rbp-60h]
  char v20; // [rsp+48h] [rbp-50h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  sub_40C7C0((__int64)&s1);
  if ( v20 )
  {
    v16 = 0;
    exception = (std::logic_error *)__cxa_allocate_exception(0x10u);
    v17 = 0;
    v12 = sub_6AEF0(&v16);
    if ( v12[1] )
      v13 = (const char *)*v12;
    else
      v13 = ::s1;
    std::logic_error::logic_error(exception, v13);
    v14 = v16;
    *(_QWORD *)exception = &off_4EBCD0;
    if ( v14 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'uh_throw_error_policy_t::exn_t,
      (void (*)(void *))sub_40BF70);
  }
  v3 = netnode_altval();
  v4 = v3 - 1;
  if ( !v3 )
    return -1;
  while ( 1 )
  {
    v19 = 0;
    s1 = 0;
    netnode_qsupstr();
    v6 = ::s1;
    if ( *(_QWORD *)(a2 + 8) )
      v6 = *(const char **)a2;
    v7 = s1;
    v8 = (char *)::s1;
    if ( (_QWORD)v19 )
      v8 = s1;
    v9 = strcmp(v8, v6);
    if ( v7 )
    {
      v15 = v9;
      *(_QWORD *)&v19 = 0;
      qfree();
      v9 = v15;
    }
    if ( !v9 )
      break;
    v5 = netnode_altval();
    v4 = v5 - 1;
    if ( !v5 )
      return -1;
  }
  return v4;
}
