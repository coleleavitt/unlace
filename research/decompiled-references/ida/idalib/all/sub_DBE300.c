__int64 __fastcall sub_DBE300(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rbp
  char v5; // r12
  __int64 v6; // rbp
  void *v8; // [rsp+0h] [rbp-38h]
  unsigned int v9; // [rsp+8h] [rbp-30h]
  char v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+10h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_E21760(v1, 24);
  v9 = *(_DWORD *)(v2 + 8);
  v3 = *(void **)v2;
  *(_DWORD *)(v2 + 8) = 0;
  v8 = v3;
  v10 = *(_BYTE *)(v2 + 12);
  v11 = *(_DWORD *)(v2 + 16);
  sub_E21790(v1, 24);
  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_BYTE *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = sub_E216C0(*(_QWORD *)(a1 + 176), 24);
  *(_DWORD *)(v6 + 8) = v9;
  if ( v9 > 0x40 )
    sub_2205510(v6);
  else
    *(_QWORD *)v6 = v8;
  *(_BYTE *)(v6 + 12) = v10;
  *(_DWORD *)(v6 + 16) = v11;
  *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v5;
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return 1;
}
