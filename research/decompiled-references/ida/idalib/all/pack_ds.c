char *__fastcall pack_ds(__int64 a1, unsigned __int64 a2, const char *a3, __int64 a4)
{
  const char *v4; // rbp
  __int64 v5; // rbx
  void *v6; // rax

  if ( (__int64)(a2 - a1) < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  v4 = a3;
  if ( !a3 )
    v4 = &byte_22F0C30;
  v5 = a4;
  if ( !a4 )
    v5 = strlen(v4);
  if ( a2 < a1 + v5 )
    v5 = a2 - a1 - 5;
  v6 = (void *)pack_dd(a1, a2, (unsigned int)v5);
  return (char *)memcpy(v6, v4, v5) + v5;
}
