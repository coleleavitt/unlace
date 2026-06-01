__int64 __fastcall sub_75BCC0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // al
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // r14
  char v9; // bp
  const char *v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // r14
  char v13; // bp
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // r14
  _BYTE v19[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = *(_BYTE *)(a1 + 30);
  v19[0] = 1;
  if ( (~v5 & 0xF0) != 0 )
    v6 = v5 >> 4;
  else
    v6 = sub_C4A760(a1);
  if ( v6 != 2 )
  {
    if ( v6 > 2 )
    {
      sub_5FF0F0(a2, "[[clang::try_acquire_shared_capability");
      v19[0] = 0;
      sub_5FF0F0(a2, "(");
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v11 = *(_QWORD *)(a1 + 56);
      v12 = v11 + 8LL * *(unsigned int *)(a1 + 48);
      if ( v11 != v12 )
      {
        do
        {
          v11 += 8;
          sub_722380(a2, v19);
          sub_2623950(a2, *(_QWORD *)(v11 - 8));
        }
        while ( v12 != v11 );
LABEL_12:
        v13 = v19[0];
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( v13 )
        {
LABEL_13:
          v10 = "]]";
          return sub_5FF0F0(a2, v10);
        }
LABEL_23:
        sub_5FF0F0(a2, ")");
        goto LABEL_13;
      }
    }
    else
    {
      if ( !v6 )
      {
        sub_5FF0F0(a2, "__attribute__((try_acquire_capability");
        v19[0] = 0;
        sub_5FF0F0(a2, "(");
        sub_5FF0F0(a2, &byte_3B9466E);
        sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
        sub_5FF0F0(a2, &byte_3B9466E);
        sub_5FF0F0(a2, &byte_3B9466E);
        v7 = *(_QWORD *)(a1 + 56);
        v8 = v7 + 8LL * *(unsigned int *)(a1 + 48);
        if ( v7 != v8 )
        {
          do
          {
            v7 += 8;
            sub_722380(a2, v19);
            sub_2623950(a2, *(_QWORD *)(v7 - 8));
          }
          while ( v8 != v7 );
          goto LABEL_8;
        }
LABEL_24:
        sub_5FF0F0(a2, &byte_3B9466E);
        goto LABEL_25;
      }
      sub_5FF0F0(a2, "[[clang::try_acquire_capability");
      v19[0] = 0;
      sub_5FF0F0(a2, "(");
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v15 = *(_QWORD *)(a1 + 56);
      v16 = v15 + 8LL * *(unsigned int *)(a1 + 48);
      if ( v15 != v16 )
      {
        do
        {
          v15 += 8;
          sub_722380(a2, v19);
          sub_2623950(a2, *(_QWORD *)(v15 - 8));
        }
        while ( v16 != v15 );
        goto LABEL_12;
      }
    }
    sub_5FF0F0(a2, &byte_3B9466E);
    goto LABEL_23;
  }
  sub_5FF0F0(a2, "__attribute__((try_acquire_shared_capability");
  v19[0] = 0;
  sub_5FF0F0(a2, "(");
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_5FF0F0(a2, &byte_3B9466E);
  v17 = *(_QWORD *)(a1 + 56);
  v18 = v17 + 8LL * *(unsigned int *)(a1 + 48);
  if ( v17 == v18 )
    goto LABEL_24;
  do
  {
    v17 += 8;
    sub_722380(a2, v19);
    sub_2623950(a2, *(_QWORD *)(v17 - 8));
  }
  while ( v18 != v17 );
LABEL_8:
  v9 = v19[0];
  sub_5FF0F0(a2, &byte_3B9466E);
  if ( !v9 )
LABEL_25:
    sub_5FF0F0(a2, ")");
  v10 = "))";
  return sub_5FF0F0(a2, v10);
}

