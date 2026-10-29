/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqmakepath
// Address: 0x000AE270

//----- (000AE270) --------------------------------------------------------
char *__cdecl vqmakepath(char *s, int a2, const char *a3, const char **a4)
{
  char *result; // eax
  const char *v5; // ecx
  char *v6; // edx
  const char *v7; // edi
  int v8; // esi
  char *v9; // eax
  int i; // edx
  char v11; // cl
  char *v12; // [esp+10h] [ebp-1Ch]
  const char *v14; // [esp+18h] [ebp-14h]

  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_37:
    BUG();
  }
  result = s;
  if ( !s )
    return result;
  v5 = a3;
  v6 = &s[a2];
  v7 = s;
  if ( !a3 )
    goto LABEL_28;
  v14 = v6 - 1;
  v8 = 0;
  v7 = s;
  v12 = &s[a2];
  do
  {
    if ( v7 != v5 )
      qustrncpy((unsigned int)v7, (int)v5, v12 - v7);
    v9 = (char *)&v7[strlen(v7)];
    for ( i = v8; v9 > s; LOBYTE(i) = 1 )
    {
      v11 = *(v9 - 1);
      if ( v11 != 92 && v11 != 47 )
        break;
      --v9;
    }
    v8 = i;
    v5 = *a4;
    if ( !*a4 )
    {
      v7 = v9;
      v6 = &s[a2];
      if ( v9 != s )
        goto LABEL_28;
      goto LABEL_24;
    }
    ++a4;
    while ( *v5 == 92 || *v5 == 47 )
      ++v5;
    v6 = &s[a2];
    if ( v9 >= v12 )
      goto LABEL_31;
    *v9 = 47;
    v7 = v9 + 1;
    if ( v9 + 1 >= v12 )
    {
      v7 = v14;
      *v14 = 0;
    }
  }
  while ( v5 );
  if ( v7 != s )
    goto LABEL_28;
LABEL_24:
  if ( (v8 & 1) == 0 )
    goto LABEL_28;
  if ( v6 <= s )
  {
LABEL_31:
    if ( !(_BYTE)under_debugger )
      interr(518);
    goto LABEL_37;
  }
  v7 = s + 1;
  *s = 47;
  if ( s + 1 >= v6 )
  {
    v7 = v6 - 1;
    *(v6 - 1) = 0;
  }
LABEL_28:
  if ( v7 >= v6 )
  {
    if ( !(_BYTE)under_debugger )
      interr(519);
    goto LABEL_37;
  }
  *v7 = 0;
  return s;
}
// 13E34C: using guessed type int under_debugger;
