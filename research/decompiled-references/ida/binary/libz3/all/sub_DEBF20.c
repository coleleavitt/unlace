__int64 __fastcall sub_DEBF20(char **a1)
{
  char *v2; // rbx
  char *v3; // rbp
  char *v4; // rdi
  __int64 result; // rax

  v2 = *a1;
  v3 = &(*a1)[16 * *((unsigned int *)a1 + 2)];
  if ( *a1 != v3 )
  {
    do
    {
      v4 = v2;
      v2 += 16;
      result = sub_15D0DF0(v4);
    }
    while ( v3 != v2 );
    v3 = *a1;
  }
  if ( v3 )
  {
    if ( v3 != (char *)(a1 + 2) )
      return sub_186B220(v3);
  }
  return result;
}

