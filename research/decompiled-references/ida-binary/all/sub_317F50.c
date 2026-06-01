void __fastcall sub_317F50(__int64 *a1, const char *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v2, a2);
  }
}
