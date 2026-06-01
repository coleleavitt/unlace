QT::QWidget *__fastcall cpuregs_desktop_widget_factory_t__::vfunc_3(
        double a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5)
{
  const char **v5; // rbp
  const char *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  const char *v9; // rdi

  if ( !dbg )
    goto LABEL_11;
  v5 = *(const char ***)(dbg + 40LL);
  if ( !v5 )
    goto LABEL_11;
  v6 = a3;
  a3 = *v5;
  if ( !*v5 )
    goto LABEL_11;
  v7 = *((_QWORD *)v6 + 1);
  v8 = 0;
  while ( 1 )
  {
    v9 = &s1;
    if ( v7 )
      v9 = *(const char **)v6;
    if ( !strcmp(v9, a3) )
      break;
    a3 = v5[++v8];
    if ( !a3 )
      goto LABEL_11;
  }
  if ( (int)v8 < 0 )
  {
LABEL_11:
    if ( !under_debugger )
      interr(40609, a3, a4, a5, a1);
    BUG();
  }
  return sub_1E3BF0(v8);
}
