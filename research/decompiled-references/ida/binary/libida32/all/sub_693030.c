__int64 __fastcall sub_693030(char **a1, int *a2)
{
  char *v2; // rcx
  int v3; // edx
  char v4; // al

  if ( !a1 )
    return 0;
  v2 = *a1;
  v3 = 0;
  v4 = **a1;
  if ( !v4 )
  {
LABEL_8:
    *a1 = v2;
    return 0;
  }
  while ( 1 )
  {
    ++v2;
    if ( v4 >= 0 )
      break;
    v3 = v4 & 0x7F | (v3 << 7);
    v4 = *v2;
    if ( !*v2 )
      goto LABEL_8;
  }
  if ( a2 )
    *a2 = (v3 << 6) | v4 & 0x3F;
  *a1 = v2;
  return 1;
}

