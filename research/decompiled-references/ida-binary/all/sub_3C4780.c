double __fastcall cc_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdi

  *a1 = cc_chooser_t___vtable;
  v3 = a1[23];
  if ( v3 )
  {
    a1[24] = 0;
    qfree(v3, a2);
  }
  v4 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      qfree(v5, a2);
    }
    v4 -= 3;
  }
  while ( v4 != a1 + 7 );
  return qfree(a1, a2);
}
