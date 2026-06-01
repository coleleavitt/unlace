__int64 __fastcall sub_20CFB50(char **a1, char *a2)
{
  char *v2; // rdx
  __int64 result; // rax
  char v4; // cl
  unsigned int v5; // r9d
  int v6; // r10d
  int v7; // r8d

  v2 = *a1;
  result = 0;
  if ( *a1 != a2 )
  {
    v4 = *v2;
    if ( *v2 == 114 )
    {
      *a1 = v2 + 1;
      if ( v2 + 1 == a2 )
        return 4;
      v4 = v2[1];
      v5 = 6;
      ++v2;
      v6 = 6;
      v7 = 4;
      result = 4;
      if ( v4 != 86 )
        goto LABEL_4;
    }
    else
    {
      v5 = 2;
      v6 = 2;
      v7 = 0;
      if ( v4 != 86 )
      {
LABEL_4:
        if ( v4 == 75 )
        {
          *a1 = v2 + 1;
          return v7 | 1u;
        }
        return result;
      }
    }
    *a1 = v2 + 1;
    if ( v2 + 1 == a2 )
      return v5;
    v4 = v2[1];
    v7 = v6;
    result = v5;
    ++v2;
    goto LABEL_4;
  }
  return result;
}
