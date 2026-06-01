void __fastcall sub_228620(void *a1, const char *a2)
{
  __guard *v2; // rbx
  __int64 v3; // rdi
  __guard v4; // rdi

  v2 = &byte_8CBEA0;
  do
  {
    v3 = *(v2 - 3);
    v2 -= 7;
    if ( v3 )
    {
      v2[5] = 0;
      qfree(v3, a2);
    }
    v4 = *v2;
    if ( *v2 )
    {
      v2[1] = 0;
      qfree(v4, a2);
    }
  }
  while ( v2 != &byte_8CBEA0 - 28 );
}
