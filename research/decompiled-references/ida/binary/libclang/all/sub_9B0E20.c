void __fastcall sub_9B0E20(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // [rsp+0h] [rbp-38h]
  unsigned int v11; // [rsp+8h] [rbp-30h]
  void *v12; // [rsp+10h] [rbp-28h]
  unsigned int v13; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v13 = v4;
  v12 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 16);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v11 = v7;
  v10 = *(void **)v6;
  sub_A1A5E0(v5, 16);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v8 + 8) = v13;
  if ( v13 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v12;
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v9 + 8) = v11;
  if ( v11 > 0x40 )
    sub_2585B30(v9);
  else
    *(_QWORD *)v9 = v10;
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v13 > 0x40 )
  {
    if ( v12 )
      operator delete[](v12);
  }
}

