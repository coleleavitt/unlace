signed __int64 __fastcall sub_20CEB80(char **a1, char a2)
{
  char *v2; // rdx
  char *v3; // r8
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rax

  v2 = *a1;
  v3 = a1[1];
  if ( !a2 )
  {
    v4 = *a1;
    goto LABEL_10;
  }
  if ( v2 == v3 )
    return 0;
  v4 = *a1;
  if ( *v2 == 110 )
  {
    v4 = v2 + 1;
    *a1 = v2 + 1;
LABEL_10:
    if ( v3 == v4 )
      return 0;
  }
  if ( (unsigned int)(*v4 - 48) > 9 )
    return 0;
  v5 = v4 + 1;
  do
  {
    v6 = v5;
    *a1 = v5;
    if ( v3 == v5 )
      break;
    ++v5;
  }
  while ( (unsigned int)(*v6 - 48) <= 9 );
  return v6 - v2;
}
