__int64 __fastcall sub_D9A6C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rbx
  void *v9; // [rsp+0h] [rbp-88h]
  unsigned int v10; // [rsp+8h] [rbp-80h]
  char v11; // [rsp+Ch] [rbp-7Ch]
  int v12; // [rsp+10h] [rbp-78h]
  _BYTE v13[48]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+58h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_DFDA20(v1, 24);
  v10 = *(_DWORD *)(v2 + 8);
  v3 = *(void **)v2;
  *(_DWORD *)(v2 + 8) = 0;
  v9 = v3;
  v11 = *(_BYTE *)(v2 + 12);
  v12 = *(_DWORD *)(v2 + 16);
  sub_DFDA50(v1, 24);
  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_DFDA20(v4, 64);
  sub_DFF520(v13);
  v14 = *(_QWORD *)(v5 + 48);
  v15 = *(_DWORD *)(v5 + 56);
  sub_DFDA50(v4, 64);
  v6 = sub_DFD980(*(_QWORD *)(a1 + 176), 24);
  *(_DWORD *)(v6 + 8) = v10;
  if ( v10 > 0x40 )
    sub_21E17D0(v6);
  else
    *(_QWORD *)v6 = v9;
  *(_BYTE *)(v6 + 12) = v11;
  *(_DWORD *)(v6 + 16) = v12;
  v7 = sub_DFD980(*(_QWORD *)(a1 + 176), 64);
  sub_DFF4A0(v7, v13);
  *(_QWORD *)(v7 + 48) = v14;
  *(_DWORD *)(v7 + 56) = v15;
  sub_DFF560(v13);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return 1;
}

