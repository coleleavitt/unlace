unsigned __int64 __fastcall sub_228A5F0(char **a1, unsigned int a2)
{
  unsigned __int64 v3; // r15
  char *v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  char v7; // al
  bool v8; // r14
  unsigned __int64 result; // rax
  bool v10; // si
  char v11; // cl
  unsigned __int64 v12; // rdx

  v3 = (unsigned __int64)a1[1];
  v4 = *a1;
  v5 = sub_2288500(*a1, v3, a2);
  v6 = v5;
  if ( !v3 )
  {
    v8 = 1;
    goto LABEL_4;
  }
  v7 = v4[v5];
  if ( v7 != 47 )
  {
    v8 = v7 != 92 || a2 <= 1;
LABEL_4:
    result = sub_2288910(v4, v3, a2);
    if ( v6 )
    {
      v10 = result == -1;
      if ( v6 > result || result == -1 )
      {
LABEL_7:
        while ( 1 )
        {
          v11 = v4[v6 - 1];
          v12 = v6 - 1;
          if ( v11 != 47 && (a2 <= 1 || v11 != 92) )
            break;
          if ( v6 == 1 )
            goto LABEL_27;
          --v6;
          if ( v12 <= result && !v10 )
          {
            if ( v12 != result || !v8 )
            {
              v6 = v12;
              goto LABEL_14;
            }
            goto LABEL_12;
          }
        }
      }
      if ( v6 == result && v8 )
        goto LABEL_12;
LABEL_13:
      if ( v6 == -1 )
        return result;
      goto LABEL_14;
    }
LABEL_27:
    if ( !result && v8 )
    {
LABEL_12:
      v6 = result + 1;
      goto LABEL_13;
    }
    goto LABEL_29;
  }
  result = sub_2288910(v4, v3, a2);
  if ( v6 )
  {
    v10 = result == -1;
    if ( v6 > result || result == -1 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
LABEL_29:
  v6 = 0;
LABEL_14:
  a1[1] = (char *)v6;
  return result;
}
