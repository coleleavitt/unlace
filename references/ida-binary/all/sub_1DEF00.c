_BOOL8 __fastcall cpuregs_desktop_widget_factory_t__::vfunc_2(__int64 a1, __int64 a2)
{
  const char **v2; // rbp
  const char *v4; // rsi
  __int64 v5; // r13
  __int64 v6; // rbx
  const char *v7; // rdi

  if ( !dbg )
    return 0;
  v2 = *(const char ***)(dbg + 40LL);
  if ( !v2 )
    return 0;
  v4 = *v2;
  if ( !*v2 )
    return 0;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = 0;
  while ( 1 )
  {
    v7 = &s1;
    if ( v5 )
      v7 = *(const char **)a2;
    if ( !strcmp(v7, v4) )
      break;
    v4 = v2[++v6];
    if ( !v4 )
      return 0;
  }
  return (int)v6 >= 0;
}
