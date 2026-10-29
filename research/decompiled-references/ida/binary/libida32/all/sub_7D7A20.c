char *__fastcall sub_7D7A20(char *a1, char *a2, char *a3)
{
  char *v3; // r13
  signed __int64 v4; // rbx
  __int64 v5; // rbp
  char *v6; // r15
  char *v7; // r14
  __int64 v8; // r12
  char *v9; // rdi
  char *v10; // r12
  char *v11; // r14
  __int64 i; // r15
  char *v14; // rbx
  void *v15; // rsi
  unsigned __int64 v16; // [rsp+0h] [rbp-58h]
  char *v17; // [rsp+8h] [rbp-50h]

  v17 = a1;
  if ( a1 == a2 )
    return a3;
  if ( a2 == a3 )
    return a1;
  v3 = a1;
  v4 = 0xF128CFC4A33F128DLL * ((a2 - a1) >> 4);
  v16 = 0xF128CFC4A33F128DLL * ((a3 - a1) >> 4);
  if ( v4 == v16 - v4 )
  {
    v14 = a2;
    do
    {
      v15 = v14;
      v14 += 1104;
      sub_7D79B0(v17, v15);
      v17 += 1104;
    }
    while ( a2 != v17 );
    return a2;
  }
  else
  {
    v5 = v16 - v4;
    if ( v4 >= (__int64)(v16 - v4) )
      goto LABEL_12;
    while ( 1 )
    {
      v6 = &v3[1104 * v4];
      if ( v5 > 0 )
      {
        v7 = v3;
        v8 = 0;
        do
        {
          v9 = v7;
          ++v8;
          v7 += 1104;
          sub_7D79B0(v9, v6);
          v6 += 1104;
        }
        while ( v5 != v8 );
        v3 += 1104 * v5;
      }
      if ( !(v16 % v4) )
        break;
      v5 = v4;
      v4 -= v16 % v4;
      while ( 1 )
      {
        v16 = v5;
        v5 -= v4;
        if ( v4 < v5 )
          break;
LABEL_12:
        v10 = &v3[1104 * v16];
        v3 = &v10[-1104 * v5];
        if ( v4 > 0 )
        {
          v11 = &v10[-1104 * v5];
          for ( i = 0; i != v4; ++i )
          {
            v11 -= 1104;
            v10 -= 1104;
            sub_7D79B0(v11, v10);
          }
          v3 -= 1104 * v4;
        }
        v4 = v16 % v5;
        if ( !(v16 % v5) )
          return &v17[a3 - a2];
      }
    }
    return &v17[a3 - a2];
  }
}

