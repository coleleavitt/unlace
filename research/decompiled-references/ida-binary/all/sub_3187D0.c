void __fastcall sniplist_chooser_t__::vfunc_0(char *a1, const char *a2)
{
  char *v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // rdi

  v2 = a1 + 56;
  v3 = (__int64 *)(a1 + 152);
  *(_QWORD *)a1 = &stru_86F6A0;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      v3[1] = 0;
      qfree(v4, a2);
    }
    v3 -= 3;
  }
  while ( v3 != (__int64 *)v2 );
}
