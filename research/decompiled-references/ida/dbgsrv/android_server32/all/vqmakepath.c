/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqmakepath
// Address: 0x0007D0AC

//----- (0007D0AC) --------------------------------------------------------
char *__fastcall vqmakepath(char *s, int a2, char *a3, char **a4)
{
  unsigned int v5; // r3
  char *v6; // r6
  int v7; // r5
  int v8; // r1
  char *v9; // r2
  int v10; // r1
  char *v11; // [sp+4h] [bp-10h]
  char *v12; // [sp+8h] [bp-Ch]
  unsigned int v13; // [sp+Ch] [bp-8h]
  char **v14; // [sp+10h] [bp-4h]

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    goto LABEL_34;
  }
  if ( !s )
    return s;
  v5 = (unsigned int)&s[a2];
  v6 = s;
  if ( a3 )
  {
    v14 = a4;
    v11 = (char *)(v5 - 1);
    v7 = 0;
    v6 = s;
    v12 = s;
    v13 = (unsigned int)&s[a2];
    do
    {
      if ( v6 != a3 )
        qustrncpy((unsigned int)v6, (int)a3, v13 - (_DWORD)v6);
      v6 += strlen(v6);
      s = v12;
      if ( v6 > v12 )
      {
        while ( 1 )
        {
          v8 = (unsigned __int8)*(v6 - 1);
          v9 = v6 - 1;
          if ( v8 != 92 && v8 != 47 )
            break;
          v7 = 1;
          --v6;
          if ( v9 <= v12 )
          {
            v6 = v9;
            v7 = 1;
            break;
          }
        }
      }
      a3 = *v14++;
      if ( !a3 )
        break;
      while ( 1 )
      {
        v10 = (unsigned __int8)*a3;
        if ( v10 != 92 && v10 != 47 )
          break;
        ++a3;
      }
      if ( (unsigned int)v6 >= v13 )
        goto LABEL_28;
      *v6++ = 47;
      if ( (unsigned int)v6 >= v13 )
      {
        v6 = v11;
        *v11 = 0;
      }
    }
    while ( a3 );
    v5 = v13;
    if ( !((~v7 | (v6 != v12)) << 31) )
    {
      if ( v13 > (unsigned int)v12 )
      {
        *v12 = 47;
        v6 = v12 + 1;
        if ( (unsigned int)(v12 + 1) >= v13 )
        {
          *(_BYTE *)(v13 - 1) = 0;
          v6 = (char *)(v13 - 1);
        }
        goto LABEL_25;
      }
LABEL_28:
      if ( !under_debugger )
        interr(518);
LABEL_34:
      __debugbreak();
    }
  }
LABEL_25:
  if ( (unsigned int)v6 >= v5 )
  {
    if ( !under_debugger )
      interr(519);
    goto LABEL_34;
  }
  *v6 = 0;
  return s;
}
// E0550: using guessed type char under_debugger;
