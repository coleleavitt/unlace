int __fastcall sub_732FF0(const char *a1, const char *a2, unsigned int a3)
{
  __int64 i; // rcx
  char v5; // dl
  char v6; // al

  if ( a3 <= 1 )
    return strcmp(a1, a2);
  for ( i = 0; ; ++i )
  {
    v5 = a1[i];
    v6 = a2[i];
    if ( (unsigned __int8)(v5 - 97) < 0x1Au )
      v5 -= 32;
    if ( (unsigned __int8)(v6 - 97) < 0x1Au )
      v6 -= 32;
    if ( !v5 )
      return -(v6 != 0);
    if ( !v6 )
      return 1;
    if ( v5 < v6 )
      break;
    if ( v5 > v6 )
      return 1;
  }
  return -1;
}

