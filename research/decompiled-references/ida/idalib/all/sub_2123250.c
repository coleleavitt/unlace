const char **__fastcall sub_2123250(const char **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  const char **v5; // r12
  size_t v6; // rbp
  size_t v7; // rax
  size_t v8; // rdx
  size_t v9; // r13
  int v10; // eax
  bool v11; // cc
  const char **v12; // rbx
  const char *s1; // [rsp+0h] [rbp-48h]

  v3 = a2 - (_QWORD)a1;
  v4 = 0x6DB6DB6DB6DB6DB7LL * (v3 >> 4);
  v5 = a1;
  if ( v3 > 0 )
  {
    v6 = *(_QWORD *)(a3 + 8);
    do
    {
      while ( 1 )
      {
        v12 = &v5[14 * (v4 >> 1)];
        if ( *v12 )
          break;
        v11 = v6 == 0;
        if ( !v6 )
          goto LABEL_12;
LABEL_8:
        if ( !v11 )
          goto LABEL_9;
LABEL_12:
        v4 >>= 1;
LABEL_13:
        if ( v4 <= 0 )
          return v5;
      }
      s1 = *v12;
      v7 = strlen(*v12);
      v8 = v6;
      v9 = v7;
      if ( v7 <= v6 )
        v8 = v7;
      if ( !v8 || (v10 = memcmp(s1, *(const void **)a3, v8)) == 0 )
      {
        v11 = v6 <= v9;
        if ( v6 == v9 )
          goto LABEL_12;
        goto LABEL_8;
      }
      if ( v10 >= 0 )
      {
        v4 >>= 1;
        goto LABEL_13;
      }
LABEL_9:
      v5 = v12 + 14;
      v4 = v4 - (v4 >> 1) - 1;
    }
    while ( v4 > 0 );
  }
  return v5;
}
