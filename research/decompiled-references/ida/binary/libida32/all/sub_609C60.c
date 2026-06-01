char **__fastcall sub_609C60(char **a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 (*v6)(void); // rax
  char **result; // rax
  char **v8; // r13
  char **v9; // rdx
  char **v10; // rdi
  char *v11; // rcx
  char *v12; // rsi
  char **v13; // rsi
  char *v14; // rdx
  char *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax

  v6 = *((__int64 (**)(void))*a1 + 4);
  if ( (char *)v6 == (char *)sub_3D58E0 )
    result = a1 + 2;
  else
    result = (char **)v6();
  if ( a3 >= (unsigned __int64)*result && a3 < (unsigned __int64)result[1] )
  {
    result = *((char ***)*a1 + 5);
    if ( result == (char **)sub_605FC0 )
    {
      if ( a1[10] )
      {
        result = (char **)a1[7];
        v8 = a1 + 6;
        v9 = result;
        if ( result )
        {
          v10 = a1 + 6;
          do
          {
            while ( 1 )
            {
              v11 = v9[2];
              v12 = v9[3];
              if ( (unsigned __int64)v9[4] >= a3 )
                break;
              v9 = (char **)v9[3];
              if ( !v12 )
                goto LABEL_12;
            }
            v10 = v9;
            v9 = (char **)v9[2];
          }
          while ( v11 );
LABEL_12:
          if ( v8 != v10 && (char *)a3 == v10[4] )
          {
            a3 = (unsigned int)a3;
            v13 = a1 + 6;
            goto LABEL_21;
          }
        }
      }
    }
    else
    {
      result = (char **)((__int64 (__fastcall *)(char **, unsigned __int64, _QWORD))result)(a1, a3, 0);
      if ( (char **)a3 == result )
      {
        result = (char **)a1[7];
        a3 = (unsigned int)a3;
        v8 = a1 + 6;
        if ( !result )
          goto LABEL_25;
        v13 = a1 + 6;
        do
        {
LABEL_21:
          while ( 1 )
          {
            v14 = result[2];
            v15 = result[3];
            if ( (unsigned __int64)result[4] >= a3 )
              break;
            result = (char **)result[3];
            if ( !v15 )
              goto LABEL_23;
          }
          v8 = result;
          result = (char **)result[2];
        }
        while ( v14 );
LABEL_23:
        if ( v13 == v8 || a3 < (unsigned __int64)v8[4] )
LABEL_25:
          sub_606130();
        v16 = a2[1];
        v17 = *a2;
        if ( a2[2] < (unsigned __int64)(v16 + 1) )
        {
          v19 = qvector_reserve(a2, v17, v16 + 1, 24);
          v16 = a2[1];
          *a2 = v19;
          v17 = v19;
        }
        v18 = v17 + 24 * v16;
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = 0;
        ++a2[1];
        return sub_3573A0((char **)v18);
      }
    }
  }
  return result;
}

