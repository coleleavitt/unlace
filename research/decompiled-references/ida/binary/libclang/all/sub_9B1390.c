void __fastcall sub_9B1390(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rbp
  void *v7; // [rsp+0h] [rbp-38h]
  unsigned int v8; // [rsp+8h] [rbp-30h]
  char v9; // [rsp+Ch] [rbp-2Ch]
  int v10; // [rsp+10h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v8 = v3;
  v7 = *(void **)v2;
  v9 = *(_BYTE *)(v2 + 12);
  v10 = *(_DWORD *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v6 + 8) = v8;
  if ( v8 > 0x40 )
    sub_2585B30(v6);
  else
    *(_QWORD *)v6 = v7;
  *(_BYTE *)(v6 + 12) = v9;
  *(_DWORD *)(v6 + 16) = v10;
  *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v5;
  if ( v8 > 0x40 )
  {
    if ( v7 )
      operator delete[](v7);
  }
}

