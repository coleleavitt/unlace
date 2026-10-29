__int64 __fastcall sub_D99EC0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rbp
  int v5; // r12d
  __int64 v6; // rbp
  void *v8; // [rsp+0h] [rbp-38h]
  unsigned int v9; // [rsp+8h] [rbp-30h]
  char v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+10h] [rbp-28h]

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
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = sub_DFD980(*(_QWORD *)(a1 + 176), 24);
  *(_DWORD *)(v6 + 8) = v9;
  if ( v9 > 0x40 )
    sub_21E17D0(v6);
  else
    *(_QWORD *)v6 = v8;
  *(_BYTE *)(v6 + 12) = v10;
  *(_DWORD *)(v6 + 16) = v11;
  *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v5;
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return 1;
}

