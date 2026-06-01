/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: user2str
// Address: 0x0009CD00

//----- (0009CD00) --------------------------------------------------------
int __cdecl user2str(int a1, char *a2, int a3)
{
  int v3; // edx
  char *v4; // eax
  int v5; // esi
  int i; // edi
  char v7; // al
  int v8; // esi
  char v9; // al
  int v10; // eax

  v3 = a3;
  v4 = a2;
  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( !a2 )
    return 0;
  v5 = a1;
  if ( a3 > 0 )
  {
    for ( i = 0; ; ++i )
    {
      a2 = v4 + 1;
      v7 = *v4;
      *(_BYTE *)(v5 + i) = v7;
      if ( v7 == 92 )
      {
        v8 = v3;
        v9 = back_char(&a2);
        v3 = v8;
        v5 = a1;
        *(_BYTE *)(a1 + i) = v9;
      }
      else if ( !v7 )
      {
        v10 = i;
        if ( v3 <= 0 )
          return v5;
LABEL_12:
        if ( v10 == v3 )
          *(_BYTE *)(v5 + i) = 0;
        return v5;
      }
      if ( i + 1 >= v3 )
      {
        v10 = i + 1;
        if ( v3 <= 0 )
          return v5;
        goto LABEL_12;
      }
      v4 = a2;
    }
  }
  return v5;
}
// 13E34C: using guessed type int under_debugger;
