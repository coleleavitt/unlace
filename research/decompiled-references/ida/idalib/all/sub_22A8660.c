const char **__fastcall sub_22A8660(const char **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  const char **v4; // r14
  __int64 v5; // rbx
  size_t v6; // r13
  size_t v7; // rax
  size_t v8; // rdx
  size_t v9; // r8
  int v10; // eax
  bool v11; // cc
  const char **v12; // rbp
  const char *v13; // r12
  size_t v15; // [rsp+0h] [rbp-48h]

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = v3 >> 4;
  if ( v3 > 0 )
  {
    v6 = *(_QWORD *)(a3 + 8);
    do
    {
      while ( 1 )
      {
        v12 = &v4[2 * (v5 >> 1)];
        v13 = *v12;
        if ( *v12 )
          break;
        v11 = v6 == 0;
        if ( !v6 )
          goto LABEL_12;
LABEL_8:
        if ( !v11 )
          goto LABEL_9;
LABEL_12:
        v5 >>= 1;
LABEL_13:
        if ( v5 <= 0 )
          return v4;
      }
      v7 = strlen(*v12);
      v8 = v6;
      v9 = v7;
      if ( v7 <= v6 )
        v8 = v7;
      if ( !v8 || (v15 = v7, v10 = memcmp(v13, *(const void **)a3, v8), v9 = v15, !v10) )
      {
        v11 = v6 <= v9;
        if ( v6 == v9 )
          goto LABEL_12;
        goto LABEL_8;
      }
      if ( v10 >= 0 )
      {
        v5 >>= 1;
        goto LABEL_13;
      }
LABEL_9:
      v4 = v12 + 2;
      v5 = v5 - (v5 >> 1) - 1;
    }
    while ( v5 > 0 );
  }
  return v4;
}
