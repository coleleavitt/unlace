__int64 __fastcall sub_FD620(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rdi

  v2 = a1 + 27;
  v3 = a1 + 19;
  *(v2 - 27) = (__int64)off_4A9B00;
  sub_60700(v2);
  sub_60700(a1 + 23);
  *a1 = (__int64)&unk_4B7C88;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      v3[1] = 0;
      qfree(v4);
    }
    v3 -= 3;
  }
  while ( v3 != a1 + 7 );
  return qfree(a1);
}
