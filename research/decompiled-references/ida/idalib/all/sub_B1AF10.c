__int64 __fastcall sub_B1AF10(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  int v6; // edx
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edx
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  int v21; // edx
  const char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edx
  const char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edx
  const char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE v34[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v34[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  if ( v4 != 1 )
  {
    if ( !v4 )
    {
      sub_995540(a2, "__attribute__((ptrauth_vtable_pointer");
      sub_AFB8E0(a2, v34);
      v5 = sub_995540(a2, "\"");
      v6 = *(_DWORD *)(a1 + 40);
      if ( v6 == 1 )
      {
        v7 = "no_authentication";
      }
      else if ( v6 )
      {
        if ( v6 == 2 )
        {
          v7 = "process_dependent";
        }
        else
        {
          if ( v6 != 3 )
            return sub_B1B3A0();
          v7 = "process_independent";
        }
      }
      else
      {
        v7 = "default_key";
      }
      v8 = sub_995540(v5, v7);
      sub_995540(v8, "\"");
      sub_AFB8E0(a2, v34);
      v9 = sub_995540(a2, "\"");
      v10 = *(_DWORD *)(a1 + 44);
      if ( v10 == 1 )
      {
        v11 = "no_address_discrimination";
      }
      else if ( v10 )
      {
        if ( v10 != 2 )
          return sub_B1B3A0();
        v11 = "address_discrimination";
      }
      else
      {
        v11 = "default_address_discrimination";
      }
      v12 = sub_995540(v9, v11);
      sub_995540(v12, "\"");
      sub_AFB8E0(a2, v34);
      v13 = sub_995540(a2, "\"");
      v14 = *(_DWORD *)(a1 + 48);
      switch ( v14 )
      {
        case 1:
          v15 = "no_extra_discrimination";
          goto LABEL_19;
        case 0:
          v15 = "default_extra_discrimination";
          goto LABEL_19;
        case 2:
          v15 = "type_discrimination";
          goto LABEL_19;
        case 3:
          v15 = "custom_discrimination";
LABEL_19:
          v16 = sub_995540(v13, v15);
          sub_995540(v16, "\"");
          sub_AFB8E0(a2, v34);
          v17 = sub_995540(a2, &byte_22F0C30);
          v18 = sub_227B930(v17, *(int *)(a1 + 52));
          sub_995540(v18, &byte_22F0C30);
          if ( !v34[0] )
            sub_995540(a2, ")");
          return sub_995540(a2, "))");
      }
      return sub_B1B3A0();
    }
    if ( v4 != 2 )
      return sub_B1B3A0();
  }
  sub_995540(a2, "[[clang::ptrauth_vtable_pointer");
  sub_AFB8E0(a2, v34);
  v20 = sub_995540(a2, "\"");
  v21 = *(_DWORD *)(a1 + 40);
  if ( v21 == 1 )
  {
    v22 = "no_authentication";
  }
  else if ( v21 )
  {
    if ( v21 == 2 )
    {
      v22 = "process_dependent";
    }
    else
    {
      if ( v21 != 3 )
        return sub_B1B3A0();
      v22 = "process_independent";
    }
  }
  else
  {
    v22 = "default_key";
  }
  v23 = sub_995540(v20, v22);
  sub_995540(v23, "\"");
  sub_AFB8E0(a2, v34);
  v24 = sub_995540(a2, "\"");
  v25 = *(_DWORD *)(a1 + 44);
  if ( v25 == 1 )
  {
    v26 = "no_address_discrimination";
  }
  else if ( v25 )
  {
    if ( v25 != 2 )
      return sub_B1B3A0();
    v26 = "address_discrimination";
  }
  else
  {
    v26 = "default_address_discrimination";
  }
  v27 = sub_995540(v24, v26);
  sub_995540(v27, "\"");
  sub_AFB8E0(a2, v34);
  v28 = sub_995540(a2, "\"");
  v29 = *(_DWORD *)(a1 + 48);
  if ( v29 == 1 )
  {
    v30 = "no_extra_discrimination";
  }
  else if ( v29 )
  {
    if ( v29 == 2 )
    {
      v30 = "type_discrimination";
    }
    else
    {
      if ( v29 != 3 )
        return sub_B1B3A0();
      v30 = "custom_discrimination";
    }
  }
  else
  {
    v30 = "default_extra_discrimination";
  }
  v31 = sub_995540(v28, v30);
  sub_995540(v31, "\"");
  sub_AFB8E0(a2, v34);
  v32 = sub_995540(a2, &byte_22F0C30);
  v33 = sub_227B930(v32, *(int *)(a1 + 52));
  sub_995540(v33, &byte_22F0C30);
  if ( !v34[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "]]");
}
