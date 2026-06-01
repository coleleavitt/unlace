/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqmakepath
// Address: 0x00000000000C0C80

//----- (00000000000C0C80) ----------------------------------------------------
char *__fastcall vqmakepath(char *s, __int64 a2, const char *a3, int *a4)
{
  const char *v5; // rcx
  char *v6; // r14
  const char *v7; // rbx
  char v8; // bp
  char *i; // rax
  char v10; // cl
  unsigned __int64 v11; // rdx
  const char **v12; // rcx

  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    goto LABEL_40;
  }
  if ( s )
  {
    v5 = a3;
    v6 = &s[a2];
    v7 = s;
    if ( !a3 )
      goto LABEL_31;
    v8 = 0;
    v7 = s;
    while ( 1 )
    {
      if ( v7 != v5 )
        qustrncpy((unsigned __int64)v7, (__int64)v5, v6 - v7);
      for ( i = (char *)&v7[strlen(v7)]; i > s; v8 = 1 )
      {
        v10 = *(i - 1);
        if ( v10 != 92 && v10 != 47 )
          break;
        --i;
      }
      v11 = *a4;
      if ( v11 > 0x28 )
      {
        v12 = *((const char ***)a4 + 1);
        *((_QWORD *)a4 + 1) = v12 + 1;
      }
      else
      {
        v12 = (const char **)(*((_QWORD *)a4 + 2) + v11);
        *a4 = v11 + 8;
      }
      v5 = *v12;
      if ( !v5 )
        break;
      while ( *v5 == 92 || *v5 == 47 )
        ++v5;
      if ( i >= v6 )
        goto LABEL_34;
      *i = 47;
      v7 = i + 1;
      if ( i + 1 >= v6 )
      {
        *(v6 - 1) = 0;
        v7 = v6 - 1;
      }
      if ( !v5 )
      {
        if ( (v8 & 1) != 0 )
          goto LABEL_25;
LABEL_31:
        if ( v7 < v6 )
        {
LABEL_32:
          *v7 = 0;
          return s;
        }
LABEL_38:
        if ( !(_BYTE)under_debugger )
          interr(519);
        goto LABEL_40;
      }
    }
    v7 = i;
    if ( (v8 & 1) == 0 )
      goto LABEL_31;
LABEL_25:
    if ( v7 != s )
      goto LABEL_31;
    if ( v6 > s )
    {
      v7 = s + 1;
      *s = 47;
      if ( s + 1 < v6 )
        goto LABEL_31;
      v7 = v6 - 1;
      *(v6 - 1) = 0;
      if ( v6 )
        goto LABEL_32;
      goto LABEL_38;
    }
LABEL_34:
    if ( !(_BYTE)under_debugger )
      interr(518);
LABEL_40:
    BUG();
  }
  return s;
}
// 158B40: using guessed type __int64 under_debugger;
