__int64 __fastcall sub_832EB0(char *a1, __int64 a2, char **a3)
{
  char *v3; // rax
  char v4; // di
  char v5; // cl

  v3 = a1 + 1;
  v4 = *a1;
  if ( a2 - (__int64)v3 <= 1 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( *v3 != 92 )
        break;
      v3 += ((unsigned __int8)(v3[1] - 92) < 2u) + 1;
      if ( a2 - (__int64)v3 <= 1 )
        return 0;
    }
    if ( v5 != 91 )
      break;
    if ( v3[1] == v4 )
      return 0;
    if ( v4 == 91 )
      goto LABEL_12;
LABEL_6:
    if ( a2 - (__int64)++v3 <= 1 )
      return 0;
  }
  if ( v5 == 93 )
    return 0;
  if ( v5 != v4 )
    goto LABEL_6;
LABEL_12:
  if ( v3[1] != 93 )
    goto LABEL_6;
  *a3 = v3;
  return 1;
}

