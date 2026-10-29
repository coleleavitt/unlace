char *__fastcall sub_228A4B0(char *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  char v6; // al
  bool v7; // r14
  unsigned __int64 v8; // rax
  bool v9; // si
  char v10; // dl
  unsigned __int64 v11; // rcx
  char *result; // rax

  v4 = sub_2288500(a1, a2, a3);
  v5 = v4;
  if ( !a2 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  v6 = a1[v4];
  if ( v6 != 47 )
  {
    v7 = v6 != 92 || a3 <= 1;
LABEL_4:
    v8 = sub_2288910(a1, a2, a3);
    if ( v5 )
    {
      v9 = v8 == -1;
      if ( v5 > v8 || v8 == -1 )
      {
LABEL_7:
        while ( 1 )
        {
          v10 = a1[v5 - 1];
          v11 = v5 - 1;
          if ( v10 != 47 && (v10 != 92 || a3 <= 1) )
            break;
          if ( v5 == 1 )
            goto LABEL_27;
          --v5;
          if ( v11 <= v8 && !v9 )
          {
            if ( v11 == v8 && v7 )
              goto LABEL_12;
            return a1;
          }
        }
      }
      if ( v5 == v8 && v7 )
        goto LABEL_12;
LABEL_13:
      result = nullptr;
      if ( v5 == -1 )
        return result;
      return a1;
    }
LABEL_27:
    if ( !v8 && v7 )
    {
LABEL_12:
      v5 = v8 + 1;
      goto LABEL_13;
    }
    return a1;
  }
  v8 = sub_2288910(a1, a2, a3);
  if ( v5 )
  {
    v9 = v8 == -1;
    if ( v5 > v8 || v8 == -1 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  return a1;
}
