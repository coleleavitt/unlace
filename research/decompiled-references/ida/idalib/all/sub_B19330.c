__int64 __fastcall sub_B19330(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // al
  int v5; // eax
  size_t v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+8h] [rbp-50h]
  _BYTE v15[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v15[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_FA77D0(a1);
  else
    v5 = v4 >> 4;
  if ( v5 )
  {
    sub_995540(a2, "[[clang::sized_by_or_null");
    sub_AFB8E0(a2, v15);
    sub_995540(a2, &byte_22F0C30);
    v14 = *(_QWORD *)(a1 + 40);
    v10 = j__strlen("\n");
    sub_F07C00(v14, a2, 0, a3, 0, 0, (__int64)"\n", v10);
    sub_995540(a2, &byte_22F0C30);
    sub_AFB8E0(a2, v15);
    v11 = sub_995540(a2, &byte_22F0C30);
    v12 = sub_227B930(v11, *(int *)(a1 + 48));
    sub_995540(v12, &byte_22F0C30);
    if ( !v15[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  else
  {
    sub_995540(a2, "__attribute__((sized_by_or_null");
    sub_AFB8E0(a2, v15);
    sub_995540(a2, &byte_22F0C30);
    v13 = *(_QWORD *)(a1 + 40);
    v6 = j__strlen("\n");
    sub_F07C00(v13, a2, 0, a3, 0, 0, (__int64)"\n", v6);
    sub_995540(a2, &byte_22F0C30);
    sub_AFB8E0(a2, v15);
    v7 = sub_995540(a2, &byte_22F0C30);
    v8 = sub_227B930(v7, *(int *)(a1 + 48));
    sub_995540(v8, &byte_22F0C30);
    if ( !v15[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
