char *__fastcall sub_5ADDE0(__int64 *a1, char *a2)
{
  __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = 0;
  while ( 1 )
  {
    if ( *a2 > 47 && *a2 <= 57 )
    {
      v4 = *a2 - 48 + 16 * v4;
      goto LABEL_11;
    }
    if ( *a2 > 96 && *a2 <= 102 )
    {
      v4 = *a2 - 87 + 16 * v4;
      goto LABEL_11;
    }
    if ( *a2 <= 64 || *a2 > 70 )
      break;
    v4 = *a2 - 55 + 16 * v4;
LABEL_11:
    ++a2;
  }
  *a1 = v4;
  return a2;
}
