__int64 __fastcall sub_B0EC70(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // al
  int v6; // eax
  const char *v7; // rsi
  __int64 v8; // r12
  size_t v9; // rax
  __int64 v11; // r12
  size_t v12; // rax
  _BYTE v13[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = *(_BYTE *)(a1 + 34);
  v13[0] = 1;
  if ( (v5 & 0xF0) == 0xF0 )
    v6 = sub_FA77D0(a1);
  else
    v6 = v5 >> 4;
  if ( v6 == 1 )
  {
    sub_995540(a2, "__attribute__((assume");
    sub_AFB8E0(a2, v13);
    sub_995540(a2, &byte_22F0C30);
    v11 = *(_QWORD *)(a1 + 40);
    v12 = j__strlen("\n");
    sub_F07C00(v11, a2, 0, a3, 0, 0, (__int64)"\n", v12);
    sub_995540(a2, &byte_22F0C30);
    if ( !v13[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
  else
  {
    if ( v6 )
      v7 = "[[clang::assume";
    else
      v7 = "[[assume";
    sub_995540(a2, v7);
    sub_AFB8E0(a2, v13);
    sub_995540(a2, &byte_22F0C30);
    v8 = *(_QWORD *)(a1 + 40);
    v9 = j__strlen("\n");
    sub_F07C00(v8, a2, 0, a3, 0, 0, (__int64)"\n", v9);
    sub_995540(a2, &byte_22F0C30);
    if ( !v13[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
}
