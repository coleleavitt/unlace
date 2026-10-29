__int64 __fastcall sub_DBFB20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  _QWORD v10[3]; // [rsp+0h] [rbp-98h] BYREF
  int v11; // [rsp+18h] [rbp-80h]
  __int64 v12; // [rsp+20h] [rbp-78h]
  unsigned int v13; // [rsp+28h] [rbp-70h]
  _BYTE v14[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]
  int v16; // [rsp+68h] [rbp-30h]

  v3 = a3;
  v4 = sub_E21760(a1, 64);
  sub_E23260(v14);
  v15 = *(_QWORD *)(v4 + 48);
  v16 = *(_DWORD *)(v4 + 56);
  sub_E21790(a1, 64);
  sub_E1EE80(v10);
  if ( v11 )
  {
    v7 = v10[0];
    v5 = v12;
LABEL_9:
    v8 = v5 + v7 + 40;
    goto LABEL_10;
  }
  v5 = v12;
  v6 = *(_QWORD *)(v12 + 32);
  if ( *(_DWORD *)(v6 + 24) != v13 && v13 )
    v6 = *(_QWORD *)(v12 + v13 + 32);
  v7 = v10[0];
  if ( !*(_BYTE *)(v6 + 60) )
    goto LABEL_9;
  v8 = v12 + v10[0] + 72;
  if ( v10[0] != v13 )
    goto LABEL_9;
LABEL_10:
  sub_E232A0(v10);
  sub_E23300(v8, v14);
  *(_QWORD *)(v8 + 48) = v15;
  *(_DWORD *)(v8 + 56) = v16;
  *(_BYTE *)(*(_QWORD *)(a2 + 160) + v3 + 4) |= 2u;
  sub_E232A0(v14);
  return 1;
}
