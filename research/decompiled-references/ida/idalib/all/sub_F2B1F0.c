const char *__fastcall sub_F2B1F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  const char *result; // rax
  _UNKNOWN **v4; // rdx

  v2 = *(_QWORD *)(a1 + 1160);
  if ( v2 )
    return (const char *)*sub_B3E290(v2, a2);
  v4 = sub_B3E550(a2);
  result = "<not a builtin command>";
  if ( v4 )
    return (const char *)*v4;
  return result;
}
