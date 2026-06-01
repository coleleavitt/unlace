__int64 __fastcall my_addr_resolver_t__::vfunc_0(__int64 a1, __int64 a2)
{
  int name_value; // edx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  name_value = get_name_value(v4, xmmword_8CC810, a2);
  result = v4[0];
  if ( !name_value )
    return -1;
  return result;
}
