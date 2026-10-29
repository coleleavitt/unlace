__int64 __fastcall qdirname(char *dest, unsigned __int64 a2, const char *a3)
{
  char *v5; // r14
  char *v6; // rax
  size_t v7; // r13

  if ( !a3 )
    return 0;
  if ( dest && a2 <= 1 )
    return 0;
  v5 = strrchr(a3, 47);
  v6 = strrchr(a3, 92);
  if ( v6 >= v5 )
  {
    v5 = v6;
    if ( !v6 )
    {
      if ( dest )
        *(_WORD *)dest = 46;
      return 0;
    }
  }
  v7 = v5 - a3;
  if ( v5 - a3 >= a2 )
    v7 = a2 - 1;
  if ( !v7 )
    v7 = (*v5 == 92) | (unsigned __int8)(*v5 == 47);
  if ( dest )
  {
    if ( a3 != dest )
      memcpy(dest, a3, v7);
    dest[v7] = 0;
  }
  return 1;
}
