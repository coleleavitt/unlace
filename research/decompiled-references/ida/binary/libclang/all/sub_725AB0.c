__int64 __fastcall sub_725AB0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  char v7; // bp
  const char *v8; // rsi
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // r14
  char v16; // bp
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // r14
  _BYTE v21[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v21[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  switch ( v4 )
  {
    case 0:
      sub_5FF0F0(a2, "__attribute__((acquire_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v12 = *(_QWORD *)(a1 + 40);
      v13 = v12 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v12 == v13 )
        goto LABEL_28;
      do
      {
        v12 += 8;
        sub_722380(a2, v21);
        sub_2623950(a2, *(_QWORD *)(v12 - 8));
      }
      while ( v13 != v12 );
      goto LABEL_7;
    case 1:
      sub_5FF0F0(a2, "[[clang::acquire_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v14 = *(_QWORD *)(a1 + 40);
      v15 = v14 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v14 == v15 )
        goto LABEL_29;
      do
      {
        v14 += 8;
        sub_722380(a2, v21);
        sub_2623950(a2, *(_QWORD *)(v14 - 8));
      }
      while ( v15 != v14 );
      goto LABEL_19;
    case 2:
      sub_5FF0F0(a2, "__attribute__((acquire_shared_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v17 = *(_QWORD *)(a1 + 40);
      v18 = v17 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v17 == v18 )
        goto LABEL_28;
      do
      {
        v17 += 8;
        sub_722380(a2, v21);
        sub_2623950(a2, *(_QWORD *)(v17 - 8));
      }
      while ( v18 != v17 );
      goto LABEL_7;
    case 3:
      sub_5FF0F0(a2, "[[clang::acquire_shared_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v19 = *(_QWORD *)(a1 + 40);
      v20 = v19 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v19 == v20 )
      {
LABEL_29:
        sub_5FF0F0(a2, &byte_3B9466E);
      }
      else
      {
        do
        {
          v19 += 8;
          sub_722380(a2, v21);
          sub_2623950(a2, *(_QWORD *)(v19 - 8));
        }
        while ( v20 != v19 );
LABEL_19:
        v16 = v21[0];
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !v16 )
          sub_5FF0F0(a2, ")");
      }
      v8 = "]]";
      return sub_5FF0F0(a2, v8);
    case 4:
      sub_5FF0F0(a2, "__attribute__((exclusive_lock_function");
      sub_5FF0F0(a2, &byte_3B9466E);
      v5 = *(_QWORD *)(a1 + 40);
      v6 = v5 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v5 == v6 )
        goto LABEL_28;
      do
      {
        v5 += 8;
        sub_722380(a2, v21);
        sub_2623950(a2, *(_QWORD *)(v5 - 8));
      }
      while ( v6 != v5 );
      goto LABEL_7;
    case 5:
      sub_5FF0F0(a2, "__attribute__((shared_lock_function");
      sub_5FF0F0(a2, &byte_3B9466E);
      v10 = *(_QWORD *)(a1 + 40);
      v11 = v10 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v10 == v11 )
      {
LABEL_28:
        sub_5FF0F0(a2, &byte_3B9466E);
      }
      else
      {
        do
        {
          v10 += 8;
          sub_722380(a2, v21);
          sub_2623950(a2, *(_QWORD *)(v10 - 8));
        }
        while ( v11 != v10 );
LABEL_7:
        v7 = v21[0];
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !v7 )
          sub_5FF0F0(a2, ")");
      }
      v8 = "))";
      return sub_5FF0F0(a2, v8);
  }
}

