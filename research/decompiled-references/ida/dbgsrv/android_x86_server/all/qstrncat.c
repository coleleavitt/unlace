/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncat
// Address: 0x000B3730

//----- (000B3730) --------------------------------------------------------
char *__cdecl qstrncat(char *s, int a2, int a3)
{
  char *v3; // eax
  int v4; // ebx
  char v5; // cl

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_14:
    BUG();
  }
  v3 = &s[strlen(s)];
  if ( v3 >= &s[a3] )
  {
    if ( !(_BYTE)under_debugger )
      interr(520);
    goto LABEL_14;
  }
  if ( v3 == &s[a3 - 1] )
  {
LABEL_8:
    *v3 = 0;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = *(_BYTE *)(a2 + v4);
      v3[v4] = v5;
      if ( !v5 )
        break;
      if ( &s[a3 - 1 - (_DWORD)v3] == (char *)++v4 )
      {
        v3 = &s[a3 - 1];
        goto LABEL_8;
      }
    }
  }
  return s;
}
// 13E34C: using guessed type int under_debugger;
