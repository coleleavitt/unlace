__int64 __fastcall sub_AFFDA0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v10[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v10[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__ptrauth");
  sub_AFB8E0(a2, v10);
  v3 = sub_995540(a2, &byte_22F0C30);
  v4 = sub_227B930(v3, *(int *)(a1 + 40));
  sub_995540(v4, &byte_22F0C30);
  sub_AFB8E0(a2, v10);
  v5 = sub_995540(a2, &byte_22F0C30);
  v6 = sub_227B930(v5, *(unsigned __int8 *)(a1 + 44));
  sub_995540(v6, &byte_22F0C30);
  sub_AFB8E0(a2, v10);
  v7 = sub_995540(a2, &byte_22F0C30);
  v8 = sub_227B930(v7, *(int *)(a1 + 48));
  sub_995540(v8, &byte_22F0C30);
  if ( !v10[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, &byte_22F0C30);
}
