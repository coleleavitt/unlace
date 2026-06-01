__int64 __fastcall cliopts_t_find_long(__int64 *a1, const char *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // rbp
  const char *v5; // rdi
  __int64 v6; // r12

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *a1;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(const char **)(v3 + 8);
    v6 = v3;
    if ( v5 )
    {
      if ( !strcmp(v5, a2) )
        break;
    }
    ++v4;
    v3 += 40;
    if ( v4 == v2 )
      return 0;
  }
  return v6;
}
