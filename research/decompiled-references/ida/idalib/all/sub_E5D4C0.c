void __fastcall sub_E5D4C0(char **a1)
{
  char *v1; // rbp
  char *v2; // rbx
  char *v4; // rdi

  v1 = a1[1];
  v2 = *a1;
  if ( v1 != *a1 )
  {
    do
    {
      v4 = v2;
      v2 += 40;
      sub_222B2A0(v4);
    }
    while ( v1 != v2 );
    v2 = *a1;
  }
  if ( v2 )
    operator delete(v2);
}
