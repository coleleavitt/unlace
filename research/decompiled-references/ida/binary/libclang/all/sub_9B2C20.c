void __fastcall sub_9B2C20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  char v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rax
  void *v11; // [rsp+0h] [rbp-48h]
  unsigned int v12; // [rsp+8h] [rbp-40h]
  char v13; // [rsp+Ch] [rbp-3Ch]
  int v14; // [rsp+10h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v12 = v3;
  v11 = *(void **)v2;
  v13 = *(_BYTE *)(v2 + 12);
  v14 = *(_DWORD *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_BYTE *)(v5 + 16);
  sub_A1A5E0(v4, 24);
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v9 + 8) = v12;
  if ( v12 > 0x40 )
    sub_2585B30(v9);
  else
    *(_QWORD *)v9 = v11;
  *(_BYTE *)(v9 + 12) = v13;
  *(_DWORD *)(v9 + 16) = v14;
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v10 = v6;
  *(_QWORD *)(v10 + 8) = v7;
  *(_BYTE *)(v10 + 16) = v8;
  if ( v12 > 0x40 )
  {
    if ( v11 )
      operator delete[](v11);
  }
}

