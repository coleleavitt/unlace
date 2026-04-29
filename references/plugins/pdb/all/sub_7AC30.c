const char *__fastcall sub_7AC30(__int64 *a1, __int64 a2)
{
  const char *result; // rax
  const char *v3; // rax
  const char *v4; // rcx

  result = "sym=nullptr";
  if ( a2 )
  {
    v3 = sub_73570(*(unsigned int *)(a2 + 20));
    v4 = src;
    if ( *(_QWORD *)(a2 + 32) )
      v4 = *(const char **)(a2 + 24);
    sub_37FD0(a1, (__int64)"id=%u('%s', %s)", *(_DWORD *)(a2 + 16), v4, v3);
    result = src;
    if ( a1[1] )
      return (const char *)*a1;
  }
  return result;
}
