/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakefile
// Address: 0x00000000000BC268

//----- (00000000000BC268) ----------------------------------------------------
const char *__fastcall qmakefile(char *s, const char **a2, char *a3, unsigned __int8 *a4)
{
  char *v4; // x19
  char *v6; // x21
  char *v7; // x8
  char *v8; // x10
  int v9; // w11
  unsigned __int8 *v10; // x9
  char *v11; // x8
  int v12; // w11

  if ( ((unsigned __int64)a2 & 0x8000000000000000LL) != 0 )
  {
    if ( under_debugger )
      goto LABEL_34;
    s = (char *)interr(1225);
    goto LABEL_30;
  }
  v4 = s;
  if ( !s || !a3 )
    return v4;
  v6 = (char *)a2 + (_QWORD)s;
  if ( s == a3 )
  {
    s = (char *)strlen(s);
    v7 = &s[(_QWORD)v4];
    if ( a4 )
    {
LABEL_15:
      v10 = a4 + 1;
      if ( *a4 != 46 )
        v10 = a4;
      if ( *(v7 - 1) != 46 )
      {
        if ( v7 >= v6 )
          goto LABEL_32;
        *v7++ = 46;
        if ( v7 >= v6 )
        {
          *(v6 - 1) = 0;
          v7 = v6 - 1;
        }
      }
      if ( v7 < v6 )
      {
        if ( v7 == v6 - 1 )
        {
LABEL_26:
          *(v6 - 1) = 0;
        }
        else
        {
          v11 = v7 + 1;
          while ( 1 )
          {
            v12 = *v10;
            *(v11 - 1) = v12;
            if ( !v12 )
              break;
            ++v11;
            ++v10;
            if ( v6 == v11 )
              goto LABEL_26;
          }
        }
        return v4;
      }
      goto LABEL_30;
    }
    return v4;
  }
  if ( v6 > s )
  {
    v7 = s;
    if ( v6 - 1 == s )
    {
LABEL_11:
      *v7 = 0;
    }
    else
    {
      v8 = (char *)a2 - 1;
      v7 = s;
      while ( 1 )
      {
        v9 = (unsigned __int8)*a3;
        *v7 = v9;
        if ( !v9 )
          break;
        ++a3;
        --v8;
        ++v7;
        if ( !v8 )
        {
          v7 = v6 - 1;
          goto LABEL_11;
        }
      }
    }
    if ( !a4 )
      return v4;
    goto LABEL_15;
  }
LABEL_30:
  if ( !under_debugger )
  {
    s = (char *)interr(520);
LABEL_32:
    if ( !under_debugger )
      s = (char *)interr(518);
  }
LABEL_34:
  __break(1u);
  return qsplitfile(s, a2, (char **)a3);
}
// BC3B9: variable 'a2' is possibly undefined
// BC3B9: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
