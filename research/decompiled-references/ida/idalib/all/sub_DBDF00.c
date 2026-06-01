__int64 __fastcall sub_DBDF00(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rax
  void *v5; // rdx
  __int64 v6; // rbx
  void *v8; // [rsp+0h] [rbp-38h]
  unsigned int v9; // [rsp+8h] [rbp-30h]
  char v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+10h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_BYTE *)sub_E21760(v1, 8);
  sub_E21790(v1, 8);
  v3 = *(_QWORD *)(a1 + 176);
  v4 = sub_E21760(v3, 24);
  v9 = *(_DWORD *)(v4 + 8);
  v5 = *(void **)v4;
  *(_DWORD *)(v4 + 8) = 0;
  v8 = v5;
  v10 = *(_BYTE *)(v4 + 12);
  v11 = *(_DWORD *)(v4 + 16);
  sub_E21790(v3, 24);
  *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v2;
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
  return 1;
}
