__int64 __fastcall sub_CF6150(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rax
  void *v9; // [rsp+0h] [rbp-68h]
  unsigned int v10; // [rsp+8h] [rbp-60h]
  char v11; // [rsp+Ch] [rbp-5Ch]
  int v12; // [rsp+10h] [rbp-58h]
  _BYTE v13[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = sub_E21760(v2, 24);
  v10 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v9 = v4;
  v11 = *(_BYTE *)(v3 + 12);
  v12 = *(_DWORD *)(v3 + 16);
  sub_E21790(v2, 24);
  v5 = *(_QWORD *)(a1 + 560);
  sub_E21760(v5, 48);
  sub_E23260(v13);
  sub_E21790(v5, 48);
  v6 = sub_E216C0(*(_QWORD *)(a1 + 560), 24);
  *(_DWORD *)(v6 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2205510(v6);
  else
    *(_QWORD *)v6 = v9;
  *(_BYTE *)(v6 + 12) = v11;
  *(_DWORD *)(v6 + 16) = v12;
  v7 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
  sub_E231E0(v7, v13);
  sub_E232A0(v13);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return 1;
}
