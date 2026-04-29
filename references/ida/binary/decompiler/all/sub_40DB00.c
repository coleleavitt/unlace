__int64 sub_40DB00()
{
  __int64 i; // rbx
  std::logic_error *exception; // r12
  __int64 *v3; // rax
  const char *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // [rsp+0h] [rbp-68h] BYREF
  __int128 v7; // [rsp+8h] [rbp-60h]
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+38h] [rbp-30h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_40C7C0((__int64)&v8);
  if ( v9 )
  {
    exception = (std::logic_error *)__cxa_allocate_exception(0x10u);
    v6 = 0;
    v7 = 0;
    v3 = sub_6AEF0(&v6);
    if ( v3[1] )
      v4 = (const char *)*v3;
    else
      v4 = s1;
    std::logic_error::logic_error(exception, v4);
    v5 = v6;
    *(_QWORD *)exception = &off_4EBCD0;
    if ( v5 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'uh_throw_error_policy_t::exn_t,
      (void (*)(void *))sub_40BF70);
  }
  for ( i = 0; netnode_altval(); ++i )
    ;
  return i;
}
