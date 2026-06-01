__int64 __fastcall sub_B39350(__int64 a1, int a2)
{
  char *v2; // rax

  v2 = (char *)(a1 + 64);
  if ( *(int *)(a1 + 64) >> 8 == -1 )
    return 0xFFFFFFFFLL;
  while ( a2 != *v2 )
  {
    v2 = *((char **)v2 + 1);
    if ( !v2 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)(*(int *)v2 >> 8);
}

