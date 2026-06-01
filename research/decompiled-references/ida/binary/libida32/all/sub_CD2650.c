__int64 __fastcall sub_CD2650(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rbx
  void *v10; // [rsp+0h] [rbp-88h]
  unsigned int v11; // [rsp+8h] [rbp-80h]
  char v12; // [rsp+Ch] [rbp-7Ch]
  int v13; // [rsp+10h] [rbp-78h]
  _BYTE v14[48]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+58h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = sub_DFDA20(v2, 24);
  v11 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  v12 = *(_BYTE *)(v3 + 12);
  v13 = *(_DWORD *)(v3 + 16);
  sub_DFDA50(v2, 24);
  v5 = *(_QWORD *)(a1 + 560);
  v6 = sub_DFDA20(v5, 64);
  sub_DFF520(v14);
  v15 = *(_QWORD *)(v6 + 48);
  v16 = *(_DWORD *)(v6 + 56);
  sub_DFDA50(v5, 64);
  v7 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
  *(_DWORD *)(v7 + 8) = v11;
  if ( v11 > 0x40 )
    sub_21E17D0(v7);
  else
    *(_QWORD *)v7 = v10;
  *(_BYTE *)(v7 + 12) = v12;
  *(_DWORD *)(v7 + 16) = v13;
  v8 = sub_DFD980(*(_QWORD *)(a1 + 560), 64);
  sub_DFF4A0(v8, v14);
  *(_QWORD *)(v8 + 48) = v15;
  *(_DWORD *)(v8 + 56) = v16;
  sub_DFF560(v14);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return 1;
}

