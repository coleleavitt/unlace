/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqmakepath
// Address: 0x00000000000BBF80

//----- (00000000000BBF80) ----------------------------------------------------
char *__fastcall vqmakepath(size_t s, unsigned __int64 a2, char *a3, unsigned __int8 ***a4)
{
  char *v4; // x19
  char *v5; // x8
  char *v6; // x22
  char *v7; // x21
  char v9; // w23
  char *v10; // x8
  int v11; // w9
  int v12; // t1
  __int64 v13; // x8
  char **v14; // x8
  int v15; // w9

  if ( (a2 & 0x8000000000000000LL) != 0 )
    goto LABEL_36;
  v4 = (char *)s;
  if ( !s )
    return v4;
  v5 = a3;
  v6 = (char *)(s + a2);
  v7 = (char *)s;
  if ( !a3 )
  {
LABEL_31:
    if ( v7 >= v6 )
    {
LABEL_38:
      if ( !under_debugger )
        s = (size_t)interr(519);
      goto LABEL_40;
    }
    *v7 = 0;
    return v4;
  }
  v9 = 0;
  v7 = (char *)s;
  do
  {
    if ( v7 != v5 )
      qustrncpy((unsigned __int64)v7, (__int64)v5, v6 - v7);
    s = strlen(v7);
    v10 = &v7[s];
    if ( &v7[s] > v4 )
    {
      v7 += s;
      while ( 1 )
      {
        v12 = (unsigned __int8)*--v7;
        v11 = v12;
        if ( v12 != 92 && v11 != 47 )
          break;
        v9 = 1;
        v10 = v7;
        if ( v7 <= v4 )
        {
          v13 = *((int *)a4 + 6);
          if ( (v13 & 0x80000000) == 0 )
            goto LABEL_16;
          goto LABEL_15;
        }
      }
    }
    v7 = v10;
    v13 = *((int *)a4 + 6);
    if ( (v13 & 0x80000000) == 0 )
    {
LABEL_16:
      v14 = (char **)(*a4)++;
      v5 = *v14;
      if ( !v5 )
        break;
      goto LABEL_21;
    }
LABEL_15:
    *((_DWORD *)a4 + 6) = v13 + 8;
    if ( (int)v13 + 8 > 0 )
      goto LABEL_16;
    v5 = *(char **)((char *)a4[1] + v13);
    if ( !v5 )
      break;
LABEL_21:
    while ( 1 )
    {
      v15 = (unsigned __int8)*v5;
      if ( v15 != 92 && v15 != 47 )
        break;
      ++v5;
    }
    if ( v7 >= v6 )
      goto LABEL_34;
    *v7++ = 47;
    if ( v7 >= v6 )
    {
      v7 = v6 - 1;
      *(v6 - 1) = 0;
    }
  }
  while ( v5 );
  if ( v7 != v4 || (v9 & 1) == 0 )
    goto LABEL_31;
  if ( v6 > v4 )
  {
    *v4 = 47;
    v7 = v4 + 1;
    if ( v4 + 1 >= v6 )
    {
      *(v6 - 1) = 0;
      v7 = v6 - 1;
    }
    goto LABEL_31;
  }
LABEL_34:
  if ( under_debugger )
    goto LABEL_40;
  s = (size_t)interr(518);
LABEL_36:
  if ( !under_debugger )
  {
    s = (size_t)interr(1225);
    goto LABEL_38;
  }
LABEL_40:
  __break(1u);
  return (char *)qdirname((char *)s, a2, a3);
}
// BC141: variable 'a2' is possibly undefined
// BC141: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
