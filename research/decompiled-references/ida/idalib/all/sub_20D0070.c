unsigned __int64 __fastcall sub_20D0070(char **a1)
{
  char *v1; // rax
  char *v2; // rsi
  unsigned __int8 v3; // dl
  char *v4; // rcx
  unsigned __int64 result; // rax
  char *v6; // rdx
  char v7; // r9

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 == v2 )
    return 0;
  v3 = *v1 - 48;
  v4 = v1 + 1;
  result = 0;
  if ( v3 > 9u )
    return 0;
  do
  {
    *a1 = v4;
    v6 = v4;
    result = *(v4 - 1) - 48 + 10 * result;
    if ( v4 == v2 )
      break;
    v7 = *v4++;
  }
  while ( (unsigned __int8)(v7 - 48) <= 9u );
  if ( v2 - v6 < result )
    return 0;
  *a1 = &v6[result];
  return result;
}
