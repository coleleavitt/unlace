__int64 __fastcall sub_B18250(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // rbp
  size_t v8; // rax
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v11; // [rsp+8h] [rbp-50h]
  _BYTE v12[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v12[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((reqd_work_group_size");
  sub_AFB8E0(a2, v12);
  sub_995540(a2, &byte_22F0C30);
  v10 = *(_QWORD *)(a1 + 40);
  v5 = j__strlen("\n");
  sub_F07C00(v10, a2, 0, a3, 0, 0, (__int64)"\n", v5);
  sub_995540(a2, &byte_22F0C30);
  sub_AFB8E0(a2, v12);
  sub_995540(a2, &byte_22F0C30);
  v11 = *(_QWORD *)(a1 + 48);
  v6 = j__strlen("\n");
  sub_F07C00(v11, a2, 0, a3, 0, 0, (__int64)"\n", v6);
  sub_995540(a2, &byte_22F0C30);
  sub_AFB8E0(a2, v12);
  sub_995540(a2, &byte_22F0C30);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = j__strlen("\n");
  sub_F07C00(v7, a2, 0, a3, 0, 0, (__int64)"\n", v8);
  sub_995540(a2, &byte_22F0C30);
  if ( !v12[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
