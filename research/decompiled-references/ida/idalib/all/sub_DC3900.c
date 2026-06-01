__int64 __fastcall sub_DC3900(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  _QWORD v9[3]; // [rsp+0h] [rbp-98h] BYREF
  int v10; // [rsp+18h] [rbp-80h]
  __int64 v11; // [rsp+20h] [rbp-78h]
  int v12; // [rsp+28h] [rbp-70h]
  _BYTE v13[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]

  sub_E23170(v9, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_E21760(v2, 64);
  sub_E23260(v13);
  v14 = *(_QWORD *)(v3 + 48);
  v15 = *(_DWORD *)(v3 + 56);
  sub_E21790(v2, 64);
  if ( v10 )
  {
    v5 = v9[0];
    v6 = v11;
LABEL_3:
    v7 = v6 + v5 + 40;
    goto LABEL_4;
  }
  v4 = sub_CFDF60((__int64)v9);
  v5 = v9[0];
  v6 = v11;
  if ( !*(_BYTE *)(v4 + 60) )
    goto LABEL_3;
  v7 = v11 + v9[0] + 72;
  if ( v9[0] != v12 )
    goto LABEL_3;
LABEL_4:
  sub_E23400(v7, v13);
  *(_QWORD *)(v7 + 48) = v14;
  *(_DWORD *)(v7 + 56) = v15;
  sub_E232A0(v13);
  sub_E24D00(v9);
  sub_E232A0(v9);
  return 1;
}
