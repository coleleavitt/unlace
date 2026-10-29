void __fastcall sub_230E20(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3, a2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v4, a2);
  }
}
