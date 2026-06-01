void __fastcall sub_9B0110(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  void *v9; // [rsp+0h] [rbp-88h]
  unsigned int v10; // [rsp+8h] [rbp-80h]
  _BYTE v11[56]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+50h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  v9 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 72);
  sub_A1C070(v11, v6);
  v12 = *(_QWORD *)(v6 + 56);
  v13 = *(_DWORD *)(v6 + 64);
  sub_A1A5E0(v5, 72);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v7 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v9;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v8, v11);
  *(_QWORD *)(v8 + 56) = v12;
  *(_DWORD *)(v8 + 64) = v13;
  sub_A1C0C0(v11);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

