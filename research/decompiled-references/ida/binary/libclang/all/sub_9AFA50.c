void __fastcall sub_9AFA50(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  char v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  void *v12; // [rsp+0h] [rbp-38h]
  unsigned int v13; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v13 = v4;
  v12 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(v6 + 8);
  v9 = *(_BYTE *)(v6 + 16);
  sub_A1A5E0(v5, 24);
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v10 + 8) = v13;
  if ( v13 > 0x40 )
    sub_2585B30(v10);
  else
    *(_QWORD *)v10 = v12;
  v11 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v11 = v7;
  *(_QWORD *)(v11 + 8) = v8;
  *(_BYTE *)(v11 + 16) = v9;
  if ( v13 > 0x40 )
  {
    if ( v12 )
      operator delete[](v12);
  }
}

