__int64 __fastcall sub_B116F0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v9[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v9[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_995540(a2, "[[gnu::destructor");
    sub_AFB8E0(a2, v9);
    v7 = sub_995540(a2, &byte_22F0C30);
    v8 = sub_227B930(v7, *(int *)(a1 + 40));
    sub_995540(v8, &byte_22F0C30);
    if ( !v9[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  else
  {
    sub_995540(a2, "__attribute__((destructor");
    sub_AFB8E0(a2, v9);
    v4 = sub_995540(a2, &byte_22F0C30);
    v5 = sub_227B930(v4, *(int *)(a1 + 40));
    sub_995540(v5, &byte_22F0C30);
    if ( !v9[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
