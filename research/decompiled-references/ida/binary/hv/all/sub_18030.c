__int64 __fastcall sub_18030(_DWORD *a1, char *a2, int a3)
{
  char v3; // al
  int v5; // eax
  char *v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a2;
  v7[1] = (char *)__readfsqword(0x28u);
  if ( !v3 || a2[1] )
  {
    v5 = strtol(a2, v7, 10);
    if ( !*v7[0] )
    {
LABEL_6:
      if ( !v5 && a3 != 2 )
        goto LABEL_8;
      goto LABEL_13;
    }
    sub_8F890(0, a2);
    if ( a3 != 2 )
      return a3 == 0 ? 37 : 19;
    return 32;
  }
  if ( a3 != 2 )
  {
    if ( v3 != 42 )
    {
      v5 = strtol(a2, v7, 10);
      if ( *v7[0] )
      {
LABEL_8:
        sub_8F890(0, a2);
        return a3 == 0 ? 37 : 19;
      }
      goto LABEL_6;
    }
    goto LABEL_14;
  }
  switch ( v3 )
  {
    case '=':
      *a1 = -3;
      return 0;
    case '^':
LABEL_14:
      *a1 = -1;
      return 0;
    case '*':
      *a1 = -2;
      return 0;
    default:
      v5 = strtol(a2, v7, 10);
      if ( !*v7[0] )
      {
LABEL_13:
        *a1 = v5;
        return 0;
      }
      sub_8F890(0, a2);
      return 32;
  }
}

