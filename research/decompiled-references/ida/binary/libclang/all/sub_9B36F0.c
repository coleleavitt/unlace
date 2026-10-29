void __fastcall sub_9B36F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  __int64 v8; // rbx
  void *v9; // [rsp+0h] [rbp-58h]
  unsigned int v10; // [rsp+8h] [rbp-50h]
  char v11; // [rsp+Ch] [rbp-4Ch]
  int v12; // [rsp+10h] [rbp-48h]
  void *v13; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+2Ch] [rbp-2Ch]
  int v16; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v14 = v3;
  v13 = *(void **)v2;
  v15 = *(_BYTE *)(v2 + 12);
  v16 = *(_DWORD *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v10 = v6;
  v9 = *(void **)v5;
  v11 = *(_BYTE *)(v5 + 12);
  v12 = *(_DWORD *)(v5 + 16);
  sub_A1A5E0(v4, 24);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v7 + 8) = v14;
  if ( v14 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v13;
  *(_BYTE *)(v7 + 12) = v15;
  *(_DWORD *)(v7 + 16) = v16;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v8 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v9;
  *(_BYTE *)(v8 + 12) = v11;
  *(_DWORD *)(v8 + 16) = v12;
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  if ( v14 > 0x40 )
  {
    if ( v13 )
      operator delete[](v13);
  }
}

