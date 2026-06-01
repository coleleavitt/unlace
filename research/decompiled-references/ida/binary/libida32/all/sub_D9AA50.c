__int64 __fastcall sub_D9AA50(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rax
  void *v8; // [rsp+0h] [rbp-68h]
  unsigned int v9; // [rsp+8h] [rbp-60h]
  char v10; // [rsp+Ch] [rbp-5Ch]
  int v11; // [rsp+10h] [rbp-58h]
  _BYTE v12[72]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_DFDA20(v1, 24);
  v9 = *(_DWORD *)(v2 + 8);
  v3 = *(void **)v2;
  *(_DWORD *)(v2 + 8) = 0;
  v8 = v3;
  v10 = *(_BYTE *)(v2 + 12);
  v11 = *(_DWORD *)(v2 + 16);
  sub_DFDA50(v1, 24);
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v12);
  sub_DFDA50(v4, 48);
  v5 = sub_DFD980(*(_QWORD *)(a1 + 176), 24);
  *(_DWORD *)(v5 + 8) = v9;
  if ( v9 > 0x40 )
    sub_21E17D0(v5);
  else
    *(_QWORD *)v5 = v8;
  *(_BYTE *)(v5 + 12) = v10;
  *(_DWORD *)(v5 + 16) = v11;
  v6 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v6, v12);
  sub_DFF560(v12);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return 1;
}

