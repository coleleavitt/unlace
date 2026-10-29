char *__fastcall sub_78D450(char *s2)
{
  __int64 v1; // r13
  char *v2; // rbx
  __int64 v3; // rbp

  if ( !s2 )
    return nullptr;
  v1 = unk_2C7C620;
  if ( !unk_2C7C620 )
    return nullptr;
  v2 = off_2C7C628;
  v3 = 0;
  while ( strcmp(*(const char **)v2, s2) )
  {
    ++v3;
    v2 += 40;
    if ( v1 == v3 )
      return nullptr;
  }
  if ( !v2 || *((_QWORD *)v2 + 1) )
    return v2;
  else
    return nullptr;
}
