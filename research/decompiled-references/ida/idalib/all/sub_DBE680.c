__int64 __fastcall sub_DBE680(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r12
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  void *v8; // [rsp+0h] [rbp-68h]
  unsigned int v9; // [rsp+8h] [rbp-60h]
  char v10; // [rsp+Ch] [rbp-5Ch]
  int v11; // [rsp+10h] [rbp-58h]
  _BYTE v12[72]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v12);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_E21760(v2, 24);
  v9 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v8 = v4;
  v10 = *(_BYTE *)(v3 + 12);
  v11 = *(_DWORD *)(v3 + 16);
  sub_E21790(v2, 24);
  v5 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  sub_E231E0(v5, v12);
  v6 = sub_E216C0(*(_QWORD *)(a1 + 176), 24);
  *(_DWORD *)(v6 + 8) = v9;
  if ( v9 > 0x40 )
    sub_2205510(v6);
  else
    *(_QWORD *)v6 = v8;
  *(_BYTE *)(v6 + 12) = v10;
  *(_DWORD *)(v6 + 16) = v11;
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  sub_E232A0(v12);
  return 1;
}
