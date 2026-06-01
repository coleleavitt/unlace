__int64 __fastcall sub_B121A0(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  size_t v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-50h]
  _BYTE v10[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v10[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((enable_if");
  sub_AFB8E0(a2, v10);
  sub_995540(a2, &byte_22F0C30);
  v9 = *(_QWORD *)(a1 + 40);
  v5 = j__strlen("\n");
  sub_F07C00(v9, a2, 0, a3, 0, 0, (__int64)"\n", v5);
  sub_995540(a2, &byte_22F0C30);
  sub_AFB8E0(a2, v10);
  v6 = sub_995540(a2, "\"");
  v7 = sub_9954E0(v6, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
  sub_995540(v7, "\"");
  if ( !v10[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
