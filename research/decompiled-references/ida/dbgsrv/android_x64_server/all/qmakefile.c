/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakefile
// Address: 0x00000000000C0F50

//----- (00000000000C0F50) ----------------------------------------------------
char *__fastcall qmakefile(char *s, __int64 a2, char *a3, _BYTE *a4)
{
  char *v6; // r12
  char *v7; // rax
  __int64 v8; // rsi
  size_t v9; // rax
  char v10; // cl
  _BYTE *v11; // rsi
  char *v12; // r12
  char *v13; // r14
  __int64 v14; // rdx
  char v15; // cl

  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    goto LABEL_34;
  }
  if ( !s || !a3 )
    return s;
  v6 = &s[a2];
  if ( s == a3 )
  {
    v9 = strlen(s);
LABEL_14:
    v7 = &s[v9];
    if ( !a4 )
      return s;
LABEL_15:
    v11 = a4 + 1;
    if ( *a4 != 46 )
      v11 = a4;
    if ( *(v7 - 1) == 46 )
    {
LABEL_21:
      if ( v7 < v6 )
      {
        v12 = v6 - 1;
        if ( v7 == v12 )
        {
LABEL_26:
          *v12 = 0;
        }
        else
        {
          v13 = &s[a2 - 1 - (_QWORD)v7];
          v14 = 0;
          while ( 1 )
          {
            v15 = v11[v14];
            v7[v14] = v15;
            if ( !v15 )
              break;
            if ( v13 == (char *)++v14 )
              goto LABEL_26;
          }
        }
        return s;
      }
      goto LABEL_30;
    }
    if ( v7 < v6 )
    {
      *v7++ = 46;
      if ( v7 >= v6 )
      {
        v7 = v6 - 1;
        *(v6 - 1) = 0;
      }
      goto LABEL_21;
    }
    if ( !(_BYTE)under_debugger )
      interr(518);
LABEL_34:
    BUG();
  }
  if ( v6 <= s )
  {
LABEL_30:
    if ( !(_BYTE)under_debugger )
      interr(520);
    goto LABEL_34;
  }
  v7 = s;
  if ( v6 - 1 != s )
  {
    v8 = a2 - 1;
    v9 = 0;
    do
    {
      v10 = a3[v9];
      s[v9] = v10;
      if ( !v10 )
        goto LABEL_14;
      ++v9;
    }
    while ( v8 != v9 );
    v7 = v6 - 1;
  }
  *v7 = 0;
  if ( a4 )
    goto LABEL_15;
  return s;
}
// 158B40: using guessed type __int64 under_debugger;
