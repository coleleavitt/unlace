void __fastcall sub_8D4810(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  char v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  void *v12; // [rsp+0h] [rbp-48h]
  unsigned int v13; // [rsp+8h] [rbp-40h]
  char v14; // [rsp+Ch] [rbp-3Ch]
  int v15; // [rsp+10h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v13 = v4;
  v12 = *(void **)v3;
  v14 = *(_BYTE *)(v3 + 12);
  v15 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(v6 + 8);
  v9 = *(_BYTE *)(v6 + 16);
  sub_A1A5E0(v5, 24);
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v10 + 8) = v13;
  if ( v13 > 0x40 )
    sub_2585B30(v10);
  else
    *(_QWORD *)v10 = v12;
  *(_BYTE *)(v10 + 12) = v14;
  *(_DWORD *)(v10 + 16) = v15;
  v11 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v11 = v7;
  *(_QWORD *)(v11 + 8) = v8;
  *(_BYTE *)(v11 + 16) = v9;
  if ( v13 > 0x40 )
  {
    if ( v12 )
      operator delete[](v12);
  }
}

