char **__fastcall sub_626020(char **a1, __int64 *a2, char **a3)
{
  __int64 (*v5)(void); // rax
  char **result; // rax
  char **v7; // r13
  char **v8; // rdx
  char **v9; // rdi
  char *v10; // rcx
  char *v11; // rsi
  char **v12; // rsi
  char *v13; // rdx
  char *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax

  v5 = *((__int64 (**)(void))*a1 + 4);
  if ( (char *)v5 == (char *)sub_3DB7B0 )
    result = a1 + 2;
  else
    result = (char **)v5();
  if ( a3 < (char **)*result || a3 >= (char **)result[1] )
    return result;
  result = *((char ***)*a1 + 5);
  if ( result != (char **)sub_6222A0 )
  {
    result = (char **)((__int64 (__fastcall *)(char **, char **, _QWORD))result)(a1, a3, 0);
    if ( a3 != result )
      return result;
    result = (char **)a1[7];
    v7 = a1 + 6;
    if ( !result )
      goto LABEL_24;
    goto LABEL_18;
  }
  if ( a1[10] )
  {
    result = (char **)a1[7];
    v7 = a1 + 6;
    v8 = result;
    if ( result )
    {
      v9 = a1 + 6;
      do
      {
        while ( 1 )
        {
          v10 = v8[2];
          v11 = v8[3];
          if ( v8[4] >= (char *)a3 )
            break;
          v8 = (char **)v8[3];
          if ( !v11 )
            goto LABEL_12;
        }
        v9 = v8;
        v8 = (char **)v8[2];
      }
      while ( v10 );
LABEL_12:
      if ( v7 != v9 && a3 == (char **)v9[4] )
      {
LABEL_18:
        v12 = v7;
        do
        {
          while ( 1 )
          {
            v13 = result[2];
            v14 = result[3];
            if ( result[4] >= (char *)a3 )
              break;
            result = (char **)result[3];
            if ( !v14 )
              goto LABEL_22;
          }
          v7 = result;
          result = (char **)result[2];
        }
        while ( v13 );
LABEL_22:
        if ( v12 != v7 && a3 >= (char **)v7[4] )
        {
          v15 = a2[1];
          v16 = *a2;
          if ( a2[2] < (unsigned __int64)(v15 + 1) )
          {
            v18 = qvector_reserve(a2, v16, v15 + 1, 24);
            v15 = a2[1];
            *a2 = v18;
            v16 = v18;
          }
          v17 = v16 + 24 * v15;
          *(_QWORD *)v17 = 0;
          *(_OWORD *)(v17 + 8) = 0;
          ++a2[1];
          return sub_35A790((char **)v17);
        }
LABEL_24:
        sub_622410();
      }
    }
  }
  return result;
}
