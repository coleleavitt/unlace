__int64 __fastcall sub_83D920(char *s, char *a2, char a3)
{
  int v4; // r13d
  char *i; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r15d
  char *v8; // r14
  char *v9; // rax
  char v10; // al
  char v11; // al

  v4 = a3 & 1;
  for ( i = a2; ; i = v9 + 1 )
  {
    v10 = *i;
    if ( *i == 47 )
    {
      if ( !i[1] )
        return 1;
LABEL_14:
      if ( *s != 46 || v10 == 46 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( !v10 )
      break;
    if ( v10 != 42 )
      goto LABEL_14;
    if ( i[1] == 42 && (i == a2 || *(i - 1) == 47) )
    {
      v11 = i[2];
      if ( !v11 )
        return 1;
      if ( v11 == 47 )
        return sub_83DA70(s, i + 3);
    }
LABEL_5:
    if ( *s != 46 )
      goto LABEL_7;
LABEL_6:
    if ( v4 )
      return 0;
LABEL_7:
    LOBYTE(v6) = sub_83D7C0(s, (unsigned __int8 *)i);
    v7 = v6;
    if ( !(_BYTE)v6 )
      return v7;
    v8 = strchr(s, 47);
    v9 = strchr(i, 47);
    if ( !((unsigned __int64)v9 | (unsigned __int64)v8) )
      return v7;
    if ( !v8 || !v9 )
      return 0;
    s = v8 + 1;
  }
  if ( a2 >= i || *(i - 1) != 47 )
    goto LABEL_5;
  return 1;
}
