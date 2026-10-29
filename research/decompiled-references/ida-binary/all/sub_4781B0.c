void __fastcall sub_4781B0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3, a2);
  }
  v4 = a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    qfree(v4, a2);
  }
  v5 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v5, a2);
  }
}
