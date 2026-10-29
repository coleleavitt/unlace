void __fastcall sub_8D20D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  char v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // [rsp+0h] [rbp-38h]
  unsigned int v14; // [rsp+8h] [rbp-30h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v14 = v5;
  v13 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = sub_A1A5A0(v6, 24);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)(v7 + 8);
  v10 = *(_BYTE *)(v7 + 16);
  sub_A1A5E0(v6, 24);
  v11 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v11 + 8) = v14;
  if ( v14 > 0x40 )
    sub_2585B30(v11);
  else
    *(_QWORD *)v11 = v13;
  v12 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v12 = v8;
  *(_QWORD *)(v12 + 8) = v9;
  *(_BYTE *)(v12 + 16) = v10;
  if ( v14 > 0x40 )
  {
    if ( v13 )
      operator delete[](v13);
  }
}

