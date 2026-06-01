void __fastcall sub_9FFCF0(char **a1)
{
  char *v1; // rbp
  char *v2; // rbx

  v1 = *a1;
  v2 = &(*a1)[88 * *((unsigned int *)a1 + 2)];
  if ( *a1 != v2 )
  {
    do
    {
      v2 -= 88;
      sub_9E5EF0((__int64)(v2 + 16));
    }
    while ( v2 != v1 );
    v2 = *a1;
  }
  if ( v2 != (char *)(a1 + 2) )
    free(v2);
}

