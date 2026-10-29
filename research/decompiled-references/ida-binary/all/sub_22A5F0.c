double __fastcall exc_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 *v2; // r12
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v2 = a1 + 7;
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
  while ( v4 != v2 );
  return qfree(a1, a2);
}
