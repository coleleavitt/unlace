void __fastcall sub_E39780(char **a1)
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
      sub_2207560(v4);
    }
    while ( v1 != v2 );
    v2 = *a1;
  }
  if ( v2 )
    operator delete(v2);
}

