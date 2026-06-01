void __fastcall sub_9B2A00(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r13
  char v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // [rsp+0h] [rbp-48h]
  unsigned int v12; // [rsp+8h] [rbp-40h]
  char v13; // [rsp+Ch] [rbp-3Ch]
  int v14; // [rsp+10h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_BYTE *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 24);
  v8 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = 0;
  v12 = v8;
  v11 = *(void **)v7;
  v13 = *(_BYTE *)(v7 + 12);
  v14 = *(_DWORD *)(v7 + 16);
  sub_A1A5E0(v6, 24);
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v9 = v3;
  *(_QWORD *)(v9 + 8) = v4;
  *(_BYTE *)(v9 + 16) = v5;
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v10 + 8) = v12;
  if ( v12 > 0x40 )
    sub_2585B30(v10);
  else
    *(_QWORD *)v10 = v11;
  *(_BYTE *)(v10 + 12) = v13;
  *(_DWORD *)(v10 + 16) = v14;
  if ( v12 > 0x40 )
  {
    if ( v11 )
      operator delete[](v11);
  }
}

