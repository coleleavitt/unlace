__int64 (__fastcall **__fastcall sub_6DE9C0(_QWORD *a1, int a2, int a3, __int64 a4, int a5, int a6))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **vars0)(); // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  void *vars18; // [rsp+18h] [rbp+18h]
  int vars20; // [rsp+20h] [rbp+20h]
  void *ptr; // [rsp+30h] [rbp+30h]
  char vars38; // [rsp+38h] [rbp+38h]

  sub_6E5FF0(*a1, a2, (unsigned int)&vars0, a3, a5, a6, (unsigned int)&off_1C62200, vars8, 0, 0, vars20, 0, 0, vars38);
  result = &off_1C62200;
  vars0 = &off_1C62200;
  if ( ptr )
    result = (__int64 (__fastcall **)())sub_186B220(ptr);
  if ( vars18 )
    return (__int64 (__fastcall **)())sub_186B220(vars18);
  return result;
}

