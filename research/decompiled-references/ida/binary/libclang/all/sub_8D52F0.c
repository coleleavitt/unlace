void __fastcall sub_8D52F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rbp
  __int64 v9; // rbx
  void *v10; // [rsp+0h] [rbp-58h]
  unsigned int v11; // [rsp+8h] [rbp-50h]
  char v12; // [rsp+Ch] [rbp-4Ch]
  int v13; // [rsp+10h] [rbp-48h]
  void *v14; // [rsp+20h] [rbp-38h]
  unsigned int v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+2Ch] [rbp-2Ch]
  int v17; // [rsp+30h] [rbp-28h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v11 = v4;
  v10 = *(void **)v3;
  v12 = *(_BYTE *)(v3 + 12);
  v13 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v15 = v7;
  v14 = *(void **)v6;
  v16 = *(_BYTE *)(v6 + 12);
  v17 = *(_DWORD *)(v6 + 16);
  sub_A1A5E0(v5, 24);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v8 + 8) = v11;
  if ( v11 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v10;
  *(_BYTE *)(v8 + 12) = v12;
  *(_DWORD *)(v8 + 16) = v13;
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v9 + 8) = v15;
  if ( v15 > 0x40 )
    sub_2585B30(v9);
  else
    *(_QWORD *)v9 = v14;
  *(_BYTE *)(v9 + 12) = v16;
  *(_DWORD *)(v9 + 16) = v17;
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v11 > 0x40 )
  {
    if ( v10 )
      operator delete[](v10);
  }
}

