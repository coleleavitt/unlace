__int64 __fastcall sub_2288A70(unsigned __int8 *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int8 v4; // r12
  char *v5; // rbx
  size_t v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int8 v8; // al
  int v9; // eax
  unsigned int v10; // [rsp+Ch] [rbp-2Ch]
  __int64 v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[0] = (__int64)a1;
  v11[1] = a2;
  if ( !a2 )
    return (__int64)a1;
  v4 = *a1;
  if ( a3 <= 1 || a2 <= 1 || (v10 = a3, v9 = isalpha(v4), a3 = v10, !v9) || a1[1] != 58 )
  {
    if ( a2 <= 2 )
    {
      if ( v4 == 47 )
        return (__int64)a1;
      if ( a3 != 1 )
        goto LABEL_16;
    }
    else
    {
      if ( v4 == 47 )
      {
        if ( a1[1] != 47 )
          return (__int64)a1;
        v8 = a1[2];
        if ( v8 == 47 )
          return (__int64)a1;
        if ( a3 == 1 )
        {
          v5 = "/";
          goto LABEL_26;
        }
LABEL_22:
        if ( a3 && v8 == 92 )
          return (__int64)a1;
        v5 = "/";
        if ( a3 )
          v5 = "\\/";
LABEL_26:
        v6 = j__strlen(v5);
        v7 = 2;
        goto LABEL_13;
      }
      if ( a3 != 1 )
      {
        if ( v4 != 92 || !a3 )
          goto LABEL_10;
        if ( a1[1] != 92 )
          return (__int64)a1;
        v8 = a1[2];
        if ( v8 == 47 )
        {
LABEL_16:
          if ( v4 != 92 || !a3 )
          {
LABEL_10:
            v5 = "/";
            if ( a3 )
              v5 = "\\/";
            goto LABEL_12;
          }
          return (__int64)a1;
        }
        goto LABEL_22;
      }
    }
    v5 = "/";
LABEL_12:
    v6 = strlen(v5);
    v7 = 0;
LABEL_13:
    sub_2246EC0(v11, (unsigned __int8 *)v5, v6, v7);
    return v11[0];
  }
  return (__int64)a1;
}
