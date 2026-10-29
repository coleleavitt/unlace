__int64 __fastcall sub_7304C0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r14
  char v7; // bp
  const char *v8; // rsi
  __int64 v10; // rbp
  __int64 v11; // r14
  char v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r14
  char v15; // bp
  __int64 v16; // rbp
  __int64 v17; // r14
  _BYTE v18[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v18[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::cpu_dispatch");
    sub_5FF0F0(a2, &byte_3B9466E);
    v16 = *(_QWORD *)(a1 + 40);
    v17 = v16 + 8LL * *(unsigned int *)(a1 + 36);
    if ( v16 != v17 )
    {
      do
      {
        v16 += 8;
        sub_722380(a2, v18);
        sub_2623950(a2, *(_QWORD *)(v16 - 8));
      }
      while ( v17 != v16 );
LABEL_19:
      v15 = v18[0];
      sub_5FF0F0(a2, &byte_3B9466E);
      if ( !v15 )
        sub_5FF0F0(a2, ")");
      goto LABEL_21;
    }
LABEL_26:
    sub_5FF0F0(a2, &byte_3B9466E);
LABEL_21:
    v8 = "]]";
    return sub_5FF0F0(a2, v8);
  }
  if ( v4 <= 2 )
  {
    if ( !v4 )
    {
      sub_5FF0F0(a2, "__attribute__((cpu_dispatch");
      sub_5FF0F0(a2, &byte_3B9466E);
      v5 = *(_QWORD *)(a1 + 40);
      v6 = v5 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v5 == v6 )
      {
        sub_5FF0F0(a2, &byte_3B9466E);
      }
      else
      {
        do
        {
          v5 += 8;
          sub_722380(a2, v18);
          sub_2623950(a2, *(_QWORD *)(v5 - 8));
        }
        while ( v6 != v5 );
        v7 = v18[0];
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !v7 )
          sub_5FF0F0(a2, ")");
      }
      v8 = "))";
      return sub_5FF0F0(a2, v8);
    }
    sub_5FF0F0(a2, "[[clang::cpu_dispatch");
    sub_5FF0F0(a2, &byte_3B9466E);
    v13 = *(_QWORD *)(a1 + 40);
    v14 = v13 + 8LL * *(unsigned int *)(a1 + 36);
    if ( v13 != v14 )
    {
      do
      {
        v13 += 8;
        sub_722380(a2, v18);
        sub_2623950(a2, *(_QWORD *)(v13 - 8));
      }
      while ( v14 != v13 );
      goto LABEL_19;
    }
    goto LABEL_26;
  }
  sub_5FF0F0(a2, "__declspec(cpu_dispatch");
  sub_5FF0F0(a2, &byte_3B9466E);
  v10 = *(_QWORD *)(a1 + 40);
  v11 = v10 + 8LL * *(unsigned int *)(a1 + 36);
  if ( v10 == v11 )
  {
    sub_5FF0F0(a2, &byte_3B9466E);
  }
  else
  {
    do
    {
      v10 += 8;
      sub_722380(a2, v18);
      sub_2623950(a2, *(_QWORD *)(v10 - 8));
    }
    while ( v11 != v10 );
    v12 = v18[0];
    sub_5FF0F0(a2, &byte_3B9466E);
    if ( !v12 )
      sub_5FF0F0(a2, ")");
  }
  v8 = ")";
  return sub_5FF0F0(a2, v8);
}

