__int64 __fastcall sub_AFDC40(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  int v6; // edx
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v10; // rax
  int v11; // edx
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v18[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  if ( v4 == 1 )
    goto LABEL_15;
  if ( v4 )
  {
    if ( v4 != 2 )
      return sub_AFDEC0();
LABEL_15:
    sub_995540(a2, "[[clang::swift_async");
    sub_AFB8E0(a2, v18);
    v10 = sub_995540(a2, "\"");
    v11 = *(_DWORD *)(a1 + 40);
    if ( v11 == 1 )
    {
      v12 = "swift_private";
    }
    else if ( v11 )
    {
      if ( v11 != 2 )
        return sub_AFDEC0();
      v12 = "not_swift_private";
    }
    else
    {
      v12 = "none";
    }
    v13 = sub_995540(v10, v12);
    sub_995540(v13, "\"");
    if ( *(char *)(a1 + 47) < 0 )
    {
      sub_AFB8E0(a2, v18);
      v14 = sub_995540(a2, &byte_22F0C30);
      v15 = sub_227B910(v14, *(_DWORD *)(a1 + 44) & 0x3FFFFFFF);
      sub_995540(v15, &byte_22F0C30);
      if ( v18[0] )
        return sub_995540(a2, "]]");
    }
    else if ( v18[0] )
    {
      return sub_995540(a2, "]]");
    }
    sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  sub_995540(a2, "__attribute__((swift_async");
  sub_AFB8E0(a2, v18);
  v5 = sub_995540(a2, "\"");
  v6 = *(_DWORD *)(a1 + 40);
  if ( v6 == 1 )
  {
    v7 = "swift_private";
    goto LABEL_9;
  }
  if ( !v6 )
  {
    v7 = "none";
    goto LABEL_9;
  }
  if ( v6 != 2 )
    return sub_AFDEC0();
  v7 = "not_swift_private";
LABEL_9:
  v8 = sub_995540(v5, v7);
  sub_995540(v8, "\"");
  if ( *(char *)(a1 + 47) < 0 )
  {
    sub_AFB8E0(a2, v18);
    v16 = sub_995540(a2, &byte_22F0C30);
    v17 = sub_227B910(v16, *(_DWORD *)(a1 + 44) & 0x3FFFFFFF);
    sub_995540(v17, &byte_22F0C30);
  }
  if ( !v18[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
