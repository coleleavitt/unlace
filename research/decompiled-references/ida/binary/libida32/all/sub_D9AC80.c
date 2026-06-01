__int64 __fastcall sub_D9AC80(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rax
  void *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  void *v10; // [rsp+0h] [rbp-58h]
  unsigned int v11; // [rsp+8h] [rbp-50h]
  char v12; // [rsp+Ch] [rbp-4Ch]
  int v13; // [rsp+10h] [rbp-48h]
  void *v14; // [rsp+20h] [rbp-38h]
  unsigned int v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+2Ch] [rbp-2Ch]
  int v17; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_DFDA20(v1, 24);
  v15 = *(_DWORD *)(v2 + 8);
  v3 = *(void **)v2;
  *(_DWORD *)(v2 + 8) = 0;
  v14 = v3;
  v16 = *(_BYTE *)(v2 + 12);
  v17 = *(_DWORD *)(v2 + 16);
  sub_DFDA50(v1, 24);
  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_DFDA20(v4, 24);
  v11 = *(_DWORD *)(v5 + 8);
  v6 = *(void **)v5;
  *(_DWORD *)(v5 + 8) = 0;
  v10 = v6;
  v12 = *(_BYTE *)(v5 + 12);
  v13 = *(_DWORD *)(v5 + 16);
  sub_DFDA50(v4, 24);
  v7 = sub_DFD980(*(_QWORD *)(a1 + 176), 24);
  *(_DWORD *)(v7 + 8) = v15;
  if ( v15 > 0x40 )
    sub_21E17D0(v7);
  else
    *(_QWORD *)v7 = v14;
  *(_BYTE *)(v7 + 12) = v16;
  *(_DWORD *)(v7 + 16) = v17;
  v8 = sub_DFD980(*(_QWORD *)(a1 + 176), 24);
  *(_DWORD *)(v8 + 8) = v11;
  if ( v11 > 0x40 )
    sub_21E17D0(v8);
  else
    *(_QWORD *)v8 = v10;
  *(_BYTE *)(v8 + 12) = v12;
  *(_DWORD *)(v8 + 16) = v13;
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return 1;
}

