__int64 __fastcall sub_CD27A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax
  void *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  void *v11; // [rsp+0h] [rbp-58h]
  unsigned int v12; // [rsp+8h] [rbp-50h]
  char v13; // [rsp+Ch] [rbp-4Ch]
  int v14; // [rsp+10h] [rbp-48h]
  void *v15; // [rsp+20h] [rbp-38h]
  unsigned int v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+2Ch] [rbp-2Ch]
  int v18; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = sub_DFDA20(v2, 24);
  v12 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v11 = v4;
  v13 = *(_BYTE *)(v3 + 12);
  v14 = *(_DWORD *)(v3 + 16);
  sub_DFDA50(v2, 24);
  v5 = *(_QWORD *)(a1 + 560);
  v6 = sub_DFDA20(v5, 24);
  v16 = *(_DWORD *)(v6 + 8);
  v7 = *(void **)v6;
  *(_DWORD *)(v6 + 8) = 0;
  v15 = v7;
  v17 = *(_BYTE *)(v6 + 12);
  v18 = *(_DWORD *)(v6 + 16);
  sub_DFDA50(v5, 24);
  v8 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
  *(_DWORD *)(v8 + 8) = v12;
  if ( v12 > 0x40 )
    sub_21E17D0(v8);
  else
    *(_QWORD *)v8 = v11;
  *(_BYTE *)(v8 + 12) = v13;
  *(_DWORD *)(v8 + 16) = v14;
  v9 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
  *(_DWORD *)(v9 + 8) = v16;
  if ( v16 > 0x40 )
    sub_21E17D0(v9);
  else
    *(_QWORD *)v9 = v15;
  *(_BYTE *)(v9 + 12) = v17;
  *(_DWORD *)(v9 + 16) = v18;
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return 1;
}

