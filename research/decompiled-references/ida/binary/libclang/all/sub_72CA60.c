__int64 __fastcall sub_72CA60(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r14
  char v7; // bp
  const char *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r14
  char v11; // bp
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r14
  _BYTE v17[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v17[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 != 2 )
  {
    if ( v4 > 2 )
    {
      sub_5FF0F0(a2, "[[clang::assert_shared_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v9 = *(_QWORD *)(a1 + 40);
      v10 = v9 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v9 != v10 )
      {
        do
        {
          v9 += 8;
          sub_722380(a2, v17);
          sub_2623950(a2, *(_QWORD *)(v9 - 8));
        }
        while ( v10 != v9 );
LABEL_13:
        v11 = v17[0];
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !v11 )
          sub_5FF0F0(a2, ")");
        goto LABEL_15;
      }
    }
    else
    {
      if ( !v4 )
      {
        sub_5FF0F0(a2, "__attribute__((assert_capability");
        sub_5FF0F0(a2, &byte_3B9466E);
        v5 = *(_QWORD *)(a1 + 40);
        v6 = v5 + 8LL * *(unsigned int *)(a1 + 36);
        if ( v5 != v6 )
        {
          do
          {
            v5 += 8;
            sub_722380(a2, v17);
            sub_2623950(a2, *(_QWORD *)(v5 - 8));
          }
          while ( v6 != v5 );
          goto LABEL_8;
        }
        goto LABEL_25;
      }
      sub_5FF0F0(a2, "[[clang::assert_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v13 = *(_QWORD *)(a1 + 40);
      v14 = v13 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v13 != v14 )
      {
        do
        {
          v13 += 8;
          sub_722380(a2, v17);
          sub_2623950(a2, *(_QWORD *)(v13 - 8));
        }
        while ( v14 != v13 );
        goto LABEL_13;
      }
    }
    sub_5FF0F0(a2, &byte_3B9466E);
LABEL_15:
    v8 = "]]";
    return sub_5FF0F0(a2, v8);
  }
  sub_5FF0F0(a2, "__attribute__((assert_shared_capability");
  sub_5FF0F0(a2, &byte_3B9466E);
  v15 = *(_QWORD *)(a1 + 40);
  v16 = v15 + 8LL * *(unsigned int *)(a1 + 36);
  if ( v15 != v16 )
  {
    do
    {
      v15 += 8;
      sub_722380(a2, v17);
      sub_2623950(a2, *(_QWORD *)(v15 - 8));
    }
    while ( v16 != v15 );
LABEL_8:
    v7 = v17[0];
    sub_5FF0F0(a2, &byte_3B9466E);
    if ( !v7 )
      sub_5FF0F0(a2, ")");
    goto LABEL_10;
  }
LABEL_25:
  sub_5FF0F0(a2, &byte_3B9466E);
LABEL_10:
  v8 = "))";
  return sub_5FF0F0(a2, v8);
}

