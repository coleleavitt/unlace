__int64 __fastcall sub_CF6270(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // rax
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v9; // [rsp+0h] [rbp-68h]
  unsigned int v10; // [rsp+8h] [rbp-60h]
  char v11; // [rsp+Ch] [rbp-5Ch]
  int v12; // [rsp+10h] [rbp-58h]
  _BYTE v13[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_E21760(v2, 48);
  sub_E23260(v13);
  sub_E21790(v2, 48);
  v3 = *(_QWORD *)(a1 + 560);
  v4 = sub_E21760(v3, 24);
  v10 = *(_DWORD *)(v4 + 8);
  v5 = *(void **)v4;
  *(_DWORD *)(v4 + 8) = 0;
  v9 = v5;
  v11 = *(_BYTE *)(v4 + 12);
  v12 = *(_DWORD *)(v4 + 16);
  sub_E21790(v3, 24);
  v6 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
  sub_E231E0(v6, v13);
  v7 = sub_E216C0(*(_QWORD *)(a1 + 560), 24);
  *(_DWORD *)(v7 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2205510(v7);
  else
    *(_QWORD *)v7 = v9;
  *(_BYTE *)(v7 + 12) = v11;
  *(_DWORD *)(v7 + 16) = v12;
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  sub_E232A0(v13);
  return 1;
}
