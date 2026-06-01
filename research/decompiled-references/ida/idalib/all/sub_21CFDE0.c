__int64 __fastcall sub_21CFDE0(char **a1, __int64 *a2)
{
  char *v2; // rcx
  char *v3; // r8
  __int64 result; // rax
  int v5; // edx
  char *v6; // rcx
  __int64 v7; // rax

  v2 = *a1;
  v3 = a1[1];
  result = 1;
  if ( *a1 != v3 )
  {
    v5 = *v2;
    if ( (unsigned __int8)(*v2 - 48) <= 9u || (unsigned __int8)(v5 - 65) <= 0x19u )
    {
      v6 = v2 + 1;
      v7 = 0;
      if ( (unsigned __int8)(v5 - 48) <= 9u )
        goto LABEL_9;
      while ( (unsigned __int8)(v5 - 65) <= 0x19u )
      {
        *a1 = v6;
        v7 = v5 - 65 + 36 * v7 + 10;
        if ( v3 == v6 )
          break;
        while ( 1 )
        {
          v5 = *v6++;
          if ( (unsigned __int8)(v5 - 48) > 9u )
            break;
LABEL_9:
          *a1 = v6;
          v7 = v5 - 48 + 36 * v7;
          if ( v3 == v6 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *a2 = v7;
      return 0;
    }
  }
  return result;
}
