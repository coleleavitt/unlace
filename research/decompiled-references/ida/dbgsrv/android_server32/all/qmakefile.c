/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakefile
// Address: 0x0007D284

//----- (0007D284) --------------------------------------------------------
char *__fastcall qmakefile(char *s, int a2, char *a3, unsigned __int8 *a4)
{
  char *v4; // r4
  char *v6; // r6
  int v7; // r1
  int v8; // r7
  unsigned __int8 *v9; // r1
  char *v10; // r2
  int v11; // r3

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    goto LABEL_34;
  }
  v4 = s;
  if ( !s || !a3 )
    return v4;
  v6 = &s[a2];
  if ( s == a3 )
  {
    s += strlen(s);
    if ( !a4 )
      return v4;
    goto LABEL_16;
  }
  if ( v6 <= s )
  {
LABEL_30:
    if ( !under_debugger )
      interr(520);
    goto LABEL_34;
  }
  if ( v6 - 1 == s )
    goto LABEL_11;
  v7 = a2 - 1;
  do
  {
    v8 = (unsigned __int8)*a3;
    *s = v8;
    if ( !v8 )
    {
      if ( !a4 )
        return v4;
      goto LABEL_16;
    }
    --v7;
    ++s;
    ++a3;
  }
  while ( v7 );
  s = v6 - 1;
LABEL_11:
  *s = 0;
  if ( a4 )
  {
LABEL_16:
    v9 = a4 + 1;
    if ( *a4 != 46 )
      v9 = a4;
    if ( *(s - 1) == 46 )
    {
LABEL_22:
      if ( s < v6 )
      {
        v10 = v6 - 1;
        if ( s == v6 - 1 )
        {
LABEL_26:
          *v10 = 0;
        }
        else
        {
          while ( 1 )
          {
            v11 = *v9;
            *s = v11;
            if ( !v11 )
              break;
            ++s;
            ++v9;
            if ( v10 == s )
              goto LABEL_26;
          }
        }
        return v4;
      }
      goto LABEL_30;
    }
    if ( s < v6 )
    {
      *s++ = 46;
      if ( s >= v6 )
      {
        *(v6 - 1) = 0;
        s = v6 - 1;
      }
      goto LABEL_22;
    }
    if ( !under_debugger )
      interr(518);
LABEL_34:
    __debugbreak();
  }
  return v4;
}
// E0550: using guessed type char under_debugger;
