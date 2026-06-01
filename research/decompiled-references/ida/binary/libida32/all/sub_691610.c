__int64 __fastcall sub_691610(char **a1, int *a2, char a3)
{
  char *v3; // rcx
  int v4; // r8d
  char v5; // al
  char v7; // dl

  if ( !a1 )
    return 0;
  v3 = *a1;
  v4 = 0;
  v5 = **a1;
  if ( !v5 )
  {
LABEL_12:
    *a1 = v3;
    return 0;
  }
  while ( 1 )
  {
    ++v3;
    if ( v5 >= 0 )
      break;
    v4 = v5 & 0x7F | (v4 << 7);
    v5 = *v3;
    if ( !*v3 )
      goto LABEL_12;
  }
  *a1 = v3;
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = *v3;
      if ( !*v3 )
        goto LABEL_12;
      ++v3;
      if ( v7 >= 0 )
      {
        *a1 = v3;
        break;
      }
    }
  }
  if ( a2 )
    *a2 = (v4 << 6) | v5 & 0x3F;
  return 1;
}

