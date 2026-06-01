/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqmakepath
// Address: 0x0000000100073088

//----- (0000000100073088) ----------------------------------------------------
char *__fastcall vqmakepath(char *__s, __int64 a2, const char *a3, const char **a4)
{
  char *v5; // x21
  char *v6; // x20
  const char *v7; // x1
  char v8; // w24
  char *v9; // x22
  const char *v10; // x20
  unsigned __int64 v11; // x8
  int v12; // w9
  int v13; // w9
  int v14; // t1
  const char **v15; // x8
  int v16; // w8
  char *v18; // x0
  unsigned __int64 v19; // x1
  char *v20; // x2

  if ( a2 < 0 )
    goto LABEL_35;
  if ( !__s )
    return __s;
  v5 = &__s[a2];
  v6 = __s;
  if ( a3 )
  {
    v7 = a3;
    v8 = 0;
    v9 = v5 - 1;
    v10 = __s;
    while ( 1 )
    {
      if ( v10 != v7 )
        qustrncpy((unsigned __int64)v10, (__int64)v7, v5 - v10);
      v6 = (char *)&v10[strlen(v10)];
      if ( v6 > __s )
      {
        v11 = (unsigned __int64)(v6 - 1);
        v12 = (unsigned __int8)*(v6 - 1);
        if ( v12 == 92 || v12 == 47 )
        {
          if ( v11 <= (unsigned __int64)__s )
          {
LABEL_16:
            v8 = 1;
            v6 = __s;
          }
          else
          {
            --v6;
            while ( 1 )
            {
              v14 = *(unsigned __int8 *)--v11;
              v13 = v14;
              if ( v14 != 92 && v13 != 47 )
                break;
              v6 = (char *)v11;
              if ( v11 <= (unsigned __int64)__s )
                goto LABEL_16;
            }
            v8 = 1;
          }
        }
      }
      v15 = a4++;
      v7 = *v15;
      if ( !*v15 )
        break;
      while ( 1 )
      {
        v16 = *(unsigned __int8 *)v7;
        if ( v16 != 92 && v16 != 47 )
          break;
        ++v7;
      }
      if ( v6 >= v5 )
        goto LABEL_32;
      *v6 = 47;
      v10 = v6 + 1;
      if ( v10 >= v5 )
      {
        *v9 = 0;
        v10 = v5 - 1;
      }
    }
    if ( v6 == __s && (v8 & 1) != 0 )
    {
      if ( v5 <= __s )
      {
LABEL_32:
        if ( under_debugger != 1 )
          goto LABEL_34;
        goto LABEL_33;
      }
      *v6++ = 47;
      if ( v6 >= v5 )
      {
        *v9 = 0;
        v6 = v5 - 1;
      }
    }
  }
  if ( v6 < v5 )
  {
    *v6 = 0;
    return __s;
  }
  if ( under_debugger == 1 )
  {
    while ( 1 )
    {
LABEL_33:
      __break(1u);
LABEL_34:
      interr(518);
LABEL_35:
      if ( under_debugger != 1 )
        interr(1225);
    }
  }
  interr(519);
  return (char *)qdirname(v18, v19, v20);
}
// 10007327D: variable 'v18' is possibly undefined
// 10007327D: variable 'v19' is possibly undefined
// 10007327D: variable 'v20' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
