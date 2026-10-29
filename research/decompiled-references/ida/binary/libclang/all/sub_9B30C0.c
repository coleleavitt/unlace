void __fastcall sub_9B30C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  __int64 v8; // rdi
  void *v9; // [rsp+0h] [rbp-48h]
  unsigned int v10; // [rsp+8h] [rbp-40h]
  void *v11; // [rsp+10h] [rbp-38h]
  unsigned int v12; // [rsp+18h] [rbp-30h]
  char v13; // [rsp+1Ch] [rbp-2Ch]
  int v14; // [rsp+20h] [rbp-28h]

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
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v10 = v6;
  v9 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v7 + 8) = v12;
  if ( v12 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v11;
  *(_BYTE *)(v7 + 12) = v13;
  *(_DWORD *)(v7 + 16) = v14;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v8 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v9;
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  if ( v12 > 0x40 )
  {
    if ( v11 )
      operator delete[](v11);
  }
}

