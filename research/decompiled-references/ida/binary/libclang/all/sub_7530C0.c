__int64 __fastcall sub_7530C0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  char v7; // bp
  const char *v8; // rsi
  __int64 v10; // r12
  __int64 v11; // r14
  char v12; // bp
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // r14
  _BYTE v25[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v25[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  switch ( v4 )
  {
    case 0:
      sub_5FF0F0(a2, "__attribute__((release_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v13 = *(_QWORD *)(a1 + 40);
      v14 = v13 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v13 == v14 )
        goto LABEL_34;
      do
      {
        v13 += 8;
        sub_722380(a2, v25);
        sub_2623950(a2, *(_QWORD *)(v13 - 8));
      }
      while ( v14 != v13 );
      goto LABEL_7;
    case 1:
      sub_5FF0F0(a2, "[[clang::release_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v15 = *(_QWORD *)(a1 + 40);
      v16 = v15 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v15 == v16 )
        goto LABEL_35;
      do
      {
        v15 += 8;
        sub_722380(a2, v25);
        sub_2623950(a2, *(_QWORD *)(v15 - 8));
      }
      while ( v16 != v15 );
      goto LABEL_13;
    case 2:
      sub_5FF0F0(a2, "__attribute__((release_shared_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v17 = *(_QWORD *)(a1 + 40);
      v18 = v17 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v17 == v18 )
        goto LABEL_34;
      do
      {
        v17 += 8;
        sub_722380(a2, v25);
        sub_2623950(a2, *(_QWORD *)(v17 - 8));
      }
      while ( v18 != v17 );
      goto LABEL_7;
    case 3:
      sub_5FF0F0(a2, "[[clang::release_shared_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v19 = *(_QWORD *)(a1 + 40);
      v20 = v19 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v19 == v20 )
        goto LABEL_35;
      do
      {
        v19 += 8;
        sub_722380(a2, v25);
        sub_2623950(a2, *(_QWORD *)(v19 - 8));
      }
      while ( v20 != v19 );
      goto LABEL_13;
    case 4:
      sub_5FF0F0(a2, "__attribute__((release_generic_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v21 = *(_QWORD *)(a1 + 40);
      v22 = v21 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v21 == v22 )
        goto LABEL_34;
      do
      {
        v21 += 8;
        sub_722380(a2, v25);
        sub_2623950(a2, *(_QWORD *)(v21 - 8));
      }
      while ( v22 != v21 );
      goto LABEL_7;
    case 5:
      sub_5FF0F0(a2, "[[clang::release_generic_capability");
      sub_5FF0F0(a2, &byte_3B9466E);
      v23 = *(_QWORD *)(a1 + 40);
      v24 = v23 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v23 == v24 )
        goto LABEL_35;
      do
      {
        v23 += 8;
        sub_722380(a2, v25);
        sub_2623950(a2, *(_QWORD *)(v23 - 8));
      }
      while ( v24 != v23 );
      goto LABEL_13;
    case 6:
      sub_5FF0F0(a2, "__attribute__((unlock_function");
      sub_5FF0F0(a2, &byte_3B9466E);
      v5 = *(_QWORD *)(a1 + 40);
      v6 = v5 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v5 == v6 )
      {
LABEL_34:
        sub_5FF0F0(a2, &byte_3B9466E);
      }
      else
      {
        do
        {
          v5 += 8;
          sub_722380(a2, v25);
          sub_2623950(a2, *(_QWORD *)(v5 - 8));
        }
        while ( v6 != v5 );
LABEL_7:
        v7 = v25[0];
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !v7 )
          sub_5FF0F0(a2, ")");
      }
      v8 = "))";
      break;
    case 7:
      sub_5FF0F0(a2, "[[clang::unlock_function");
      sub_5FF0F0(a2, &byte_3B9466E);
      v10 = *(_QWORD *)(a1 + 40);
      v11 = v10 + 8LL * *(unsigned int *)(a1 + 36);
      if ( v10 == v11 )
      {
LABEL_35:
        sub_5FF0F0(a2, &byte_3B9466E);
      }
      else
      {
        do
        {
          v10 += 8;
          sub_722380(a2, v25);
          sub_2623950(a2, *(_QWORD *)(v10 - 8));
        }
        while ( v11 != v10 );
LABEL_13:
        v12 = v25[0];
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !v12 )
          sub_5FF0F0(a2, ")");
      }
      v8 = "]]";
      break;
  }
  return sub_5FF0F0(a2, v8);
}

