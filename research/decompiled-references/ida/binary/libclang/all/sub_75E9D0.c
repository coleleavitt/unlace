__int64 __fastcall sub_75E9D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  int v5; // eax
  const char *v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rsi
  const char *v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rax
  const char *v26; // rsi
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rax
  const char *v30; // rsi
  __int64 v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _BYTE v36[41]; // [rsp+Fh] [rbp-29h] BYREF

  v4 = *(_BYTE *)(a1 + 30);
  v36[0] = 1;
  if ( (~v4 & 0xF0) != 0 )
    v5 = v4 >> 4;
  else
    v5 = sub_C4A760(a1);
  if ( v5 == 1 || v5 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::ptrauth_vtable_pointer");
    v36[0] = 0;
    sub_5FF0F0(a2, "(");
    v6 = "process_dependent";
    v7 = sub_5FF0F0(a2, "\"");
    v8 = *(_DWORD *)(a1 + 36);
    if ( v8 != 2 )
    {
      v6 = "process_independent";
      if ( v8 <= 2 )
      {
        v6 = "default_key";
        if ( v8 )
          v6 = "no_authentication";
      }
    }
    v9 = sub_5FF0F0(v7, v6);
    sub_5FF0F0(v9, "\"");
    sub_722380(a2, v36);
    v10 = "no_address_discrimination";
    v11 = sub_5FF0F0(a2, "\"");
    v12 = *(_DWORD *)(a1 + 40);
    if ( v12 != 1 )
    {
      v10 = "address_discrimination";
      if ( v12 != 2 )
        v10 = "default_address_discrimination";
    }
    v13 = sub_5FF0F0(v11, v10);
    sub_5FF0F0(v13, "\"");
    sub_722380(a2, v36);
    v14 = "type_discrimination";
    v15 = sub_5FF0F0(a2, "\"");
    v16 = *(_DWORD *)(a1 + 44);
    if ( v16 != 2 )
    {
      v14 = "custom_discrimination";
      if ( v16 <= 2 )
      {
        v14 = "default_extra_discrimination";
        if ( v16 )
          v14 = "no_extra_discrimination";
      }
    }
    v17 = sub_5FF0F0(v15, v14);
    sub_5FF0F0(v17, "\"");
    sub_722380(a2, v36);
    v18 = sub_5FF0F0(a2, &byte_3B9466E);
    v19 = sub_26238C0(v18, *(int *)(a1 + 48));
    sub_5FF0F0(v19, &byte_3B9466E);
    if ( !v36[0] )
      sub_5FF0F0(a2, ")");
    v20 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((ptrauth_vtable_pointer");
    v36[0] = 0;
    sub_5FF0F0(a2, "(");
    v22 = "process_dependent";
    v23 = sub_5FF0F0(a2, "\"");
    v24 = *(_DWORD *)(a1 + 36);
    if ( v24 != 2 )
    {
      v22 = "process_independent";
      if ( v24 <= 2 )
      {
        v22 = "default_key";
        if ( v24 )
          v22 = "no_authentication";
      }
    }
    v25 = sub_5FF0F0(v23, v22);
    sub_5FF0F0(v25, "\"");
    sub_722380(a2, v36);
    v26 = "no_address_discrimination";
    v27 = sub_5FF0F0(a2, "\"");
    v28 = *(_DWORD *)(a1 + 40);
    if ( v28 != 1 )
    {
      v26 = "address_discrimination";
      if ( v28 != 2 )
        v26 = "default_address_discrimination";
    }
    v29 = sub_5FF0F0(v27, v26);
    sub_5FF0F0(v29, "\"");
    sub_722380(a2, v36);
    v30 = "type_discrimination";
    v31 = sub_5FF0F0(a2, "\"");
    v32 = *(_DWORD *)(a1 + 44);
    if ( v32 != 2 )
    {
      v30 = "custom_discrimination";
      if ( v32 <= 2 )
      {
        v30 = "default_extra_discrimination";
        if ( v32 )
          v30 = "no_extra_discrimination";
      }
    }
    v33 = sub_5FF0F0(v31, v30);
    sub_5FF0F0(v33, "\"");
    sub_722380(a2, v36);
    v34 = sub_5FF0F0(a2, &byte_3B9466E);
    v35 = sub_26238C0(v34, *(int *)(a1 + 48));
    sub_5FF0F0(v35, &byte_3B9466E);
    if ( !v36[0] )
      sub_5FF0F0(a2, ")");
    v20 = "))";
  }
  return sub_5FF0F0(a2, v20);
}

