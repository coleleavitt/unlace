void __fastcall sub_8D4700(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r13
  char v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rbx
  void *v12; // [rsp+0h] [rbp-48h]
  unsigned int v13; // [rsp+8h] [rbp-40h]
  char v14; // [rsp+Ch] [rbp-3Ch]
  int v15; // [rsp+10h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_QWORD *)v3;
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_BYTE *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v7 = *(_QWORD *)(a1 + 568);
  v8 = sub_A1A5A0(v7, 24);
  v9 = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v8 + 8) = 0;
  v13 = v9;
  v12 = *(void **)v8;
  v14 = *(_BYTE *)(v8 + 12);
  v15 = *(_DWORD *)(v8 + 16);
  sub_A1A5E0(v7, 24);
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v10 = v4;
  *(_QWORD *)(v10 + 8) = v5;
  *(_BYTE *)(v10 + 16) = v6;
  v11 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v11 + 8) = v13;
  if ( v13 > 0x40 )
    sub_2585B30(v11);
  else
    *(_QWORD *)v11 = v12;
  *(_BYTE *)(v11 + 12) = v14;
  *(_DWORD *)(v11 + 16) = v15;
  if ( v13 > 0x40 )
  {
    if ( v12 )
      operator delete[](v12);
  }
}

