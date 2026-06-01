void __fastcall st_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 *v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // rdi

  v2 = a1 + 7;
  v3 = a1 + 19;
  *a1 = &stru_86F6A0;
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
  while ( v3 != v2 );
}
